A_B_FORCE_AFORCE_OFF_NOT =! A_FORCE_A1_A06_AIO_OR;
  bool A_B_FORCE_BO_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 ,  , A_B_FORCE_PULSE_FRC_OR,&A_B_FORCE_BO_OS_ONE_SHOT,&A_B_FORCE_BO_OS_R_TIME,&A_B_FORCE_BO_OS_LAST_TRIGGER);
A_B_FORCE_FMD_SELECT_B_NAME = A_B_FORCE_FMD_Z_ZMINUS1_B;
A_B_FORCE_FMD_Z_ZMINUS1_B = A_B_FORCE_TRUSS_BYPS_AND;
A_B_FORCE_FORCE_AND = A_B_FORCE_FRC_OS_ONE_SHOT && LOAD_PERM_LOAD_PERM_B_NAME && A_B_FORCE_FRC_PERM_B_NAME;
A_B_FORCE_FRCOFF_AND_AND = A_B_FORCE_FRC_INHIBT_NOT && B_FORCE_FORCES_OFF_B_NAME && A_B_FORCE_AFORCE_OFF_NOT;
A_B_FORCE_FRC_ACTIVE_NOT =! A_B_FORCE_FRC_PERM_B_NAME;
A_B_FORCE_FRC_INHIBT_NOT =! A_B_FORCE_FRC_MASK_AND;
A_B_FORCE_FRC_MASK_AND = A_B_FORCE_MAN_SEL_B_NAME;
A_B_FORCE_FRC_MSK_AND = A_B_FORCE_FRC_ACTIVE_NOT && A_B_FORCE_NOT_PWRUP_NOT && A_B_FORCE_INI_MSK_Z_ZMINUS1_B;
A_B_FORCE_FRC_OFF_OR = A_B_FORCE_FRC_INHIBT_NOT;
  bool A_B_FORCE_FRC_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , A_B_FORCE_INI_MSK_Z_ZMINUS1_B , A_B_FORCE_MAN_SEL_B_NAME,&A_B_FORCE_FRC_OS_ONE_SHOT,&A_B_FORCE_FRC_OS_R_TIME,&A_B_FORCE_FRC_OS_LAST_TRIGGER);
A_B_FORCE_FRC_PERM_B_NAME = A_B_FORCE_FRCOFF_AND_AND;
A_B_FORCE_FRC_ST_PRM_B_NAME = A_B_FORCE_FRCOFF_AND_AND;
A_B_FORCE_INI_MSK_Z_ZMINUS1_B = A_B_FORCE_FRC_OFF_OR;
A_B_FORCE_MAN_SEL_B_NAME = *FALSE;
A_B_FORCE_NOT_PWRUP_NOT =! CORE_DIGITAL_PWR_UP;
A_B_FORCE_PULSE_FRC_OR = A_B_FORCE_FORCE_AND || A_B_FORCE_FRC_MSK_AND;
A_B_FORCE_TRUSS_BYPS_AND = A_B_FORCE_BO_OS_ONE_SHOT;
LOAD_PERM_LOAD_AND = LOAD_PERM_NOTRUNNING_NOT && LOAD_PERM_NPTLT200_B_NAME && LOAD_PERM_NGGLT300_B_NAME;
LOAD_PERM_LOAD_PERM_B_NAME = LOAD_PERM_LOAD_AND;
LOAD_PERM_NGGLT300_B_NAME = SPEED_SW_N25LT300_NOT;
LOAD_PERM_NOTLOAD_NOT =! LOAD_PERM_LOAD_AND;
LOAD_PERM_NOTRUNNING_NOT =! LOAD_PERM_RUNNING_B_NAME;
LOAD_PERM_NPTLT200_B_NAME = SPEED_SW_NSDLT200_NOT;
LOAD_PERM_RUNNING_B_NAME = SFC_STEP_RUNNING_B_NAME;