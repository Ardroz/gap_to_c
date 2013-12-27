GLUB_AC60FAIL_Z_ZMINUS1_B = GLUB_AC60_FAIL_B_NAME;
GLUB_AC60VERAND_AND = GLUB_PT6026AOK_B_NAME && GLUB_PT6026BOK_B_NAME && GLUB_MOT6033_B_NAME && GLUB_PT6016STPM_B_NAME;
GLUB_ACAPRESSOK_B_NAME = GLUB_AC_DLY1_DELAY;
GLUB_ACAVER_AND_AND = GLUB_PSL6073AIN_B_NAME && GLUB_MOT6075A_B_NAME;
GLUB_ACA_FAIL_Z_ZMINUS1_B = GLUB_AC1_FAIL_B_NAME;
GLUB_ACBPRESSOK_B_NAME = GLUB_AC_DLY2_DELAY;
GLUB_ACBVER_AND_AND = GLUB_PSL6073BIN_B_NAME && GLUB_MOT6075B_B_NAME;
GLUB_ACB_FAIL_Z_ZMINUS1_B = GLUB_AC2_FAIL_B_NAME;
GLUB_ACPMP_60OK_B_NAME = GLUB_AC_DLY_60_DELAY;
B_SW_REV_FUNCTION(GLUB_PT6026AFLT_NOT , FALSE , GLUB_GLUB60_FL_B_ALARM,&GLUB_AC_60FL_SW_NC,&GLUB_AC_60FL_SW_NO);
GLUB_AC_60_FAIL_B_NAME = GLUB_AC_60FL_SW_NC;
GLUB_AC_A_B_FL_B_NAME = GLUB_BOTH_AC_FL_OR;
GLUB_AC_A_FAIL_B_NAME = GLUB_GLUB_SYSFL_SEL_2;
GLUB_AC_B_FAIL_B_NAME = GLUB_GLUB_SYSFL_SEL_3;
double GLUB_AC_DLY1_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_ACLUBVERIF_MULTIPLY , 0 , GLUB_ACAVER_AND_AND,&GLUB_AC_DLY1_DELAY,&GLUB_AC_DLY1_R_TIME, &GLUB_AC_DLY1_DELAY_COUNTER);
double GLUB_AC_DLY2_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_ACLUBVERIF_MULTIPLY , 0 , GLUB_ACBVER_AND_AND,&GLUB_AC_DLY2_DELAY,&GLUB_AC_DLY2_R_TIME, &GLUB_AC_DLY2_DELAY_COUNTER);
double GLUB_AC_DLY_60_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_ACLUBVERIF_MULTIPLY , 0 , GLUB_AC60VERAND_AND,&GLUB_AC_DLY_60_DELAY,&GLUB_AC_DLY_60_R_TIME, &GLUB_AC_DLY_60_DELAY_COUNTER);
GLUB_BOTH_ACFL2_AND = GLUB_PSL6073AAL_B_NAME && GLUB_PSL6073BAL_B_NAME;
GLUB_BOTH_AC_FL_OR = GLUB_FAIL_BOTH_AND || GLUB_BOTH_ACFL2_AND;
GLUB_DCVERIFY_AND = GLUB_DC_PRESSOK_B_NAME && GLUB_GLUB_DC_SFC_STEP;
GLUB_DCVER_AND_AND = GLUB_PSL6074_IN_B_NAME && GLUB_MOT6076_B_NAME;
double GLUB_DC_DLY_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_DCLUBVERIF_MULTIPLY , 0 , GLUB_DCVER_AND_AND,&GLUB_DC_DLY_DELAY,&GLUB_DC_DLY_R_TIME, &GLUB_DC_DLY_DELAY_COUNTER);
GLUB_DC_FAILAND_AND = GLUB_N_6074_NOT && GLUB_DC_VER_DLY_DELAY;
GLUB_DC_FAILED_B_NAME = GLUB_GLUB_SYSFL_SEL_1;
GLUB_DC_PRESSOK_B_NAME = GLUB_DC_DLY_DELAY;
GLUB_DC_REM_TM_OUT_1 = (double)GLUB_DC_VER_DLY_R_TIME;
GLUB_DC_VERIFID_B_NAME = GLUB_DCVERIFY_AND;
double GLUB_DC_VER_DLY_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_DCLUBVERIF_MULTIPLY , 0 , GLUB_MOT6076_B_NAME,&GLUB_DC_VER_DLY_DELAY,&GLUB_DC_VER_DLY_R_TIME, &GLUB_DC_VER_DLY_DELAY_COUNTER);
GLUB_FAIL_1_MSK_AND = GLUB_FAIL_OR_OR && GLUB_NOTOUTOFOP_NOT && GLUB_OPT_FAIL_1_B_NAME;
GLUB_FAIL_BOTH_AND = GLUB_GLUB_SYSFL_SEL_2 && GLUB_GLUB_SYSFL_SEL_3;
GLUB_FAIL_OR_OR = GLUB_GLUB_SYSFL_SEL_2 || GLUB_GLUB_SYSFL_SEL_3;
B_ALARM_FUNCTION(0 , 1 , 0 , GLUB_AC60FAIL_Z_ZMINUS1_B , GLUB_FREQ_50_B_NAME , ALARM_RESET_B_NAME,&GLUB_GLUB60_FL_B_ALARM,&GLUB_GLUB60_FL_HORN,&GLUB_GLUB60_FL_LIGHT);
GLUB_GLUB_ABORT_B_NAME = GLUB_LUBFAILOR_OR;
int  GLUB_GLUB_SYSFL_COUNTERALM;
if ( GLUB_FREQ_60_NOT ) {
  if ( GLUB_DC_FAILAND_AND ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_1 = GLUB_GLUB_SYSFL_COUNTERALM;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 1;
    }
  }
  if ( GLUB_ACA_FAIL_Z_ZMINUS1_B ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_2 = GLUB_GLUB_SYSFL_COUNTERALM;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 2;
    }
  }
  if ( GLUB_ACB_FAIL_Z_ZMINUS1_B ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_3 = GLUB_GLUB_SYSFL_COUNTERALM;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 3;
    }
  }
} else {
  if ( GLUB_DC_FAILAND_AND ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_1 = GLUB_GLUB_SYSFL_COUNTERALM;
    GLUB_GLUB_SYSFL_SEL_1 = 1; 
    GLUB_GLUB_SYSFL_LATCH1 = 1; 
    GLUB_GLUB_SYSFL_HORN = 1;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 1;
    }
  }

  if ( GLUB_ACA_FAIL_Z_ZMINUS1_B ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_2 = GLUB_GLUB_SYSFL_COUNTERALM;
    GLUB_GLUB_SYSFL_SEL_2 = 1; 
    GLUB_GLUB_SYSFL_LATCH1 = 1; 
    GLUB_GLUB_SYSFL_HORN = 1;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 2;
    }
  }

  if ( GLUB_ACB_FAIL_Z_ZMINUS1_B ) {
    GLUB_GLUB_SYSFL_COUNTERALM++;
    GLUB_GLUB_SYSFL_ALM_NO_3 = GLUB_GLUB_SYSFL_COUNTERALM;
    GLUB_GLUB_SYSFL_SEL_3 = 1; 
    GLUB_GLUB_SYSFL_LATCH1 = 1; 
    GLUB_GLUB_SYSFL_HORN = 1;
    if( GLUB_GLUB_SYSFL_COUNTERALM == 1 ) {
      GLUB_GLUB_SYSFL_FIRST_ALM = 3;
    }
  }

}
if ( CORE_DIGITAL_ACKN ) {
  GLUB_GLUB_SYSFL_HORN = 0;
}
if ( 0 ) {
  GLUB_GLUB_SYSFL_COUNTERALM = 0;
  GLUB_GLUB_SYSFL_FIRST_ALM = 0;
}
if ( ALARM_RESET_B_NAME ) {
  GLUB_GLUB_SYSFL_SEL_1 = 0;
  GLUB_GLUB_SYSFL_SEL_2 = 0;
  GLUB_GLUB_SYSFL_SEL_3 = 0;
  GLUB_GLUB_SYSFL_HORN = 0;
  GLUB_GLUB_SYSFL_LATCH1 = 0;
}
GLUB_LUBFAILOR_OR = GLUB_GLUB_SYSFL_SEL_1 || GLUB_AC_60FL_SW_NO || GLUB_FAIL_1_MSK_AND;
GLUB_N_6073A_NOT =! GLUB_PSL6073AIN_B_NAME;
GLUB_N_6073B_NOT =! GLUB_PSL6073BIN_B_NAME;
GLUB_N_6074_NOT =! GLUB_PSL6074_IN_B_NAME;
GLUB_OPT_FAIL_1_B_NAME = *FALSE;
GLUB_PSL6073AIN_B_NAME = FALSE;
GLUB_PSL6073BIN_B_NAME = FALSE;
GLUB_PSL6074ALM_B_NAME = GLUB_PSLANDPMP_AND;
double GLUB_PSL6074DLY_DELAY_COUNTER;
DELAY_FUNCTION(1 , TIMERS_DCLUBVERIF_MULTIPLY , 0 , GLUB_MOT6076_B_NAME,&GLUB_PSL6074DLY_DELAY,&GLUB_PSL6074DLY_R_TIME, &GLUB_PSL6074DLY_DELAY_COUNTER);
GLUB_PSL6074_IN_B_NAME = FALSE;
GLUB_PSLANDPMP_AND = GLUB_PSL6074DLY_DELAY && GLUB_N_6074_NOT && GLUB_FREQ_50_B_NAME;
