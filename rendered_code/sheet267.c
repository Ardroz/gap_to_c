DELAY_FUNCTION(1 , 0 , 3 , VENT_AUXFAN_A_T_FLIPFLOP,&VENT_AUXFANANDL_DELAY,&VENT_AUXFANANDL_R_TIME);
VENT_AUXFANA_FL_AND = VENT_AUX_FANAFL_NOT && VENT_AXFANADLY_DELAY;
VENT_AUXFANA_MN_B_NAME = VENT_AUXFANANDL_DELAY;
DELAY_FUNCTION(1 , 0 , 3 , VENT_AUXFAN_B_NOT,&VENT_AUXFANBNDL_DELAY,&VENT_AUXFANBNDL_R_TIME);
VENT_AUXFANB_FL_AND = VENT_AUX_FANBFL_NOT && VENT_AXFANBDLY_DELAY;
VENT_AUXFANB_MN_B_NAME = VENT_AUXFANBNDL_DELAY;
VENT_AUXFANFL_Z_ZMINUS1_B = VENT_EITHERFAIL_OR;
  bool VENT_AUXFAN_A_IN_1_LAST; 
  bool VENT_AUXFAN_A_IN_2_LAST; 
T_FLIPFLOP_FUNCTION(1 , VENT_AUXFAN_OR_OR , VENT_FF_DELAY_DELAY , *FALSE,&VENT_AUXFAN_A_T_FLIPFLOP,&VENT_AUXFAN_A_IN_1_LAST, &VENT_AUXFAN_A_IN_2_LAST); 
 VENT_AUXFAN_B_NOT =! VENT_AUXFAN_A_T_FLIPFLOP;
DELAY_FUNCTION(1 , 5 , 0 , VENT_SOV64084_B_NAME,&VENT_AUXFAN_DLY_DELAY,&VENT_AUXFAN_DLY_R_TIME);
VENT_AUXFAN_OR_OR = VENT_AUXFAN_SEL_B_NAME || VENT_AXFANFL_OS_ONE_SHOT;
VENT_AUXFAN_SEL_B_NAME = HMI_BO_BW_V_66_B_NAME;
A_COMPARE_FUNCTION(0.0 , VENT_TE64028_A_NAME , 130,&VENT_AUXGT130_A_COMPARE,&VENT_AUXGT130_A_EQUAL);
VENT_AUXSKID_EN_NOT =! VENT_TE64028OVR_B_NAME;
VENT_AUXTEMP_HI_B_NAME = VENT_AUXTMPHIGH_AND;
VENT_AUXTEMP_LO_B_NAME = VENT_AUXTMPLOW_AND;
VENT_AUXTMPHIGH_AND = VENT_AUXGT130_A_COMPARE && VENT_NOT_OVRD_NOR;
VENT_AUXTMPLOW_AND = VENT_NOT_OVRD_NOR && VENT_AUX_LT35_A_COMPARE;
VENT_AUX_FANAFL_NOT =! VENT_FSL68255A_B_NAME;
VENT_AUX_FANBFL_NOT =! VENT_FSL68255B_B_NAME;
A_COMPARE_FUNCTION(-30 , VENT_TE64028_A_NAME , 100,&VENT_AUX_GT100_A_COMPARE,&VENT_AUX_GT100_A_EQUAL);
A_COMPARE_FUNCTION(-30 , VENT_TE64028_A_NAME , 130,&VENT_AUX_GT130_A_COMPARE,&VENT_AUX_GT130_A_EQUAL);
A_COMPARE_FUNCTION(0 , 35.0 , VENT_TE64028_A_NAME,&VENT_AUX_LT35_A_COMPARE,&VENT_AUX_LT35_A_EQUAL);
VENT_AUX_LT70_NOT =! VENT_AUX_GT100_A_COMPARE;
DELAY_FUNCTION(1 , 15 , 0 , VENT_AXFANA_DLY_DELAY,&VENT_AXFANADLY_DELAY,&VENT_AXFANADLY_R_TIME);
DELAY_FUNCTION(1 , 0 , 2.0 , VENT_FAN_A_ON_AND,&VENT_AXFANA_DLY_DELAY,&VENT_AXFANA_DLY_R_TIME);
VENT_AXFANA_FLT_B_NAME = VENT_FANAFLTMSK_AND;
DELAY_FUNCTION(1 , 15 , 0 , VENT_AXFANB_DLY_DELAY,&VENT_AXFANBDLY_DELAY,&VENT_AXFANBDLY_R_TIME);
DELAY_FUNCTION(1 , 0 , 2.0 , VENT_FAN_B_ON_AND,&VENT_AXFANB_DLY_DELAY,&VENT_AXFANB_DLY_R_TIME);
VENT_AXFANB_FLT_B_NAME = VENT_FANBFLTMSK_AND;
  bool VENT_AXFANFL_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , *FALSE , VENT_AUXFANFL_Z_ZMINUS1_B,&VENT_AXFANFL_OS_ONE_SHOT,&VENT_AXFANFL_OS_R_TIME,&VENT_AXFANFL_OS_LAST_TRIGGER);
DELAY_FUNCTION(1 , 0 , VENT_AXLVR2DLY_A_SW , VENT_DMPER_1OPN_OR,&VENT_AXLVR1_DLY_DELAY,&VENT_AXLVR1_DLY_R_TIME);
VENT_AXLVR2DLY_A_SW = A_SW_FUNCTION( VENT_FNONLT_Z_ZMINUS1_B , 2.0 , 60 );
DELAY_FUNCTION(1 , 0 , VENT_AXLVR2DLY_A_SW , VENT_DMPER_2OPN_OR,&VENT_AXLVR2_DLY_DELAY,&VENT_AXLVR2_DLY_R_TIME);
VENT_DMPER_1OPN_OR = VENT_HYDLVR_LT_LATCH || VENT_AUX_GT100_A_COMPARE;
VENT_DMPER_2OPN_OR = VENT_HYDLVR_LT_LATCH || VENT_AUX_GT100_A_COMPARE;
VENT_EITHERFAIL_OR = VENT_AUXFANA_FL_AND || VENT_AUXFANB_FL_AND;
VENT_EITHER_ON_OR = VENT_MOT64026_B_NAME || VENT_MOT64027_B_NAME;
VENT_FANAFLTMSK_AND = VENT_AUXFANA_FL_AND && VENT_AUXSKID_EN_NOT;
VENT_FANBFLTMSK_AND = VENT_AUXFANB_FL_AND && VENT_AUXSKID_EN_NOT;
VENT_FANON_LTCH_LATCH = LATCH_FUNCTION(1,VENT_LOUVRSCLSD_NOR,VENT_EITHER_ON_OR,VENT_FANON_LTCH_LATCH);
VENT_FAN_A_ON_AND = VENT_FAN_A_OR_OR && VENT_AUX_GT100_A_COMPARE && VENT_AUXFAN_DLY_DELAY;
VENT_FAN_A_OR_OR = VENT_AUXFANANDL_DELAY || VENT_AUX_GT130_A_COMPARE;
VENT_FAN_B_ON_AND = VENT_AUXFAN_DLY_DELAY && VENT_FAN_B_OR_OR && VENT_AUX_GT100_A_COMPARE;
VENT_FAN_B_OR_OR = VENT_AUXFANBNDL_DELAY || VENT_AUX_GT130_A_COMPARE;
DELAY_FUNCTION(1 , 3.0 , 0 , VENT_AUX_LT70_NOT,&VENT_FF_DELAY_DELAY,&VENT_FF_DELAY_R_TIME);
VENT_FNONLT_Z_ZMINUS1_B = VENT_FANON_LTCH_LATCH;
VENT_FSL68255A_B_NAME = TRUE;
VENT_FSL68255B_B_NAME = TRUE;
VENT_HYDLVR_LT_LATCH = LATCH_FUNCTION(1,HYD_STRT_NOT_PMPON_NOT,VENT_LVR_CMND_B_NAME,VENT_HYDLVR_LT_LATCH);
VENT_LOUVRSCLSD_NOR =! VENT_SOV64083_B_NAME || VENT_SOV64084_B_NAME;
VENT_LVR_CMND_B_NAME = SFC_STEP_HYDPMPON_OR;
VENT_MOT64026_B_NAME = VENT_AXFANA_DLY_DELAY;
VENT_MOT64027_B_NAME = VENT_AXFANB_DLY_DELAY;
VENT_NOT_OVRD_NOR =! VENT_TE64028OVR_B_NAME || FALSE;
VENT_SOV64083_B_NAME = VENT_AXLVR1_DLY_DELAY;
VENT_SOV64084_B_NAME = VENT_AXLVR2_DLY_DELAY;
VENT_TE64028_A_NAME = 0.0;
VENT_TE64028OVR_B_NAME = *TRUE;