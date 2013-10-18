GROUP_01_N1N10_RTD_AI_RTD_6CH = AI_RTD_6CH_FUNCTION( N1N10_RTD_TE64033 , 0 , 0 , N1N10_RTD_TE64032 , 0 , 0 , N1N10_RTD_TE64031 , 0 , 0 , N1N10_RTD_TE64030 , 0 , 0 , N1N10_RTD_TE6450 , 0 , 0 , N1N10_RTD_TE6499 , 0 , 0 , N1N10_RTD_NODE_STAT );
HMI_INTER_N1N10_TMPS_OUT_1 = OUT_1_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_N1N10_TMPS_OUT_2 = OUT_2_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_N1N10_TMPS_OUT_3 = OUT_3_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_N1N10_TMPS_OUT_4 = OUT_4_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_N1N10_TMPS_OUT_5 = OUT_5_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_N1N10_TMPS_OUT_6 = OUT_6_FUNCTION( 0 , N1N10_RTD_TE64033_AI_RTD_L , N1N10_RTD_TE64032_AI_RTD_L , N1N10_RTD_TE64031_AI_RTD_L , N1N10_RTD_TE64030_AI_RTD_L , N1N10_RTD_TE6450_AI_RTD_L , N1N10_RTD_TE6499_AI_RTD_L );
HMI_INTER_TE64030_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE64030_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_4 );
HMI_INTER_TE64031_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE64031_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_3 );
HMI_INTER_TE64032_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE64032_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_2 );
HMI_INTER_TE64033_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE64033_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_1 );
HMI_INTER_TE6450_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE6450_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_5 );
HMI_INTER_TE6499_A_SW = A_SW_FUNCTION( HMI_INTER_ENG_SI_B_NAME , N1N10_RTD_TE6499_AI_RTD_L , HMI_INTER_N1N10_TMPS_OUT_6 );
N1N10_RTD_NDE_FLT_SD_AND = AND_FUNCTION( N1N10_RTD_NODE_FLT_OR , 0 );
N1N10_RTD_NODE_FAULT_AND = AND_FUNCTION( N1N10_RTD_NODE_FLT_OR , *TRUE );
N1N10_RTD_NODE_FLT_OR = OR_FUNCTION( N1N10_RTD_NODE_STAT_NO_MESS , N1N10_RTD_NODE_STAT_ADDR_FLT , N1N10_RTD_NODE_STAT_TYPE_FLT , N1N10_RTD_NODE_STAT_FAULT , 0 );
N1N10_RTD_NODE_STAT_NO_MESS = NO_MESS_FUNCTION( ALARM_RESET_B_NAME );
N1N10_RTD_NODE_STAT_ADDR_FLT = ADDR_FLT_FUNCTION( ALARM_RESET_B_NAME );
N1N10_RTD_NODE_STAT_TYPE_FLT = TYPE_FLT_FUNCTION( ALARM_RESET_B_NAME );
N1N10_RTD_NODE_STAT_FAULT = FAULT_FUNCTION( ALARM_RESET_B_NAME );
N1N10_RTD_TE64030_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64030_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64030_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64030_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64030_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64031_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64031_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64031_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64031_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64031_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64032_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64032_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64032_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64032_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64032_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64033_HI_LATCH = HI_LATCH_FUNCTION( 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , 380_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64033_LATCH_OR = LATCH_OR_FUNCTION( 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , 380_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64033_FAULT = FAULT_FUNCTION( 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , 380_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64033_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , 380_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE64033_LO_LATCH = LO_LATCH_FUNCTION( 0 , ALARM_RESET_B_NAME , 0 , 0 , "F" , 0 , -40_0 , 380_0 , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6450_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6450_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6450_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6450_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6450_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6499_AI_RTD_L = AI_RTD_L_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6499_LO_LATCH = LO_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6499_HI_LATCH = HI_LATCH_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6499_LATCH_OR = LATCH_OR_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
N1N10_RTD_TE6499_FAULT = FAULT_FUNCTION( 0 , 0 , "F" , 0 , -40_0 , 380_0 , 0 , ALARM_RESET_B_NAME , *0_0 (-100_0, 100_0) , *1_0 (0_8, 1_2) );
