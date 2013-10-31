GP1_CALC_DP07_F_A_A_NAME = A_NAME_FUNCTION( 0_0192 );
GP1_CALC_DP1_A_NAME = A_NAME_FUNCTION( 2_5 );
GP1_CALC_DP2_A_NAME = A_NAME_FUNCTION( 7_0 );
GP1_CALC_DP3_A_NAME = A_NAME_FUNCTION( 0_0 );
GP1_CALC_DP4_A_NAME = A_NAME_FUNCTION( 0_0 );
GP1_CALC_DP5_A_NAME = A_NAME_FUNCTION( 0_0 );
GP1_CALC_DP_A_OTR_CALCULATE = CALCULATE_FUNCTION( "CALCULATE" , GP1_CALC_DP07_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , CORE_ANALOG_WFOREFGS , W107 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP3_A_NAME , L3 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W107*W107)*f*T/(P*SG))*L3 , 0 , 0 );
GP1_CALC_DP_A_OTR_CALCULATE = CALCULATE_FUNCTION( "ALM" , GP1_CALC_DP07_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , CORE_ANALOG_WFOREFGS , W107 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP3_A_NAME , L3 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W107*W107)*f*T/(P*SG))*L3 , 0 , 0 );
GP1_CALC_DP_B_OTR_CALCULATE = CALCULATE_FUNCTION( "CALCULATE" , 0 , 0 , GP1_CALC_DP07_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , CORE_ANALOG_WFOREFGS , W107 , A2_A05_PI_PT62139B_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP3_A_NAME , L3 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W107*W107)*f*T/(P*SG))*L3 );
GP1_CALC_DP_B_OTR_CALCULATE = CALCULATE_FUNCTION( "ALM" , 0 , 0 , GP1_CALC_DP07_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , CORE_ANALOG_WFOREFGS , W107 , A2_A05_PI_PT62139B_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP3_A_NAME , L3 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W107*W107)*f*T/(P*SG))*L3 );
GP1_CALC_GP1OA_A_NAME = A_NAME_FUNCTION( GP1_CALC_GP1OA_SW2_A_SW );
GP1_CALC_GP1OASUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , A2_A04_PI_PT62139A_AI_PRESS , GP1_CALC_DP_A_OTR_CALCULATE );
GP1_CALC_GP1OA_SW1_A_SW = A_SW_FUNCTION( GP1_CALC_GP1OASUB_SUBTRACT , A2_A04_PI_PT62139A_AI_PRESS , TRUE );
GP1_CALC_GP1OA_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1OA_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
GP1_CALC_GP1OB_A_NAME = A_NAME_FUNCTION( GP1_CALC_GP1OB_SW2_A_SW );
GP1_CALC_GP1OBSUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , A2_A05_PI_PT62139B_AI_PRESS , GP1_CALC_DP_B_OTR_CALCULATE );
GP1_CALC_GP1OB_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1OBSUB_SUBTRACT , A2_A05_PI_PT62139B_AI_PRESS );
GP1_CALC_GP1OB_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1OB_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
GP1_CALC_TF_RANKIN_ADD = ADD_FUNCTION( 0 , 459_9 , CORE_ANALOG_TGSSEL );
GP1_CALC_WF36TOT_ADD = ADD_FUNCTION( 0 , CORE_ANALOG_WFPREFGS , CORE_ANALOG_WFIREFGS , CORE_ANALOG_WFOREFGS );
GP1_CALC_W_209_SUBTRACT = SUBTRACT_FUNCTION( 0 , GP1_CALC_WF36TOT_ADD , CORE_ANALOG_WFOREFGS );
HMI_INTER_PT62139A_CALC_PLUS = CALC_PLUS_FUNCTION( "ALM" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139A_CALC_PLUS = CALC_PLUS_FUNCTION( "A_OUT_1" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139A_CALC_PLUS = CALC_PLUS_FUNCTION( "I_OUT_1" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139A_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_1" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139B_CALC_PLUS = CALC_PLUS_FUNCTION( "ALM" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139B_CALC_PLUS = CALC_PLUS_FUNCTION( "A_OUT_1" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62139B_CALC_PLUS = CALC_PLUS_FUNCTION( "I_OUT_1" , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1OB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );