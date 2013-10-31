¿Qué?

Automatizar la creacion de código en C de los bloques de las hojas gap (x hoja).

¿Qué se necesita para un codigo de estos?

Ejm. block 4144

IFACE_HDWR_GP1IAVST_B_NAME = B_NAME_FUNCTION( A2_A04_PI.GP1IAALM.LATCH1 );

Generalizando tenemos para el bloque n ( n = ndxBlock ):

Category[1] + '_' Name[2] + '_' + BlockType[3] = BlockType[3] + '_FUNCTION( ' +
  Fields[4] + ' );'

[1] Category viene de la columna category en gap.tblBlocks.
[2] Name viene de la columna name en gap.tblBlocks.
[3] BlockType viene de la columna blockType en gap.tblBlocks.
[4] Fields es un arreglo de entradas de tamaño variable, viene de gap.tblFields.

    Cada elemento del arreglo Fields tiene las siguiente columnas 
      [FieldName, Value, I/O Type, ndxBlock]
    Par construir la cadena correcta se deberán tomar las siguientes consideraciones:
      1. ndxBlock debe ser igual a n.
      2. El FieldName será discriminado ya que es una descripción ajena al programa.
      3. I/O Type tiene 4 posibles valores [ Input, Output, Tune, Link ]+
         Si el I/O Type es input sera agregado al arreglo con la siguiente estructura.
           VALUE [*][**]

           [*] De la bd VALUE contiene cadenas y puntos entre ellas, reemplazar puntos con '_'
           [**] Si VALUE esta vacio se enviará un 0.
         Si I/O Type es Tune será  agreagado al final del arreglo después de todas las inputs.
          El VALUE de Tune son constantes númericas o FALSE.
         Si I/O Type es output no será considerado.
         Si I/O Type es Link leer nota 1.

         Nota 1. Link es un I/O type relacionada con los bloques 8607 - 8622 será un exception.