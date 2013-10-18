GROUP_01_N1N8_RTD_AI_RTD_6CH = AI_RTD_6CH_FUNCTION( N1N8_RTD_TE6123B , 0 , 0 , N1N8_RTD_TE6124B , 0 , 0 , N1N8_RTD_TE6125B , 0 , 0 , N1N8_RTD_TE6186B , 0 , 0 , N1N8_RTD_TE6141B , 0 , 0 , N1N8_RTD_TE6142B , 0 , 0 , N1N8_RTD_NODE_STAT );
HMI_INTER_N1N8_TMPS_F_TO_C = F_TO_C_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_TE6123B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6123B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_1 );
HMI_INTER_TE6124B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6124B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_2 );
HMI_INTER_TE6125B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6125B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_3 );
HMI_INTER_TE6141B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6141B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_5 );
HMI_INTER_TE6142B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6142B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_6 );
HMI_INTER_TE6186B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6186B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_4 );
N1N8_RTD_NDE_FLT_SD_AND = AND_FUNCTION( N1N8_RTD_NODE_FLT_OR , *TRUE );
N1N8_RTD_NODE_FAULT_AND = AND_FUNCTION( N1N8_RTD_NODE_FLT_OR , 0 );
N1N8_RTD_NODE_FLT_OR = OR_FUNCTION( N1N8_RTD_NODE_STAT_NO_MESS , N1N8_RTD_NODE_STAT_ADDR_FLT , N1N8_RTD_NODE_STAT_TYPE_FLT , N1N8_RTD_NODE_STAT_FAULT , 0 );
N1N8_RTD_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( ALARM_RESET_B_NAME );
N1N8_RTD_TE6123B_AI_RTD_L = AI_RTD_L_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
