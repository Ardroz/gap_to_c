SFC_STEP_NOT_GAS_NOT =! VENT_STRT_INI_T_OR;
A_COMPARE_FUNCTION(0 , 55.0 , VENT_HSS_T_TMP_A_MAX,&VENT_ENCL_LT_55_A_COMPARE,&VENT_ENCL_LT_55_A_EQUAL);
VENT_FANS_RDY_B_NAME = VENT_NOTHOLD_OR;
VENT_FANTFA_OR_OR = VENT_GOTOTFA_AND || VENT_TSTTF_A_AND;
VENT_FANTFB_OR_OR = VENT_GOTOTFB_AND || VENT_TSTTF_B_AND;
VENT_FAN_RESET_OR = VENT_RESET_B_NAME || VENT_PSTTMR_MSK_AND || VENT_T_LEL_AL_B_NAME || VENT_T_LEL_SD_B_NAME;
VENT_GOTOTFA_AND = VENT_STRT_INI_T_OR && VENT_TF_A_SEL_T_FLIPFLOP;
VENT_GOTOTFB_AND = VENT_STRT_INI_T_OR && VENT_TF_B_SEL_NOT;
VENT_MAINTMODE_B_NAME = *FALSE;
if(VENT_TFANS_RDY_TRAN_2 || VENT_MOT6418SFC_TRAN_2 || VENT_MOT6418SFC_TRAN_5) { 
	if( VENT_STOPFANS_LATCH) {
		VENT_MOT6417SFC_TRAN_1 = VENT_STOPFANS_LATCH;
	} else if( VENT_TFXFRA_AND_AND) {
		VENT_MOT6417SFC_TRAN_2 = VENT_TFXFRA_AND_AND;
	} else if( VENT_PSTTMR_MSK_AND) {
		VENT_MOT6417SFC_TRAN_3 = VENT_PSTTMR_MSK_AND;
	} else if( VENT_TFTSTA_OS_ONE_SHOT) {
		VENT_MOT6417SFC_TRAN_4 = VENT_TFTSTA_OS_ONE_SHOT;
	} else if( VENT_TFB_OS_ONE_SHOT) {
		VENT_MOT6417SFC_TRAN_5 = VENT_TFB_OS_ONE_SHOT;
	} else 
		VENT_MOT6417SFC_SFC_STEP= 1
} else {
  VENT_MOT6417SFC_ACTIVETIME= 0; 
  VENT_MOT6417SFC_SFC_STEP= 0; 
  VENT_MOT6417SFC_TRAN_1= 0; 
  VENT_MOT6417SFC_TRAN_2= 0; 
  VENT_MOT6417SFC_TRAN_3= 0; 
  VENT_MOT6417SFC_TRAN_4= 0; 
  VENT_MOT6417SFC_TRAN_5 = 0; 
}
if(VENT_TFANS_RDY_TRAN_3 || VENT_MOT6417SFC_TRAN_2 || VENT_MOT6417SFC_TRAN_5) { 
	if( VENT_STOPFANS_LATCH) {
		VENT_MOT6418SFC_TRAN_1 = VENT_STOPFANS_LATCH;
	} else if( VENT_TFXFRB_AND_AND) {
		VENT_MOT6418SFC_TRAN_2 = VENT_TFXFRB_AND_AND;
	} else if( VENT_PSTTMR_MSK_AND) {
		VENT_MOT6418SFC_TRAN_3 = VENT_PSTTMR_MSK_AND;
	} else if( VENT_TFTSTB_OS_ONE_SHOT) {
		VENT_MOT6418SFC_TRAN_4 = VENT_TFTSTB_OS_ONE_SHOT;
	} else if( VENT_TFA_OS_ONE_SHOT) {
		VENT_MOT6418SFC_TRAN_5 = VENT_TFA_OS_ONE_SHOT;
	} else 
		VENT_MOT6418SFC_SFC_STEP= 1
} else {
  VENT_MOT6418SFC_ACTIVETIME= 0; 
  VENT_MOT6418SFC_SFC_STEP= 0; 
  VENT_MOT6418SFC_TRAN_1= 0; 
  VENT_MOT6418SFC_TRAN_2= 0; 
  VENT_MOT6418SFC_TRAN_3= 0; 
  VENT_MOT6418SFC_TRAN_4= 0; 
  VENT_MOT6418SFC_TRAN_5 = 0; 
}
VENT_NOTHOLD_OR = VENT_TFANS_OFF_SFC_STEP || VENT_GFANSOFF_SFC_STEP;
VENT_NOTTESTTFA_NOT =! VENT_TSTTF_A_AND;
VENT_NOTTESTTFB_NOT =! VENT_TSTTF_B_AND;
VENT_NOT_TSTDBY_NOT =! VENT_DLY_STDBYT_DELAY;
DELAY_FUNCTION(1 , 900 , 0 , VENT_PSTCLDMSKT_AND,&VENT_PST2CLDN_DELAY,&VENT_PST2CLDN_R_TIME);
VENT_PSTTMR_MSK_AND = VENT_STOP_OR_OR && VENT_NOTTESTTFA_NOT && VENT_NOTTESTTFB_NOT && SFC_STEP_NOT_GAS_NOT;
VENT_RESET_B_NAME = ALARM_RESET_B_NAME;
VENT_START_INI_B_NAME = SFC_STEP_VENT_SFC_STEP;
VENT_STOP_OR_OR = VENT_T_OFF_AND_AND || VENT_TPSTVENTDN_B_NAME || SFC_STEP_WWCRANK_1_SFC_STEP;
VENT_STRT_INI_T_OR = VENT_T_LEL_LAT_LATCH1 || VENT_START_INI_B_NAME || VENT_RUN_RELAY_B_NAME || SFC_STEP_HISPD_OR_OR || SFC_STEP_LOSPD_OR_OR || SFC_STEP_WWCRANK_0_SFC_STEP || VENT_HITMP_RUN1_OR;
VENT_TA_DUTYSEL_AND = VENT_MOT6417_B_NAME && VENT_TF_B_SEL_NOT && VENT_TFAN_A_OK_NOT;
VENT_TA_SEL_Z_ZMINUS1_B = VENT_TA_DUTYSEL_AND;
VENT_TB_DUTYSEL_AND = VENT_MOT6418_B_NAME && VENT_TF_A_SEL_T_FLIPFLOP && VENT_TFAN_B_OK_NOT;
VENT_TB_SEL_Z_ZMINUS1_B = VENT_TB_DUTYSEL_AND;
if(VENT_TFANS_RDY_TRAN_1 || VENT_MOT6417SFC_TRAN_1 || VENT_MOT6418SFC_TRAN_1 || VENT_MOT6417SFC_TRAN_3 || VENT_MOT6418SFC_TRAN_3 || VENT_MOT6417SFC_TRAN_4 || VENT_MOT6418SFC_TRAN_4) { 
	if( VENT_FAN_RESET_OR) {
		VENT_TFANS_OFF_TRAN_1 = VENT_FAN_RESET_OR;
	} else 
		VENT_TFANS_OFF_SFC_STEP= 1
} else {
  VENT_TFANS_OFF_ACTIVETIME= 0; 
  VENT_TFANS_OFF_SFC_STEP= 0; 
  VENT_TFANS_OFF_TRAN_1 = 0; 
}
VENT_TFANS_ON_NOT =! VENT_TFANS_RDY_SFC_STEP;
if(VENT_TFANS_OFF_TRAN_1) { 
	if( VENT_STOPFANS_LATCH) {
		VENT_TFANS_RDY_TRAN_1 = VENT_STOPFANS_LATCH;
	} else if( VENT_FANTFA_OR_OR) {
		VENT_TFANS_RDY_TRAN_2 = VENT_FANTFA_OR_OR;
	} else if( VENT_FANTFB_OR_OR) {
		VENT_TFANS_RDY_TRAN_3 = VENT_FANTFB_OR_OR;
	} else 
		VENT_TFANS_RDY_SFC_STEP= 1
} else {
  VENT_TFANS_RDY_ACTIVETIME= 0; 
  VENT_TFANS_RDY_SFC_STEP= 0; 
  VENT_TFANS_RDY_TRAN_1= 0; 
  VENT_TFANS_RDY_TRAN_2= 0; 
  VENT_TFANS_RDY_TRAN_3 = 0; 
}
VENT_TFAN_A_OK_NOT =! VENT_AFAIL_T_LT_LATCH;
  bool VENT_TFAN_A_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , VENT_TA_SEL_Z_ZMINUS1_B,&VENT_TFAN_A_OS_ONE_SHOT,&VENT_TFAN_A_OS_R_TIME,&VENT_TFAN_A_OS_LAST_TRIGGER);
VENT_TFAN_B_OK_NOT =! VENT_BFAIL_T_LT_LATCH;
  bool VENT_TFAN_B_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , VENT_TB_SEL_Z_ZMINUS1_B,&VENT_TFAN_B_OS_ONE_SHOT,&VENT_TFAN_B_OS_R_TIME,&VENT_TFAN_B_OS_LAST_TRIGGER);
  bool VENT_TFA_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , VENT_TF_A_SEL_T_FLIPFLOP,&VENT_TFA_OS_ONE_SHOT,&VENT_TFA_OS_R_TIME,&VENT_TFA_OS_LAST_TRIGGER);
  bool VENT_TFB_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , VENT_TF_B_SEL_NOT,&VENT_TFB_OS_ONE_SHOT,&VENT_TFB_OS_R_TIME,&VENT_TFB_OS_LAST_TRIGGER);
  bool VENT_TFTSTA_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , 0 , VENT_NOTTESTTFA_NOT,&VENT_TFTSTA_OS_ONE_SHOT,&VENT_TFTSTA_OS_R_TIME,&VENT_TFTSTA_OS_LAST_TRIGGER);
  bool VENT_TFTSTB_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , 0 , VENT_NOTTESTTFB_NOT,&VENT_TFTSTB_OS_ONE_SHOT,&VENT_TFTSTB_OS_R_TIME,&VENT_TFTSTB_OS_LAST_TRIGGER);
VENT_TFXFRA_AND_AND = TRUE && VENT_FSL6408ALM_B_NAME;
VENT_TFXFRB_AND_AND = TRUE && VENT_FSL6453ALM_B_NAME;
  bool VENT_TF_A_SEL_IN_1_LAST; 
  bool VENT_TF_A_SEL_IN_2_LAST; 
T_FLIPFLOP_FUNCTION(1 , VENT_TF_SEL_OR_OR , *FALSE , 0,&VENT_TF_A_SEL_T_FLIPFLOP,&VENT_TF_A_SEL_IN_1_LAST, &VENT_TF_A_SEL_IN_2_LAST); 
 VENT_TF_B_SEL_NOT =! VENT_TF_A_SEL_T_FLIPFLOP;
VENT_TF_SELHMI_B_NAME = OP_INTRFC_TFAN_SW_B_NAME;
VENT_TF_SEL_OR_OR = VENT_TF_SELHMI_B_NAME || VENT_T_CHG_OS_ONE_SHOT || VENT_TFAN_A_OS_ONE_SHOT || VENT_TFAN_B_OS_ONE_SHOT;
VENT_TSTTF_A_AND = VENT_MAINTMODE_B_NAME && VENT_TTEST_OR_OR && VENT_TF_A_SEL_T_FLIPFLOP;
VENT_TSTTF_B_AND = VENT_MAINTMODE_B_NAME && VENT_TTEST_OR_OR && VENT_TF_B_SEL_NOT;
VENT_TTEST_DCS_B_NAME = *FALSE;
VENT_TTEST_HMI_B_NAME = OP_INTRFC_TFAN_TSTSW_B_NAME;
VENT_TTEST_OR_OR = VENT_TTEST_HMI_B_NAME || VENT_TTEST_DCS_B_NAME;
  bool VENT_T_CHG_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , 0 , VENT_STOP_OR_OR,&VENT_T_CHG_OS_ONE_SHOT,&VENT_T_CHG_OS_R_TIME,&VENT_T_CHG_OS_LAST_TRIGGER);
VENT_T_OFF_AND_AND = VENT_ENCL_LT_55_A_COMPARE && VENT_PST2CLDN_DELAY;
