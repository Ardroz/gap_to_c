SFC_TIMER_GEN_RDY_AND = AND_FUNCTION( TRUE , TRUE , TRUE , TRUE );
SFC_TIMER_MASK_OFFD_AND = AND_FUNCTION( SFC_TIMER_GEN_RDY_AND , SFC_TIMER_WARMUPOFF_A_COMPARE , TIMERS_DO_F_START_B_NAME , SFC_TIMER_WRMLAT_Z_ZMINUS1_B );
SFC_TIMER_NOTSTI_3_NOT = NOT_FUNCTION( FALSE );
SFC_TIMER_OFF_LINETM_A_NAME = A_NAME_FUNCTION(  , *1_5 (0_0, 4_0) );
SFC_TIMER_RATECHNG_1_DIVIDE = DIVIDE_FUNCTION( 0 , TIMERS_WARMUP_A_MULTIPLY , SFC_TIMER_RATE_SW1_A_SW );
SFC_TIMER_RATECHNG_2_DIVIDE = DIVIDE_FUNCTION( 0 , 900_0 , SFC_TIMER_RATE_SW2_A_SW );
SFC_TIMER_RATE_SW1_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , *5_0 (1_0, 10_0) );
SFC_TIMER_RATE_SW2_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , 15_0 );
SFC_TIMER_RATE_UP_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , 1_0 , 0_5 );
SFC_TIMER_RATE_UP1_DIVIDE = DIVIDE_FUNCTION( 0 , 10_0 , SFC_TIMER_RATE_UP_A_SW );
SFC_TIMER_STI1TMRMSK_AND = AND_FUNCTION( SFC_TIMER_STI_1_DLY_DELAY , XN25_REF_XN25MINPOS_B_NAME );
SFC_TIMER_STI2TMASK_AND = AND_FUNCTION( SFC_TIMER_STI_2_DLY_DELAY , XN25_REF_XN25MINPOS_B_NAME );
SFC_TIMER_STI_1_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_STI_1_DLY_R_TIME );
SFC_TIMER_STI_1_DLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_STI_1_LAT_LATCH , SFC_TIMER_RATE_UP1_DIVIDE , 0 );
SFC_TIMER_STI_1_DLY_R_TIME = R_TIME_FUNCTION( 0 , SFC_TIMER_STI_1_LAT_LATCH , SFC_TIMER_RATE_UP1_DIVIDE , 0 );
SFC_TIMER_STI_1_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_STI_1_Z_ZMINUS1_B );
SFC_TIMER_STI_1_LAT_LATCH = LATCH_FUNCTION( 0 , SFC_STEP_STI_2_SFC_STEP , SHUTDOWN_NO_SHTDNS_B_NAME );
SFC_TIMER_STI_1_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_STI_1_TIME_SEC );
SFC_TIMER_STI_1_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_STI_1_A_OUT_1 );
SFC_TIMER_STI_1_TIME_YEAR = YEAR_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_MONTH = MONTH_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_DAY = DAY_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_HOUR = HOUR_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_MIN = MIN_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_SEC = SEC_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_TIME_MICROSEC = MICROSEC_FUNCTION( 0 , SFC_TIMER_STI_1_T_A_TO_T );
SFC_TIMER_STI_1_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_TIMER_STI1TMRMSK_AND );
SFC_TIMER_STI_2_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_STI_2_DLY_R_TIME );
SFC_TIMER_STI_2_DLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_STI_2_LAT_LATCH , SFC_TIMER_RATECHNG_2_DIVIDE , 0 );
SFC_TIMER_STI_2_DLY_R_TIME = R_TIME_FUNCTION( 0 , SFC_TIMER_STI_2_LAT_LATCH , SFC_TIMER_RATECHNG_2_DIVIDE , 0 );
SFC_TIMER_STI_2_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_STI_2_Z_ZMINUS1_B );
SFC_TIMER_STI_2_LAT_LATCH = LATCH_FUNCTION( 0 , FALSE , SFC_TIMER_NOTSTI_3_NOT );
SFC_TIMER_STI_2_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_STI_2_TIME_MIN );
SFC_TIMER_STI_2_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_STI_2_TIME_SEC );
SFC_TIMER_STI_2_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_STI_2_A_OUT_1 );
SFC_TIMER_STI_2_TIME_YEAR = YEAR_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_MONTH = MONTH_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_DAY = DAY_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_HOUR = HOUR_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_MIN = MIN_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_SEC = SEC_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_TIME_MICROSEC = MICROSEC_FUNCTION( 0 , SFC_TIMER_STI_2_T_A_TO_T );
SFC_TIMER_STI_2_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_TIMER_STI2TMASK_AND );
SFC_TIMER_STI_ACT_CM_EQ = EQ_FUNCTION( SFC_TIMER_STI_2_DLY_R_TIME , 0 );
SFC_TIMER_STI_ACT_CM_LT = LT_FUNCTION( SFC_TIMER_STI_2_DLY_R_TIME , 0 );
SFC_TIMER_STI_ACT_CM_GT = GT_FUNCTION( SFC_TIMER_STI_2_DLY_R_TIME , 0 );
SFC_TIMER_STI_TMR_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_STI_ACT_CM_GT );
SFC_TIMER_SYNC_OR_OR = OR_FUNCTION( SFC_TIMER_WARMUP_DN_B_NAME , SFC_TIMER_MASK_OFFD_AND );
SFC_TIMER_SYNC_RDY_B_NAME = B_NAME_FUNCTION( SFC_TIMER_SYNC_OR_OR );
SFC_TIMER_TO_MIN_MULTIPLY = MULTIPLY_FUNCTION( 0 , 60_0 , SFC_TIMER_OFF_LINETM_A_NAME );
SFC_TIMER_WARMONCMP_EQ = EQ_FUNCTION( SFC_TIMER_WARMUPDLY_R_TIME , 0 );
SFC_TIMER_WARMONCMP_LT = LT_FUNCTION( SFC_TIMER_WARMUPDLY_R_TIME , 0 );
SFC_TIMER_WARMONCMP_GT = GT_FUNCTION( SFC_TIMER_WARMUPDLY_R_TIME , 0 );
SFC_TIMER_WARMTMRLAT_LATCH = LATCH_FUNCTION( 0 , SFC_STEP_WARMUP_SFC_STEP , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_TIMER_WARMUPDLY_DELAY = DELAY_FUNCTION( 0 , SFC_TIMER_WARMTMRLAT_LATCH , SFC_TIMER_RATECHNG_1_DIVIDE , 0 );
SFC_TIMER_WARMUPDLY_R_TIME = R_TIME_FUNCTION( 0 , SFC_TIMER_WARMTMRLAT_LATCH , SFC_TIMER_RATECHNG_1_DIVIDE , 0 );
SFC_TIMER_WARMUPMASK_AND = AND_FUNCTION( SFC_TIMER_WARMUPDLY_DELAY , XN25_REF_XN25MAXPOS_B_NAME , SFC_TIMER_GEN_RDY_AND );
SFC_TIMER_WARMUPOFF_A_COMPARE = A_COMPARE_FUNCTION( SFC_TIMER_TO_MIN_MULTIPLY , SFC_TIMER_WARMUP_A_OUT_1 , 0 );
SFC_TIMER_WARMUPOFF_A_EQUAL = A_EQUAL_FUNCTION( SFC_TIMER_TO_MIN_MULTIPLY , SFC_TIMER_WARMUP_A_OUT_1 , 0 );
SFC_TIMER_WARMUPTIME_YEAR = YEAR_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_MONTH = MONTH_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_DAY = DAY_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_HOUR = HOUR_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_MIN = MIN_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_SEC = SEC_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUPTIME_MICROSEC = MICROSEC_FUNCTION( 0 , SFC_TIMER_WARMUP_T_A_TO_T );
SFC_TIMER_WARMUP_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , SFC_TIMER_WARMUPDLY_R_TIME );
SFC_TIMER_WARMUP_DN_B_NAME = B_NAME_FUNCTION( SFC_TIMER_WARMUP_Z_ZMINUS1_B );
SFC_TIMER_WARMUP_MIN_A_NAME = A_NAME_FUNCTION( SFC_TIMER_WARMUPTIME_MIN );
SFC_TIMER_WARMUP_ON_B_NAME = B_NAME_FUNCTION( SFC_TIMER_WARMONCMP_GT );
SFC_TIMER_WARMUP_SEC_A_NAME = A_NAME_FUNCTION( SFC_TIMER_WARMUPTIME_SEC );
SFC_TIMER_WARMUP_T_A_TO_T = A_TO_T_FUNCTION( SFC_TIMER_WARMUP_A_OUT_1 );
SFC_TIMER_WARMUP_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_TIMER_WARMUPMASK_AND );
SFC_TIMER_WRMLAT_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_TIMER_WARMTMRLAT_LATCH );
