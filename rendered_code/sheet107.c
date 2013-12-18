CDP_CAL_ABORT_B_NAME = OP_INTRFC_CDP_ABORT_B_NAME;
CDP_CAL_AB_AUT_OR = CDP_CAL_CAL_AUT_NOT || CDP_CAL_PUNCH_OR_OR;
CDP_CAL_AT_0_B_NAME = CDP_CAL_AT_0_SW_B_SW;
CDP_CAL_AT_0_IN_B_NAME = OP_INTRFC_CDP_AT_0_B_NAME;
  bool CDP_CAL_AT_0_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 ,  , CDP_CAL_AT_0_IN_B_NAME,&CDP_CAL_AT_0_OS_ONE_SHOT,&CDP_CAL_AT_0_OS_R_TIME,&CDP_CAL_AT_0_OS_LAST_TRIGGER);
CDP_CAL_AT_0_SW_B_SW = B_SW_FUNCTION( CDP_CAL_AUTMAN_FF_T_FLIPFLOP , CDP_CAL_CAL_04_SFC_STEP , CDP_CAL_AT_0_OS_ONE_SHOT );
CDP_CAL_AT_100_B_NAME = CDP_CAL_AT_100_SW_B_SW;
CDP_CAL_AT_100_IN_B_NAME = OP_INTRFC_CDP_AT_100_B_NAME;
  bool CDP_CAL_AT_100_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 ,  , CDP_CAL_AT_100_IN_B_NAME,&CDP_CAL_AT_100_OS_ONE_SHOT,&CDP_CAL_AT_100_OS_R_TIME,&CDP_CAL_AT_100_OS_LAST_TRIGGER);
CDP_CAL_AT_100_SW_B_SW = B_SW_FUNCTION( CDP_CAL_AUTMAN_FF_T_FLIPFLOP , CDP_CAL_CAL_07_SFC_STEP , CDP_CAL_AT_100_OS_ONE_SHOT );
CDP_CAL_AUTMANSEL_B_NAME = OP_INTRFC_CDP_A_M_B_NAME;
  bool CDP_CAL_AUTMAN_FF_IN_1_LAST; 
  bool CDP_CAL_AUTMAN_FF_IN_2_LAST; 
T_FLIPFLOP_FUNCTION(1 , CDP_CAL_AUTMANSEL_B_NAME , *FALSE , LOC_REM_DELAY_WAR_DELAY,&CDP_CAL_AUTMAN_FF_T_FLIPFLOP,&CDP_CAL_AUTMAN_FF_IN_1_LAST, &CDP_CAL_AUTMAN_FF_IN_2_LAST); 
 CDP_CAL_AUTO_NOT =! CDP_CAL_AUTMAN_FF_T_FLIPFLOP;
CDP_CAL_AUTO_MAN_B_NAME = CDP_CAL_AUTMAN_FF_T_FLIPFLOP;
CDP_CAL_CALENBL_B_NAME = OP_INTRFC_CDPCALENBL_B_NAME;
  bool CDP_CAL_CALENBLOS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.16 , CDP_CAL_NOT_START_NOT , CDP_CAL_WAR_OR_OR,&CDP_CAL_CALENBLOS_ONE_SHOT,&CDP_CAL_CALENBLOS_R_TIME,&CDP_CAL_CALENBLOS_LAST_TRIGGER);
SFC_STEP_FUNCTION( , "ACTIVE" , CDP_CAL_SFC_HOLD_TRAN_1 , CDP_CAL_CAL_01_TRAN_1 , CDP_CAL_CAL_02_TRAN_1 , CDP_CAL_CAL_03_TRAN_1 , CDP_CAL_CAL_04_TRAN_1 , CDP_CAL_CAL_05_TRAN_1 , CDP_CAL_CAL_06_TRAN_1 , CDP_CAL_CAL_07_TRAN_1 , CDP_CAL_CAL_09_TRAN_1 , CDP_CAL_STRKENOS_ONE_SHOT , CDP_CAL_NULL_ONE_SHOT , CDP_CAL_CALENBLOS_ONE_SHOT,&CDP_CAL_CAL_00_ACTIVETIME,&CDP_CAL_CAL_00_SFC_STEP,&CDP_CAL_CAL_00_TRAN_1,&CDP_CAL_CAL_00_TRAN_2,&CDP_CAL_CAL_00_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_00_TRAN_3 , CDP_CAL_NOT_START_NOT , CDP_CAL_PUNCH_OR_OR , CDP_CAL_EQ_1_EQ,&CDP_CAL_CAL_01_ACTIVETIME,&CDP_CAL_CAL_01_SFC_STEP,&CDP_CAL_CAL_01_TRAN_1,&CDP_CAL_CAL_01_TRAN_2,&CDP_CAL_CAL_01_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_01_TRAN_3 , CDP_CAL_EQ_0_EQ , CDP_CAL_PUNCH_OR_OR , CDP_CAL_NULLDVR_P_LIM_1,&CDP_CAL_CAL_02_ACTIVETIME,&CDP_CAL_CAL_02_SFC_STEP,&CDP_CAL_CAL_02_TRAN_1,&CDP_CAL_CAL_02_TRAN_2,&CDP_CAL_CAL_02_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_02_TRAN_3 , CDP_CAL_EQ_0_EQ , CDP_CAL_DLYFAIL_1_DELAY , CDP_CAL_PUNCH_OR_OR , CDP_CAL_DLY_LO_DELAY,&CDP_CAL_CAL_03_ACTIVETIME,&CDP_CAL_CAL_03_SFC_STEP,&CDP_CAL_CAL_03_TRAN_1,&CDP_CAL_CAL_03_TRAN_2,&CDP_CAL_CAL_03_TRAN_3,&CDP_CAL_CAL_03_TRAN_4);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_03_TRAN_4 , CDP_CAL_EQ_0_EQ , CDP_CAL_PUNCH_OR_OR , CDP_CAL_EQ_2_EQ,&CDP_CAL_CAL_04_ACTIVETIME,&CDP_CAL_CAL_04_SFC_STEP,&CDP_CAL_CAL_04_TRAN_1,&CDP_CAL_CAL_04_TRAN_2,&CDP_CAL_CAL_04_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_04_TRAN_3 , CDP_CAL_EQ_0_EQ , CDP_CAL_PUNCH_OR_OR , CDP_CAL_NULLDVR_P_LIM_2,&CDP_CAL_CAL_05_ACTIVETIME,&CDP_CAL_CAL_05_SFC_STEP,&CDP_CAL_CAL_05_TRAN_1,&CDP_CAL_CAL_05_TRAN_2,&CDP_CAL_CAL_05_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_05_TRAN_3 , CDP_CAL_EQ_0_EQ , CDP_CAL_DLYFAIL_2_DELAY , CDP_CAL_PUNCH_OR_OR , CDP_CAL_DLY_HI_DELAY,&CDP_CAL_CAL_06_ACTIVETIME,&CDP_CAL_CAL_06_SFC_STEP,&CDP_CAL_CAL_06_TRAN_1,&CDP_CAL_CAL_06_TRAN_2,&CDP_CAL_CAL_06_TRAN_3,&CDP_CAL_CAL_06_TRAN_4);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_06_TRAN_4 , CDP_CAL_EQ_0_EQ , CDP_CAL_PUNCH_OR_OR , CDP_CAL_EQ_3_NOSTR_AND,&CDP_CAL_CAL_07_ACTIVETIME,&CDP_CAL_CAL_07_SFC_STEP,&CDP_CAL_CAL_07_TRAN_1,&CDP_CAL_CAL_07_TRAN_2,&CDP_CAL_CAL_07_TRAN_3);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_07_TRAN_3 , CDP_CAL_NOT_STROKE_NOT , CDP_CAL_AB_AUT_OR,&CDP_CAL_CAL_07A_ACTIVETIME,&CDP_CAL_CAL_07A_SFC_STEP,&CDP_CAL_CAL_07A_TRAN_1,&CDP_CAL_CAL_07A_TRAN_2);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_07A_TRAN_2 , CDP_CAL_NV_WRITE_ONE_SHOT,&CDP_CAL_CAL_08_ACTIVETIME,&CDP_CAL_CAL_08_SFC_STEP,&CDP_CAL_CAL_08_TRAN_1);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_08_TRAN_1 , CDP_CAL_PUNCH_OR_OR , CDP_CAL_MASK_MAN_AND , CDP_CAL_MASK_AUTO_AND,&CDP_CAL_CAL_09_ACTIVETIME,&CDP_CAL_CAL_09_SFC_STEP,&CDP_CAL_CAL_09_TRAN_1,&CDP_CAL_CAL_09_TRAN_2,&CDP_CAL_CAL_09_TRAN_3);
CDP_CAL_CAL_AUT_NOT =! CDP_CAL_AUTMAN_FF_T_FLIPFLOP;
CDP_CAL_CAL_ENBL_B_NAME = CDP_CAL_ENABLE_Z_ZMINUS1_B;
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_03_TRAN_2 , ALARM_RESET_B_NAME,&CDP_CAL_CAL_FAIL_1_ACTIVETIME,&CDP_CAL_CAL_FAIL_1_SFC_STEP,&CDP_CAL_CAL_FAIL_1_TRAN_1);
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_06_TRAN_2 , ALARM_RESET_B_NAME,&CDP_CAL_CAL_FAIL_2_ACTIVETIME,&CDP_CAL_CAL_FAIL_2_SFC_STEP,&CDP_CAL_CAL_FAIL_2_TRAN_1);
CDP_CAL_ENABLE_OR_OR = CDP_CAL_CAL_01_SFC_STEP || CDP_CAL_CAL_02_SFC_STEP || CDP_CAL_CAL_03_SFC_STEP || CDP_CAL_CAL_04_SFC_STEP || CDP_CAL_CAL_05_SFC_STEP || CDP_CAL_CAL_06_SFC_STEP || CDP_CAL_CAL_07_SFC_STEP || CDP_CAL_CAL_07A_SFC_STEP;
CDP_CAL_ENABLE_Z_ZMINUS1_B = CDP_CAL_ENABLE_OR_OR;
CDP_CAL_MASK_AUTO_AND = CDP_CAL_EQ_0_EQ && CDP_CAL_AUTO_NOT;
CDP_CAL_MASK_MAN_AND = CDP_CAL_EQ_0_EQ && CDP_CAL_AUTMAN_FF_T_FLIPFLOP;
CDP_CAL_NOT_START_NOT =! CDP_CAL_CALMODE_B_NAME;
CDP_CAL_NOT_STROKE_NOT =! CDP_CAL_CALMODE_B_NAME;
  bool CDP_CAL_NULL_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.16 ,  , CDP_CAL_NUL_SEL_B_NAME,&CDP_CAL_NULL_ONE_SHOT,&CDP_CAL_NULL_R_TIME,&CDP_CAL_NULL_LAST_TRIGGER);
CDP_CAL_NUL_SEL_B_NAME = OP_INTRFC_CDP_NULL_B_NAME;
  bool CDP_CAL_NV_WRITE_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 ,  , CDP_CAL_CAL_08_SFC_STEP,&CDP_CAL_NV_WRITE_ONE_SHOT,&CDP_CAL_NV_WRITE_R_TIME,&CDP_CAL_NV_WRITE_LAST_TRIGGER);
  bool CDP_CAL_PUCNHOUTOS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.16 ,  , CDP_CAL_ABORT_B_NAME,&CDP_CAL_PUCNHOUTOS_ONE_SHOT,&CDP_CAL_PUCNHOUTOS_R_TIME,&CDP_CAL_PUCNHOUTOS_LAST_TRIGGER);
CDP_CAL_PUNCH_OR_OR = CDP_CAL_PUCNHOUTOS_ONE_SHOT || CDP_CAL_NOT_START_NOT;
SFC_STEP_FUNCTION( ,  , CDP_CAL_CAL_01_TRAN_2 , CDP_CAL_CAL_11_TRAN_1 , CDP_CAL_CAL_12_TRAN_1 , CDP_CAL_CAL_13_TRAN_1 , CDP_CAL_CAL_14_TRAN_1 , CDP_CAL_CAL_15_TRAN_1 , CDP_CAL_CAL_16_TRAN_1 , CDP_CAL_CAL_16_TRAN_2 , CDP_CAL_CAL_FAIL_1_TRAN_1 , CDP_CAL_CAL_FAIL_2_TRAN_1 , CDP_CAL_CAL_07A_TRAN_1 , CDP_CAL_CAL_02_TRAN_2 , CDP_CAL_CAL_03_TRAN_3 , CDP_CAL_CAL_04_TRAN_2 , CDP_CAL_CAL_05_TRAN_2 , CDP_CAL_CAL_06_TRAN_3 , CDP_CAL_CAL_07_TRAN_2 , CDP_CAL_CAL_09_TRAN_2 , CDP_CAL_CAL_10_TRAN_1 , CDP_CAL_EQ_0_EQ,&CDP_CAL_SFC_HOLD_ACTIVETIME,&CDP_CAL_SFC_HOLD_SFC_STEP,&CDP_CAL_SFC_HOLD_TRAN_1);
  bool CDP_CAL_STRKENOS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.16 , CDP_CAL_NOT_START_NOT , CDP_CAL_STROKE_B_NAME,&CDP_CAL_STRKENOS_ONE_SHOT,&CDP_CAL_STRKENOS_R_TIME,&CDP_CAL_STRKENOS_LAST_TRIGGER);
CDP_CAL_STROKE_B_NAME = OP_INTRFC_CDP_STROKE_B_NAME;
CDP_CAL_WAR_OR_OR = LOC_REM_DELAY_WAR_DELAY || CDP_CAL_CALENBL_B_NAME;
