VBV_CAL_ABORT_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_ABORT_B_NAME );
VBV_CAL_AB_AUT_OR = OR_FUNCTION( VBV_CAL_CAL_AUT_NOT , VBV_CAL_PUNCH_OR_OR );
VBV_CAL_AT_0_B_NAME = B_NAME_FUNCTION( VBV_CAL_AT_0_SW_B_SW );
VBV_CAL_AT_0_IN_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_AT_0_B_NAME );
VBV_CAL_AT_0_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_AT_0_IN_B_NAME , 1_0 , 0 );
VBV_CAL_AT_0_OS_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_AT_0_IN_B_NAME , 1_0 , 0 );
VBV_CAL_AT_0_SW_B_SW = B_SW_FUNCTION( VBV_CAL_AUTMAN_FF_T_FLIPFLOP , VBV_CAL_CAL_04_SFC_STEP , VBV_CAL_AT_0_OS_ONE_SHOT );
VBV_CAL_AT_100_B_NAME = B_NAME_FUNCTION( VBV_CAL_AT_100_SW_B_SW );
VBV_CAL_AT_100_IN_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_AT_100_B_NAME );
VBV_CAL_AT_100_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_AT_100_IN_B_NAME , 1_0 , 0 );
VBV_CAL_AT_100_OS_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_AT_100_IN_B_NAME , 1_0 , 0 );
VBV_CAL_AT_100_SW_B_SW = B_SW_FUNCTION( VBV_CAL_AUTMAN_FF_T_FLIPFLOP , VBV_CAL_CAL_07_SFC_STEP , VBV_CAL_AT_100_OS_ONE_SHOT );
VBV_CAL_AUTMANSEL_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_A_M_B_NAME );
VBV_CAL_AUTMAN_FF_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , VBV_CAL_AUTMANSEL_B_NAME , LOC_REM_DELAY_WAR_DELAY , 0 );
VBV_CAL_AUTO_NOT = NOT_FUNCTION( VBV_CAL_AUTMAN_FF_T_FLIPFLOP );
VBV_CAL_AUTO_MAN_B_NAME = B_NAME_FUNCTION( VBV_CAL_AUTMAN_FF_T_FLIPFLOP );
VBV_CAL_CALENBL_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBVCALENBL_B_NAME );
VBV_CAL_CALENBLOS_ONE_SHOT = ONE_SHOT_FUNCTION( 0_16 , VBV_CAL_NOT_START_NOT , 0 , VBV_CAL_WAR_OR_OR );
VBV_CAL_CALENBLOS_R_TIME = R_TIME_FUNCTION( 0_16 , VBV_CAL_NOT_START_NOT , 0 , VBV_CAL_WAR_OR_OR );
VBV_CAL_CAL_00_SFC_STEP = SFC_STEP_FUNCTION( 0 , "ACTIVE" , VBV_CAL_SFC_HOLD_TRAN_1 , VBV_CAL_CAL_01_TRAN_1 , VBV_CAL_CAL_02_TRAN_1 , VBV_CAL_CAL_03_TRAN_1 , VBV_CAL_CAL_04_TRAN_1 , VBV_CAL_CAL_05_TRAN_1 , VBV_CAL_CAL_06_TRAN_1 , VBV_CAL_CAL_07_TRAN_1 , VBV_CAL_CAL_09_TRAN_1 , VBV_CAL_STRKENOS_ONE_SHOT , VBV_CAL_NULL_ONE_SHOT , VBV_CAL_CALENBLOS_ONE_SHOT );
VBV_CAL_CAL_00_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , "ACTIVE" , VBV_CAL_SFC_HOLD_TRAN_1 , VBV_CAL_CAL_01_TRAN_1 , VBV_CAL_CAL_02_TRAN_1 , VBV_CAL_CAL_03_TRAN_1 , VBV_CAL_CAL_04_TRAN_1 , VBV_CAL_CAL_05_TRAN_1 , VBV_CAL_CAL_06_TRAN_1 , VBV_CAL_CAL_07_TRAN_1 , VBV_CAL_CAL_09_TRAN_1 , VBV_CAL_STRKENOS_ONE_SHOT , VBV_CAL_NULL_ONE_SHOT , VBV_CAL_CALENBLOS_ONE_SHOT );
VBV_CAL_CAL_00_TRAN_1 = TRAN_1_FUNCTION( 0 , "ACTIVE" , VBV_CAL_SFC_HOLD_TRAN_1 , VBV_CAL_CAL_01_TRAN_1 , VBV_CAL_CAL_02_TRAN_1 , VBV_CAL_CAL_03_TRAN_1 , VBV_CAL_CAL_04_TRAN_1 , VBV_CAL_CAL_05_TRAN_1 , VBV_CAL_CAL_06_TRAN_1 , VBV_CAL_CAL_07_TRAN_1 , VBV_CAL_CAL_09_TRAN_1 , VBV_CAL_STRKENOS_ONE_SHOT , VBV_CAL_NULL_ONE_SHOT , VBV_CAL_CALENBLOS_ONE_SHOT );
VBV_CAL_CAL_00_TRAN_2 = TRAN_2_FUNCTION( 0 , "ACTIVE" , VBV_CAL_SFC_HOLD_TRAN_1 , VBV_CAL_CAL_01_TRAN_1 , VBV_CAL_CAL_02_TRAN_1 , VBV_CAL_CAL_03_TRAN_1 , VBV_CAL_CAL_04_TRAN_1 , VBV_CAL_CAL_05_TRAN_1 , VBV_CAL_CAL_06_TRAN_1 , VBV_CAL_CAL_07_TRAN_1 , VBV_CAL_CAL_09_TRAN_1 , VBV_CAL_STRKENOS_ONE_SHOT , VBV_CAL_NULL_ONE_SHOT , VBV_CAL_CALENBLOS_ONE_SHOT );
VBV_CAL_CAL_00_TRAN_3 = TRAN_3_FUNCTION( 0 , "ACTIVE" , VBV_CAL_SFC_HOLD_TRAN_1 , VBV_CAL_CAL_01_TRAN_1 , VBV_CAL_CAL_02_TRAN_1 , VBV_CAL_CAL_03_TRAN_1 , VBV_CAL_CAL_04_TRAN_1 , VBV_CAL_CAL_05_TRAN_1 , VBV_CAL_CAL_06_TRAN_1 , VBV_CAL_CAL_07_TRAN_1 , VBV_CAL_CAL_09_TRAN_1 , VBV_CAL_STRKENOS_ONE_SHOT , VBV_CAL_NULL_ONE_SHOT , VBV_CAL_CALENBLOS_ONE_SHOT );
VBV_CAL_CAL_01_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_00_TRAN_3 , VBV_CAL_NOT_START_NOT , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_1_EQ );
VBV_CAL_CAL_01_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_00_TRAN_3 , VBV_CAL_NOT_START_NOT , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_1_EQ );
VBV_CAL_CAL_01_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_00_TRAN_3 , VBV_CAL_NOT_START_NOT , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_1_EQ );
VBV_CAL_CAL_01_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_00_TRAN_3 , VBV_CAL_NOT_START_NOT , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_1_EQ );
VBV_CAL_CAL_01_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_00_TRAN_3 , VBV_CAL_NOT_START_NOT , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_1_EQ );
VBV_CAL_CAL_02_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_1 );
VBV_CAL_CAL_02_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_1 );
VBV_CAL_CAL_02_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_1 );
VBV_CAL_CAL_02_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_1 );
VBV_CAL_CAL_02_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_1 );
VBV_CAL_CAL_03_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_03_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_03_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_03_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_03_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_03_TRAN_4 = TRAN_4_FUNCTION( 0 , 0 , VBV_CAL_CAL_02_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_1_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_LO_DELAY );
VBV_CAL_CAL_04_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_2_EQ );
VBV_CAL_CAL_04_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_2_EQ );
VBV_CAL_CAL_04_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_2_EQ );
VBV_CAL_CAL_04_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_2_EQ );
VBV_CAL_CAL_04_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_2_EQ );
VBV_CAL_CAL_05_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_04_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_2 );
VBV_CAL_CAL_05_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_04_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_2 );
VBV_CAL_CAL_05_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_04_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_2 );
VBV_CAL_CAL_05_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_04_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_2 );
VBV_CAL_CAL_05_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_04_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_NULLDVR_P_LIM_2 );
VBV_CAL_CAL_06_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_06_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_06_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_06_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_06_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_06_TRAN_4 = TRAN_4_FUNCTION( 0 , 0 , VBV_CAL_CAL_05_TRAN_3 , VBV_CAL_EQ_0_EQ , VBV_CAL_DLYFAIL_2_DELAY , VBV_CAL_PUNCH_OR_OR , VBV_CAL_DLY_HI_DELAY );
VBV_CAL_CAL_07_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_3_NOSTR_AND );
VBV_CAL_CAL_07_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_3_NOSTR_AND );
VBV_CAL_CAL_07_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_3_NOSTR_AND );
VBV_CAL_CAL_07_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_3_NOSTR_AND );
VBV_CAL_CAL_07_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_4 , VBV_CAL_EQ_0_EQ , VBV_CAL_PUNCH_OR_OR , VBV_CAL_EQ_3_NOSTR_AND );
VBV_CAL_CAL_07A_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_07_TRAN_3 , VBV_CAL_NOT_STROKE_NOT , VBV_CAL_AB_AUT_OR );
VBV_CAL_CAL_07A_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_07_TRAN_3 , VBV_CAL_NOT_STROKE_NOT , VBV_CAL_AB_AUT_OR );
VBV_CAL_CAL_07A_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_07_TRAN_3 , VBV_CAL_NOT_STROKE_NOT , VBV_CAL_AB_AUT_OR );
VBV_CAL_CAL_07A_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_07_TRAN_3 , VBV_CAL_NOT_STROKE_NOT , VBV_CAL_AB_AUT_OR );
VBV_CAL_CAL_08_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_07A_TRAN_2 , VBV_CAL_NV_WRITE_ONE_SHOT );
VBV_CAL_CAL_08_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_07A_TRAN_2 , VBV_CAL_NV_WRITE_ONE_SHOT );
VBV_CAL_CAL_08_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_07A_TRAN_2 , VBV_CAL_NV_WRITE_ONE_SHOT );
VBV_CAL_CAL_09_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_08_TRAN_1 , VBV_CAL_PUNCH_OR_OR , VBV_CAL_MASK_MAN_AND , VBV_CAL_MASK_AUTO_AND );
VBV_CAL_CAL_09_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_08_TRAN_1 , VBV_CAL_PUNCH_OR_OR , VBV_CAL_MASK_MAN_AND , VBV_CAL_MASK_AUTO_AND );
VBV_CAL_CAL_09_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_08_TRAN_1 , VBV_CAL_PUNCH_OR_OR , VBV_CAL_MASK_MAN_AND , VBV_CAL_MASK_AUTO_AND );
VBV_CAL_CAL_09_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , VBV_CAL_CAL_08_TRAN_1 , VBV_CAL_PUNCH_OR_OR , VBV_CAL_MASK_MAN_AND , VBV_CAL_MASK_AUTO_AND );
VBV_CAL_CAL_09_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , VBV_CAL_CAL_08_TRAN_1 , VBV_CAL_PUNCH_OR_OR , VBV_CAL_MASK_MAN_AND , VBV_CAL_MASK_AUTO_AND );
VBV_CAL_CAL_AUT_NOT = NOT_FUNCTION( VBV_CAL_AUTMAN_FF_T_FLIPFLOP );
VBV_CAL_CAL_ENBL_B_NAME = B_NAME_FUNCTION( VBV_CAL_ENABLE_Z_ZMINUS1_B );
VBV_CAL_CAL_FAIL_1_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_CAL_FAIL_1_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_CAL_FAIL_1_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_03_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_CAL_FAIL_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_CAL_FAIL_2_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_CAL_FAIL_2_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_06_TRAN_2 , ALARM_RESET_B_NAME );
VBV_CAL_ENABLE_OR_OR = OR_FUNCTION( VBV_CAL_CAL_01_SFC_STEP , VBV_CAL_CAL_02_SFC_STEP , VBV_CAL_CAL_03_SFC_STEP , VBV_CAL_CAL_04_SFC_STEP , VBV_CAL_CAL_05_SFC_STEP , VBV_CAL_CAL_06_SFC_STEP , VBV_CAL_CAL_07_SFC_STEP , VBV_CAL_CAL_07A_SFC_STEP );
VBV_CAL_ENABLE_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VBV_CAL_ENABLE_OR_OR );
VBV_CAL_MASK_AUTO_AND = AND_FUNCTION( VBV_CAL_EQ_0_EQ , VBV_CAL_AUTO_NOT );
VBV_CAL_MASK_MAN_AND = AND_FUNCTION( VBV_CAL_EQ_0_EQ , VBV_CAL_AUTMAN_FF_T_FLIPFLOP );
VBV_CAL_NOT_START_NOT = NOT_FUNCTION( VBV_CAL_CALMODE_B_NAME );
VBV_CAL_NOT_STROKE_NOT = NOT_FUNCTION( VBV_CAL_CALMODE_B_NAME );
VBV_CAL_NULL_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_NUL_SEL_B_NAME , 0_16 , 0 );
VBV_CAL_NULL_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_NUL_SEL_B_NAME , 0_16 , 0 );
VBV_CAL_NUL_SEL_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_NULL_B_NAME );
VBV_CAL_NV_WRITE_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_CAL_08_SFC_STEP , 1_0 , 0 );
VBV_CAL_NV_WRITE_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_CAL_08_SFC_STEP , 1_0 , 0 );
VBV_CAL_PUCNHOUTOS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_ABORT_B_NAME , 0_16 , 0 );
VBV_CAL_PUCNHOUTOS_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_ABORT_B_NAME , 0_16 , 0 );
VBV_CAL_PUNCH_OR_OR = OR_FUNCTION( VBV_CAL_PUCNHOUTOS_ONE_SHOT , VBV_CAL_NOT_START_NOT );
VBV_CAL_SFC_HOLD_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_2 , VBV_CAL_CAL_02_TRAN_2 , VBV_CAL_CAL_03_TRAN_3 , VBV_CAL_CAL_04_TRAN_2 , VBV_CAL_CAL_05_TRAN_2 , VBV_CAL_CAL_06_TRAN_3 , VBV_CAL_CAL_07_TRAN_2 , VBV_CAL_CAL_09_TRAN_2 , VBV_CAL_CAL_10_TRAN_1 , VBV_CAL_CAL_11_TRAN_1 , VBV_CAL_CAL_12_TRAN_1 , VBV_CAL_CAL_13_TRAN_1 , VBV_CAL_CAL_14_TRAN_1 , VBV_CAL_CAL_15_TRAN_1 , VBV_CAL_CAL_16_TRAN_1 , VBV_CAL_CAL_16_TRAN_2 , VBV_CAL_CAL_FAIL_1_TRAN_1 , VBV_CAL_CAL_FAIL_2_TRAN_1 , VBV_CAL_CAL_07A_TRAN_1 , VBV_CAL_EQ_0_EQ );
VBV_CAL_SFC_HOLD_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_2 , VBV_CAL_CAL_02_TRAN_2 , VBV_CAL_CAL_03_TRAN_3 , VBV_CAL_CAL_04_TRAN_2 , VBV_CAL_CAL_05_TRAN_2 , VBV_CAL_CAL_06_TRAN_3 , VBV_CAL_CAL_07_TRAN_2 , VBV_CAL_CAL_09_TRAN_2 , VBV_CAL_CAL_10_TRAN_1 , VBV_CAL_CAL_11_TRAN_1 , VBV_CAL_CAL_12_TRAN_1 , VBV_CAL_CAL_13_TRAN_1 , VBV_CAL_CAL_14_TRAN_1 , VBV_CAL_CAL_15_TRAN_1 , VBV_CAL_CAL_16_TRAN_1 , VBV_CAL_CAL_16_TRAN_2 , VBV_CAL_CAL_FAIL_1_TRAN_1 , VBV_CAL_CAL_FAIL_2_TRAN_1 , VBV_CAL_CAL_07A_TRAN_1 , VBV_CAL_EQ_0_EQ );
VBV_CAL_SFC_HOLD_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , VBV_CAL_CAL_01_TRAN_2 , VBV_CAL_CAL_02_TRAN_2 , VBV_CAL_CAL_03_TRAN_3 , VBV_CAL_CAL_04_TRAN_2 , VBV_CAL_CAL_05_TRAN_2 , VBV_CAL_CAL_06_TRAN_3 , VBV_CAL_CAL_07_TRAN_2 , VBV_CAL_CAL_09_TRAN_2 , VBV_CAL_CAL_10_TRAN_1 , VBV_CAL_CAL_11_TRAN_1 , VBV_CAL_CAL_12_TRAN_1 , VBV_CAL_CAL_13_TRAN_1 , VBV_CAL_CAL_14_TRAN_1 , VBV_CAL_CAL_15_TRAN_1 , VBV_CAL_CAL_16_TRAN_1 , VBV_CAL_CAL_16_TRAN_2 , VBV_CAL_CAL_FAIL_1_TRAN_1 , VBV_CAL_CAL_FAIL_2_TRAN_1 , VBV_CAL_CAL_07A_TRAN_1 , VBV_CAL_EQ_0_EQ );
VBV_CAL_STRKENOS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VBV_CAL_STROKE_B_NAME , 0_16 , VBV_CAL_NOT_START_NOT );
VBV_CAL_STRKENOS_R_TIME = R_TIME_FUNCTION( 0 , VBV_CAL_STROKE_B_NAME , 0_16 , VBV_CAL_NOT_START_NOT );
VBV_CAL_STROKE_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VBV_STROKE_B_NAME );
VBV_CAL_WAR_OR_OR = OR_FUNCTION( LOC_REM_DELAY_WAR_DELAY , VBV_CAL_CALENBL_B_NAME );
