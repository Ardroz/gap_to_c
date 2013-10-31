GROUP_01_N1N7_RTD_AI_RTD_6CH = AI_RTD_6CH_FUNCTION( N1N7_RTD_TE6123A , 0 , 0 , N1N7_RTD_TE6124A , 0 , 0 , N1N7_RTD_TE6125A , 0 , 0 , N1N7_RTD_TE6186A , 0 , 0 , N1N7_RTD_TE6141A , 0 , 0 , N1N7_RTD_TE6142A , 0 , 0 , N1N7_RTD_NODE_STAT );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_1" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_2" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_3" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_4" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_5" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_N1N7_TMPS_F_TO_C = F_TO_C_FUNCTION( "OUT_6" , 0 , N1N7_RTD_TE6123A_AI_RTD_L , N1N7_RTD_TE6124A_AI_RTD_L , N1N7_RTD_TE6125A_AI_RTD_L , N1N7_RTD_TE6186A_AI_RTD_L , N1N7_RTD_TE6141A_AI_RTD_L , N1N7_RTD_TE6142A_AI_RTD_L );
HMI_INTER_TE6123A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6123A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_1 );
HMI_INTER_TE6124A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6124A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_2 );
HMI_INTER_TE6125A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6125A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_3 );
HMI_INTER_TE6141A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6141A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_5 );
HMI_INTER_TE6142A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6142A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_6 );
HMI_INTER_TE6186A_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N7_RTD_TE6186A_AI_RTD_L , HMI_INTER_N1N7_TMPS_OUT_4 );
N1N7_RTD_NDE_FLT_SD_AND = AND_FUNCTION( N1N7_RTD_NODE_FLT_OR , *TRUE );
N1N7_RTD_NODE_FAULT_AND = AND_FUNCTION( N1N7_RTD_NODE_FLT_OR , 0 );
N1N7_RTD_NODE_FLT_OR = OR_FUNCTION( N1N7_RTD_NODE_STAT_NO_MESS , N1N7_RTD_NODE_STAT_ADDR_FLT , N1N7_RTD_NODE_STAT_TYPE_FLT , N1N7_RTD_NODE_STAT_FAULT , 0 );
N1N7_RTD_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "NO_MESS" , ALARM_RESET_B_NAME );
N1N7_RTD_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "ADDR_FLT" , ALARM_RESET_B_NAME );
N1N7_RTD_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "TYPE_FLT" , ALARM_RESET_B_NAME );
N1N7_RTD_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "FAULT" , ALARM_RESET_B_NAME );
N1N7_RTD_TE6123A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6123A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6123A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6123A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6123A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6124A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6124A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6124A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6124A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6124A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6125A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6125A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6125A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6125A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6125A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6141A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6141A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6141A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6141A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6141A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6142A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6142A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6142A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6142A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6142A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6186A_AI_RTD_L = AI_RTD_L_FUNCTION( "AI_RTD_L" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6186A_AI_RTD_L = AI_RTD_L_FUNCTION( "LO_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6186A_AI_RTD_L = AI_RTD_L_FUNCTION( "HI_LATCH" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6186A_AI_RTD_L = AI_RTD_L_FUNCTION( "LATCH_OR" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N7_RTD_TE6186A_AI_RTD_L = AI_RTD_L_FUNCTION( "FAULT" , 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );