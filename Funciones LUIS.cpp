void I_COMPARE_FUNCTION( int IN_1, int IN_2 ) {
  /* 
    EQ:
      Output1 = Output will be true if IN_1 is equal to IN_2. 
    GT:
      Output3 = This output  will be true if IN_1 is greater than IN_2. 
    IN_1:
      This input is compared to IN_2 to determine the output of the block. 
    IN_2:
      This input is compared to IN_1 to determine the output of the block. 
    LT:
      Output2 = This output will be true if IN_1 is less than IN_2. 
  */
  Output1 = 0;
  Output2 = 0;
  Output3 = 0;

  if ( IN_1 == IN_2) {
    Output1 = 1;
  } else if ( IN_1 > IN_2 ){
    Output3 = 1;
  } else {
    Output2 = 1;
  }
  return;

}

int I_SW_FUNCTION( bool CTRL, int NO, int NC){

  int i_sw;

  if ( CTRL == 1)
  {
    i_sw = NO;
  } else {
    i_sw = NC;
  }

  return i_sw;
}

