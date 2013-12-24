FUEL_SYS_FAILTOFIRE_B_NAME = FUEL_SYS_FF_AND_AND;
FUEL_SYS_FC6246_VST_B_NAME = FALSE;
FUEL_SYS_FF_AND_AND = FUEL_SYS_FF_TIMER_DELAY && FUEL_SYS_NOTLITEOFF_NOT;
DELAY_FUNCTION(1 , 10.0 , 0 , FUEL_SYS_SOV6249_B_NAME,&FUEL_SYS_FF_TIMER_DELAY,&FUEL_SYS_FF_TIMER_R_TIME);
FUEL_SYS_NOTLITEOFF_NOT =! CORE_DIGITAL_LITEOFF;
FUEL_SYS_NOT_CLCRNK_NOT =! SFC_STEP_MOTOR_5_SFC_STEP;
FUEL_SYS_PRGDN_LATCH = LATCH_FUNCTION(1,FUEL_SYS_RESET_PRG_OR,FUEL_SYS_PURGTMR_DELAY,FUEL_SYS_PRGDN_LATCH);
I_COMPARE_FUNCTION(FUEL_SYS_PURGTMR_R_TIME , 0,&FUEL_SYS_PRGFAIL_ON_EQ,&FUEL_SYS_PRGFAIL_ON_GT,&FUEL_SYS_PRGFAIL_ON_LT);
FUEL_SYS_PRGTM_A_OUT_1 = (double)FUEL_SYS_PURGTMR_R_TIME;
FUEL_SYS_PRGTM_MIN_A_NAME = FUEL_SYS_PRGTM_MS_MIN;
T_TO_HMS_FUNCTION(1 , FUEL_SYS_PRTTM_T_A_TO_T,&FUEL_SYS_PRGTM_MS_DAY,&FUEL_SYS_PRGTM_MS_HOUR,&FUEL_SYS_PRGTM_MS_MICROSEC,&FUEL_SYS_PRGTM_MS_MIN,&FUEL_SYS_PRGTM_MS_MONTH,&FUEL_SYS_PRGTM_MS_SEC,&FUEL_SYS_PRGTM_MS_YEAR);
FUEL_SYS_PRGTM_SEC_A_NAME = FUEL_SYS_PRGTM_MS_SEC;
FUEL_SYS_PRTTM_T_A_TO_T = A_TO_T_FUNCTION( FUEL_SYS_PRGTM_A_OUT_1 );
DELAY_FUNCTION(1 , TIMERS_PURGE_TM_A_NAME , 0 , FUEL_SYS_TURBPRG_ON_OR,&FUEL_SYS_PURGTMR_DELAY,&FUEL_SYS_PURGTMR_R_TIME);
FUEL_SYS_RESET_PRG_OR = SHUTDOWN_ANY_SD_B_NAME || FUEL_SYS_STRTINITOS_ONE_SHOT;
  bool FUEL_SYS_STRTINITOS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , SFC_STEP_START_INIT_B_NAME,&FUEL_SYS_STRTINITOS_ONE_SHOT,&FUEL_SYS_STRTINITOS_R_TIME,&FUEL_SYS_STRTINITOS_LAST_TRIGGER);
FUEL_SYS_TPRG_MASK_AND = FUEL_SYS_PRGFAIL_ON_GT && FUEL_SYS_NOT_CLCRNK_NOT;
FUEL_SYS_TPRG_ON_B_NAME = FUEL_SYS_TPRG_MASK_AND;
FUEL_SYS_TURBPRG_ON_OR = SFC_STEP_TURB_PRG_SFC_STEP || SFC_STEP_MOTOR_5_SFC_STEP || SFC_STEP_MOTOR_6_SFC_STEP;
