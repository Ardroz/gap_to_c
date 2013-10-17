/*
 * Module dependencies.
 */

var fs      = require('fs-extra'),
    mysql   = require('mysql'),
    path    = require('path');

var projectPath = './rendered_code';


function databaseInstance(){
  var connection = mysql.createConnection({
    host     : 'localhost',
    password : 'n0m3l0',
    user     : 'root'
  });
  return connection;
}

function createString ( error, result, row) {
  if( error ){
    console.log( error );
  } else {
    var code;

    code = result[0].Category;
    code = code.concat('_');
    code = code.concat( result[0].Name );
    code = code.concat('_');
    code = code.concat( result[0].BlockType );
    code = code.concat(' = ');
    code = code.concat( result[0].BlockType );
    code = code.concat('_FUNCTION( ');

    database.query( selectField, function ( error, result, row ) {
      if ( error ) {
        console.log( error );
      } else {
        var stringInputs = "",
            inputValues = new Array,
            tuneValues = new Array;

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
            }
          }
        });

        stringInputs = inputValues.join(' , ');
        stringInputs = stringInputs.concat(' , ');
        stringInputs = stringInputs.concat(tuneValues.join(' , '));

        stringInputs = stringInputs.replace(/\56/g,"_");

        code = code.concat( stringInputs );
        code = code.concat(' );');

        fs.exists( projectPath , function ( exists ){

          console.log(projectPath);
          console.log(exists);

          fs.mkdirsSync( projectPath );

          fs.writeFile( projectPath + '/bloque1.c', code , function (err) {
            if (err) throw err;
            console.log('Creado :) te amo');
          });
        });
      }
    });
  }
}

var database =  new databaseInstance(),
                selectBlock = 'SELECT * FROM gap.tblBlocks WHERE ndxSheet = 1',
                selectField = 'SELECT * FROM gap.tblFields WHERE ndxBlock = 1';

//database.query( selectBlock, createString );