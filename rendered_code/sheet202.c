SFC_TIMER_RATECHNG_6_DIVIDE = DIVIDE_FUNCTION( 0 , TIMERS_FRLK_SEC_MULTIPLY , SFC_TIMER_RATE_SW6_A_SW );
SFC_TIMER_RATE_SW6_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , *120_0 (60_0, 240_0) );
SFC_TIMER_TENMNCLR_T_A_TO_T = A_TO_T_FUNCTION( SHUTDOWN_TENMNCLRTM_A_NAME );
SFC_TIMER_TEN_CLRMIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_TEN_MN_TIM_MIN );
SFC_TIMER_TEN_CLRSEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_TEN_MN_TIM_SEC );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "YEAR" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "MONTH" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "DAY" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "HOUR" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "MIN" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "SEC" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SFC_TIMER_TEN_MN_TIM_T_TO_HMS = T_TO_HMS_FUNCTION( "MICROSEC" , 0 , SFC_TIMER_TENMNCLR_T_A_TO_T );
SHUTDOWN_CNVRTTIME2_I_TO_AN = I_TO_AN_FUNCTION( 0 , SHUTDOWN_FRLOCKTMR_R_TIME );
SHUTDOWN_FRLKTMRDN_B_NAME = B_NAME_FUNCTION( SHUTDOWN_FRLOCKTMR_DELAY );
SHUTDOWN_FRLOCKTMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SHUTDOWN_FOURHRLOK_B_NAME , SFC_TIMER_RATECHNG_6_DIVIDE , 0 );
SHUTDOWN_FRLOCKTMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SHUTDOWN_FOURHRLOK_B_NAME , SFC_TIMER_RATECHNG_6_DIVIDE , 0 );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "YEAR" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "MONTH" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "DAY" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "HOUR" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "MIN" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "SEC" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOKTM_T_TO_HMS = T_TO_HMS_FUNCTION( "MICROSEC" , 0 , SHUTDOWN_FRLOK_T_A_TO_T );
SHUTDOWN_FRLOK_HOUR_A_NAME = A_NAME_FUNCTION( SHUTDOWN_FRLOKTM_HOUR );
SHUTDOWN_FRLOK_MIN_A_NAME = A_NAME_FUNCTION( SHUTDOWN_FRLOKTM_MIN );
SHUTDOWN_FRLOK_SEC_A_NAME = A_NAME_FUNCTION( SHUTDOWN_FRLOKTM_SEC );
SHUTDOWN_FRLOK_T_A_TO_T = A_TO_T_FUNCTION( SHUTDOWN_CNVRTTIME2_OUT_1 );