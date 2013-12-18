 #include <stdio.h>
#include <windows.h>
#include <time.h>


//Función para el detector de flanco positivo de tipo RTRIG
void RTRIG(int variable,int out_variable[])
{
	//variable				IN
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
			out_variable[4]=out_variable[4]+1;file:///C:/Users/Ricardo%20Rodriguez/Downloads/FuncionesGAP.cpp
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

double A_2_RM_FUNCTION( "A_2_RM" , 0 , GLUB_PT6026A_A_NAME , N2N12_AI_PT6026A_LATCH_OR , 0 , GLUB_PT6026B_A_NAME , N2N13_AI_PT6026B_LATCH_OR , 0 , "AVG" , "LSS" , GLUB_GLUBISP_A_2_RM , 30_0 , 0 , 0 , -8_0 , 530_0 , 0 , 0 , ALARM_RESET_B_NAME , *5_0 (1_0, 10_0) )
{
}

void A_COMPARE_FUNCTION(double IN_1, double IN_2, int HYSTER, int A_COMPARE, int A_EQUAL)
{
	//IN_1		Señal de entrada 1 a la función
	//IN_2		Señal de entrada 2 a la función
	//HYSTER	Variable para señalar el tipo de comparación
	//A_COMPARE	Salida principal de la función
	//A_EQUAL	Salida secundaria de la función

	if(HYSTER==0)
	{
		if(IN_1>=IN_2)
		{
			A_COMPARE=1;
		}
		else
		{
			A_COMPARE=0;
		}
	}
	else if(HYSTER>0)
	{
		if((IN_1>=(IN_2+HYSTER))||(IN_2<(IN_1-HYSTER)))
		{
			A_COMPARE=1;
		}
		else
		{
			A_COMPARE=0;
		}
	}
	else if(HYSTER<0)
	{
		if(IN_1>=IN_2)
		{
			A_COMPARE=1;
		}
		else if((IN_1<(IN_2-abs(HYSTER)))||(IN_2>=(IN_1+abs(HYSTER))))
		{
			A_COMPARE=0;
		}
		else
		{
			A_COMPARE=0;
		}
	}
	else
	{
		A_COMPARE=0;
	}

	if(IN_1==IN_2)
	{
		A_EQUAL=1;
	}
	else
	{
		A_EQUAL=0;
	}
}

void A_FORCE_FUNCTION(int B_ENABLE, double IN, int FINH, int FMD, double TUNE, double A_FORCE, int FRC)
{
	//B_ENABLE	Habilitación de la función
	//IN		Señal analógica de entrada
	//FINH		Inhibición de la función
	//FMD		Modo de forzado
	//TUNE		Valor al que se va a forzar la variable de entrada
	//A_FORCE	Salida Principal de la función
	//FRC		Estatus de la función
	if(B_ENABLE==1)
	{
		if(FINH==1)
		{
			A_FORCE=IN;
			FRC=0;
		}
		else if(FINH==0 && FMD==1)
		{
			FRC=1;
			A_FORCE=TUNE;
		}
	}
	else
	{
		A_FORCE=0;
		FRC=0;
	}
}

double A_LIMITER_FUNCTION(int B_ENABLE, double IN, double IN_LOW, double IN_HI)
{
	double A_LIMITER;
	//B_ENABLE		Habilitación de la función
	//IN			Señal de entrada a la función
	//IN_LOW		Limite inferior de la función
	//IN_HI			Limite superior de la función
	//A_LIMITER		Señal de salida de la función

	if(B_ENABLE==1)
	{
		if(IN>IN_HI)
		{
			A_LIMITER=IN_HI;
		}
		else if(IN<IN_LOW)
		{
			A_LIMITER=IN_LOW;
		}
		else if (IN_LOW>IN_HI)
		{
			if(IN<IN_HI)
			{
				A_LIMITER=IN_LOW;
			}
			else if(IN>IN_HI)
			{
				A_LIMITER=IN_HI;
			}
		}
		else
		{
			A_LIMITER=IN;
		}
	}
	else
	{
		A_LIMITER=0;
	}

	return A_LIMITER;
}

double A_MAX_FUNCTION(double IN_1, double IN_2)
{
	double A_MAX;

	//IN_1		Señal de entrada 1 a la función
	//IN_2		Señal de entrada 2 a la función
	//A_MAX		Salida de la función

	if(IN_1>IN_2)
	{
		A_MAX=IN_1;
	}
	else if(IN_1<IN_2)
	{
		A_MAX=IN_2;
	}
	else
	{
		A_MAX=IN_1;
	}

	return A_MAX;
}

double A_MIN_FUNCTION(double IN_1, double IN_2)
{
	double A_MIN;
	//IN_1		Señal de entrada 1 a la función
	//IN_2		Señal de entrada 2 a la función
	//A_MIN		Salida de la función

	if(IN_1<IN_2)
	{
		A_MIN=IN_1;
	}
	else if(IN_1>IN_2)
	{
		A_MIN=IN_2;
	}
	else
	{
		A_MIN=IN_1;
	}

	return A_MIN;
}

void A_MUX_HSS_FUNCTION(int B_ENABLE, double DEFAULT, double IN_1, int SEL_1, double IN_2, int SEL_2, double IN_3, int SEL_3, double IN_4, int SEL_4, 
						double IN_5, int SEL_5,double IN_6, int SEL_6, double IN_7, int SEL_7, double IN_8, int SEL_8, double IN_9, int SEL_9, 
						double IN_10, int SEL_10,double IN_11, int SEL_11, double IN_12, int SEL_12, double IN_13, int SEL_13, double IN_14, int SEL_14, 
						double IN_15, int SEL_15, double A_MUX_HSS, int INT_SEL)
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
			A_MUX_HSS=IN_1;
			INT_SEL=1;
		}
		else if((IN_2*SEL_2)>((IN_1*SEL_1)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_2;
			INT_SEL=2;
		}
		else if((IN_3*SEL_3)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_3;
			INT_SEL=3;
		}
		else if((IN_4*SEL_4)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_4;
			INT_SEL=4;
		}
		else if((IN_5*SEL_5)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_5;
			INT_SEL=5;
		}
		else if((IN_6*SEL_6)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_6;
			INT_SEL=6;
		}
		else if((IN_7*SEL_7)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_7;
			INT_SEL=7;
		}
		else if((IN_8*SEL_8)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_8;
			INT_SEL=8;
		}
		else if((IN_9*SEL_9)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_9;
			INT_SEL=9;
		}
		else if((IN_10*SEL_10)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_10;
			INT_SEL=10;
		}
		else if((IN_11*SEL_11)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_11;
			INT_SEL=11;
		}
		else if((IN_12*SEL_12)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_13*SEL_13)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_12;
			INT_SEL=12;
		}
		else if((IN_13*SEL_13)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_14*SEL_14)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_13;
			INT_SEL=13;
		}
		else if((IN_14*SEL_14)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_15*SEL_15)))
		{
			A_MUX_HSS=IN_14;
			INT_SEL=14;
		}
		else if((IN_15*SEL_15)>((IN_1*SEL_1)&&(IN_2*SEL_2)&&(IN_3*SEL_3)&&(IN_4*SEL_4)&&(IN_5*SEL_5)&&(IN_6*SEL_6)&&(IN_7*SEL_7)&&(IN_8*SEL_8)&&(IN_9*SEL_9)&&(IN_10*SEL_10)&&(IN_11*SEL_11)&&(IN_12*SEL_12)&&(IN_13*SEL_13)&&(IN_14*SEL_14)))
		{
			A_MUX_HSS=IN_15;
			INT_SEL=15;
		}
		else
		{
			A_MUX_HSS=DEFAULT;
			INT_SEL=0;
		}
	}
	else
	{
		A_MUX_HSS=0;
		INT_SEL=0;
	}
}

double A_MUX_N_1_FUNCTION(int B_ENABLE, int SEL, double IN_1, double IN_2, double IN_3, double IN_4, double IN_5)
{
	double A_MUX_N_1;
	//B_ENABLE		Habilitación de la función
	//SEL			Selector de la salida de la función
	//IN_x			Señales de entrada a la función

	if(B_ENABLE==1)
	{
		if(1<SEL>5)
		{
			A_MUX_N_1=A_MUX_N_1;
		}
		else if(SEL==1)
		{
			A_MUX_N_1=IN_1;
		}
		else if(SEL==2)
		{
			A_MUX_N_1=IN_2;
		}
		else if(SEL==3)
		{
			A_MUX_N_1=IN_3;
		}
		else if(SEL==4)
		{
			A_MUX_N_1=IN_4;
		}
		else if(SEL==5)
		{
			A_MUX_N_1=IN_5;
		}
		else
		{
			A_MUX_N_1=0;
		}
	}
	else
	{
		A_MUX_N_1=0;
	}

	return A_MUX_N_1;
}

void A_MUX_S_N_FUNCTION(int B_ENABLE, int SEL, double IN_1, double DFLT_1, double IN_2, double DFLT_2, double IN_3, double DFLT_3, double IN_4, double DFLT_4, 
						double IN_5, double DFLT_5, double OUT_1, double OUT_2, double OUT_3, double OUT_4, double OUT_5)
{
	//B_ENABLE		Habilitación de la función
	//SEL			Selector del valor que se obtendrá en la salida 1
	//IN_X			Señal de entrada a la función
	//DFLT_X		Valor por default en la salida
	//OUT_X			Señal de salida de la función

	if(B_ENABLE==1)
	{
		if(1<SEL>5)
		{
			OUT_1=DFLT_1;
			OUT_2=DFLT_2;
			OUT_3=DFLT_3;
			OUT_4=DFLT_4;
			OUT_5=DFLT_5;
		}
		else if(SEL_1==1)
		{
			OUT_1=IN_1;
			OUT_2=DFLT_2;
			OUT_3=DFLT_3;
			OUT_4=DFLT_4;
			OUT_5=DFLT_5;
		}
		else if(SEL_1==2)
		{
			OUT_1=DFLT_1;
			OUT_2=IN_1;
			OUT_3=DFLT_3;
			OUT_4=DFLT_4;
			OUT_5=DFLT_5;
		}
		else if(SEL_1==3)
		{
			OUT_1=DFLT_1;
			OUT_2=DFLT_2;
			OUT_3=IN_1;
			OUT_4=DFLT_4;
			OUT_5=DFLT_5;
		}
		else if(SEL_1==4)
		{
			OUT_1=DFLT_1;
			OUT_2=DFLT_2;
			OUT_3=DFLT_3;
			OUT_4=IN_1;
			OUT_5=DFLT_5;
		}
		else if(SEL_1==5)
		{
			OUT_1=DFLT_1;
			OUT_2=DFLT_2;
			OUT_3=DFLT_3;
			OUT_4=DFLT_4;
			OUT_5=IN_1;
		}
	}
	else
	{
		OUT_1=0;
		OUT_2=0;
		OUT_3=0;
		OUT_4=0;
		OUT_5=0;
	}
}

double A_NAME_FUNCTION(double IN)
{
	double A_NAME;
	//IN		Señal de entrada
	//A_NAME	Señal de salida

	A_NAME=IN;

	return A_NAME;
}

double A_SW_FUNCTION(int CTRL, double NC, double NO)
{
	double A_SW;
	//CTRL		Señal de control del switch.
	//NC		Señal de entrada para normalmente cerrado
	//NO		Señal de entrada para normalmente abierto
	//A_SW		Señal de salida de la función

	if(CTRL==1)
	{
		A_SW=NO;
	}
	else
	{
		A_SW=NC;
	}
}

void A_SW_REV_FUNCTION(int CTRL, double DFLT, double IN, double NC, double NO)
{
	//CTRL		Señal de control del switch
	//DFLT		Valor por default de la función
	//IN		Señal de entrada a la función
	//NC		Salida normalmente cerrada de la función
	//NO		Salida normalmente abierta de la función

	if(CTRL==1)
	{
		NC=DFTL;
		NO=IN;
	}
	else
	{
		NC=IN;
		NO=DFLT;
	}
}

int A_TO_16B_FUNCTION()
{
}

void A_TO_INT_FUNCTION(int B_ENABLE, double IN_1, double IN_2, double IN_3, int OUT_1, int OUT_2, int OUT_3)
{
	//B_ENABLE		Habilitación de la función
	//IN_X			Señal de entrada a la función
	//OUT_X			Señal de salida de la función

	if(B_ENABLE==1)
	{
		OUT_1=(int)IN_1;
		OUT_2=(int)IN_2;
		OUT_3=(int)IN_3;
	}
	else
	{
		OUT_1=0;
		OUT_2=0;
		OUT_3=0;
	}
}

void A_TO_T_FUNCTION(double IN, int H, int M, int S)
{
	double div, mult, mult2, b1, b2;
	//IN		Señal de entrada a la función en segundos
	//H			Valor de salida de las horas
	//M			Valor de salida de los minutos
	//S			Valor de salida de los segundos
	//div		Auxiliar para división
	//mult		Auxiliar para multiplicación
	//mult2		Auxiliar para multiplicación 2
	//b1		Auxiliar bandera 1
	//b2		Auxiliar bandera 2

	div=IN/3600;
	H=(int)div;
	b1=div-H;
	mult=b1*60;
	M=(int)mult;
	b2=mult-M;
	S=b2*60;
}

double ABSOLUTE_FUNCTION(double IN)
{
	double ABSOLUTE;
	//IN		Señal de entrada a la función
	//ABSOLUTE	Señal de salida de la función

	ABSOLUTE=abs(IN);

	return ABSOLUTE;
}

double ACCUM_FUNCTION(int ENBL, double INIT_VAL, int RST, double IN_1, int TM_BASE_1, int H, int M, int S, double OUT_1)
{
	double counter=0;
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

	if(ENBL==1)
	{
		if(counter==1000)
		{
			counter=0;
			S=S+1;
			if(S==60)
			{
				S=0;
				M=M+1;
				if(M==60)
				{
					M=0;
					H=H+1;
				}
			}
		}
		else
		{
			counter=counter+0.05;
		}

		if(TM_BASE_1==1 && counter==1000)//Segundos
		{
			OUT_1=OUT_1+IN_1;
		}
		else if(TM_BASE_1==2 && S==60)//Minutos
		{
			OUT_1=OUT_1+IN_1;
		}
		else if(TM_BASE_1==3 && M==60)//Horas
		{
			OUT_1=OUT_1+IN_1;
		}
		else
		{
			OUT_1=OUT_1;
		}
	}
	else if(RST==1)
	{
		H=0;
		M=0;
		S=0;
		OUT=INIT_VAL;
	}
	else
	{
		H=H;
		M=M;
		S=S;
		OUT_1=OUT_1;
	}

}

double ACT_CTRL_FUNCTION()
{
}

double ADD_FUNCTION(int B_ENABLE, double IN_1, double IN_2, double IN_3, double IN_4, double IN_5, double IN_6, double IN_7, double IN_8, double IN_9, double IN_10)
{
	if(B_ENABLE==1)
	{
		return (IN_1+IN_2+IN_3+IN_4+IN_5+IN_6+IN_7+IN_8+IN_9+IN_10);
	}
	else
	{
		return 0;
	}
}


void AI_420_L_FUNCTION(double IN, double OFFSET, double GAIN, double VAL_4, double VAL_20, double LATCH_DLY, double LO_SP, int LO_LATCH, double HI_SP, 
					   int HI_LATCH,int LATCH_OR, double OVRD, int RST, double AI_420_L)
{
	double counter=0;

	counter=counter+0.05;

	if(counter>=LATCH_DLY)
	{
		AI_420_L=((LO_SP+((IN - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;
	}
	else
	{
		AI_420_L=0;
	}

	if(IN>=HI_SP)
	{
		HI_LATCH=1;
	}
	else if(RST==1 && (IN<HI_SP))
	{
		HI_LATCH=0;
	}

	if(FAULT==1 || HI_LATCH==1 || LO_LATCH==1)
	{
		LATCH_OR=1;
	}
	else
	{
		LATCH_OR=0;
	}

	if((IN<LO_SP) && OVRD==0)
	{
		LO_LATCH=1;
	}
	else if(RST==1 && (IN>LO_SP))
	{
		LO_LATCH=0;
	}
}

void AI_COMBO_FUNCTION(int B_ENABLE, int CONF, double OFFSET, double GAIN, double VAL_4, double VAL_20, int LATCH_DLY, double LO_SP, int LO_LATCH, 
					   double LO_L_TIME, double HI_SP, int HI_LATCH, double LATCH_OR, double OVRD, int RST, int ENABLE_TS, int RST_TS, double LO_TS_SP, 
					   int LO_TSEVENT, double LO_TS_TIME, double HI_TS_SP, int HI_TSEVENT, double HI_TS_TIME, int FAULT, double AI_COMBO)
{
	double counter=0;

	counter=counter+0.05;

	if(B_ENABLE==1)
	{
		if(CONF==0)
		{
			if(counter>=LATCH_DLY)
			{
				AI_COMBO=((LO_SP+((IN - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;//Salida Para entradas en volt's de 0-5
			}
			else
			{
				AI_COMBO=0;//Salida Para entradas en volt's de 0-5
			}
		}
		else if(CONF==1)
		{
			if(counter>=LATCH_DLY)
			{
				AI_COMBO=((LO_SP+((IN - VAL_4)*((HI_SP - LO_SP)/(VAL_20 - VAL_4))))+OFFSET)*GAIN;//Salida Para entradas en miliAmpers de 4-20
			}
			else
			{
				AI_COMBO=0;//Salida Para entradas en miliAmpers de 4-20
			}
		}

		if(IN>=HI_SP)
		{
			HI_LATCH=1;
		}
		else if(RST==1 && (IN<HI_SP))
		{
			HI_LATCH=0;
		}

		if(FAULT==1 || HI_LATCH==1 || LO_LATCH==1)
		{
			LATCH_OR=1;
		}
		else
		{
			LATCH_OR=0;
		}

		if((IN<LO_SP) && OVRD==0)
		{
			LO_LATCH=1;
		}
		else if(RST==1 && (IN>LO_SP))
		{
			LO_LATCH=0;
		}
	}
	else
	{
		AI_COMBO=0;
		LO_LATCH=0;
		LATCH_OR=0;
		HI_LATCH=0;
	}
}

double AI_MPU_FUNCTION()
{
}

int AI_MPU_4_FUNCTION()
{
}


void AI_PRESS_FUNCTION(int B_ENABLE, double IN, int COMM_ERR, int ENV_FAULT, double LATCH_DLY, double LO_SP, int LO_LATCH, double HI_SP, int HI_LATCH, 
						 int LATCH_OR, int OVRD, int RST, int FAULT, double AI_PRESS)
{
		double counter=0;

	if(B_ENABLE==1)
	{
		counter=counter+0.05;

		if(counter>=LATCH_DLY)
		{
			AI_PRESS=LO_SP+((IN-0)*((HI_SP-LO_SP)/(1000-0)));
		}
		else
		{
			AI_PRESS=0;
		}

		if(IN>HI_SP)
		{
			HI_LATCH=1;
		}
		else if((IN<HI_SP) && RST==1)
		{
			HI_LATCH=0;
		}

		if(HI_LATCH==1 || LO_LATCH==1)
		{
			LATCH_OR=1;
		}
		else
		{
			LATCH_OR=0;
		}

		if((IN<LO_SP) && OVRD==0)
		{
			LO_LATCH=1;
		}
		else if((IN>LO_SP) && RST==1)
		{
			LO_LATCH=0;
		}

		if(IN>1000)
		{
			ENV_FAULT=1;
		}
		else
		{
			ENV_FAULT=0;
		}
	}
	else
	{
		AI_PRESS=0;
		HI_LATCH=0;
		LATCH_OR=0;
		LO_LATCH=0;
		ENV_FAULT=0;
	}
}


double AI_RTD_L_FUNCTION()
{
}

double AI24_AO8_FUNCTION()
{
}

int AO_ACT_CTL_FUNCTION()
{
}

double AO_COMBO_FUNCTION()
{
}

double AO_FORCE_FUNCTION()
{
}

int B_ALARM_FUNCTION()
{
}

int B_FORCE_FUNCTION()
{
}

int B_FUNCTION_FUNCTION()
{
}

int B_MUX_N_1_FUNCTION()
{
}

int B_MUX_S_N_FUNCTION()
{
}

int B_NAME_FUNCTION()
{
}

int B_SW_FUNCTION()
{
}

int B_SW_REV_FUNCTION()
{
}

char B_TO_STR_FUNCTION()
{
}

int BI_16CH_FUNCTION()
{
}

int BI_L_FUNCTION()
{
}

int BI48_BO24_FUNCTION()
{
}

int BIO_BI_FUNCTION()
{
}

int BIO_BO_FUNCTION()
{
}

int BIO_I_B1_FUNCTION()
{
}

int BIO_I_B2_FUNCTION()
{
}

int BIO_I_B3_FUNCTION()
{
}

int BIO_O_B1_FUNCTION()
{
}

int BIO_O_B2_FUNCTION()
{
}

int BO_FUNCTION()
{
}

int BO_64C_FUNCTION()
{
}

int BO_FORCE_FUNCTION()
{
}

double COUNTER_FUNCTION()
{
}

bool DEADBAND_FUNCTION()
{
}

int DELAY_FUNCTION()
{
}

int DIG_CHAN_FUNCTION()
{
}

int DIG_DRVR_FUNCTION()
{
}

double DIG_RVLV_FUNCTION()
{
}

double DIVIDE_FUNCTION()
{
}

double EGD_A_FUNCTION()
{
}

int EGD_I_FUNCTION()
{
}

double F_TO_C_FUNCTION()
{
}

int GROUP_FLT_FUNCTION()
{
}

double HSS_BUS_FUNCTION()
{
}

int I_ADD_FUNCTION()
{
}

int I_COMPARE_FUNCTION()
{
}

int I_NAME_FUNCTION()
{
}

int I_SW_FUNCTION()
{
}

double I_TO_AN_FUNCTION()
{
}

double INTEGRATE_FUNCTION()
{
}

int IO_FLT_FUNCTION()
{
}

double LAG_FUNCTION()
{
}

double LAG_2_FUNCTION()
{
}

int LATCH_FUNCTION()
{
}

int LATCH_R_FUNCTION()
{
}

int LATCH1_FUNCTION()
{
}

double LSS_BUS_FUNCTION()
{
}

double MULTIPLY_FUNCTION()
{
}

double ONE_SHOT_FUNCTION()
{
}

double PID_FUNCTION()
{
}

double RAMP_FUNCTION()
{
}

double RATE_LIMIT_FUNCTION()
{
}

double SAMP_HOLD_FUNCTION()
{
}

int SFC_STEP_FUNCTION()
{
}

int T_FLIPFLOP_FUNCTION()
{
}

int T_NAME_FUNCTION()
{
}

double T_TO_AN_FUNCTION()
{
}

double T_TO_HMS_FUNCTION()
{
}

double TC_MON_FUNCTION()
{
}

double ZMINUS1_FUNCTION()
{
}

int ZMINUS1_B_FUNCTION()
{
}

