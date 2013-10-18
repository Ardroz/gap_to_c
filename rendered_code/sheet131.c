GROUP_01_N1N8_RTD_AI_RTD_6CH = AI_RTD_6CH_FUNCTION( N1N8_RTD_TE6123B , 0 , 0 , N1N8_RTD_TE6124B , 0 , 0 , N1N8_RTD_TE6125B , 0 , 0 , N1N8_RTD_TE6186B , 0 , 0 , N1N8_RTD_TE6141B , 0 , 0 , N1N8_RTD_TE6142B , 0 , 0 , N1N8_RTD_NODE_STAT );
HMI_INTER_N1N8_TMPS_OUT_1 = OUT_1_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_N1N8_TMPS_OUT_2 = OUT_2_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_N1N8_TMPS_OUT_3 = OUT_3_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_N1N8_TMPS_OUT_4 = OUT_4_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_N1N8_TMPS_OUT_5 = OUT_5_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_N1N8_TMPS_OUT_6 = OUT_6_FUNCTION( 0 , N1N8_RTD_TE6123B_AI_RTD_L , N1N8_RTD_TE6124B_AI_RTD_L , N1N8_RTD_TE6125B_AI_RTD_L , N1N8_RTD_TE6186B_AI_RTD_L , N1N8_RTD_TE6141B_AI_RTD_L , N1N8_RTD_TE6142B_AI_RTD_L );
HMI_INTER_TE6123B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6123B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_1 );
HMI_INTER_TE6124B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6124B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_2 );
HMI_INTER_TE6125B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6125B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_3 );
HMI_INTER_TE6141B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6141B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_5 );
HMI_INTER_TE6142B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6142B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_6 );
HMI_INTER_TE6186B_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N8_RTD_TE6186B_AI_RTD_L , HMI_INTER_N1N8_TMPS_OUT_4 );
N1N8_RTD_NDE_FLT_SD_AND = AND_FUNCTION( N1N8_RTD_NODE_FLT_OR , *TRUE );
N1N8_RTD_NODE_FAULT_AND = AND_FUNCTION( N1N8_RTD_NODE_FLT_OR , 0 );
N1N8_RTD_NODE_FLT_OR = OR_FUNCTION( N1N8_RTD_NODE_STAT_NO_MESS , N1N8_RTD_NODE_STAT_ADDR_FLT , N1N8_RTD_NODE_STAT_TYPE_FLT , N1N8_RTD_NODE_STAT_FAULT , 0 );
N1N8_RTD_NODE_STAT_NO_MESS = NO_MESS_FUNCTION( ALARM_RESET_B_NAME );
N1N8_RTD_NODE_STAT_ADDR_FLT = ADDR_FLT_FUNCTION( ALARM_RESET_B_NAME );
N1N8_RTD_NODE_STAT_TYPE_FLT = TYPE_FLT_FUNCTION( ALARM_RESET_B_NAME );
N1N8_RTD_NODE_STAT_FAULT = FAULT_FUNCTION( ALARM_RESET_B_NAME );
N1N8_RTD_TE6123B_LO_LATCH = LO_LATCH_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6123B_HI_LATCH = HI_LATCH_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6123B_LATCH_OR = LATCH_OR_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6123B_FAULT = FAULT_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6123B_AI_RTD_L = AI_RTD_L_FUNCTION( 380_0 , 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6124B_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6125B_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6141B_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6142B_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N8_RTD_TE6186B_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
