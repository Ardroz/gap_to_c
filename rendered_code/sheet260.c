SFC_STEP_NOT_GAS_NOT = NOT_FUNCTION( VENT_STRT_INI_T_OR );
VENT_ENCL_LT_55_A_COMPARE = A_COMPARE_FUNCTION( 55_0 , VENT_HSS_T_TMP_A_MAX , 0 );
VENT_FANS_RDY_B_NAME = B_NAME_FUNCTION( VENT_NOTHOLD_OR );
VENT_FANTFA_OR_OR = OR_FUNCTION( VENT_GOTOTFA_AND , VENT_TSTTF_A_AND );
VENT_FANTFB_OR_OR = OR_FUNCTION( VENT_GOTOTFB_AND , VENT_TSTTF_B_AND );
VENT_FAN_RESET_OR = OR_FUNCTION( VENT_RESET_B_NAME , VENT_PSTTMR_MSK_AND , VENT_T_LEL_AL_B_NAME , VENT_T_LEL_SD_B_NAME );
VENT_GOTOTFA_AND = AND_FUNCTION( VENT_STRT_INI_T_OR , VENT_TF_A_SEL_T_FLIPFLOP );
VENT_GOTOTFB_AND = AND_FUNCTION( VENT_STRT_INI_T_OR , VENT_TF_B_SEL_NOT );
VENT_MAINTMODE_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_MOT6417SFC_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VENT_TFANS_RDY_TRAN_2 , VENT_MOT6418SFC_TRAN_2 , VENT_MOT6418SFC_TRAN_5 , VENT_STOPFANS_LATCH , VENT_TFXFRA_AND_AND , VENT_PSTTMR_MSK_AND , VENT_TFTSTA_OS_ONE_SHOT , VENT_TFB_OS_ONE_SHOT );
VENT_MOT6418SFC_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , VENT_TFANS_RDY_TRAN_3 , VENT_MOT6417SFC_TRAN_2 , VENT_MOT6417SFC_TRAN_5 , VENT_STOPFANS_LATCH , VENT_TFXFRB_AND_AND , VENT_PSTTMR_MSK_AND , VENT_TFTSTB_OS_ONE_SHOT , VENT_TFA_OS_ONE_SHOT );
VENT_NOTHOLD_OR = OR_FUNCTION( VENT_TFANS_OFF_SFC_STEP , VENT_GFANSOFF_SFC_STEP );
VENT_NOTTESTTFA_NOT = NOT_FUNCTION( VENT_TSTTF_A_AND );
VENT_NOTTESTTFB_NOT = NOT_FUNCTION( VENT_TSTTF_B_AND );
VENT_NOT_TSTDBY_NOT = NOT_FUNCTION( VENT_DLY_STDBYT_DELAY );
VENT_PST2CLDN_DELAY = DELAY_FUNCTION( 0 , VENT_PSTCLDMSKT_AND , 0 , *900_0 (900_0, 5400_0) );
VENT_PSTTMR_MSK_AND = AND_FUNCTION( VENT_STOP_OR_OR , VENT_NOTTESTTFA_NOT , VENT_NOTTESTTFB_NOT , SFC_STEP_NOT_GAS_NOT );
VENT_RESET_B_NAME = B_NAME_FUNCTION( ALARM_RESET_B_NAME );
VENT_START_INI_B_NAME = B_NAME_FUNCTION( SFC_STEP_VENT_SFC_STEP );
VENT_STOP_OR_OR = OR_FUNCTION( VENT_T_OFF_AND_AND , VENT_TPSTVENTDN_B_NAME , SFC_STEP_WWCRANK_1_SFC_STEP );
VENT_STRT_INI_T_OR = OR_FUNCTION( VENT_T_LEL_LAT_LATCH1 , VENT_START_INI_B_NAME , VENT_RUN_RELAY_B_NAME , SFC_STEP_HISPD_OR_OR , SFC_STEP_LOSPD_OR_OR , SFC_STEP_WWCRANK_0_SFC_STEP , VENT_HITMP_RUN1_OR );
VENT_TA_DUTYSEL_AND = AND_FUNCTION( VENT_MOT6417_B_NAME , VENT_TF_B_SEL_NOT , VENT_TFAN_A_OK_NOT );
VENT_TA_SEL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_TA_DUTYSEL_AND );
VENT_TB_DUTYSEL_AND = AND_FUNCTION( VENT_MOT6418_B_NAME , VENT_TF_A_SEL_T_FLIPFLOP , VENT_TFAN_B_OK_NOT );
VENT_TB_SEL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_TB_DUTYSEL_AND );
VENT_TFANS_OFF_SFC_STEP = SFC_STEP_FUNCTION( VENT_MOT6417SFC_TRAN_1 , VENT_MOT6418SFC_TRAN_1 , VENT_MOT6417SFC_TRAN_3 , VENT_MOT6418SFC_TRAN_3 , VENT_MOT6417SFC_TRAN_4 , VENT_MOT6418SFC_TRAN_4 , VENT_FAN_RESET_OR , 0 , 0 , VENT_TFANS_RDY_TRAN_1 );
VENT_TFANS_ON_NOT = NOT_FUNCTION( VENT_TFANS_RDY_SFC_STEP );
VENT_TFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( 0 , "ACTIVE" , VENT_TFANS_OFF_TRAN_1 , VENT_STOPFANS_LATCH , VENT_FANTFA_OR_OR , VENT_FANTFB_OR_OR );
VENT_TFAN_A_OK_NOT = NOT_FUNCTION( VENT_AFAIL_T_LT_LATCH );
VENT_TFAN_A_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_TA_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_TFAN_B_OK_NOT = NOT_FUNCTION( VENT_BFAIL_T_LT_LATCH );
VENT_TFAN_B_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_TB_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_TFA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_TF_A_SEL_T_FLIPFLOP , 0_5 , 0 );
VENT_TFB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_TF_B_SEL_NOT , 0_5 , 0 );
VENT_TFTSTA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_NOTTESTTFA_NOT , 1_0 , 0 );
VENT_TFTSTB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_NOTTESTTFB_NOT , 1_0 , 0 );
VENT_TFXFRA_AND_AND = AND_FUNCTION( TRUE , VENT_FSL6408ALM_B_NAME );
VENT_TFXFRB_AND_AND = AND_FUNCTION( TRUE , VENT_FSL6453ALM_B_NAME );
VENT_TF_A_SEL_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , VENT_TF_SEL_OR_OR , 0 , 0 );
VENT_TF_B_SEL_NOT = NOT_FUNCTION( VENT_TF_A_SEL_T_FLIPFLOP );
VENT_TF_SELHMI_B_NAME = B_NAME_FUNCTION( OP_INTRFC_TFAN_SW_B_NAME );
VENT_TF_SEL_OR_OR = OR_FUNCTION( VENT_TF_SELHMI_B_NAME , VENT_T_CHG_OS_ONE_SHOT , VENT_TFAN_A_OS_ONE_SHOT , VENT_TFAN_B_OS_ONE_SHOT );
VENT_TSTTF_A_AND = AND_FUNCTION( VENT_MAINTMODE_B_NAME , VENT_TTEST_OR_OR , VENT_TF_A_SEL_T_FLIPFLOP );
VENT_TSTTF_B_AND = AND_FUNCTION( VENT_MAINTMODE_B_NAME , VENT_TTEST_OR_OR , VENT_TF_B_SEL_NOT );
VENT_TTEST_DCS_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_TTEST_HMI_B_NAME = B_NAME_FUNCTION( OP_INTRFC_TFAN_TSTSW_B_NAME );
VENT_TTEST_OR_OR = OR_FUNCTION( VENT_TTEST_HMI_B_NAME , VENT_TTEST_DCS_B_NAME );
VENT_T_CHG_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , VENT_STOP_OR_OR , 1_0 , 0 );
VENT_T_OFF_AND_AND = AND_FUNCTION( VENT_ENCL_LT_55_A_COMPARE , VENT_PST2CLDN_DELAY );
