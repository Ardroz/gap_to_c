GP1_CALC_DP09_F_A_A_NAME = A_NAME_FUNCTION( 0_0192 );
GP1_CALC_DP_A_INR_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFIREFGS , W109 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP5_A_NAME , L5 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , GP1_CALC_RAM2A_CALCULATE , DPRAM2 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W109*W109)*f*T/(P*SG))*L5- , DPRAM1-DPRAM2 );
GP1_CALC_DP_A_INR_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , GP1_CALC_WF36TOT_ADD , W309 , GP1_CALC_W_209_SUBTRACT , W209 , CORE_ANALOG_WFIREFGS , W109 , A2_A04_PI_PT62139A_AI_PRESS , P , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , GP1_CALC_DP2_A_NAME , L2 , GP1_CALC_DP5_A_NAME , L5 , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , GP1_CALC_RAM2A_CALCULATE , DPRAM2 , (4_5404e-8*(W309*W309)*f*T/(P*SG))*L1+ , (4_5404e-8*(W209*W209)*f*T/(P*SG))*L2+ , (4_5404e-8*(W109*W109)*f*T/(P*SG))*L5- , DPRAM1-DPRAM2 );
GP1_CALC_GP1IA_A_NAME = A_NAME_FUNCTION( GP1_CALC_GP1IA_SW2_A_SW );
GP1_CALC_GP1IASUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , A2_A04_PI_PT62139A_AI_PRESS , GP1_CALC_DP_A_INR_CALCULATE );
GP1_CALC_GP1IA_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1IASUB_SUBTRACT , A2_A04_PI_PT62141A_AI_PRESS );
GP1_CALC_GP1IA_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1IA_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
GP1_CALC_RAM1A_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_WF36TOT_ADD , Wt , CORE_ANALOG_WFOREFGS , Wa , A2_A04_PI_PT62139A_AI_PRESS , P1T , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , (Wt/10000)*(Wt/10000)*(Wa/Wt)* , (295_5/(P1T-((4_5404E-8*f*Wt*Wt*T/ , (P1T*SG))*L1)))*3_0*(1/SG) );
GP1_CALC_RAM1A_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_WF36TOT_ADD , Wt , CORE_ANALOG_WFOREFGS , Wa , A2_A04_PI_PT62139A_AI_PRESS , P1T , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , (Wt/10000)*(Wt/10000)*(Wa/Wt)* , (295_5/(P1T-((4_5404E-8*f*Wt*Wt*T/ , (P1T*SG))*L1)))*3_0*(1/SG) );
GP1_CALC_RAM2A_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_WF36TOT_ADD , Wt , CORE_ANALOG_WFOREFGS , Wa , A2_A04_PI_PT62139A_AI_PRESS , P1T , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , CORE_ANALOG_WFPREFGS , Wb , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , CORE_ANALOG_WFIREFGS , Wc , GP1_CALC_DP2_A_NAME , L2 , ((Wt-Wa)/10000)*((Wt-Wa)/10000)* , (Wb/(Wt-Wa))* , (295_5/(P1T-((4_5404e-8*f*Wt*Wt*T/ , (P1T*SG))*L1)- , ((4_5404e-8*f*(Wc+Wb)*(Wc+Wb)*T/ , (P1T*SG))*L2)+DPRAM1))*1_75*(1/SG) );
GP1_CALC_RAM2A_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_WF36TOT_ADD , Wt , CORE_ANALOG_WFOREFGS , Wa , A2_A04_PI_PT62139A_AI_PRESS , P1T , GP1_CALC_DP09_F_A_A_NAME , f , GP1_CALC_TF_RANKIN_ADD , T , CORE_ANALOG_SGSEL , SG , GP1_CALC_DP1_A_NAME , L1 , CORE_ANALOG_WFPREFGS , Wb , GP1_CALC_RAM1A_CALCULATE , DPRAM1 , CORE_ANALOG_WFIREFGS , Wc , GP1_CALC_DP2_A_NAME , L2 , ((Wt-Wa)/10000)*((Wt-Wa)/10000)* , (Wb/(Wt-Wa))* , (295_5/(P1T-((4_5404e-8*f*Wt*Wt*T/ , (P1T*SG))*L1)- , ((4_5404e-8*f*(Wc+Wb)*(Wc+Wb)*T/ , (P1T*SG))*L2)+DPRAM1))*1_75*(1/SG) );
HMI_INTER_PT62141A_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1IA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62141A_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1IA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
HMI_INTER_PT62141A_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , GP1_CALC_GP1IA_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } );
