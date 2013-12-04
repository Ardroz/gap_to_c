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
    password : '',//n0m3l0
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
      tuneValues = new Array,
      lol = {};

  switch ( parameters.block.BlockType ) {

    case "AI_420_6CH":
    case "AI_PRES_P1":
    case "AI_PRES_P2":
    case "AI_PRESS8":
    case "AI_RTD_6CH":
    case "EGD_CON":
    case "ExternLink":
    case "INTERFACE":
    case "LON_FLT":
    case "LON_GROUP":
    case "LON_MOD":
    case "MEXPCHAS12":
    case "MICRONET12":
    case "MODBUS_M":
    case "MODBUS_S":
    case "MOD_PORT":
    case "NODE_FLT":
    case "NT_CPU":
    case "NV_LOG":
    case "PIPE_P":
    case "RTC":
    case "SIO":
    case "SIO_PORT":
    case "SIO232PORT":
    case "SYS_INFO":
    case "TCP_P":
    case "TUNE_VAR":
    case "UDP_P":

      code = "// ";
      code = code.concat(parameters.block.BlockType).concat(" \n")
      return code;
      break;

    case "AND":
    case "NAND":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });
      
      stringInputs = inputValues.join(' && ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      if ( parameters.block.BlockType == "AND") {
        code = code.concat( 'AND = ' );
      } else {
        code =code.concat( 'NAND =! ')
      }
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;
      break;

    case "OR":
    case "NOR":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input'){
          inputValues.push ( element.Value );
        }
      });

      stringInputs = inputValues.join(' || ');
      stringInputs = stringInputs.replace(/\56/g,"_");

      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      if ( parameters.block.BlockType == "OR" ) {
        code = code.concat( 'OR = ' );
      } else {
        code =code.concat( 'NOR =! ')
      }
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;
      break;

    case "DIVIDE":
    case "SUBTRACT":
    case "MULTIPLY":
    case "ADD":

      var lol = arguments( parameters );
      lol.inputs.splice(0,1);
      if ( parameters.block.BlockType === "DIVIDE") {
        stringInputs = lol.inputs.join(' / ');
      };
      if ( parameters.block.BlockType === "SUBTRACT") {
        stringInputs = lol.inputs.join(' - ');
      };
      if ( parameters.block.BlockType === "ADD") {
        stringInputs = lol.inputs.join(' + ');
      };
      if ( parameters.block.BlockType === "MULTIPLY") {
        stringInputs = lol.inputs.join(' * ');
      };
      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( parameters.block.BlockType ).concat(' = ');
      code = code.concat( stringInputs ).concat( ';\n' );
      return code;
      break;

    case "A_NAME":
    case "B_NAME":
    case "I_NAME":
    case "T_NAME":

      parameters.fields.forEach( function ( element, index, array ){
        if ( element.IOType === 'Input' || element.IOType === 'Tune' ){

          if( /[a-z]/i.test( element.Value ) ){
              inputValues.push( element.Value.replace(/\56/g,"_") );
          }else{
              inputValues.push( element.Value );
          }
        }
      });

      stringInputs = inputValues;
      
      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( parameters.block.BlockType ).concat(' = ');
      
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;

      break;

    case "NOT":
      var lol = arguments( parameters );
      if( lol.inputs.length != 0) {
        stringInputs = lol.inputs;
      } else {
        stringInputs = lol.tunes;
      }
      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( parameters.block.BlockType ).concat(' =! ');
      code = code.concat( stringInputs ).concat( ';\n' );
      return code;
           
      break;

    case "CALCULATE":
      var name = [],
          id = [],
          func = [],
          i;
       i = 0;

      parameters.fields.forEach( function ( element, index, array){
              
      //console.log(String(element.IOType).substring(0,4));
        if( element.IOType === 'Input' ){
          if( String(element.FieldName).substring(0,3) === 'IN_' ){

            i = Number( String(element.FieldName).substring(3,5) );
            if( /[a-z]/i.test( element.Value ) ){
              id[i] = element.Value.replace(/\56/g,"_") ;
            } else {
              id[i] = element.Value;
            }

          } else if ( String(element.FieldName).substring(0,5) === 'NAME_' ){
            i = Number( String(element.FieldName).substring(5,7));
            name[i] = element.Value;
          } else if (  String(element.FieldName).substring(0,6) === 'FUNCT_') {
            var caracteres;
            i = Number( String(element.FieldName).substring(6,8));
            caracteres = element.Value.length;
            func[i] = element.Value;

          };
        } 
      });

      var searchfor,
          counterfunction;
      counterfunction = 1;
      
      while( func[counterfunction] != null){
        i = 1;
        while(name[i] != null){
          searchfor = " ";
          searchfor = searchfor.concat(String(name[i]));
          func[counterfunction] = func[counterfunction].replace( new RegExp(searchfor,'g'),id[i]);
          searchfor = searchfor.concat(String(name[i]));
          searchfor = searchfor.concat(" ");
          func[counterfunction] = func[counterfunction].replace( new RegExp(searchfor,'g'),id[i]);
          i++;
        }
        inputValues.push( func[counterfunction] );
        counterfunction++;
      }

      code = parameters.block.Category.concat('_');
      code = code.concat( parameters.block.Name ).concat('_');
      code = code.concat( parameters.block.BlockType ).concat(' = ');
      stringInputs = inputValues.join(" # ");
      stringInputs = stringInputs.replace( /#/g, " ");
      code = code.concat( stringInputs ).concat( ';\n' );

      return code;
      break;

    case "CALC_PLUS":
      var name = [],
          id = [],
          outputname = [],
          outputid = [],
          counterouputid,
          counteroutputname,
          func = [],
          counterid,
          countername,
          i;
          i = 0;
          counterid = 1;
          countername = 1;
          counteroutputname = 1;
          counterouputid = 1;

      parameters.fields.forEach( function ( element, index, array){
              console.log(String(element.FieldName).substring(1,8));
      //console.log(String(element.IOType).substring(0,4));
        if( element.IOType === 'Input' || element.IOType === 'Tune' ){
          
          if( String(element.FieldName).substring(1,5) === '_IN_' ){

            if( /[a-z]/i.test( element.Value ) ){
              id[counterid] = element.Value.replace(/\56/g,"_") ;
            } else {
              id[counterid] = element.Value;
            }
            counterid++;
          } else if ( String(element.FieldName).substring(1,8) === 'I_NAME_' ){
            name[countername] = element.Value;
            countername++;
          } else if (  String(element.FieldName).substring(0,6) === 'FUNCT_') {

            var caracteres;
            i = Number( String(element.FieldName).substring(6,8));
            caracteres = element.Value.length;
            func[i] = element.Value;

          } else if ( String(element.FieldName).substring(1,8) === 'O_NAME_' ) {
            outputname[ counteroutputname ] = element.Value;
            counteroutputname++;
          }
        } else if ( element.IOType === 'Output' ){
          if( String(element.FieldName).substring(1,6) === '_OUT_' ){
            outputid [counterouputid] = parameters.block.Category.concat('_');
            outputid [counterouputid] = outputid [counterouputid].concat( parameters.block.Name ).concat('_');
            outputid [counterouputid] = outputid [counterouputid].concat( element.FieldName );
            counterouputid++;
          }
        }
      });
      
      var searchfor,
          counterfunction;
      counterfunction = 1;
      
      while( func[counterfunction] != null){
        i = 1;
        while(name[i] != null){
          
          searchfor = name[i];
          func[counterfunction] = func[counterfunction].replace( new RegExp(searchfor,'g'),id[i]);
          i++;
        }
        i = 1;
        while(outputname[i] != null){
          
          searchfor = outputname[i];
          func[counterfunction] = func[counterfunction].replace( new RegExp(searchfor,'g'),outputid[i]);
          i++;
        }

        inputValues.push( func[counterfunction] );
        counterfunction++;
      }

      stringInputs = inputValues.join(" # ");
      stringInputs = stringInputs.replace( /#/g, " ");
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
              outputValues.push( element.FieldName );
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

  function arguments ( parameters ) {

    var inputValues = new Array,
        outputValues = new Array,
        tuneValues = new Array,
        arrayInputs = {};

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
    });

    arrayInputs.inputs = inputValues;
    arrayInputs.outputs = outputValues;
    arrayInputs.tunes = tuneValues;

    return arrayInputs;
  }
}

/*String.prototype.isNumber = function(){return /^\d$/.test(this);}
console.log("123123".isNumber()); // outputs true
console.log("+12".isNumber()); // outputs false*/