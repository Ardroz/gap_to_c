/*
 * Module dependencies.
 */
var fs      = require('fs-extra'),
    mysql   = require('mysql'),
    readline = require('readline'),
    path    = require('path');

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function databaseInstance(){
  var connection = mysql.createConnection({
    host     : 'localhost',
    password : 'n0m3l0',
    user     : 'root'
  });
  return connection;
}

function saveText ( text, sheet ){
  var projectPath = './rendered_code';
  fs.exists( projectPath , function ( exists ){
    fs.mkdirsSync( projectPath );
    fs.writeFile( projectPath + '/sheet' + sheet + '.c', text , function (err) {
      if (err) throw err;
      console.log( 'Creado ' + projectPath + '/sheet' + sheet + '.c');
    });
  });
}

var database =  new databaseInstance(),
                selectSheet = '',
                selectField = '';

function createSheet ( sheet ) {
  selectSheet = 'SELECT * FROM gap.tblBlocks WHERE ndxSheet = ' + sheet;
  database.query( selectSheet, function ( error, result, row) {
    if( error ){
      console.log( error );
    } else {
      var bigCode = "";
      result.forEach( function ( element, index, array) {
        
        var block = element.ndxBlock;        
        selectField = 'SELECT * FROM gap.tblFields WHERE ndxBlock = ' + block;
        var code;
        //Creación objeto con un parametro que contiene un objeto por cada bloque de una misma hoja
        //console.log(element);
        var switchParameters = {
          block: element
        }

        database.query( selectField, function ( error, result, row ) {
          if ( error ) {
            console.log( error );
          } else {
            switchParameters.fields = result;
            bigCode = bigCode.concat(blockSwitch( switchParameters ));
            saveText( bigCode, sheet );
          }
        });
      });
    }
  });
}

rl.setPrompt('\nTell me the sheet baby> \n');
rl.prompt();
rl.on('line', function( line ) {
  createSheet( line );
  rl.prompt();
});

function blockSwitch ( parameters ) {
  var bigCode = "",
      code,
      stringInputs = "",
      inputValues = new Array,
      outputValues = new Array,
      tuneValues = new Array;

  code = parameters.block.Category.concat('_');
  code = code.concat( parameters.block.Name ).concat('_');

  switch ( parameters.block.BlockType ){

    case "MODBUS_M":
    case "MODBUS_S":
      console.log("Es un modbus");
      break;

    case "AND":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });

      stringInputs = inputValues.join(' & ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = code.concat( 'AND = ' );
      code = code.concat( stringInputs ).concat( ';' );

      return code;
      break;

    case "OR":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });

      stringInputs = inputValues.join(' & ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = code.concat( 'OR = ' );
      code = code.concat( stringInputs ).concat( ';' );

      return code;

    break;

    default:
      parameters.fields.forEach( function ( element, index, array ) {
        if ( element.IOType === 'Input' ){
          if ( element.Value === null ) {
            inputValues.push('0')
          } else{
            inputValues.push( element.Value );
          }
        } else{
          if ( element.IOType === 'Tune' ) {
            /*
            if ( element.Value === '*FALSE' ) {
             tuneValues.push( 0 );
            } else { 
            */
            tuneValues.push( element.Value );
          } else {
            if ( element.IOType === 'Output' ) {
              if ( element.Value != null ) {
                outputValues.push( element.Value );
              } else {
                outputValues.push( element.FieldName );
              }
            }
          }
        }
        //stringInputs se compone por los inputs
        stringInputs = inputValues.join(' , ');
      });
    break;
  }

  //Inputs separados por comas con todos los argumento sin tunes
  stringInputs = stringInputs.replace(/\56/g,"_");
  if( tuneValues.length != 0 ){
    stringInputs = stringInputs.concat(' , ');
    stringInputs = stringInputs.concat( tuneValues.join(' ,') );
  }
  
  //en stringInputs estan todos los argumentos
  //console.log("Argumentos" + stringInputs);

  //configuración de salidas
  if ( outputValues.length < 2 ) {            //salida unica
    code = finalConcatenation( parameters, code, stringInputs, null );
    bigCode = bigCode.concat( code );

  } else{ 
    //Para multiples salidas
    var lol = code;
    outputValues.forEach( function ( element, index, array ) {
      code = finalConcatenation( parameters, lol, stringInputs, element );
      bigCode = bigCode.concat( code );
    });
  }

  return bigCode;
}

function finalConcatenation ( parameters, code, stringInputs, element ) {
  code = code.concat( element ); // tengo duda
  code = code.concat(' = ');
  code = code.concat( parameters.block.BlockType );
  code = code.concat('_FUNCTION( ');

  if ( element != null) {
    var inputs =  ('"').concat( element ).concat('" , ').concat( stringInputs );
    code = code.concat( inputs );
  } else{
    code = code.concat( stringInputs );
  }
  code = code.concat(' );\n');

  return code;
}