SFC_TIMER_CDC_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_CDC_DLY_R_TIME );
SFC_TIMER_CDC_ACTIVE_AND = AND_FUNCTION( SPEED_SW_N25GT1700_A_COMPARE , SFC_TIMER_CDC_ENBL_OR );
SFC_TIMER_CDC_CMP_I_COMPARE = I_COMPARE_FUNCTION( SFC_TIMER_CDC_DLY_R_TIME , 0 );
SFC_TIMER_CDC_DLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_CDC_ACTIVE_AND , SFC_TIMER_RATECHNG_5_DIVIDE , 0 );
SFC_TIMER_CDC_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_HOTTMRDN_OR );
SFC_TIMER_CDC_ENBL_OR = OR_FUNCTION( SFC_STEP_MOTOR_5_SFC_STEP , SFC_STEP_MOTOR_6_SFC_STEP );
SFC_TIMER_CDC_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_CDC_TIME_MIN );
SFC_TIMER_CDC_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_CDC_CMP_GT );
SFC_TIMER_CDC_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_CDC_TIME_SEC );
SFC_TIMER_CDC_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_CDC_A_OUT_1 );
SFC_TIMER_CDC_TIME_T_TO_HMS = T_TO_HMS_FUNCTION( 0 , SFC_TIMER_CDC_T_A_TO_T );
SFC_TIMER_CD_CMP_I_COMPARE = I_COMPARE_FUNCTION( SHUTDOWN_CLDNTMR_R_TIME , 0 );
SFC_TIMER_CD_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_CD_TIME_MIN );
SFC_TIMER_CD_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_CD_CMP_GT );
SFC_TIMER_CD_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_CD_TIME_SEC );
SFC_TIMER_CD_T_A_TO_T = A_TO_T_FUNCTION( SHUTDOWN_CLDNTMR_A_OUT_1 );
SFC_TIMER_CD_TIME_T_TO_HMS = T_TO_HMS_FUNCTION( 0 , SFC_TIMER_CD_T_A_TO_T );
SFC_TIMER_HISPD_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_HISPD_DLY_R_TIME );
SFC_TIMER_HISPD_DLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_HI_ACTIVE_AND , SFC_TIMER_RATECHNG_4_DIVIDE , 0 );
SFC_TIMER_HISPD_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_HISPD_DLY_DELAY );
SFC_TIMER_HISPD_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_HISPD_TIME_MIN );
SFC_TIMER_HISPD_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_HISPD_TIME_SEC );
SFC_TIMER_HISPD_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_HISPD_A_OUT_1 );
SFC_TIMER_HISPD_TIME_T_TO_HMS = T_TO_HMS_FUNCTION( 0 , SFC_TIMER_HISPD_T_A_TO_T );
SFC_TIMER_HI_ACTIVE_AND = AND_FUNCTION( SPEED_SW_N25GT1700_A_COMPARE , SFC_STEP_HICRANK_4_SFC_STEP );
SFC_TIMER_HOTTMRDN_OR = OR_FUNCTION( SFC_TIMER_HISPD_DN_B_NAME , SFC_TIMER_CDC_DLY_DELAY , FALSE );
SFC_TIMER_HSPDCNK_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_HSPD_CMP_GT );
SFC_TIMER_HSPD_CMP_I_COMPARE = I_COMPARE_FUNCTION( SFC_TIMER_HISPD_DLY_R_TIME , 0 );
SFC_TIMER_LOSPD_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_LOSPD_DLY_R_TIME );
SFC_TIMER_LOSPD_DLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_LO_ACTIVE_AND , SFC_TIMER_RATECHNG_3_DIVIDE , 0 );
SFC_TIMER_LOSPD_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_LOSPD_DLY_DELAY );
SFC_TIMER_LOSPD_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_LOSPD_TIME_MIN );
SFC_TIMER_LOSPD_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_LOSPD_TIME_SEC );
SFC_TIMER_LOSPD_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_LOSPD_A_OUT_1 );
SFC_TIMER_LOSPD_TIME_T_TO_HMS = T_TO_HMS_FUNCTION( 0 , SFC_TIMER_LOSPD_T_A_TO_T );
SFC_TIMER_LO_ACTIVE_AND = AND_FUNCTION( SPEED_SW_N25GT1000_A_COMPARE , SFC_STEP_LOCRANK_4_SFC_STEP );
SFC_TIMER_LSPDCNK_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_LSPD_CMP_GT );
SFC_TIMER_LSPD_CMP_I_COMPARE = I_COMPARE_FUNCTION( SFC_TIMER_LOSPD_DLY_R_TIME , 0 );
SFC_TIMER_RATECHNG_3_DIVIDE = DIVIDE_FUNCTION( 0 , TIMERS_LOSPDCNK_A_MULTIPLY , SFC_TIMER_RATESW_3_A_SW );
SFC_TIMER_RATECHNG_4_DIVIDE = DIVIDE_FUNCTION( 0 , TIMERS_HISPDCNK_A_MULTIPLY , SFC_TIMER_RATE_SW4_A_SW );
SFC_TIMER_RATECHNG_5_DIVIDE = DIVIDE_FUNCTION( 0 , TIMERS_CDC_TM_A_MULTIPLY , SFC_TIMER_RATE_SW5_A_SW );
SFC_TIMER_RATESW_3_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , 5_0 );
SFC_TIMER_RATE_SW4_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , 5_0 );
SFC_TIMER_RATE_SW5_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , *15_0 (1_0, 30_0) );
