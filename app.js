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
      code = "",
      stringInputs = "",
      inputValues = new Array,
      outputValues = new Array,
      tuneValues = new Array;

    switch ( parameters.block.BlockType ){

    case "MODBUS_M":
      code = "// Modbus_M";
      return code;
      break;

    case "MODBUS_S":
      code = "// Modbus_S";
      return code;
      break;

    case "AI_420_6CH":
      code = "// AI_420_6CH";
      return code;
      break;

    case "AI_PRES_P1":
      code = "// AI_PRES_P1";
      return code;
      break;

    case "AI_PRES_P2":
      code = "// AI_PRES_P2";
      return code;
      break;

    case "AI_PRESS8":
      code = "// AI_PRESS8";
      return code;
      break;

    case "AI_RTD_6CH":
      code = "// AI_RTD_6CH";
      return code;
      break;

    case "EGD_CON":
      code = "// EGD_CON";
      return code;
      break;

    case "ExternLink":
      code = "// ExternLink";
      return code;
      break;

    case "INTERFACE":
      code = "// INTERFACE";
      return code;
      break;

    case "LON_FLT":
      code = "// LON_FLT";
      return code;
      break;

    case "LON_GROUP":
      code = "// LON_GROUP";
      return code;
      break;

    case "LON_MOD":
      code = "// LON_MOD";
      return code;
      break;

    case "MEXPCHAS12":
      code = "// MEXPCHAS12";
      return code;
      break;

    case "MICRONET12":
      code = "// MICRONET12";
      return code;
      break;

    case "MOD_PORT":
      code = "// MOD_PORT";
      return code;
      break;

    case "NODE_FLT":
      code = "// NODE_FLT";
      return code;
      break;

    case "NT_CPU":
      code = "// NT_CPU";
      return code;
      break;

    case "NV_LOG":
      code = "// NV_LOG";
      return code;
      break;

    case "PIPE_P":
      code = "// PIPE_P";
      return code;
      break;

    case "RTC":
      code = "// RTC";
      return code;
      break;

    case "SIO":
      code = "// SIO";
      return code;
      break;

    case "SIO_PORT":
      code = "// SIO_PORT";
      return code;
      break;

    case "SIO232PORT":
      code = "// SIO232PORT";
      return code;
      break;

    case "SYS_INFO":
      code = "// SYS_INFO";
      return code;
      break;

    case "TCP_P":
      code = "// TCP_P";
      return code;
      break;

    case "TUNE_VAR":
      code = "// TUNE_VAR";
      return code;
      break;

    case "UDP_P":
      code = "// UDP_P";
      return code;
      break;

    case "AND":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });
      
      stringInputs = inputValues.join(' && ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( 'AND = ' );
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;
      break;

    case "OR":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });

      stringInputs = inputValues.join(' || ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( 'OR = ' );
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;

      break;

    default:
      parameters.fields.forEach( function ( element, index, array ) {
        if ( element.IOType === 'Input' ){
          if ( element.Value === null ) {
            inputValues.push('0')
          } else{
            if( /[a-z]/i.test( element.Value ) ){
              inputValues.push( element.Value.replace(/\56/g,"_") );
            }else{
              inputValues.push( element.Value );
            }
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
  //(stringInputs = stringInputs.replace(/\56/g,"_");
  if( tuneValues.length != 0 ){
    stringInputs = stringInputs.concat(' , ');
    stringInputs = stringInputs.concat( tuneValues.join(' ,') );
  }
  
  //en stringInputs estan todos los argumentos
  //console.log("Argumentos" + stringInputs);

  //configuración de salidas
  if ( outputValues.length == 1 ) {            //salida unica
    code = parameters.block.Category.concat('_');
    code = code.concat( parameters.block.Name ).concat('_');
    code = code.concat( outputValues[0]).concat(' = ')
    code = code.concat( parameters.block.BlockType );
    code = code.concat('_FUNCTION( ');
    code = code.concat( stringInputs );
    code = code.concat(' );\n');
    bigCode = bigCode.concat( code );

  } else{ 
    //Para multiples salidas
    code = code.concat( parameters.block.BlockType );
    code = code.concat('_FUNCTION(');
    code = code.concat( stringInputs );
    code = code.concat( ');\n');
    bigCode = bigCode.concat( code );
    outputValues.forEach( function ( element, index, array ) {
      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( element ).concat(' = ')
      code = code.concat( "output" ).concat( index + 1 );
      code = code.concat(';\n');
      bigCode = bigCode.concat( code );
    });
  }

  return bigCode;
}

/*String.prototype.isNumber = function(){return /^\d$/.test(this);}
console.log("123123".isNumber()); // outputs true
console.log("+12".isNumber()); // outputs false*/