SFC_TIMER_RATECHNG_6_DIVIDE = TIMERS_FRLK_SEC_MULTIPLY / SFC_TIMER_RATE_SW6_A_SW;
SFC_TIMER_RATE_SW6_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1.0 , 120 );
SFC_TIMER_TENMNCLR_T_A_TO_T = A_TO_T_FUNCTION( SHUTDOWN_TENMNCLRTM_A_NAME );
SFC_TIMER_TEN_CLRMIN_A_NAME = SFC_TIMER_TEN_MN_TIM_MIN;
SFC_TIMER_TEN_CLRSEC_A_NAME = SFC_TIMER_TEN_MN_TIM_SEC;
T_TO_HMS_FUNCTION(1 , SFC_TIMER_TENMNCLR_T_A_TO_T,&SFC_TIMER_TEN_MN_TIM_DAY,&SFC_TIMER_TEN_MN_TIM_HOUR,&SFC_TIMER_TEN_MN_TIM_MICROSEC,&SFC_TIMER_TEN_MN_TIM_MIN,&SFC_TIMER_TEN_MN_TIM_MONTH,&SFC_TIMER_TEN_MN_TIM_SEC,&SFC_TIMER_TEN_MN_TIM_YEAR);
SHUTDOWN_CNVRTTIME2_OUT_1 = (double)SHUTDOWN_FRLOCKTMR_R_TIME;
SHUTDOWN_FRLKTMRDN_B_NAME = SHUTDOWN_FRLOCKTMR_DELAY;
DELAY_FUNCTION(1 , SFC_TIMER_RATECHNG_6_DIVIDE , 0 , SHUTDOWN_FOURHRLOK_B_NAME,&SHUTDOWN_FRLOCKTMR_DELAY,&SHUTDOWN_FRLOCKTMR_R_TIME);
T_TO_HMS_FUNCTION(1 , SHUTDOWN_FRLOK_T_A_TO_T,&SHUTDOWN_FRLOKTM_DAY,&SHUTDOWN_FRLOKTM_HOUR,&SHUTDOWN_FRLOKTM_MICROSEC,&SHUTDOWN_FRLOKTM_MIN,&SHUTDOWN_FRLOKTM_MONTH,&SHUTDOWN_FRLOKTM_SEC,&SHUTDOWN_FRLOKTM_YEAR);
SHUTDOWN_FRLOK_HOUR_A_NAME = SHUTDOWN_FRLOKTM_HOUR;
SHUTDOWN_FRLOK_MIN_A_NAME = SHUTDOWN_FRLOKTM_MIN;
SHUTDOWN_FRLOK_SEC_A_NAME = SHUTDOWN_FRLOKTM_SEC;
SHUTDOWN_FRLOK_T_A_TO_T = A_TO_T_FUNCTION( SHUTDOWN_CNVRTTIME2_OUT_1 );