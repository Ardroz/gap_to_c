void I_COMPARE_FUNCTION( int IN_1, int IN_2 , bool *EQ, bool *GT, bool *LT) {
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
  *EQ = 0;
  *GT = 0;
  *LT = 0;

  if ( IN_1 == IN_2) {
    *EQ = 1;
  } else if ( IN_1 > IN_2 ){
    *GT = 1;
  } else {
    *LT = 1;
  }
  return;
}

int I_SW_FUNCTION( bool CTRL, int NC, int NO) {

  int i_sw;

  if ( CTRL == 1) {
    i_sw = NO;
  } else {
    i_sw = NC;
  }

  return i_sw;
}

void COUNTER_FUNCTION( bool B_ENABLE, double IN_1, bool RST, int RST_VAL, bool TRIGGER, bool *TRIGGERLAST, bool *RSTLAST, bool *COUNTER, bool *CMP_OUT ) {
  bool resetrising;
  if ( B_ENABLE ) {
    if ( *RSTLAST == 0 ) {
      if ( RST == 1 ) {
        resetrising = 1;
      } else {
        resetrising = 0;
      }
    }
    if ( resetrising == 1) {
      *COUNTER = RST_VAL;
    } else{
      if ( *TRIGGERLAST == 0 ) {
        if ( TRIGGER ) {
          *COUNTER++;
        }
      }
    }
  }

  if ( COUNTER => IN_1 ) {
    *CMP_OUT = 1;
  } else {
    *CMP_OUT = 0;
  }


  *TRIGGERLAST = TRIGGER;
  *RSTLAST = RST;
}

double A_MUX_N_1_FUNCTION(int B_ENABLE, double IN_1, double IN_2, double IN_3, double IN_4, double IN_5, int SEL) {
  
  //B_ENABLE    Habilitación de la función
  //SEL     Selector de la salida de la función
  //IN_x      Señales de entrada a la función
  double A_MUX_N_1;

  if(B_ENABLE==1) {

    if(1<SEL>5) {
      A_MUX_N_1=A_MUX_N_1;
    }
    else if(SEL==1) {
      A_MUX_N_1=IN_1;
    }
    else if(SEL==2) {
      A_MUX_N_1=IN_2;
    }
    else if(SEL==3) {
      A_MUX_N_1=IN_3;
    }
    else if(SEL==4) {
      A_MUX_N_1=IN_4;
    }
    else if(SEL==5) {
      A_MUX_N_1=IN_5;
    }
    else {
      A_MUX_N_1=0;
    }
  }
  else {
    A_MUX_N_1=0;
  }

  return A_MUX_N_1;
}

double A_SW_FUNCTION(int CTRL, double NC, double NO) {
  
  //CTRL    Señal de control del switch.
  //NC    Señal de entrada para normalmente cerrado
  //NO    Señal de entrada para normalmente abierto
  //A_SW    Señal de salida de la función
  double A_SW;

  if(CTRL == 1) {
    A_SW = NO;
  }
  else {
    A_SW = NC;
  }

  return A_SW;
}

double A_MIN_FUNCTION(double IN_1, double IN_2) {
  
  //IN_1    Señal de entrada 1 a la función
  //IN_2    Señal de entrada 2 a la función
  //A_MIN   Salida de la función
  double A_MIN;

  if(IN_1<IN_2) {
    A_MIN=IN_1;
  }
  else if(IN_1>IN_2) {
    A_MIN=IN_2;
  }
  else {
    A_MIN=IN_1;
  }
  return A_MIN;
}

void BO_FORCE_FUNCTION(int B_ENABLE, int FINH, int FME, int In, int TUNE, int *BO_FORCE, int *FRC) {
  if(FINH==1 || FME==0) {
    *BO_FORCE=In;
  }

  if(FME==1) {
    *BO_FORCE=TUNE;
    *FRC=1;
  }
  else {
    *FRC=0;
  }
}

void BI_L_FUNCTION(double IO_CHANNEL, int *BI_L, int *BI_L_NOT) {
  if(IO_CHANNEL<8) {
    *BI_L=0;
    *BI_L_NOT=1;
  }
  else if(IO_CHANNEL>16) {
    *BI_L=1;
    *BI_L_NOT=0;
  }
  else {
    *BI_L=NULL;
    *BI_L_NOT=NULL;
  }
}

int B_SW_FUNCTION(int CTRL, int NC, int NO) {
  int B_SW;

  if(CTRL==1) {
    B_SW=NO;
  }
  else if(CTRL==0) {
    B_SW=NC;
  }

  return B_SW;
}

void B_SW_REV_FUNCTION(int CTRL, int DFLT, int In, int *NC, int *NO) {
  if(CTRL==1) {
    *NC=DFLT;
    *NO=In;
  } else {
    *NC=In;
    *NO=DFLT;
  }
}

void BIO_BI_FUNCTION(double IO_CHANNEL, int ENABLE_TS, int RST_TS, int *BIO_BI, int *BI_NOT, int *LO_TSEVENT, double *LO_TIME, int *HI_TSEVENT, double *HI_TIME) {
  if(IO_CHANNEL<8)
  {
    *BIO_BI=0;
    *BI_NOT=1;
  }
  else if(IO_CHANNEL>16)
  {
    *BIO_BI=1;
    *BI_NOT=0;
  }

  if(ENABLE_TS==0)
  {
    *LO_TSEVENT=0;
    *HI_TSEVENT=0;
    *LO_TIME=*LO_TIME;
    *HI_TIME=*HI_TIME;
  }
}

double A_MAX_FUNCTION(double IN_1, double IN_2) {
  //IN_1    Señal de entrada 1 a la función
  //IN_2    Señal de entrada 2 a la función
  //A_MAX   Salida de la función

  double A_MAX;

  if(IN_1>IN_2) {
    A_MAX=IN_1;
  }
  else if(IN_1<IN_2) {
    A_MAX=IN_2;
  }
  else {
    A_MAX=IN_1;
  }

  return A_MAX;
}

void A_SW_REV_FUNCTION(int CTRL, double DFLT, double In, double *NC, double *NO) {
  //CTRL    Señal de control del switch
  //DFLT    Valor por default de la función
  //In    Señal de entrada a la función
  //NC    Salida normalmente cerrada de la función
  //NO    Salida normalmente abierta de la función

  if(CTRL==1) {
    *NC=DFLT;
    *NO=In;
  }
  else {
    *NC=In;
    *NO=DFLT;
  }
}

double ABSOLUTE_FUNCTION(double In) {
  
  //In    Señal de entrada a la función
  //ABSOLUTE  Señal de salida de la función
  double ABSOLU;
  ABSOLU=abs(In);
  return ABSOLU;
}

void AO_FORCE_FUNCTION(int enable,int FINH, int FME,double In,  double RATE, double TUNE, double *AO_FORCE, int *FRC) {
  if(FINH==1 || FME==0) {
    *AO_FORCE=In;
  }

  if(FINH==1) {
    FME=0;
  }

  if(FME==1) {
    *FRC=1;
    
    if(RATE==0) {
      *AO_FORCE=*AO_FORCE+((In-0)/1);
    }
    else {
      *AO_FORCE=*AO_FORCE+((In-0)/RATE);
    }

    if(*AO_FORCE>In) {
      *AO_FORCE=In;
    }
  }
}

