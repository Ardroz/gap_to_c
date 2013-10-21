GLUB_AC60FAIL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( GLUB_AC60_FAIL_B_NAME );
GLUB_AC60VERAND_AND = AND_FUNCTION( GLUB_PT6026AOK_B_NAME , GLUB_PT6026BOK_B_NAME , GLUB_MOT6033_B_NAME , GLUB_PT6016STPM_B_NAME );
GLUB_ACAPRESSOK_B_NAME = B_NAME_FUNCTION( GLUB_AC_DLY1_DELAY );
GLUB_ACAVER_AND_AND = AND_FUNCTION( GLUB_PSL6073AIN_B_NAME , GLUB_MOT6075A_B_NAME );
GLUB_ACA_FAIL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( GLUB_AC1_FAIL_B_NAME );
GLUB_ACBPRESSOK_B_NAME = B_NAME_FUNCTION( GLUB_AC_DLY2_DELAY );
GLUB_ACBVER_AND_AND = AND_FUNCTION( GLUB_PSL6073BIN_B_NAME , GLUB_MOT6075B_B_NAME );
GLUB_ACB_FAIL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( GLUB_AC2_FAIL_B_NAME );
GLUB_ACPMP_60OK_B_NAME = B_NAME_FUNCTION( GLUB_AC_DLY_60_DELAY );
GLUB_AC_60FL_SW_B_SW_REV = B_SW_REV_FUNCTION( "NC" , GLUB_PT6026AFLT_NOT , FALSE , GLUB_GLUB60_FL_B_ALARM );
GLUB_AC_60FL_SW_B_SW_REV = B_SW_REV_FUNCTION( "NO" , GLUB_PT6026AFLT_NOT , FALSE , GLUB_GLUB60_FL_B_ALARM );
GLUB_AC_60_FAIL_B_NAME = B_NAME_FUNCTION( GLUB_AC_60FL_SW_NC );
GLUB_AC_A_B_FL_B_NAME = B_NAME_FUNCTION( GLUB_BOTH_AC_FL_OR );
GLUB_AC_A_FAIL_B_NAME = B_NAME_FUNCTION( GLUB_GLUB_SYSFL_SEL_2 );
GLUB_AC_B_FAIL_B_NAME = B_NAME_FUNCTION( GLUB_GLUB_SYSFL_SEL_3 );
GLUB_AC_DLY1_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_ACAVER_AND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_AC_DLY1_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_ACAVER_AND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_AC_DLY2_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_ACBVER_AND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_AC_DLY2_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_ACBVER_AND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_AC_DLY_60_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_AC60VERAND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_AC_DLY_60_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_AC60VERAND_AND , TIMERS_ACLUBVERIF_MULTIPLY , 0 );
GLUB_BOTH_ACFL2_AND = AND_FUNCTION( GLUB_PSL6073AAL_B_NAME , GLUB_PSL6073BAL_B_NAME );
GLUB_BOTH_AC_FL_OR = OR_FUNCTION( GLUB_FAIL_BOTH_AND , GLUB_BOTH_ACFL2_AND );
GLUB_DCVERIFY_AND = AND_FUNCTION( GLUB_DC_PRESSOK_B_NAME , GLUB_GLUB_DC_SFC_STEP );
GLUB_DCVER_AND_AND = AND_FUNCTION( GLUB_PSL6074_IN_B_NAME , GLUB_MOT6076_B_NAME );
GLUB_DC_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_DCVER_AND_AND , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_DC_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_DCVER_AND_AND , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_DC_FAILAND_AND = AND_FUNCTION( GLUB_N_6074_NOT , GLUB_DC_VER_DLY_DELAY );
GLUB_DC_FAILED_B_NAME = B_NAME_FUNCTION( GLUB_GLUB_SYSFL_SEL_1 );
GLUB_DC_PRESSOK_B_NAME = B_NAME_FUNCTION( GLUB_DC_DLY_DELAY );
GLUB_DC_REM_TM_I_TO_AN = I_TO_AN_FUNCTION( 0 , GLUB_DC_VER_DLY_R_TIME );
GLUB_DC_VERIFID_B_NAME = B_NAME_FUNCTION( GLUB_DCVERIFY_AND );
GLUB_DC_VER_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_MOT6076_B_NAME , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_DC_VER_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_MOT6076_B_NAME , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_FAIL_1_MSK_AND = AND_FUNCTION( GLUB_FAIL_OR_OR , GLUB_NOTOUTOFOP_NOT , GLUB_OPT_FAIL_1_B_NAME );
GLUB_FAIL_BOTH_AND = AND_FUNCTION( GLUB_GLUB_SYSFL_SEL_2 , GLUB_GLUB_SYSFL_SEL_3 );
GLUB_FAIL_OR_OR = OR_FUNCTION( GLUB_GLUB_SYSFL_SEL_2 , GLUB_GLUB_SYSFL_SEL_3 );
GLUB_GLUB60_FL_B_ALARM = B_ALARM_FUNCTION( "B_ALARM" , 0 , GLUB_AC60FAIL_Z_ZMINUS1_B , GLUB_FREQ_50_B_NAME , 0 , 0 , ALARM_RESET_B_NAME );
GLUB_GLUB60_FL_B_ALARM = B_ALARM_FUNCTION( "LIGHT" , 0 , GLUB_AC60FAIL_Z_ZMINUS1_B , GLUB_FREQ_50_B_NAME , 0 , 0 , ALARM_RESET_B_NAME );
GLUB_GLUB60_FL_B_ALARM = B_ALARM_FUNCTION( "HORN" , 0 , GLUB_AC60FAIL_Z_ZMINUS1_B , GLUB_FREQ_50_B_NAME , 0 , 0 , ALARM_RESET_B_NAME );
GLUB_GLUB_ABORT_B_NAME = B_NAME_FUNCTION( GLUB_LUBFAILOR_OR );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "LATCH1" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "HORN" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "FIRST_ALM" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "SEL_1" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "ALM_NO_1" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "SEL_2" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "ALM_NO_2" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "SEL_3" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_GLUB_SYSFL_LATCH1 = LATCH1_FUNCTION( "ALM_NO_3" , 0 , ALARM_RESET_B_NAME , GLUB_FREQ_60_NOT , CORE_DIGITAL_ACKN , 0 , GLUB_DC_FAILAND_AND , 0 , 0 , GLUB_ACA_FAIL_Z_ZMINUS1_B , 0 , 0 , GLUB_ACB_FAIL_Z_ZMINUS1_B , 0 , 0 );
GLUB_LUBFAILOR_OR = OR_FUNCTION( GLUB_GLUB_SYSFL_SEL_1 , GLUB_AC_60FL_SW_NO , GLUB_FAIL_1_MSK_AND );
GLUB_N_6073A_NOT = NOT_FUNCTION( GLUB_PSL6073AIN_B_NAME );
GLUB_N_6073B_NOT = NOT_FUNCTION( GLUB_PSL6073BIN_B_NAME );
GLUB_N_6074_NOT = NOT_FUNCTION( GLUB_PSL6074_IN_B_NAME );
GLUB_OPT_FAIL_1_B_NAME = B_NAME_FUNCTION(  , 0 );
GLUB_PSL6073AIN_B_NAME = B_NAME_FUNCTION( FALSE );
GLUB_PSL6073BIN_B_NAME = B_NAME_FUNCTION( FALSE );
GLUB_PSL6074ALM_B_NAME = B_NAME_FUNCTION( GLUB_PSLANDPMP_AND );
GLUB_PSL6074DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , GLUB_MOT6076_B_NAME , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_PSL6074DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , GLUB_MOT6076_B_NAME , TIMERS_DCLUBVERIF_MULTIPLY , 0 );
GLUB_PSL6074_IN_B_NAME = B_NAME_FUNCTION( FALSE );
GLUB_PSLANDPMP_AND = AND_FUNCTION( GLUB_PSL6074DLY_DELAY , GLUB_N_6074_NOT , GLUB_FREQ_50_B_NAME );
