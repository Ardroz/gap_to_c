FUEL_SYS_FAILTOFIRE_B_NAME = B_NAME_FUNCTION( FUEL_SYS_FF_AND_AND );
FUEL_SYS_FC6246_VST_B_NAME = B_NAME_FUNCTION( FALSE );
FUEL_SYS_FF_AND_AND = AND_FUNCTION( FUEL_SYS_FF_TIMER_DELAY , FUEL_SYS_NOTLITEOFF_NOT );
FUEL_SYS_FF_TIMER_DELAY = DELAY_FUNCTION( "DELAY" , 0 , FUEL_SYS_SOV6249_B_NAME , 10_0 , 0 );
FUEL_SYS_FF_TIMER_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , FUEL_SYS_SOV6249_B_NAME , 10_0 , 0 );
FUEL_SYS_NOTLITEOFF_NOT = NOT_FUNCTION( CORE_DIGITAL_LITEOFF );
FUEL_SYS_NOT_CLCRNK_NOT = NOT_FUNCTION( SFC_STEP_MOTOR_5_SFC_STEP );
FUEL_SYS_PRGDN_LATCH = LATCH_FUNCTION( 0 , FUEL_SYS_PURGTMR_DELAY , FUEL_SYS_RESET_PRG_OR );
FUEL_SYS_PRGFAIL_ON_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , FUEL_SYS_PURGTMR_R_TIME , 0 );
FUEL_SYS_PRGFAIL_ON_I_COMPARE = I_COMPARE_FUNCTION( "LT" , FUEL_SYS_PURGTMR_R_TIME , 0 );
FUEL_SYS_PRGFAIL_ON_I_COMPARE = I_COMPARE_FUNCTION( "GT" , FUEL_SYS_PURGTMR_R_TIME , 0 );
FUEL_SYS_PRGTM_A_I_TO_AN = I_TO_AN_FUNCTION( 0 , FUEL_SYS_PURGTMR_R_TIME );
FUEL_SYS_PRGTM_MIN_A_NAME = A_NAME_FUNCTION( FUEL_SYS_PRGTM_MS_MIN );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "YEAR" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "MONTH" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "DAY" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "HOUR" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "MIN" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "SEC" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_MS_T_TO_HMS = T_TO_HMS_FUNCTION( "MICROSEC" , 0 , FUEL_SYS_PRTTM_T_A_TO_T );
FUEL_SYS_PRGTM_SEC_A_NAME = A_NAME_FUNCTION( FUEL_SYS_PRGTM_MS_SEC );
FUEL_SYS_PRTTM_T_A_TO_T = A_TO_T_FUNCTION( FUEL_SYS_PRGTM_A_OUT_1 );
FUEL_SYS_PURGTMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , FUEL_SYS_TURBPRG_ON_OR , TIMERS_PURGE_TM_A_NAME , 0 );
FUEL_SYS_PURGTMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , FUEL_SYS_TURBPRG_ON_OR , TIMERS_PURGE_TM_A_NAME , 0 );
FUEL_SYS_RESET_PRG_OR = OR_FUNCTION( SHUTDOWN_ANY_SD_B_NAME , FUEL_SYS_STRTINITOS_ONE_SHOT );
FUEL_SYS_STRTINITOS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , SFC_STEP_START_INIT_B_NAME , 0_5 , 0 );
FUEL_SYS_STRTINITOS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , SFC_STEP_START_INIT_B_NAME , 0_5 , 0 );
FUEL_SYS_TPRG_MASK_AND = AND_FUNCTION( FUEL_SYS_PRGFAIL_ON_GT , FUEL_SYS_NOT_CLCRNK_NOT );
FUEL_SYS_TPRG_ON_B_NAME = B_NAME_FUNCTION( FUEL_SYS_TPRG_MASK_AND );
FUEL_SYS_TURBPRG_ON_OR = OR_FUNCTION( SFC_STEP_TURB_PRG_SFC_STEP , SFC_STEP_MOTOR_5_SFC_STEP , SFC_STEP_MOTOR_6_SFC_STEP );