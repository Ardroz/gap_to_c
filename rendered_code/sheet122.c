GP1_CALC_DP08_F_A_A_NAME = 0.0192;
GP1_CALC_DP_A_PIL_CALCULATE =  ( 4.5404e - 8 *  (GP1_CALC_WF36TOT_ADD *GP1_CALC_WF36TOT_ADD )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A04_PI_PT62139A_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP1_A_NAME +     ( 4.5404e - 8 *  (GP1_CALC_W_209_SUBTRACT *GP1_CALC_W_209_SUBTRACT )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A04_PI_PT62139A_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP2_A_NAME +     ( 4.5404e - 8 *  (CORE_ANALOG_WFPREFGS *CORE_ANALOG_WFPREFGS )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A04_PI_PT62139A_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP4_A_NAME -    DPRAM1;
GP1_CALC_DP_B_PIL_CALCULATE =  ( 4.5404e - 8 *  (GP1_CALC_WF36TOT_ADD *GP1_CALC_WF36TOT_ADD )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A05_PI_PT62139B_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP1_A_NAME +     ( 4.5404e - 8 *  (GP1_CALC_W_209_SUBTRACT *GP1_CALC_W_209_SUBTRACT )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A05_PI_PT62139B_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP2_A_NAME +     ( 4.5404e - 8 *  (CORE_ANALOG_WFPREFGS *CORE_ANALOG_WFPREFGS )  *GP1_CALC_DP08_F_A_A_NAME *GP1_CALC_TF_RANKIN_ADD /  (A2_A05_PI_PT62139B_AI_PRESS *CORE_ANALOG_SGSEL )  )  *GP1_CALC_DP4_A_NAME -    DPRAM1;
GP1_CALC_GP1PA_A_NAME = GP1_CALC_GP1PA_SW2_A_SW;
GP1_CALC_GP1PASUB_SUBTRACT = A2_A04_PI_PT62139A_AI_PRESS - GP1_CALC_DP_A_PIL_CALCULATE;
GP1_CALC_GP1PA_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1PASUB_SUBTRACT , A2_A04_PI_PT62140A_AI_PRESS );
GP1_CALC_GP1PA_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1PA_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
GP1_CALC_GP1PB_A_NAME = GP1_CALC_GP1PB_SW2_A_SW;
GP1_CALC_GP1PBSUB_SUBTRACT = A2_A05_PI_PT62139B_AI_PRESS - GP1_CALC_DP_B_PIL_CALCULATE;
GP1_CALC_GP1PB_SW1_A_SW = A_SW_FUNCTION( TRUE , GP1_CALC_GP1PBSUB_SUBTRACT , A2_A05_PI_PT62140B_AI_PRESS );
GP1_CALC_GP1PB_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GP1_CALC_GP1PB_SW1_A_SW , N1N1_AI_PT6227_AI_420_L );
if ( HMI_INTER_ENG_SI_B_NAME )   { HMI_INTER_PT62140A_A_OUT_1 = ( GP1_CALC_GP1PA_A_NAME*6.894757293 ); }   else   { HMI_INTER_PT62140A_A_OUT_1 = GP1_CALC_GP1PA_A_NAME; };
if ( HMI_INTER_ENG_SI_B_NAME )   { HMI_INTER_PT62140B_A_OUT_1 = ( GP1_CALC_GP1PB_A_NAME*6.894757293 ); }   else   { HMI_INTER_PT62140B_A_OUT_1 = GP1_CALC_GP1PB_A_NAME; };
