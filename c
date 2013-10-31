[1mdiff --git a/README.md b/README.md[m
[1mindex b7df47b..f586c79 100644[m
[1m--- a/README.md[m
[1m+++ b/README.md[m
[36m@@ -1,4 +1,37 @@[m
[31m-gap_to_c[m
[31m-========[m
[32m+[m[32m¿Qué?[m
 [m
[31m-Gap sheets to c [m
[32m+[m[32mAutomatizar la creacion de código en C de los bloques de las hojas gap (x hoja).[m
[32m+[m
[32m+[m[32m¿Qué se necesita para un codigo de estos?[m
[32m+[m
[32m+[m[32mEjm. block 4144[m
[32m+[m
[32m+[m[32mIFACE_HDWR_GP1IAVST_B_NAME = B_NAME_FUNCTION( A2_A04_PI.GP1IAALM.LATCH1 );[m
[32m+[m
[32m+[m[32mGeneralizando tenemos para el bloque n ( n = ndxBlock ):[m
[32m+[m
[32m+[m[32mCategory[1] + '_' Name[2] + '_' + BlockType[3] = BlockType[3] + '_FUNCTION( ' +[m
[32m+[m[32m  Fields[4] + ' );'[m
[32m+[m
[32m+[m[32m[1] Category viene de la columna category en gap.tblBlocks.[m
[32m+[m[32m[2] Name viene de la columna name en gap.tblBlocks.[m
[32m+[m[32m[3] BlockType viene de la columna blockType en gap.tblBlocks.[m
[32m+[m[32m[4] Fields es un arreglo de entradas de tamaño variable, viene de gap.tblFields.[m
[32m+[m
[32m+[m[32m    Cada elemento del arreglo Fields tiene las siguiente columnas[m[41m [m
[32m+[m[32m      [FieldName, Value, I/O Type, ndxBlock][m
[32m+[m[32m    Par construir la cadena correcta se deberán tomar las siguientes consideraciones:[m
[32m+[m[32m      1. ndxBlock debe ser igual a n.[m
[32m+[m[32m      2. El FieldName será discriminado ya que es una descripción ajena al programa.[m
[32m+[m[32m      3. I/O Type tiene 4 posibles valores [ Input, Output, Tune, Link ]+[m
[32m+[m[32m         Si el I/O Type es input sera agregado al arreglo con la siguiente estructura.[m
[32m+[m[32m           VALUE [*][**][m
[32m+[m
[32m+[m[32m           [*] De la bd VALUE contiene cadenas y puntos entre ellas, reemplazar puntos con '_'[m
[32m+[m[32m           [**] Si VALUE esta vacio se enviará un 0.[m
[32m+[m[32m         Si I/O Type es Tune será  agreagado al final del arreglo después de todas las inputs.[m
[32m+[m[32m          El VALUE de Tune son constantes númericas o FALSE.[m
[32m+[m[32m         Si I/O Type es output no será considerado.[m
[32m+[m[32m         Si I/O Type es Link leer nota 1.[m
[32m+[m
[32m+[m[32m         Nota 1. Link es un I/O type relacionada con los bloques 8607 - 8622 será un exception.[m
\ No newline at end of file[m
