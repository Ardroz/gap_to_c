SPRINT_GAS_OR_LIQ_OR = FUEL_SYS_GAS100_B_NAME || CORE_DIGITAL_FUELOFF;
if(SPRINT_SPRTRMPOFF_OR) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_HP_OFF_1_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_HP_OFF_1_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_RAMP_DOWN_P_LIM_1) {
		SPRINT_HP_OFF_1_TRAN_3 = SPRINT_RAMP_DOWN_P_LIM_1;
	} else 
		SPRINT_HP_OFF_1_SFC_STEP= 1
} else {
  SPRINT_HP_OFF_1_ACTIVETIME= 0; 
  SPRINT_HP_OFF_1_SFC_STEP= 0; 
  SPRINT_HP_OFF_1_TRAN_1= 0; 
  SPRINT_HP_OFF_1_TRAN_2= 0; 
  SPRINT_HP_OFF_1_TRAN_3 = 0; 
}
if(SPRINT_HP_OFF_1_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_HP_OFF_2_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_HP_OFF_2_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_DRAINHP_TM_DELAY) {
		SPRINT_HP_OFF_2_TRAN_3 = SPRINT_DRAINHP_TM_DELAY;
	} else 
		SPRINT_HP_OFF_2_SFC_STEP= 1
} else {
  SPRINT_HP_OFF_2_ACTIVETIME= 0; 
  SPRINT_HP_OFF_2_SFC_STEP= 0; 
  SPRINT_HP_OFF_2_TRAN_1= 0; 
  SPRINT_HP_OFF_2_TRAN_2= 0; 
  SPRINT_HP_OFF_2_TRAN_3 = 0; 
}
if(SPRINT_SPRYRMPOFF_OR) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_LP_OFF_1_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_LP_OFF_1_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_RAMP_DOWN_P_LIM_1) {
		SPRINT_LP_OFF_1_TRAN_3 = SPRINT_RAMP_DOWN_P_LIM_1;
	} else 
		SPRINT_LP_OFF_1_SFC_STEP= 1
} else {
  SPRINT_LP_OFF_1_ACTIVETIME= 0; 
  SPRINT_LP_OFF_1_SFC_STEP= 0; 
  SPRINT_LP_OFF_1_TRAN_1= 0; 
  SPRINT_LP_OFF_1_TRAN_2= 0; 
  SPRINT_LP_OFF_1_TRAN_3 = 0; 
}
if(SPRINT_LP_OFF_1_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_LP_OFF_2_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_LP_OFF_2_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_DLY_LPEHLD_DELAY) {
		SPRINT_LP_OFF_2_TRAN_3 = SPRINT_DLY_LPEHLD_DELAY;
	} else 
		SPRINT_LP_OFF_2_SFC_STEP= 1
} else {
  SPRINT_LP_OFF_2_ACTIVETIME= 0; 
  SPRINT_LP_OFF_2_SFC_STEP= 0; 
  SPRINT_LP_OFF_2_TRAN_1= 0; 
  SPRINT_LP_OFF_2_TRAN_2= 0; 
  SPRINT_LP_OFF_2_TRAN_3 = 0; 
}
if(SPRINT_LP_OFF_2_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_LP_OFF_3_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_LP_OFF_3_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( TRUE) {
		SPRINT_LP_OFF_3_TRAN_3 = TRUE;
	} else 
		SPRINT_LP_OFF_3_SFC_STEP= 1
} else {
  SPRINT_LP_OFF_3_ACTIVETIME= 0; 
  SPRINT_LP_OFF_3_SFC_STEP= 0; 
  SPRINT_LP_OFF_3_TRAN_1= 0; 
  SPRINT_LP_OFF_3_TRAN_2= 0; 
  SPRINT_LP_OFF_3_TRAN_3 = 0; 
}
if(SPRINT_LP_XFR_WT_TRAN_1) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_LP_OFF_4_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_LP_OFF_4_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_DLY_LPPHLD_DELAY) {
		SPRINT_LP_OFF_4_TRAN_3 = SPRINT_DLY_LPPHLD_DELAY;
	} else 
		SPRINT_LP_OFF_4_SFC_STEP= 1
} else {
  SPRINT_LP_OFF_4_ACTIVETIME= 0; 
  SPRINT_LP_OFF_4_SFC_STEP= 0; 
  SPRINT_LP_OFF_4_TRAN_1= 0; 
  SPRINT_LP_OFF_4_TRAN_2= 0; 
  SPRINT_LP_OFF_4_TRAN_3 = 0; 
}
if(SPRINT_LP_OFF_4_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_LP_OFF_5_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_LP_OFF_5_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_LP_PRG_TMR_DELAY) {
		SPRINT_LP_OFF_5_TRAN_3 = SPRINT_LP_PRG_TMR_DELAY;
	} else 
		SPRINT_LP_OFF_5_SFC_STEP= 1
} else {
  SPRINT_LP_OFF_5_ACTIVETIME= 0; 
  SPRINT_LP_OFF_5_SFC_STEP= 0; 
  SPRINT_LP_OFF_5_TRAN_1= 0; 
  SPRINT_LP_OFF_5_TRAN_2= 0; 
  SPRINT_LP_OFF_5_TRAN_3 = 0; 
}
if(SPRINT_LP_OFF_3_TRAN_3) { 
	if( SPRINT_GAS_OR_LIQ_OR) {
		SPRINT_LP_XFR_WT_TRAN_1 = SPRINT_GAS_OR_LIQ_OR;
	} else 
		SPRINT_LP_XFR_WT_SFC_STEP= 1
} else {
  SPRINT_LP_XFR_WT_ACTIVETIME= 0; 
  SPRINT_LP_XFR_WT_SFC_STEP= 0; 
  SPRINT_LP_XFR_WT_TRAN_1 = 0; 
}
SPRINT_MASK_PURGE_AND = SPRINT_OFF_4_SFC_STEP && SPRINT_NOT_RUNNIN_NOT;
SPRINT_NOTOFF_NOT =! SPRINT_TRANSOFF_AND;
if(SPRINT_OFF_4_TRAN_3 || SPRINT_SPRT_READY_TRAN_1) { 
	if( SPRINT_NOTOFF_NOT) {
		SPRINT_NOTREADY_TRAN_1 = SPRINT_NOTOFF_NOT;
	} else 
		SPRINT_NOTREADY_SFC_STEP= 1
} else {
  SPRINT_NOTREADY_ACTIVETIME= 0; 
  SPRINT_NOTREADY_SFC_STEP= 0; 
  SPRINT_NOTREADY_TRAN_1 = 0; 
}
SPRINT_NOT_RUNNIN_NOT =! FALSE;
if(SPRINT_HP_OFF_2_TRAN_3 || SPRINT_SPRNTOFFOR_OR) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_OFF_1_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_OFF_1_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_EVAC_SW1_B_SW) {
		SPRINT_OFF_1_TRAN_3 = SPRINT_EVAC_SW1_B_SW;
	} else 
		SPRINT_OFF_1_SFC_STEP= 1
} else {
  SPRINT_OFF_1_ACTIVETIME= 0; 
  SPRINT_OFF_1_SFC_STEP= 0; 
  SPRINT_OFF_1_TRAN_1= 0; 
  SPRINT_OFF_1_TRAN_2= 0; 
  SPRINT_OFF_1_TRAN_3 = 0; 
}
if(SPRINT_OFF_WT_XFR_TRAN_1) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_OFF_2_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_OFF_2_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_LP_PRG_TMR_DELAY) {
		SPRINT_OFF_2_TRAN_3 = SPRINT_LP_PRG_TMR_DELAY;
	} else 
		SPRINT_OFF_2_SFC_STEP= 1
} else {
  SPRINT_OFF_2_ACTIVETIME= 0; 
  SPRINT_OFF_2_SFC_STEP= 0; 
  SPRINT_OFF_2_TRAN_1= 0; 
  SPRINT_OFF_2_TRAN_2= 0; 
  SPRINT_OFF_2_TRAN_3 = 0; 
}
if(SPRINT_OFF_2_TRAN_3 || SPRINT_LP_OFF_5_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_OFF_3_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_OFF_3_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_DN_PRG_TMR_DELAY) {
		SPRINT_OFF_3_TRAN_3 = SPRINT_DN_PRG_TMR_DELAY;
	} else 
		SPRINT_OFF_3_SFC_STEP= 1
} else {
  SPRINT_OFF_3_ACTIVETIME= 0; 
  SPRINT_OFF_3_SFC_STEP= 0; 
  SPRINT_OFF_3_TRAN_1= 0; 
  SPRINT_OFF_3_TRAN_2= 0; 
  SPRINT_OFF_3_TRAN_3 = 0; 
}
if(SPRINT_OFF_3_TRAN_3) { 
	if( SPRINT_SEL_SPRINT_AND) {
		SPRINT_OFF_4_TRAN_1 = SPRINT_SEL_SPRINT_AND;
	} else if( SPRINT_SEL_SPRAY_AND) {
		SPRINT_OFF_4_TRAN_2 = SPRINT_SEL_SPRAY_AND;
	} else if( SPRINT_TRAN_4_OR_OR) {
		SPRINT_OFF_4_TRAN_3 = SPRINT_TRAN_4_OR_OR;
	} else 
		SPRINT_OFF_4_SFC_STEP= 1
} else {
  SPRINT_OFF_4_ACTIVETIME= 0; 
  SPRINT_OFF_4_SFC_STEP= 0; 
  SPRINT_OFF_4_TRAN_1= 0; 
  SPRINT_OFF_4_TRAN_2= 0; 
  SPRINT_OFF_4_TRAN_3 = 0; 
}
if(SPRINT_OFF_1_TRAN_3) { 
	if( SPRINT_GAS_OR_LIQ_OR) {
		SPRINT_OFF_WT_XFR_TRAN_1 = SPRINT_GAS_OR_LIQ_OR;
	} else 
		SPRINT_OFF_WT_XFR_SFC_STEP= 1
} else {
  SPRINT_OFF_WT_XFR_ACTIVETIME= 0; 
  SPRINT_OFF_WT_XFR_SFC_STEP= 0; 
  SPRINT_OFF_WT_XFR_TRAN_1 = 0; 
}
SPRINT_OK_TO_XFR_OR = SPRINT_LP_XFR_WT_SFC_STEP || SPRINT_OFF_WT_XFR_SFC_STEP || SPRINT_NOTREADY_SFC_STEP;
SPRINT_SPRINT_OUT_B_NAME = SPRINT_SPRNT_O_OR_OR;
SPRINT_SPRNTOFFOR_OR = SPRINT_HP_ON_1_TRAN_1 || SPRINT_HP_ON_2_TRAN_1;
SPRINT_SPRNT_O_OR_OR = SPRINT_HP_OFF_2_SFC_STEP || SPRINT_LP_OFF_3_SFC_STEP || SPRINT_LP_OFF_5_SFC_STEP || SPRINT_OFF_1_SFC_STEP || SPRINT_OFF_2_SFC_STEP || SPRINT_OFF_3_SFC_STEP || SPRINT_MASK_PURGE_AND || SPRINT_NOTREADY_SFC_STEP;
SPRINT_SPRTRMPOFF_OR = SPRINT_LP_2_HP_1_TRAN_1 || SPRINT_LP_2_HP_2_TRAN_1 || SPRINT_LP_2_HP_3_TRAN_1 || SPRINT_LP_2_HP_4_TRAN_1 || SPRINT_LP_2_HP_5_TRAN_1 || SPRINT_HP_ON_3_TRAN_1;
SPRINT_SPRYRMPOFF_OR = SPRINT_HP_2_LP_1_TRAN_1 || SPRINT_HP_2_LP_2_TRAN_1 || SPRINT_HP_2_LP_3_TRAN_1 || SPRINT_LP_ON_1_TRAN_1 || SPRINT_LP_ON_2_TRAN_1 || SPRINT_LP_ON_3_TRAN_1;
SPRINT_TRAN_4_OR_OR = SPRINT_HP_PRG_TMR_DELAY || FALSE;