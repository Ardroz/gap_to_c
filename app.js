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

        code = element.Category;
        code = code.concat('_');
        code = code.concat( element.Name );
        code = code.concat('_');

        database.query( selectField, function ( error, result, row ) {
          if ( error ) {
            console.log( error );
          } else {
            var stringInputs = "",
                inputValues = new Array,
                tuneValues = new Array,
                outputValues = new Array;

            result.forEach( function ( element, index, array) {
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

            stringInputs = inputValues.join(' , ');
            if( tuneValues.length != 0 ){
              stringInputs = stringInputs.concat(' , ');
              stringInputs = stringInputs.concat(tuneValues.join(' , '));
            }

            //stringInputs = stringInputs.concat( '\n Aqui acaban los inputs de' + element.ndxBlock );
            stringInputs = stringInputs.replace(/\56/g,"_");
            if ( outputValues.length < 2 ) {
              code = code.concat( element.BlockType );
              code = code.concat(' = ');
              code = code.concat( element.BlockType );
              code = code.concat('_FUNCTION( ');
              code = code.concat( stringInputs );
              code = code.concat(' );\n');
              bigCode = bigCode.concat( code );
              saveText( bigCode, sheet );
            } else{
              var lol = code;
              var parameter = {
                BlockType: element.BlockType
              }
              outputValues.forEach( function ( element, index, array ) {
                stringInputs = element.concat(' , ').concat( stringInputs );
                console.log( stringInputs );
                code = lol.concat( parameter.BlockType );
                code = code.concat(' = ');
                code = code.concat( parameter.BlockType );
                code = code.concat('_FUNCTION( ');
                code = code.concat( stringInputs );
                code = code.concat(' );\n');
                bigCode = bigCode.concat( code );
                saveText( bigCode, sheet );
              });
            }
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