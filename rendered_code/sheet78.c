VBV_CAL_AVERAGE_CALCULATE =  (20.0 )  -  (  (VBV_CAL_AVG1_A_OUT_7 +VBV_CAL_AVG2_A_OUT_7 +VBV_CAL_AVG3_A_OUT_7 +VBV_CAL_AVG4_A_OUT_7 +VBV_CAL_AVG5_A_OUT_7 )  / 5 ) ;
if (VBV_CAL_MIN_AND== TRUE){   VBV_CAL_AVG1_A_OUT_6 = VBV_CAL_AVG1_A_OUT_5;   VBV_CAL_AVG1_A_OUT_5 = VBV_CAL_AVG1_A_OUT_4;   VBV_CAL_AVG1_A_OUT_4 = VBV_CAL_AVG1_A_OUT_3;   VBV_CAL_AVG1_A_OUT_3 = VBV_CAL_AVG1_A_OUT_2;   VBV_CAL_AVG1_A_OUT_2 = VBV_CAL_AVG1_A_OUT_1;   VBV_CAL_AVG1_A_OUT_1 = VBV_CAL_CURRENT_A_NAME;   VBV_CAL_AVG1_A_OUT_7 = (VBV_CAL_AVG1_A_OUT_1+VBV_CAL_AVG1_A_OUT_2+VBV_CAL_AVG1_A_OUT_3+   VBV_CAL_AVG1_A_OUT_4+VBV_CAL_AVG1_A_OUT_5+VBV_CAL_AVG1_A_OUT_6)/6;}   else {   VBV_CAL_AVG1_A_OUT_6 = VBV_CAL_AVG1_A_OUT_6;   VBV_CAL_AVG1_A_OUT_5 = VBV_CAL_AVG1_A_OUT_5;   VBV_CAL_AVG1_A_OUT_4 = VBV_CAL_AVG1_A_OUT_4;   VBV_CAL_AVG1_A_OUT_3 = VBV_CAL_AVG1_A_OUT_3;   VBV_CAL_AVG1_A_OUT_2 = VBV_CAL_AVG1_A_OUT_2;   VBV_CAL_AVG1_A_OUT_1 = VBV_CAL_AVG1_A_OUT_1;   VBV_CAL_AVG1_A_OUT_7 = VBV_CAL_AVG1_A_OUT_7;};
if (VBV_CAL_LO_MID_AND== TRUE){   VBV_CAL_AVG2_A_OUT_6 = VBV_CAL_AVG2_A_OUT_5;   VBV_CAL_AVG2_A_OUT_5 = VBV_CAL_AVG2_A_OUT_4;   VBV_CAL_AVG2_A_OUT_4 = VBV_CAL_AVG2_A_OUT_3;   VBV_CAL_AVG2_A_OUT_3 = VBV_CAL_AVG2_A_OUT_2;   VBV_CAL_AVG2_A_OUT_2 = VBV_CAL_AVG2_A_OUT_1;   VBV_CAL_AVG2_A_OUT_1 = VBV_CAL_CURRENT_A_NAME;   VBV_CAL_AVG2_A_OUT_7 = (VBV_CAL_AVG2_A_OUT_1+VBV_CAL_AVG2_A_OUT_2+VBV_CAL_AVG2_A_OUT_3+   VBV_CAL_AVG2_A_OUT_4+VBV_CAL_AVG2_A_OUT_5+VBV_CAL_AVG2_A_OUT_6)/6;}   else {   VBV_CAL_AVG2_A_OUT_6 = VBV_CAL_AVG2_A_OUT_6;   VBV_CAL_AVG2_A_OUT_5 = VBV_CAL_AVG2_A_OUT_5;   VBV_CAL_AVG2_A_OUT_4 = VBV_CAL_AVG2_A_OUT_4;   VBV_CAL_AVG2_A_OUT_3 = VBV_CAL_AVG2_A_OUT_3;   VBV_CAL_AVG2_A_OUT_2 = VBV_CAL_AVG2_A_OUT_2;   VBV_CAL_AVG2_A_OUT_1 = VBV_CAL_AVG2_A_OUT_1;   VBV_CAL_AVG2_A_OUT_7 = VBV_CAL_AVG2_A_OUT_7;};
if (VBV_CAL_MID_AND== TRUE){   VBV_CAL_AVG3_A_OUT_6 = VBV_CAL_AVG3_A_OUT_5;   VBV_CAL_AVG3_A_OUT_5 = VBV_CAL_AVG3_A_OUT_4;   VBV_CAL_AVG3_A_OUT_4 = VBV_CAL_AVG3_A_OUT_3;   VBV_CAL_AVG3_A_OUT_3 = VBV_CAL_AVG3_A_OUT_2;   VBV_CAL_AVG3_A_OUT_2 = VBV_CAL_AVG3_A_OUT_1;   VBV_CAL_AVG3_A_OUT_1 = VBV_CAL_CURRENT_A_NAME;   VBV_CAL_AVG3_A_OUT_7 = (VBV_CAL_AVG3_A_OUT_1+VBV_CAL_AVG3_A_OUT_2+VBV_CAL_AVG3_A_OUT_3+   VBV_CAL_AVG3_A_OUT_4+VBV_CAL_AVG3_A_OUT_5+VBV_CAL_AVG3_A_OUT_6)/6;}   else {   VBV_CAL_AVG3_A_OUT_6 = VBV_CAL_AVG3_A_OUT_6;   VBV_CAL_AVG3_A_OUT_5 = VBV_CAL_AVG3_A_OUT_5;   VBV_CAL_AVG3_A_OUT_4 = VBV_CAL_AVG3_A_OUT_4;   VBV_CAL_AVG3_A_OUT_3 = VBV_CAL_AVG3_A_OUT_3;   VBV_CAL_AVG3_A_OUT_2 = VBV_CAL_AVG3_A_OUT_2;   VBV_CAL_AVG3_A_OUT_1 = VBV_CAL_AVG3_A_OUT_1;   VBV_CAL_AVG3_A_OUT_7 = VBV_CAL_AVG3_A_OUT_7;};
if (VBV_CAL_HI_MID_AND== TRUE){   VBV_CAL_AVG4_A_OUT_6 = VBV_CAL_AVG4_A_OUT_5;   VBV_CAL_AVG4_A_OUT_5 = VBV_CAL_AVG4_A_OUT_4;   VBV_CAL_AVG4_A_OUT_4 = VBV_CAL_AVG4_A_OUT_3;   VBV_CAL_AVG4_A_OUT_3 = VBV_CAL_AVG4_A_OUT_2;   VBV_CAL_AVG4_A_OUT_2 = VBV_CAL_AVG4_A_OUT_1;   VBV_CAL_AVG4_A_OUT_1 = VBV_CAL_CURRENT_A_NAME;   VBV_CAL_AVG4_A_OUT_7 = (VBV_CAL_AVG4_A_OUT_1+VBV_CAL_AVG4_A_OUT_2+VBV_CAL_AVG4_A_OUT_3+   VBV_CAL_AVG4_A_OUT_4+VBV_CAL_AVG4_A_OUT_5+VBV_CAL_AVG4_A_OUT_6)/6;}   else {   VBV_CAL_AVG4_A_OUT_6 = VBV_CAL_AVG4_A_OUT_6;   VBV_CAL_AVG4_A_OUT_5 = VBV_CAL_AVG4_A_OUT_5;   VBV_CAL_AVG4_A_OUT_4 = VBV_CAL_AVG4_A_OUT_4;   VBV_CAL_AVG4_A_OUT_3 = VBV_CAL_AVG4_A_OUT_3;   VBV_CAL_AVG4_A_OUT_2 = VBV_CAL_AVG4_A_OUT_2;   VBV_CAL_AVG4_A_OUT_1 = VBV_CAL_AVG4_A_OUT_1;   VBV_CAL_AVG4_A_OUT_7 = VBV_CAL_AVG4_A_OUT_7;};
if (VBV_CAL_MAX_AND== TRUE){   VBV_CAL_AVG5_A_OUT_6 = VBV_CAL_AVG5_A_OUT_5;   VBV_CAL_AVG5_A_OUT_5 = VBV_CAL_AVG5_A_OUT_4;   VBV_CAL_AVG5_A_OUT_4 = VBV_CAL_AVG5_A_OUT_3;   VBV_CAL_AVG5_A_OUT_3 = VBV_CAL_AVG5_A_OUT_2;   VBV_CAL_AVG5_A_OUT_2 = VBV_CAL_AVG5_A_OUT_1;   VBV_CAL_AVG5_A_OUT_1 = VBV_CAL_CURRENT_A_NAME;   VBV_CAL_AVG5_A_OUT_7 = (VBV_CAL_AVG5_A_OUT_1+VBV_CAL_AVG5_A_OUT_2+VBV_CAL_AVG5_A_OUT_3+   VBV_CAL_AVG5_A_OUT_4+VBV_CAL_AVG5_A_OUT_5+VBV_CAL_AVG5_A_OUT_6)/6;}   else {   VBV_CAL_AVG5_A_OUT_6 = VBV_CAL_AVG5_A_OUT_6;   VBV_CAL_AVG5_A_OUT_5 = VBV_CAL_AVG5_A_OUT_5;   VBV_CAL_AVG5_A_OUT_4 = VBV_CAL_AVG5_A_OUT_4;   VBV_CAL_AVG5_A_OUT_3 = VBV_CAL_AVG5_A_OUT_3;   VBV_CAL_AVG5_A_OUT_2 = VBV_CAL_AVG5_A_OUT_2;   VBV_CAL_AVG5_A_OUT_1 = VBV_CAL_AVG5_A_OUT_1;   VBV_CAL_AVG5_A_OUT_7 = VBV_CAL_AVG5_A_OUT_7;};
VBV_CAL_AVG_NEGATE_NEGATE = NEGATE_FUNCTION( 1 , VBV_CAL_AVERAGE_CALCULATE );
if(VBV_CAL_CAL_09_TRAN_3 || VBV_CAL_CAL_00_TRAN_2) { 
	if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_10_TRAN_1 = VBV_CAL_PUNCH_OR_OR;
	} else if( VBV_CAL_DLY_TRAN_1_DELAY) {
		VBV_CAL_CAL_10_TRAN_2 = VBV_CAL_DLY_TRAN_1_DELAY;
	} else 
		VBV_CAL_CAL_10_SFC_STEP= 1
} else {
  VBV_CAL_CAL_10_ACTIVETIME= 0; 
  VBV_CAL_CAL_10_SFC_STEP= 0; 
  VBV_CAL_CAL_10_TRAN_1= 0; 
  VBV_CAL_CAL_10_TRAN_2 = 0; 
}
if(VBV_CAL_CAL_10_TRAN_2) { 
	if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_11_TRAN_1 = VBV_CAL_PUNCH_OR_OR;
	} else if( VBV_CAL_DLY_TRAN_2_DELAY) {
		VBV_CAL_CAL_11_TRAN_2 = VBV_CAL_DLY_TRAN_2_DELAY;
	} else 
		VBV_CAL_CAL_11_SFC_STEP= 1
} else {
  VBV_CAL_CAL_11_ACTIVETIME= 0; 
  VBV_CAL_CAL_11_SFC_STEP= 0; 
  VBV_CAL_CAL_11_TRAN_1= 0; 
  VBV_CAL_CAL_11_TRAN_2 = 0; 
}
if(VBV_CAL_CAL_11_TRAN_2) { 
	if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_12_TRAN_1 = VBV_CAL_PUNCH_OR_OR;
	} else if( VBV_CAL_DLY_TRAN_3_DELAY) {
		VBV_CAL_CAL_12_TRAN_2 = VBV_CAL_DLY_TRAN_3_DELAY;
	} else 
		VBV_CAL_CAL_12_SFC_STEP= 1
} else {
  VBV_CAL_CAL_12_ACTIVETIME= 0; 
  VBV_CAL_CAL_12_SFC_STEP= 0; 
  VBV_CAL_CAL_12_TRAN_1= 0; 
  VBV_CAL_CAL_12_TRAN_2 = 0; 
}
if(VBV_CAL_CAL_12_TRAN_2) { 
	if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_13_TRAN_1 = VBV_CAL_PUNCH_OR_OR;
	} else if( VBV_CAL_DLY_TRAN_4_DELAY) {
		VBV_CAL_CAL_13_TRAN_2 = VBV_CAL_DLY_TRAN_4_DELAY;
	} else 
		VBV_CAL_CAL_13_SFC_STEP= 1
} else {
  VBV_CAL_CAL_13_ACTIVETIME= 0; 
  VBV_CAL_CAL_13_SFC_STEP= 0; 
  VBV_CAL_CAL_13_TRAN_1= 0; 
  VBV_CAL_CAL_13_TRAN_2 = 0; 
}
if(VBV_CAL_CAL_13_TRAN_2) { 
	if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_14_TRAN_1 = VBV_CAL_PUNCH_OR_OR;
	} else if( VBV_CAL_DLY_TRAN_5_DELAY) {
		VBV_CAL_CAL_14_TRAN_2 = VBV_CAL_DLY_TRAN_5_DELAY;
	} else 
		VBV_CAL_CAL_14_SFC_STEP= 1
} else {
  VBV_CAL_CAL_14_ACTIVETIME= 0; 
  VBV_CAL_CAL_14_SFC_STEP= 0; 
  VBV_CAL_CAL_14_TRAN_1= 0; 
  VBV_CAL_CAL_14_TRAN_2 = 0; 
}
  bool VBV_CAL_CAL_14_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , 0 , VBV_CAL_CAL_15_SFC_STEP,&VBV_CAL_CAL_14_OS_ONE_SHOT,&VBV_CAL_CAL_14_OS_R_TIME,&VBV_CAL_CAL_14_OS_LAST_TRIGGER);
if(VBV_CAL_CAL_14_TRAN_2) { 
	if( VBV_CAL_CAL_14_OS_ONE_SHOT) {
		VBV_CAL_CAL_15_TRAN_1 = VBV_CAL_CAL_14_OS_ONE_SHOT;
	} else 
		VBV_CAL_CAL_15_SFC_STEP= 1
} else {
  VBV_CAL_CAL_15_ACTIVETIME= 0; 
  VBV_CAL_CAL_15_SFC_STEP= 0; 
  VBV_CAL_CAL_15_TRAN_1 = 0; 
}
if(VBV_CAL_CAL_00_TRAN_1) { 
	if( VBV_CAL_NOTSTROKE_NOT) {
		VBV_CAL_CAL_16_TRAN_1 = VBV_CAL_NOTSTROKE_NOT;
	} else if( VBV_CAL_PUNCH_OR_OR) {
		VBV_CAL_CAL_16_TRAN_2 = VBV_CAL_PUNCH_OR_OR;
	} else 
		VBV_CAL_CAL_16_SFC_STEP= 1
} else {
  VBV_CAL_CAL_16_ACTIVETIME= 0; 
  VBV_CAL_CAL_16_SFC_STEP= 0; 
  VBV_CAL_CAL_16_TRAN_1= 0; 
  VBV_CAL_CAL_16_TRAN_2 = 0; 
}
DELAY_FUNCTION(1 , 5 , 0 , VBV_CAL_DMDVSFDBK_B_OUT_1,&VBV_CAL_DLY_DFCMP_DELAY,&VBV_CAL_DLY_DFCMP_R_TIME);
DELAY_FUNCTION(1 , 15 , 0 , VBV_CAL_TRAN_1_AND,&VBV_CAL_DLY_TRAN_1_DELAY,&VBV_CAL_DLY_TRAN_1_R_TIME);
DELAY_FUNCTION(1 , 15 , 0 , VBV_CAL_TRAN_2_AND,&VBV_CAL_DLY_TRAN_2_DELAY,&VBV_CAL_DLY_TRAN_2_R_TIME);
DELAY_FUNCTION(1 , 15 , 0 , VBV_CAL_TRAN_3_AND,&VBV_CAL_DLY_TRAN_3_DELAY,&VBV_CAL_DLY_TRAN_3_R_TIME);
DELAY_FUNCTION(1 , 15 , 0 , VBV_CAL_TRAN_4_AND,&VBV_CAL_DLY_TRAN_4_DELAY,&VBV_CAL_DLY_TRAN_4_R_TIME);
DELAY_FUNCTION(1 , 15 , 0 , VBV_CAL_TRAN_5_AND,&VBV_CAL_DLY_TRAN_5_DELAY,&VBV_CAL_DLY_TRAN_5_R_TIME);
if (fabs(VBV_CAL_DEMAND_A_NAME-VBV_CAL_AVG_POS_A_NAME) < VBV_CAL_ERROR_A_NAME)   { VBV_CAL_DMDVSFDBK_B_OUT_1 = true; }   else   { VBV_CAL_DMDVSFDBK_B_OUT_1 = false; };
VBV_CAL_HI_MID_AND = VBV_CAL_CAL_13_SFC_STEP && VBV_CAL_I_CNT_ONE_DELAY && VBV_CAL_DLY_DFCMP_DELAY;
VBV_CAL_I_CNT_NOT =! VBV_CAL_I_CNT_ONE_DELAY;
VBV_CAL_I_CNTPV_ZMINUS1_B = VBV_CAL_I_CNT_NOT;
DELAY_FUNCTION(1 , 0.32 , 0 , VBV_CAL_I_CNTPV_ZMINUS1_B,&VBV_CAL_I_CNT_ONE_DELAY,&VBV_CAL_I_CNT_ONE_R_TIME);
VBV_CAL_LO_MID_AND = VBV_CAL_CAL_11_SFC_STEP && VBV_CAL_I_CNT_ONE_DELAY && VBV_CAL_DLY_DFCMP_DELAY;
VBV_CAL_MAX_AND = VBV_CAL_CAL_14_SFC_STEP && VBV_CAL_I_CNT_ONE_DELAY && VBV_CAL_DLY_DFCMP_DELAY;
VBV_CAL_MID_AND = VBV_CAL_CAL_12_SFC_STEP && VBV_CAL_I_CNT_ONE_DELAY && VBV_CAL_DLY_DFCMP_DELAY;
VBV_CAL_MIN_AND = VBV_CAL_CAL_10_SFC_STEP && VBV_CAL_I_CNT_ONE_DELAY && VBV_CAL_DLY_DFCMP_DELAY;
VBV_CAL_NOTSTROKE_NOT =! TBV_CAL_CALMODE_B_NAME;
VBV_CAL_NULJA_A_NAME = VBV_CAL_NULLBIAS_NO;
A_SW_REV_FUNCTION(VBV_CAL_CAL_14_OS_ONE_SHOT , VBV_CAL_NULLBIAS_NC , VBV_CAL_AVG_NEGATE_NEGATE,&VBV_CAL_NULLBIAS_NC,&VBV_CAL_NULLBIAS_NO);
VBV_CAL_TRAN_1_AND = VBV_CAL_DLY_DFCMP_DELAY && VBV_CAL_CAL_10_SFC_STEP;
VBV_CAL_TRAN_2_AND = VBV_CAL_DLY_DFCMP_DELAY && VBV_CAL_CAL_11_SFC_STEP;
VBV_CAL_TRAN_3_AND = VBV_CAL_DLY_DFCMP_DELAY && VBV_CAL_CAL_12_SFC_STEP;
VBV_CAL_TRAN_4_AND = VBV_CAL_DLY_DFCMP_DELAY && VBV_CAL_CAL_13_SFC_STEP;
VBV_CAL_TRAN_5_AND = VBV_CAL_DLY_DFCMP_DELAY && VBV_CAL_CAL_14_SFC_STEP;