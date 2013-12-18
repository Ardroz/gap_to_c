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

void AO_COMBO_FUNCTION(bool ENABLE, double GAIN, double In, double MAX_CUR, double MIN_CUR, double NUM_GOOD, double OFFSET,  int SD, double VAL_20, double VAL_4,int *AO_FAULT, double *DISPLAY, int *FAULT, double *IO_CHANNEL,  double *READBACK) {
  *DISPLAY=In;

  if(SD==1)
  {
    *IO_CHANNEL=0;
    *DISPLAY=0;
    *READBACK=0;
  }
  else
  {
    *IO_CHANNEL=((MIN_CUR+((In-VAL_4)*((MAX_CUR-MIN_CUR)/(VAL_20-VAL_4))))+OFFSET)*GAIN;
    *READBACK=*IO_CHANNEL;
  }
}

void A_COMPARE_FUNCTION( int HYSTER, double IN_1, double IN_2, int *ACOMPARE, int *AEQUAL) {
  //IN_1    Señal de entrada 1 a la función
  //IN_2    Señal de entrada 2 a la función
  //HYSTER  Variable para señalar el tipo de comparación
  //A_COMPARE Salida principal de la función
  //A_EQUAL Salida secundaria de la función

  if(HYSTER==0)
  {
    if(IN_1>IN_2)
    {
      *ACOMPARE=1;
    }
    else
    {
      *ACOMPARE=0;
    }
  }
  else if(HYSTER>0)
  {
    if((IN_1>(IN_2+HYSTER))||(IN_2<(IN_1-HYSTER)))
    {
      *ACOMPARE=1;
    }
    else
    {
      *ACOMPARE=0;
    }
  }
  else if(HYSTER<0)
  {
    if(IN_1>IN_2)
    {
      *ACOMPARE=1;
    }
    else if((IN_1<(IN_2-abs(HYSTER)))||(IN_2>=(IN_1+abs(HYSTER))))
    {
      *ACOMPARE=0;
    }
    else
    {
      *ACOMPARE=0;
    }
  }
  else
  {
    *ACOMPARE=0;
  }

  if(IN_1==IN_2)
  {
    *AEQUAL=1;
  }
  else
  {
    *AEQUAL=0;
  }
}

void A_FORCE_FUNCTION(int B_ENABLE, int FINH, int FMD, double In, double TUNE, double *A_FORCE, int *FRC) {
  //B_ENABLE  Habilitación de la función
  //In    Señal analógica de entrada
  //FINH    Inhibición de la función
  //FMD   Modo de forzado
  //TUNE    Valor al que se va a forzar la variable de entrada
  //A_FORCE Salida Principal de la función
  //FRC   Estatus de la función
  if(B_ENABLE==1)
  {
    if(FINH==1)
    {
      *A_FORCE=In;
      *FRC=0;
    }
    else if(FINH==0 && FMD==1)
    {
      *FRC=1;
      *A_FORCE=TUNE;
    }
  }
  else
  {
    *A_FORCE=0;
    *FRC=0;
  }
}

double A_LIMITER_FUNCTION(int B_ENABLE, double In, double IN_HI , double IN_LOW) {
  
  //B_ENABLE    Habilitación de la función
  //In      Señal de entrada a la función
  //IN_LOW    Limite inferior de la función
  //IN_HI     Limite superior de la función
  //A_LIMITER   Señal de salida de la función
  double A_LIMITER;

  if(B_ENABLE==1)
  {
    if(In > IN_HI)
    {
      A_LIMITER=IN_HI;
    }
    else if(In<IN_LOW)
    {
      A_LIMITER=IN_LOW;
    }
    else if (IN_LOW>IN_HI)
    {
      if(In<IN_HI)
      {
        A_LIMITER=IN_LOW;
      }
      else if(In>IN_HI)
      {
        A_LIMITER=IN_HI;
      }
    }
    else
    {
      A_LIMITER=In;
    }
  }
  else
  {
    A_LIMITER=0;
  }

  return A_LIMITER;
}

void AI_420_L_FUNCTION(double GAIN, double HI_SP, double In, double LATCH_DLY, double LO_SP, double OFFSET, double OVRD, int RST,  double VAL_20, double VAL_4, double *AI_420_L, int *FAULT, int *HI_LATCH, int *LATCH_OR, int *LO_LATCH ){
  double counter=0;

  counter=counter+0.05;

  if(counter>=LATCH_DLY)
  {
    *AI_420_L=((LO_SP+((In - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;
  }
  else
  {
    *AI_420_L=0;
  }

  if(In>=HI_SP)
  {
    *HI_LATCH=1;
  }
  else if(RST==1 && (In<HI_SP))
  {
    *HI_LATCH=0;
  }

  if(*FAULT==1 || *HI_LATCH==1 || *LO_LATCH==1)
  {
    *LATCH_OR=1;
  }
  else
  {
    *LATCH_OR=0;
  }

  if((In<LO_SP) && OVRD==0)
  {
    *LO_LATCH=1;
  }
  else if(RST==1 && (In>LO_SP))
  {
    *LO_LATCH=0;
  }
}

void B_FORCE_FUNCTION( bool ENABLE, int FINH, int FMD, int In, int TUNE, int *B_FORCE, int *FRC) {
  if(FINH==1)
  {
    FMD=0;
  }

  if(FMD==1)
  {
    *B_FORCE=TUNE;
    *FRC=1;
  }
  else
  {
    *B_FORCE=In;
    *FRC=0;
  }
}

void B_ALARM_FUNCTION( int ACKN, bool Enable, double DLY_TIME, int In, int OVRD, int RESET, int *B_ALARM, int *HORN, int *LIGHT) {
  
  double counter=0;
  counter=counter+0.05;

  if(counter>DLY_TIME && OVRD==0 && In==1) {
    *B_ALARM=1;
    *HORN=1;

    if(ACKN==1) {
      *HORN=0;
    }
  }
  else if(In==0 && RESET==1) {
    *B_ALARM=0;
  }

  *LIGHT=*B_ALARM;
}

void F_TO_C_FUNCTION(int B_ENABLE,double IN_1,double IN_2,double IN_3,double IN_4,double IN_5,double IN_6,double *OUT_1,  double *OUT_2,  double *OUT_3,  double *OUT_4,  double *OUT_5,  double *OUT_6 ) {

  *OUT_1=(IN_1-32)/1.8;
  *OUT_2=(IN_2-32)/1.8;
  *OUT_3=(IN_3-32)/1.8;
  *OUT_4=(IN_4-32)/1.8;
  *OUT_5=(IN_5-32)/1.8;
  *OUT_6=(IN_6-32)/1.8;
}

bool LATCH_R_FUNCTION(int B_ENABLE, int RST, int TRIGGER, bool latch) {
  int LATCH_R;
  if(RST==1) {
    LATCH_R=0;
  }else if(TRIGGER==1) {
    LATCH_R = 1;
  } else {
    LATCH_R = latch;
  }
  return LATCH_R;
}

bool LATCH_FUNCTION(int B_ENABLE,int RST, int TRIGGER , bool latch) {
  bool ouput;
  if( TRIGGER == 1 ) {
    output = 1;
  }else if(RST==1) {
    output=0;
  } else {
    output = latch;
  }
  return output;
}

double NEGATE_FUNCTION(int B_ENABLE, double INT) {
  double NEGATE;

    NEGATE=INT*(-1);

  return NEGATE;
}