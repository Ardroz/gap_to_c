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
        ///creación objeto con un parametro que contiene un objeto por cada bloque de una misma hoja
        var switchParameters = {
          block: element
        }

        database.query( selectField, function ( error, result, row ) {
          if ( error ) {
            console.log( error );
          } else {
            switchParameters.fields = result;
            blockSwitch( switchParameters );
          }
        });
      });
    }
  });
}

rl.setPrompt('\nTell me the sheet baby> ');
rl.prompt();
rl.on('line', function( line ) {
  createSheet( line );
  rl.prompt();
});

function blockSwitch ( parameters ) {
  var bigCode,
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
            if ( element.Value === '*FALSE' ) {
              tuneValues.push( 0 );
            } else {
              tuneValues.push( element.Value );
            }
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
      });
      console.log(code);
      console.log(inputValues);
      console.log(outputValues);
      console.log(tuneValues);

      break;
  }
  return bigCode;
}