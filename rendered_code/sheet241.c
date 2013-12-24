FIN_FAN_AMB_FRZ_AND = VENT_T0_LT_32_B_NAME && FIN_FAN_FANSEL_EQ;
  bool FIN_FAN_COOLDN_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , FIN_FAN_MTRCLDNDN_B_NAME,&FIN_FAN_COOLDN_OS_ONE_SHOT,&FIN_FAN_COOLDN_OS_R_TIME,&FIN_FAN_COOLDN_OS_LAST_TRIGGER);
FIN_FAN_COOLREST_OR = FIN_FAN_TEMP_OFF_AND || FIN_FAN_NOTTEST_OS_ONE_SHOT || FIN_FAN_COOLDN_OS_ONE_SHOT || FIN_FAN_MAN_NT_OS_ONE_SHOT || FIN_FAN_LUBE_OFF_AND;
FIN_FAN_COUNTERVAL_A_SW = A_SW_FUNCTION( FIN_FAN_THREE_FANS_B_NAME , 2.1 , 3.1 );
DELAY_FUNCTION(1 , 0.5 , 2 , FIN_FAN_FAN_01_SFC_STEP,&FIN_FAN_DLY_1_DELAY,&FIN_FAN_DLY_1_R_TIME);
DELAY_FUNCTION(1 , 0.5 , 2 , FIN_FAN_FAN_02_SFC_STEP,&FIN_FAN_DLY_2_DELAY,&FIN_FAN_DLY_2_R_TIME);
DELAY_FUNCTION(1 , 0 , 2 , FIN_FAN_FAN_03_SFC_STEP,&FIN_FAN_DLY_3_DELAY,&FIN_FAN_DLY_3_R_TIME);
FIN_FAN_EN_FINFAN_B_NAME = *TRUE;
FIN_FAN_FANB_FL_SW_B_SW = B_SW_FUNCTION( FIN_FAN_THREE_FANS_B_NAME , FALSE , FIN_FAN_X68327BOS_ONE_SHOT );
if(FIN_FAN_FAN_HOLD_TRAN_1 || FIN_FAN_FAN_01_TRAN_4 || FIN_FAN_FAN_02_TRAN_4 || FIN_FAN_FAN_03_TRAN_4) { 
	if( FIN_FAN_STOPFANS_LATCH) {
		FIN_FAN_FANOUTOFOP_TRAN_1 = FIN_FAN_STOPFANS_LATCH;
	} else if( FIN_FAN_RUN_A_AND) {
		FIN_FAN_FANOUTOFOP_TRAN_2 = FIN_FAN_RUN_A_AND;
	} else if( FIN_FAN_RUN_B_AND) {
		FIN_FAN_FANOUTOFOP_TRAN_3 = FIN_FAN_RUN_B_AND;
	} else if( FIN_FAN_RUN_C_AND) {
		FIN_FAN_FANOUTOFOP_TRAN_4 = FIN_FAN_RUN_C_AND;
	} else 
		FIN_FAN_FANOUTOFOP_SFC_STEP= 1
} else {
  FIN_FAN_FANOUTOFOP_ACTIVETIME= 0; 
  FIN_FAN_FANOUTOFOP_SFC_STEP= 0; 
  FIN_FAN_FANOUTOFOP_TRAN_1= 0; 
  FIN_FAN_FANOUTOFOP_TRAN_2= 0; 
  FIN_FAN_FANOUTOFOP_TRAN_3= 0; 
  FIN_FAN_FANOUTOFOP_TRAN_4 = 0; 
}
I_COMPARE_FUNCTION(FIN_FAN_FAN_CNVT_OUT_1 , 2,&FIN_FAN_FANSEL_EQ,&FIN_FAN_FANSEL_GT,&FIN_FAN_FANSEL_LT);
FIN_FAN_FANTESTMSK_AND = FIN_FAN_FAN_TEST_B_NAME && FIN_FAN_MAINT_MODE_B_NAME;
if(FIN_FAN_FANOUTOFOP_TRAN_2 || FIN_FAN_FAN_02_TRAN_3 || FIN_FAN_FAN_A_SW_B_SW) { 
	if( FIN_FAN_STOPFANS_LATCH) {
		FIN_FAN_FAN_01_TRAN_1 = FIN_FAN_STOPFANS_LATCH;
	} else if( FIN_FAN_X68327AOS_ONE_SHOT) {
		FIN_FAN_FAN_01_TRAN_2 = FIN_FAN_X68327AOS_ONE_SHOT;
	} else if( FIN_FAN_FANB_FL_SW_B_SW) {
		FIN_FAN_FAN_01_TRAN_3 = FIN_FAN_FANB_FL_SW_B_SW;
	} else if( FIN_FAN_COOLREST_OR) {
		FIN_FAN_FAN_01_TRAN_4 = FIN_FAN_COOLREST_OR;
	} else 
		FIN_FAN_FAN_01_SFC_STEP= 1
} else {
  FIN_FAN_FAN_01_ACTIVETIME= 0; 
  FIN_FAN_FAN_01_SFC_STEP= 0; 
  FIN_FAN_FAN_01_TRAN_1= 0; 
  FIN_FAN_FAN_01_TRAN_2= 0; 
  FIN_FAN_FAN_01_TRAN_3= 0; 
  FIN_FAN_FAN_01_TRAN_4 = 0; 
}
if(FIN_FAN_FANOUTOFOP_TRAN_3 || FIN_FAN_FAN_01_TRAN_2 || FIN_FAN_FAN_03_TRAN_2) { 
	if( FIN_FAN_STOPFANS_LATCH) {
		FIN_FAN_FAN_02_TRAN_1 = FIN_FAN_STOPFANS_LATCH;
	} else if( FIN_FAN_X68327BOS_ONE_SHOT) {
		FIN_FAN_FAN_02_TRAN_2 = FIN_FAN_X68327BOS_ONE_SHOT;
	} else if( FIN_FAN_X68327COS_ONE_SHOT) {
		FIN_FAN_FAN_02_TRAN_3 = FIN_FAN_X68327COS_ONE_SHOT;
	} else if( FIN_FAN_COOLREST_OR) {
		FIN_FAN_FAN_02_TRAN_4 = FIN_FAN_COOLREST_OR;
	} else 
		FIN_FAN_FAN_02_SFC_STEP= 1
} else {
  FIN_FAN_FAN_02_ACTIVETIME= 0; 
  FIN_FAN_FAN_02_SFC_STEP= 0; 
  FIN_FAN_FAN_02_TRAN_1= 0; 
  FIN_FAN_FAN_02_TRAN_2= 0; 
  FIN_FAN_FAN_02_TRAN_3= 0; 
  FIN_FAN_FAN_02_TRAN_4 = 0; 
}
if(FIN_FAN_FAN_B_SW_B_SW || FIN_FAN_FANOUTOFOP_TRAN_4 || FIN_FAN_FAN_01_TRAN_3) { 
	if( FIN_FAN_STOPFANS_LATCH) {
		FIN_FAN_FAN_03_TRAN_1 = FIN_FAN_STOPFANS_LATCH;
	} else if( FIN_FAN_X68327AOS_ONE_SHOT) {
		FIN_FAN_FAN_03_TRAN_2 = FIN_FAN_X68327AOS_ONE_SHOT;
	} else if( FIN_FAN_X68327COS_ONE_SHOT) {
		FIN_FAN_FAN_03_TRAN_3 = FIN_FAN_X68327COS_ONE_SHOT;
	} else if( FIN_FAN_COOLREST_OR) {
		FIN_FAN_FAN_03_TRAN_4 = FIN_FAN_COOLREST_OR;
	} else 
		FIN_FAN_FAN_03_SFC_STEP= 1
} else {
  FIN_FAN_FAN_03_ACTIVETIME= 0; 
  FIN_FAN_FAN_03_SFC_STEP= 0; 
  FIN_FAN_FAN_03_TRAN_1= 0; 
  FIN_FAN_FAN_03_TRAN_2= 0; 
  FIN_FAN_FAN_03_TRAN_3= 0; 
  FIN_FAN_FAN_03_TRAN_4 = 0; 
}
DELAY_FUNCTION(1 , 1.0 , 0 , FIN_FAN_FANOUTOFOP_SFC_STEP,&FIN_FAN_FAN_AUTOSW_DELAY,&FIN_FAN_FAN_AUTOSW_R_TIME);
FIN_FAN_FAN_A_SW_B_SW = B_SW_FUNCTION( FIN_FAN_THREE_FANS_B_NAME , FIN_FAN_FAN_02_TRAN_2 , FIN_FAN_FAN_03_TRAN_3 );
FIN_FAN_FAN_B_SW_B_SW = B_SW_FUNCTION( FIN_FAN_THREE_FANS_B_NAME , FALSE , FIN_FAN_FAN_02_TRAN_2 );
FIN_FAN_FAN_CNVT_OUT_1 =(int)FIN_FAN_TFAN_FFLOP_COUNTER;
if(FIN_FAN_FANOUTOFOP_TRAN_1 || FIN_FAN_FAN_01_TRAN_1 || FIN_FAN_FAN_02_TRAN_1 || FIN_FAN_FAN_03_TRAN_1) { 
	if( FIN_FAN_SYSRST_MSK_AND) {
		FIN_FAN_FAN_HOLD_TRAN_1 = FIN_FAN_SYSRST_MSK_AND;
	} else 
		FIN_FAN_FAN_HOLD_SFC_STEP= 1
} else {
  FIN_FAN_FAN_HOLD_ACTIVETIME= 0; 
  FIN_FAN_FAN_HOLD_SFC_STEP= 0; 
  FIN_FAN_FAN_HOLD_TRAN_1 = 0; 
}
FIN_FAN_FAN_TEST_B_NAME = HMI_BO_BW_V_76_B_NAME;
FIN_FAN_FFRST_Z_ZMINUS1_B = FIN_FAN_TFAN_FFLOP_CMP_OUT;
FIN_FAN_FF_TRGR_OR_OR = FIN_FAN_MAN_OS_ONE_SHOT || FIN_FAN_START_OS_ONE_SHOT;
FIN_FAN_FINFAN_ST_AND = GLUB_EITHER_ON_OR && VENT_T0_GT_10_B_NAME && FIN_FAN_HI_TEMP_OR && FIN_FAN_EN_FINFAN_B_NAME;
FIN_FAN_FRZRST_Z_ZMINUS1_B = FIN_FAN_AMB_FRZ_AND;
FIN_FAN_HI_TEMP_OR = TLO_TLUB_GT100_B_NAME || GLUB_GLUB_GT100_B_NAME;
FIN_FAN_LUBE_OFF_AND = GLUB_CLDNTMRDN_B_NAME && SPEED_SW_N25LT100_NOT;
FIN_FAN_MAINT_MODE_B_NAME = *FALSE;
  bool FIN_FAN_MAN_NT_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , FIN_FAN_FANOUTOFOP_SFC_STEP , FIN_FAN_MN_STCH_NT_NOT,&FIN_FAN_MAN_NT_OS_ONE_SHOT,&FIN_FAN_MAN_NT_OS_R_TIME,&FIN_FAN_MAN_NT_OS_LAST_TRIGGER);
  bool FIN_FAN_MAN_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , FIN_FAN_MAN_SWITCH_B_NAME,&FIN_FAN_MAN_OS_ONE_SHOT,&FIN_FAN_MAN_OS_R_TIME,&FIN_FAN_MAN_OS_LAST_TRIGGER);
FIN_FAN_MAN_SWITCH_B_NAME = HMI_BO_BW_V_128_B_NAME;
FIN_FAN_MLO_OR_TST_OR = FIN_FAN_STRTINI_OS_ONE_SHOT || FIN_FAN_FINFAN_ST_AND || FIN_FAN_TEST_FF_T_FLIPFLOP;
FIN_FAN_MN_STCH_NT_NOT =! FIN_FAN_MAN_OS_ONE_SHOT;
FIN_FAN_MTRCLDNDN_B_NAME = GLUB_CLDNTMRDN_B_NAME;
  bool FIN_FAN_NOTTEST_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , GLUB_EITHER_ON_OR , FIN_FAN_NOT_TEST_NOT,&FIN_FAN_NOTTEST_OS_ONE_SHOT,&FIN_FAN_NOTTEST_OS_R_TIME,&FIN_FAN_NOTTEST_OS_LAST_TRIGGER);
FIN_FAN_NOT_TEST_NOT =! FIN_FAN_TEST_FF_T_FLIPFLOP;
FIN_FAN_RST_OR = FIN_FAN_FFRST_Z_ZMINUS1_B || FIN_FAN_FRZRST_Z_ZMINUS1_B;
FIN_FAN_RUN_01_B_NAME = FIN_FAN_FANSEL_LT;
FIN_FAN_RUN_02_B_NAME = FIN_FAN_FANSEL_EQ;
FIN_FAN_RUN_A_AND = FIN_FAN_MLO_OR_TST_OR && FIN_FAN_FANSEL_LT;
FIN_FAN_RUN_B_AND = FIN_FAN_MLO_OR_TST_OR && FIN_FAN_FANSEL_EQ;
FIN_FAN_RUN_C_AND = FIN_FAN_MLO_OR_TST_OR && FIN_FAN_FANSEL_GT && FIN_FAN_THREE_FANS_B_NAME;
FIN_FAN_START_INIT_B_NAME = FIN_FAN_FAN_AUTOSW_DELAY;
  bool FIN_FAN_START_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , FIN_FAN_STRTINITMK_AND,&FIN_FAN_START_OS_ONE_SHOT,&FIN_FAN_START_OS_R_TIME,&FIN_FAN_START_OS_LAST_TRIGGER);
FIN_FAN_STRTINITMK_AND = FIN_FAN_START_INIT_B_NAME && FIN_FAN_EN_FINFAN_B_NAME;
  bool FIN_FAN_STRTINI_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , SFC_STEP_START_INIT_B_NAME,&FIN_FAN_STRTINI_OS_ONE_SHOT,&FIN_FAN_STRTINI_OS_R_TIME,&FIN_FAN_STRTINI_OS_LAST_TRIGGER);
FIN_FAN_SYSRST_MSK_AND = ALARM_RESET_B_NAME && FIN_FAN_EN_FINFAN_B_NAME;
FIN_FAN_TEMP_LO_NOT =! FIN_FAN_HI_TEMP_OR;
FIN_FAN_TEMP_OFF_AND = FIN_FAN_T_OR_G_LO_NAND && VENT_T0_LT_8_B_NAME;
  bool FIN_FAN_TEST_FF_IN_1_LAST; 
  bool FIN_FAN_TEST_FF_IN_2_LAST; 
T_FLIPFLOP_FUNCTION(1 , FIN_FAN_FANTESTMSK_AND , 0 , FIN_FAN_TEST_RST_OR,&FIN_FAN_TEST_FF_T_FLIPFLOP,&FIN_FAN_TEST_FF_IN_1_LAST, &FIN_FAN_TEST_FF_IN_2_LAST); 
 FIN_FAN_TEST_RST_OR = COND_MON_PWRUPOS_ONE_SHOT || GLUB_EITHER_ON_OR;
  bool FIN_FAN_TFAN_FFLOP_TRIGGERLAST;
  bool FIN_FAN_TFAN_FFLOP_RSTLAST;
COUNTER_FUNCTION ( 1 , FIN_FAN_COUNTERVAL_A_SW , FIN_FAN_RST_OR , 1 , FIN_FAN_FF_TRGR_OR_OR , &FIN_FAN_TFAN_FFLOP_TRIGGERLAST , &FIN_FAN_TFAN_FFLOP_RSTLAST , &FIN_FAN_TFAN_FFLOP_COUNTER , &FIN_FAN_TFAN_FFLOP_CMP_OUT );
FIN_FAN_THREE_FANS_B_NAME = *FALSE;
FIN_FAN_T_OR_G_LO_NAND =! TLO_TLUB_GT100_B_NAME && GLUB_GLUB_GT100_B_NAME;
