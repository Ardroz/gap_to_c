I_P48_ESTENA_AND = ADJ_P48ESTENSW_B_NAME && I_P48_P48FLTLTCH_LATCH;
I_P48_N_P48ENA_NOT =! ADJ_P48ESTENSW_B_NAME;
I_P48_OVRD_P48HI_OR = I_P48_N_P48ENA_NOT;
I_P48_P48_A_NAME = I_P48_P48TESTBS_ADD;
B_ALARM_FUNCTION(1 , 0 , 0.6 , ADJ_P48ESTENSW_B_NAME , I_P48_P48FLT_OR , RESET_RESET_B_NAME,&I_P48_P48FAIL_B_ALARM,&I_P48_P48FAIL_HORN,&I_P48_P48FAIL_LIGHT);
I_P48_P48FLT_OR = I_P48_P48VAL_HI_LIM_I || I_P48_P48VAL_LO_LIM_I || IFACE_HDWR_P48VST;
I_P48_P48FLTLTCH_LATCH = LATCH_FUNCTION(1,I_P48_P48FLT_OR,RESET_RESET_B_NAME,I_P48_P48FLTLTCH_LATCH);
A_COMPARE_FUNCTION(0 , I_P48_P48TESTBS_ADD , I_P48EST_P48ESTHI_A_NAME,&I_P48_P48GTHIEST_A_COMPARE,&I_P48_P48GTHIEST_A_EQUAL);
I_P48_P48HIALM_B_NAME = I_P48_P48HIOVRD_B_ALARM;
B_ALARM_FUNCTION(1 , 0 , 2 , I_P48_OVRD_P48HI_OR , I_P48_P48GTHIEST_A_COMPARE , RESET_RESET_B_NAME,&I_P48_P48HIOVRD_B_ALARM,&I_P48_P48HIOVRD_HORN,&I_P48_P48HIOVRD_LIGHT);
A_MUX_HSS_FUNCTION(1 , 14.69 , I_P48_ESTENA_AND , I_P48_P48FAIL_B_ALARM , I_P48_P48VAL_HSS_BUS , I_P48EST_P48EST_A_NAME,&I_P48_P48ISPS_A_MUX_HSS,&I_P48_P48ISPS_INT_SEL);
I_P48_P48LOSSDM_B_NAME = I_P48_P48FAIL_B_ALARM;
I_P48_P48LOSW_A_SW = A_SW_FUNCTION( 8 , ADJ_P48ESTENSW_B_NAME , I_P48EST_P48ESTLO_A_NAME );
I_P48_P48SEL_A_NAME = I_P48_P48ISPS_A_MUX_HSS;
I_P48_P48TESTBS_ADD = ADJ_P48TESTJA_A_NAME + IFACE_HDWR_P48;
HSS_BUS_FUNCTION(1 , 140 , I_P48_P48LOSW_A_SW , I_P48_P48TESTBS_ADD , I_P48_P48TESTBS_ADD,&I_P48_P48VAL_HI_LIM_I,&I_P48_P48VAL_HSS_BUS,&I_P48_P48VAL_LO_LIM_I,&I_P48_P48VAL_SEL_1,&I_P48_P48VAL_SEL_2);
