GP1_CALC_DP08_F_A_A_NAME = A_NAME_FUNCTION( 0_0192 );
GP1_CALC_DP_A_PIL_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_DP08_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFPREFGS , W108 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP4_A_NAME , L4 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W108*W108)*f*T/(P*SG))*L4- , DPRAM1 );
GP1_CALC_DP_A_PIL_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_DP08_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFPREFGS , W108 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP4_A_NAME , L4 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W108*W108)*f*T/(P*SG))*L4- , DPRAM1 );
GP1_CALC_DP_B_PIL_CALCULATE = CALCULATE_FUNCTION( CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP4_A_NAME , L4 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W108*W108)*f*T/(P*SG))*L4- , DPRAM1 , 0 , 0 , GP1_CALC_DP08_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFPREFGS , W108 , A2_A05_PI_PT62139B_AI_PRESS , P );
GP1_CALC_DP_B_PIL_ALM = ALM_FUNCTION( CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP4_A_NAME , L4 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W108*W108)*f*T/(P*SG))*L4- , DPRAM1 , 0 , 0 , GP1_CALC_DP08_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFPREFGS , W108 , A2_A05_PI_PT62139B_AI_PRESS , P );
GP1_CALC_GP1PA_A_NAME = A_NAME_FUNCTION( GP1_CALC_GP1PA_SW2_A_SW );
GP1_CALC_GP1PASUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , A2_A04_PI_PT62139A_AI_PRESS , GP1_CALC_DP_A_PIL_CALCULATE );
GP1_CALC_GP1PA_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1PASUB_SUBTRACT , A2_A04_PI_PT62140A_AI_PRESS );
GP1_CALC_GP1PA_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1PA_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
GP1_CALC_GP1PB_A_NAME = A_NAME_FUNCTION( GP1_CALC_GP1PB_SW2_A_SW );
GP1_CALC_GP1PBSUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , A2_A05_PI_PT62139B_AI_PRESS , GP1_CALC_DP_B_PIL_CALCULATE );
GP1_CALC_GP1PB_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1PBSUB_SUBTRACT , A2_A05_PI_PT62140B_AI_PRESS );
GP1_CALC_GP1PB_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1PB_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
HMI_INTER_PT62140A_ALM = ALM_FUNCTION( { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) );
HMI_INTER_PT62140A_A_OUT_1 = A_OUT_1_FUNCTION( { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) );
HMI_INTER_PT62140A_I_OUT_1 = I_OUT_1_FUNCTION( { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) );
HMI_INTER_PT62140A_B_OUT_1 = B_OUT_1_FUNCTION( { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) );
HMI_INTER_PT62140B_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62140B_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62140B_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62140B_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1PB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
