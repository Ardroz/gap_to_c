#include <stdio.h>
#include <windows.h>
#include <time.h>

	double IN_1=2.5;
	double IN_2=2.0;
	int HYSTER=0;
	int A_COMPARE=0;
	int A_EQUAL=0;
	int OUT1;
	int OUT2;

//tvalues =2´¨n
double LUT1(double val, double index_values[],double values[],int tvalues){

int start=0;
int end=tvalues;
int half=(end-start)/2+start;
	while(end-start>1)
	{
		if (index_values[half]<val)
		{
		start=half;
		end=end;
		half=(end-start)/2+start;
		}else{
		start=start;
		end=half;
		half=(end-start)/2+start;
		}
	};


	return 0;
}


//Función para el detector de flanco positivo de tipo RTRIG
void RTRIG(int variable,int out_variable[])
{
	//variable				In
	//out_variable[1]		Q
	//out_variable[2]		AUX1
	//out_variable[3]		AUX2
	//out_variable[4]		i
	int Work_cycle=25;		//CYCLE(S) OF WORK (+1)
	if(variable==1 && out_variable[3]==0)
		out_variable[2]=1;
	if(out_variable[2]==1)
		{
			out_variable[1]=1;
			out_variable[4]=out_variable[4]+1;
			if(out_variable[4]>=Work_cycle)
				{
					out_variable[1]=0;
					out_variable[2]=0;
					out_variable[3]=1;
				}
		}
	if(variable==0 && out_variable[1]==0)
		{
			out_variable[4]=0;
			out_variable[3]=0;
		}
	if(variable==1 && out_variable[4]>=Work_cycle)
		out_variable[4]=0;
}
//==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==


//Funciones del GAP.

void A_2_RM_FUNCTION(double IN_1, int FLT_1, int DISABLE_1, double IN_2, int FLT_2, int DISABLE_2, char NORMAL_EQ[], char MAXDIFF_EQ[], 
					   double MAXDIFF_SP, double ALLFAIL_EQ, double ALM_DLY, int FAILONRATE, double FAILRATESP, double LO_SP, double HI_SP, 
					   int OVRD_LO, int OVRD_HI, int RST, double *A_2_RM, double *SPREAD, double *VALUE_1, double *VALUE_2, int *MAXDIFF_AL, int *IN_1_FLT, 
					   int *IN_2_FLT, int *ALL_FLT)
{
	double counter=0;

	counter=counter+0.05;

	if(FLT_1==1)
	{
		IN_1=0;
		*IN_1_FLT=1;
	}
	else if(RST==1)
	{
		*IN_1_FLT=0;
	}

	if(FLT_2==1)
	{
		IN_2=0;
		*IN_2_FLT=1;
	}
	else if(RST==1)
	{
		IN_2_FLT=0;
	}

	if(strcmp(NORMAL_EQ, "AVG") == 0 && (FLT_1==0 && FLT_2==0 && ALL_FLT==0))
	{
		*A_2_RM=(IN_1+IN_2)/2;
	}
	else if(strcmp(NORMAL_EQ,"HSS")==0 && (FLT_1==0 && FLT_2==0 && ALL_FLT==0))
	{
		if(IN_1>IN_2)
		{
			*A_2_RM=IN_1;
		}
		else if(IN_1<IN_2)
		{
			*A_2_RM=IN_2;
		}
	}
	else if(strcmp(NORMAL_EQ,"LSS")==0 && (FLT_1==0 && FLT_2==0 && ALL_FLT==0))
	{
		if(IN_1<IN_2)
		{
			*A_2_RM=IN_1;
		}
		else if(IN_1>IN_2)
		{
			*A_2_RM=IN_2;
		}
	}
	else if((IN_1-IN_2)>MAXDIFF_SP)
	{
		if(strcmp(MAXDIFF_EQ,"AVG")==0)
		{
			*A_2_RM=(IN_1+IN_2)/2;
		}
		else if(strcmp(MAXDIFF_EQ,"HSS")==0)
		{
			if(IN_1>IN_2)
			{
				*A_2_RM=IN_1;
			}
			else if(IN_1<IN_2)
			{
				*A_2_RM=IN_2;
			}
		}
		else if(strcmp(MAXDIFF_EQ,"LSS")==0)
		{
			if(IN_1>IN_2)
			{
				*A_2_RM=IN_1;
			}
			else if(IN_1<IN_2)
			{
				*A_2_RM=IN_2;
			}
		}
	}
	else if(FLT_1==1 && FLT_2==1)
	{
		*A_2_RM=ALLFAIL_EQ;
	}

	if(IN_1<LO_SP && counter>ALM_DLY)
	{
		*IN_1_FLT=1;
	}
	else if(IN_2<LO_SP && counter>ALM_DLY)
	{
		*IN_2_FLT=1;
	}
		
	if(IN_1>HI_SP && counter>ALM_DLY)
	{
		*IN_1_FLT=1;
	}
	else if(IN_2>HI_SP && counter>ALM_DLY)
	{
		*IN_2_FLT=1;
	}
	else if(RST==1)
	{
		*IN_1_FLT=0;
		*IN_2_FLT=0;
	}

	if(((IN_1-IN_2)>MAXDIFF_SP) && (counter>ALM_DLY))
	{
		*MAXDIFF_AL=1;
	}
	else if(RST==1)
	{
		*MAXDIFF_AL=0;
	}
}

void A_MUX_HSS_FUNCTION(int B_ENABLE, double DEFAULT, double IN_1, int SEL_1, double IN_2, int SEL_2, double IN_3, int SEL_3, double IN_4, int SEL_4, 
						double IN_5, int SEL_5,double IN_6, int SEL_6, double IN_7, int SEL_7, double IN_8, int SEL_8, double IN_9, int SEL_9, 
						double IN_10, int SEL_10,double IN_11, int SEL_11, double IN_12, int SEL_12, double IN_13, int SEL_13, double IN_14, int SEL_14, 
						double IN_15, int SEL_15, double *A_MUX_HSS, int *INT_SEL)
{
	//B_ENABLE		Habilitación de la función
	//DEFAULT		Valor a la salida si ninguna condición se cumple
	//IN_x			Entradas a la función
	//SEL_x			Validez de la entrada a la función
	//A_MUX_HSS		Salida principal de la función
	//INT_SEL		Salida de la variable seleccionada
	if(B_ENABLE==1)
	{

		if((IN_1*SEL_1)>((IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_1;
			*INT_SEL=1;
		}
		else if((IN_2*SEL_2)>((IN_1*SEL_1)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_2;
			*INT_SEL=2;
		}
		else if((IN_3*SEL_3)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_3;
			*INT_SEL=3;
		}
		else if((IN_4*SEL_4)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_4;
			*INT_SEL=4;
		}
		else if((IN_5*SEL_5)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_5;
			*INT_SEL=5;
		}
		else if((IN_6*SEL_6)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_6;
			*INT_SEL=6;
		}
		else if((IN_7*SEL_7)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_7;
			*INT_SEL=7;
		}
		else if((IN_8*SEL_8)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_8;
			*INT_SEL=8;
		}
		else if((IN_9*SEL_9)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_9;
			*INT_SEL=9;
		}
		else if((IN_10*SEL_10)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_10;
			*INT_SEL=10;
		}
		else if((IN_11*SEL_11)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_11;
			*INT_SEL=11;
		}
		else if((IN_12*SEL_12)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_12;
			*INT_SEL=12;
		}
		else if((IN_13*SEL_13)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_13;
			*INT_SEL=13;
		}
		else if((IN_14*SEL_14)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_15*SEL_15)))
		{
			*A_MUX_HSS=IN_14;
			*INT_SEL=14;
		}
		else if((IN_15*SEL_15)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)))
		{
			*A_MUX_HSS=IN_15;
			*INT_SEL=15;
		}
		else
		{
			*A_MUX_HSS=DEFAULT;
			*INT_SEL=0;
		}
	}
	else
	{
		*A_MUX_HSS=0;
		*INT_SEL=0;
	}
}



void A_MUX_S_N_FUNCTION(int B_ENABLE, int SEL_1, double IN_1, double DFLT_1, double IN_2, double DFLT_2, double IN_3, double DFLT_3, double IN_4, double DFLT_4, 
						double IN_5, double DFLT_5, double *OUT_1, double *OUT_2, double *OUT_3, double *OUT_4, double *OUT_5)
{
	//B_ENABLE		Habilitación de la función
	//SEL			Selector del valor que se obtendrá en la salida 1
	//IN_X			Señal de entrada a la función
	//DFLT_X		Valor por default en la salida
	//OUT_X			Señal de salida de la función

	if(B_ENABLE==1)
	{
		if(1<SEL_1>5)
		{
			*OUT_1=DFLT_1;
			*OUT_2=DFLT_2;
			*OUT_3=DFLT_3;
			*OUT_4=DFLT_4;
			*OUT_5=DFLT_5;
		}
		else if(SEL_1==1)
		{
			*OUT_1=IN_1;
			*OUT_2=DFLT_2;
			*OUT_3=DFLT_3;
			*OUT_4=DFLT_4;
			*OUT_5=DFLT_5;
		}
		else if(SEL_1==2)
		{
			*OUT_1=DFLT_1;
			*OUT_2=IN_1;
			*OUT_3=DFLT_3;
			*OUT_4=DFLT_4;
			*OUT_5=DFLT_5;
		}
		else if(SEL_1==3)
		{
			*OUT_1=DFLT_1;
			*OUT_2=DFLT_2;
			*OUT_3=IN_1;
			*OUT_4=DFLT_4;
			*OUT_5=DFLT_5;
		}
		else if(SEL_1==4)
		{
			*OUT_1=DFLT_1;
			*OUT_2=DFLT_2;
			*OUT_3=DFLT_3;
			*OUT_4=IN_1;
			*OUT_5=DFLT_5;
		}
		else if(SEL_1==5)
		{
			*OUT_1=DFLT_1;
			*OUT_2=DFLT_2;
			*OUT_3=DFLT_3;
			*OUT_4=DFLT_4;
			*OUT_5=IN_1;
		}
	}
	else
	{
		*OUT_1=0;
		*OUT_2=0;
		*OUT_3=0;
		*OUT_4=0;
		*OUT_5=0;
	}
}


void A_TO_T_FUNCTION(double In, int H, int M, int S)
{
	
	//In		Señal de entrada a la función en segundos
	//H			Valor de salida de las horas
	//M			Valor de salida de los minutos
	//S			Valor de salida de los segundos
	//div		Auxiliar para división
	//mult		Auxiliar para multiplicación
	//mult2		Auxiliar para multiplicación 2
	//b1		Auxiliar bandera 1
	//b2		Auxiliar bandera 2
	double div, mult, mult2, b1, b2;

	div=In/3600;
	H=(int)div;
	b1=div-H;
	mult=b1*60;
	M=(int)mult;
	b2=mult-M;
	S=b2*60;
}



void ACCUM_FUNCTION(int ENBL, double INIT_VAL, int RST, double IN_1, int TM_BASE_1, int *H, int *M, int *S, double *OUT_1)
{
	
	//ENBL		Señal de activación de la función
	//INIT_VAL	Valor inicial de la salida de la función
	//RST		Señal de reset de la función
	//IN_1		Señal de entrada a la función
	//TM_BASE_1	Variable para seleccionar la base de tiempo en la que se acumulará
	//H			Señal de horas activa de la función
	//M			Señal de minutos activos de la función
	//S			Señla de segundos activos de la función
	//OUT_1		Señal de salida de la variable acumulada en la función
	//counter	Auxiliar 
	double counter=0;

	if(ENBL==1)
	{
		if(counter==1000)
		{
			counter=0;
			*S=*S+1;
			if(*S==60)
			{
				*S=0;
				*M=*M+1;
				if(*M==60)
				{
					*M=0;
					*H=*H+1;
				}
			}
		}
		else
		{
			counter=counter+0.05;
		}

		if(TM_BASE_1==1 && counter==1000)//Segundos
		{
			*OUT_1=*OUT_1+IN_1;
		}
		else if(TM_BASE_1==2 && *S==60)//Minutos
		{
			*OUT_1=*OUT_1+IN_1;
		}
		else if(TM_BASE_1==3 && *M==60)//Horas
		{
			*OUT_1=*OUT_1+IN_1;
		}
		else
		{
			*OUT_1=*OUT_1;
		}
	}
	else if(RST==1)
	{
		*H=0;
		*M=0;
		*S=0;
		*OUT_1=INIT_VAL;
	}
	else
	{
		*H=*H;
		*M=*M;
		*S=*S;
		*OUT_1=*OUT_1;
	}

}

void ACT_CTRL_FUNCTION(int ALM_RST, double AT_POS_0, double AT_POS_100, int CAL_PERM, int CAL_ENBL, int CTRL_TYPE, double DITHER, double EXC_VOLTS, 
					   double FB_1_TYPE, double FB_2_TYPE, int FB_CHK_OPN, double FB_DIF_DLY, double FB_DIF_TOL, int FB_FAILSEL, double FB_POS_TOL, 
					   double FB_V_TOL, char FWD_REV, double I_RANGE, double In, double KI, double KP, double LAG_RATIO, double MAI_AT_0, double MA_AT_100, 
					   int MANUAL_IN, double MAX_I, double MIN_I, double NULL_I, double PE_THRSH, double PE_DLY, int REDUN_IN, int REDUN_SD, int SD, 
					   double T_LEAD, double ACT_CTRL, double ACT_OHMS, double AVG_POS, int CAL_ALM, int CAL_STATUS, int DRIVER_FLT, int EXC_FLT, int FAULT,
					   int FB_FAIL_1, int FB_FAIL_2, double FB_MAX_DIF, int FB_OPEN_1, int FB_OPEN_2, int FB_V_FLT_1, int FB_V_FLT_2, double FDBK_V_1A, 
					   double FDBK_V_1B, double FDBK_V_2A, double FDBK_V_2B, double MA_OUT, int POS_ERROR, double POS_RDBK_1, double POS_RDBK_2, 
					   int POS_RNG_1, int POS_RNG_2, int REDUN_OUT, int REDUN_STS)
{
	double AUX;

	if(FB_CHK_OPN==0)
	{
		FB_OPEN_1=1;
		FB_OPEN_1=1;
	}

	if(CTRL_TYPE==3)
	{
		AUX=(In-POS_RDBK_1)*KP;
		ACT_CTRL=AUX+NULL_I;
	}
}



void AI_COMBO_FUNCTION(int B_ENABLE, double In, int CONF, double OFFSET, double GAIN, double VAL_4, double VAL_20, int LATCH_DLY, double LO_SP, double HI_SP, 
					   double OVRD, int RST, int ENABLE_TS, double LO_TS_SP, double HI_TS_SP, int RST_TS, double *LO_L_TIME,  int *HI_LATCH, double *LATCH_OR,     
					   int *LO_TSEVENT, double *LO_TS_TIME,  int *HI_TSEVENT, double *HI_TS_TIME, int *FAULT,int *LO_LATCH, double *AI_COMBO)
{
	double counter=0;

	counter=counter+0.05;

	if(B_ENABLE==1)
	{
		if(CONF==0)
		{
			if(counter>=LATCH_DLY)
			{
				*AI_COMBO=((LO_SP+((In - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;//Salida Para entradas en volt's de 0-5
			}
			else
			{
				*AI_COMBO=0;//Salida Para entradas en volt's de 0-5
			}
		}
		else if(CONF==1)
		{
			if(counter>=LATCH_DLY)
			{
				*AI_COMBO=((LO_SP+((In - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;//Salida Para entradas en miliAmpers de 4-20
			}
			else
			{
				*AI_COMBO=0;//Salida Para entradas en miliAmpers de 4-20
			}
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
	else
	{
		*AI_COMBO=0;
		*LO_LATCH=0;
		*LATCH_OR=0;
		*HI_LATCH=0;
	}
}

void AI_MPU_FUNCTION(int B_ENABLE, double In, double HZ_RPM, double S_FILT, double D_FILT, double ACCEL_LIM, double FREQ_RNGE, int DERIV_EN, double LATCH_DLY, 
					 double LO_SP, double HI_SP, int OVRD, int RST, double *AI_MPU, double *MONITOR, int *MIN_SPEED, double *DERIV, int *LO_LATCH, 
					 int *HI_LATCH, int *LATCH_OR, int *FAULT)
{
	double counter=0;
	double V1;
	double V2;

	if(B_ENABLE==1)
	{
		counter=counter+0.05;
		V1=In;
		if(counter>LATCH_DLY)
		{
			if(counter==995)
			{
				V2=In;
			}

			if(counter==1000)
			{
				V1=In;
				counter=0;
			}

			*DERIV=(V2-V1)/1000;

			if(In>=FREQ_RNGE)
			{
				*AI_MPU=(FREQ_RNGE*60)*HZ_RPM;
				*MONITOR=FREQ_RNGE*60;
			}
			else if(In<=((1/50)*FREQ_RNGE))
			{
				*AI_MPU=(100*60)*HZ_RPM;
				*MONITOR=2.4*60;
			}
			else
			{
				*AI_MPU=(In*60)*HZ_RPM;
				*MONITOR=In*60;
			}

			if(In<LO_SP && OVRD==0)
			{
				*LO_LATCH=1;
			}
			else if((In>LO_SP) && RST==1)
			{
				*LO_LATCH=0;
			}

			if(In>HI_SP)
			{
				*HI_LATCH=1;
			}
			else if((In<HI_SP) && RST==1)
			{
				*HI_LATCH=0;
			}

			if(*LO_LATCH==1 || *HI_LATCH==1)
			{
				*LATCH_OR=1;
			}
			else
			{
				*LATCH_OR=0;
			}
		}
	}
}

void AI_PRESS_FUNCTION(int B_ENABLE, double In, double LATCH_DLY, double LO_SP,  double HI_SP, int OVRD, int RST, int *FAULT, int *COMM_ERR, int *ENV_FAULT, 
					   int *LO_LATCH, int *LATCH_OR,int *HI_LATCH,double *AI_PRESS)
{
		double counter=0;

	if(B_ENABLE==1)
	{
		counter=counter+0.05;

		if(counter>=LATCH_DLY)
		{
			*AI_PRESS=LO_SP+((In-0)*((HI_SP-LO_SP)/(1000-0)));
		}
		else
		{
			*AI_PRESS=0;
		}

		if(In>HI_SP)
		{
			*HI_LATCH=1;
		}
		else if((In<HI_SP) && RST==1)
		{
			*HI_LATCH=0;
		}

		if(*HI_LATCH==1 || *LO_LATCH==1)
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
		else if((In>LO_SP) && RST==1)
		{
			*LO_LATCH=0;
		}

		if(In>1000)
		{
			*ENV_FAULT=1;
		}
		else
		{
			*ENV_FAULT=0;
		}
	}
	else
	{
		*AI_PRESS=0;
		*HI_LATCH=0;
		*LATCH_OR=0;
		*LO_LATCH=0;
		*ENV_FAULT=0;
	}
}

//Hace Falta terminar Esta función
void AI_RTD_L_FUNCTION(double In, char CURVE, double OHM_VAL, char UNITS, double OFFSET, double GAIN, double LATCH_DLY, double LO_SP, double HI_SP, 
						 int OVRD, int RST, int *LO_LATCH, int *HI_LATCH, int *LATCH_OR, int *FAULT, double *AI_RTD_L)
{
	double counter=0;
	double alpha;
	double Temp;

	if(CURVE=='E' || CURVE=='e')
	{
		alpha=0.00385;
	}
	else if(CURVE=='A' || CURVE=='a')
	{
		alpha=0.00392;
	}

	counter=counter+0.5;

	if(counter>LATCH_DLY)
	{
		if(UNITS=='F' || UNITS=='f')
		{
			Temp=((In-OHM_VAL)+(alpha*OHM_VAL*32))/(alpha*OHM_VAL);
		}
		else if(UNITS=='C' || UNITS=='c')
		{
			Temp=((In-OHM_VAL)+(alpha*OHM_VAL*0))/(alpha*OHM_VAL);
		}

		if((In<LO_SP) && OVRD==0)
		{
			*LO_LATCH=1;
		}
		else if((In>LO_SP) && RST==1)
		{
			*LO_LATCH=0;
		}

		if(In>HI_SP)
		{
			*HI_LATCH=1;
		}
		else if((In<HI_SP) && RST==1)
		{
			*HI_LATCH=0;
		}

		if(*HI_LATCH==1 || *LO_LATCH==1)
		{
			*LATCH_OR=1;
		}
		else
		{
			*LATCH_OR=0;
		}
	}
}

void B_MUX_S_N_FUNCTION(int DFLT_1, int DFLT_2, int DFLT_3, int DFLT_4, int DFLT_5, int DFLT_6, int DFLT_7, int DFLT_8, int DFLT_9, int DFLT_10, int DFLT_11, int DFLT_12, int DFLT_13, int DFLT_14, int DFLT_15, int DFLT_16, int DFLT_17, int DFLT_18, int DFLT_19, int DFLT_20, int DFLT_21, int DFLT_22, int DFLT_23, int IN_1 , int SEL_1, int *OUT_1, int *OUT_2, int *OUT_3, int *OUT_4, int *OUT_5, int *OUT_6, int *OUT_7, int *OUT_8, int *OUT_9, int *OUT_10, int *OUT_11, int *OUT_12, int *OUT_13, int *OUT_14, int *OUT_15, int *OUT_16, int *OUT_17, int *OUT_18, int *OUT_19, int *OUT_20, int *OUT_21,int *OUT_22, int *OUT_23) {
  if(1 <= SEL_1 <= 23){
    *OUT_1=DFLT_1;
    *OUT_2=DFLT_2;
    *OUT_3=DFLT_3;
    *OUT_4=DFLT_4;
    *OUT_5=DFLT_5;
    *OUT_6=DFLT_6;
    *OUT_7=DFLT_7;
    *OUT_8=DFLT_8;
    *OUT_9=DFLT_9;
    *OUT_10=DFLT_10;
    *OUT_11=DFLT_11;
    *OUT_12=DFLT_12;
    *OUT_13=DFLT_13;
    *OUT_14=DFLT_14;
    *OUT_15=DFLT_15;
    *OUT_16=DFLT_16;
    *OUT_17=DFLT_17;
    *OUT_18=DFLT_18;
    *OUT_19=DFLT_19;
    *OUT_20=DFLT_20;
    *OUT_21=DFLT_21;
    *OUT_22=DFLT_22;
    *OUT_23=DFLT_23;

    switch ( SEL_1 ) {
      case 1: *OUT_1 = IN_1; break;
      case 2: *OUT_2 = IN_1; break;
      case 3: *OUT_3 = IN_1; break;
      case 4: *OUT_4 = IN_1; break;
      case 5: *OUT_5 = IN_1; break;
      case 6: *OUT_6 = IN_1; break;
      case 7: *OUT_7 = IN_1; break;
      case 8: *OUT_8 = IN_1; break;
      case 9: *OUT_9 = IN_1; break;
      case 10: *OUT_10 = IN_1; break;
      case 11: *OUT_11 = IN_1; break;
      case 12: *OUT_12 = IN_1; break;
      case 13: *OUT_13 = IN_1; break;
      case 14: *OUT_14 = IN_1; break;
      case 15: *OUT_15 = IN_1; break;
      case 16: *OUT_16 = IN_1; break;
      case 17: *OUT_17 = IN_1; break;
      case 18: *OUT_18 = IN_1; break;
      case 19: *OUT_19 = IN_1; break;
      case 20: *OUT_20 = IN_1; break;
      case 21: *OUT_21 = IN_1; break;
      case 22: *OUT_22 = IN_1; break;
      case 23: *OUT_23 = IN_1; break;
    }
  }
}


void main()
{
	

	A_COMPARE_FUNCTION(IN_1,IN_2,HYSTER,&A_COMPARE,&A_EQUAL);

	/*OUT1=A_COMPARE;
	OUT2=A_EQUAL;*/

	printf("%d  %d \n",A_COMPARE,A_EQUAL);

	system("pause");

}