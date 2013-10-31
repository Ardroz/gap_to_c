VENT_A_DUTYSEL_AND = AND_FUNCTION( VENT_MOT6413_B_NAME , VENT_GF_B_SEL_NOT , VENT_FAN_A_OK_NOT );
VENT_A_SEL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_A_DUTYSEL_AND );
VENT_BOTHGFAILZ_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_RUNBOTH_G_ZMINUS1_B );
VENT_BOTHGFLMSK_AND = AND_FUNCTION( VENT_BOTHGFAILZ_ZMINUS1_B , VENT_G_OFF_OPT_B_NAME );
VENT_B_DUTYSEL_AND = AND_FUNCTION( VENT_MOT6416_B_NAME , VENT_GF_A_SEL_T_FLIPFLOP , VENT_FAN_B_OK_NOT );
VENT_B_SEL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_B_DUTYSEL_AND );
VENT_FAN_A_OK_NOT = NOT_FUNCTION( VENT_AFAIL_G_LT_LATCH );
VENT_FAN_A_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_A_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_FAN_A_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_A_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_FAN_B_OK_NOT = NOT_FUNCTION( VENT_BFAIL_G_LT_LATCH );
VENT_FAN_B_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_B_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_FAN_B_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_B_SEL_Z_ZMINUS1_B , 0_5 , 0 );
VENT_GFANON_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , VENT_STRT_GFAN_OR , 0 , *5_0 (0_0, 10_0) );
VENT_GFANON_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , VENT_STRT_GFAN_OR , 0 , *5_0 (0_0, 10_0) );
VENT_GFANSOFF_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , VENT_GFANS_RDY_TRAN_1 , VENT_MOT6413SFC_TRAN_1 , VENT_MOT6416SFC_TRAN_1 , VENT_MOT6413SFC_TRAN_3 , VENT_MOT6416SFC_TRAN_3 , VENT_MOT6413SFC_TRAN_4 , VENT_MOT6416SFC_TRAN_4 , VENT_GFAN_RESET_OR );
VENT_GFANSOFF_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , VENT_GFANS_RDY_TRAN_1 , VENT_MOT6413SFC_TRAN_1 , VENT_MOT6416SFC_TRAN_1 , VENT_MOT6413SFC_TRAN_3 , VENT_MOT6416SFC_TRAN_3 , VENT_MOT6413SFC_TRAN_4 , VENT_MOT6416SFC_TRAN_4 , VENT_GFAN_RESET_OR );
VENT_GFANSOFF_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , VENT_GFANS_RDY_TRAN_1 , VENT_MOT6413SFC_TRAN_1 , VENT_MOT6416SFC_TRAN_1 , VENT_MOT6413SFC_TRAN_3 , VENT_MOT6416SFC_TRAN_3 , VENT_MOT6413SFC_TRAN_4 , VENT_MOT6416SFC_TRAN_4 , VENT_GFAN_RESET_OR );
VENT_GFANS_OFF_OR = OR_FUNCTION( VENT_STTR_LT120_A_COMPARE , VENT_STARTLTAMB_A_COMPARE );
VENT_GFANS_ON_NOT = NOT_FUNCTION( VENT_GFANS_RDY_SFC_STEP );
VENT_GFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , "ACTIVE" , VENT_GFANSOFF_TRAN_1 , VENT_G_FAN_OFF_OR , VENT_GFA_OR_OR , VENT_GFB_OR_OR );
VENT_GFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , "ACTIVE" , VENT_GFANSOFF_TRAN_1 , VENT_G_FAN_OFF_OR , VENT_GFA_OR_OR , VENT_GFB_OR_OR );
VENT_GFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , "ACTIVE" , VENT_GFANSOFF_TRAN_1 , VENT_G_FAN_OFF_OR , VENT_GFA_OR_OR , VENT_GFB_OR_OR );
VENT_GFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , "ACTIVE" , VENT_GFANSOFF_TRAN_1 , VENT_G_FAN_OFF_OR , VENT_GFA_OR_OR , VENT_GFB_OR_OR );
VENT_GFANS_RDY_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , "ACTIVE" , VENT_GFANSOFF_TRAN_1 , VENT_G_FAN_OFF_OR , VENT_GFA_OR_OR , VENT_GFB_OR_OR );
VENT_GFAN_DN_LATCH = LATCH_FUNCTION( 0 , VENT_GPSTVENTDN_B_NAME , VENT_GFANS_RDY_SFC_STEP );
VENT_GFAN_RESET_OR = OR_FUNCTION( VENT_RESET_B_NAME , VENT_PSTTMP_MSK_AND );
VENT_GFA_OR_OR = OR_FUNCTION( VENT_GOTOGFA_AND , VENT_TSTGF_A_AND );
VENT_GFA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_GF_A_SEL_T_FLIPFLOP , 0_5 , 0 );
VENT_GFA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_GF_A_SEL_T_FLIPFLOP , 0_5 , 0 );
VENT_GFB_OR_OR = OR_FUNCTION( VENT_GOTOGFB_AND , VENT_TSTGF_B_AND );
VENT_GFB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_GF_B_SEL_NOT , 0_5 , 0 );
VENT_GFB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_GF_B_SEL_NOT , 0_5 , 0 );
VENT_GFXFRA_AND_AND = AND_FUNCTION( TRUE , VENT_FSL6409ALM_B_NAME );
VENT_GFXFRB_AND_AND = AND_FUNCTION( TRUE , VENT_FSL6410ALM_B_NAME );
VENT_GF_A_SEL_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , VENT_GF_SEL_OR_OR , 0 , 0 );
VENT_GF_B_SEL_NOT = NOT_FUNCTION( VENT_GF_A_SEL_T_FLIPFLOP );
VENT_GF_SELDCS_B_NAME = B_NAME_FUNCTION( FALSE );
VENT_GF_SELHMI_B_NAME = B_NAME_FUNCTION( OP_INTRFC_GFAN_SW_B_NAME );
VENT_GF_SEL_OR_OR = OR_FUNCTION( VENT_GF_SELHMI_B_NAME , VENT_GF_SELDCS_B_NAME , VENT_G_CHG_OS_ONE_SHOT , VENT_FAN_A_OS_ONE_SHOT , VENT_FAN_B_OS_ONE_SHOT );
VENT_GOTOGFA_AND = AND_FUNCTION( VENT_GF_A_SEL_T_FLIPFLOP , VENT_GFANON_DLY_DELAY );
VENT_GOTOGFB_AND = AND_FUNCTION( VENT_GFANON_DLY_DELAY , VENT_GF_B_SEL_NOT );
VENT_GTEST_DCS_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_GTEST_HMI_B_NAME = B_NAME_FUNCTION( OP_INTRFC_GFAN_TSTSW_B_NAME );
VENT_GTEST_OR_OR = OR_FUNCTION( VENT_GTEST_HMI_B_NAME , VENT_GTEST_DCS_B_NAME );
VENT_G_CHG_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_PSTTMP_MSK_AND , 1_0 , 0 );
VENT_G_CHG_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_PSTTMP_MSK_AND , 1_0 , 0 );
VENT_G_FAN_OFF_OR = OR_FUNCTION( VENT_STOPFANS_LATCH , VENT_BOTHGFLMSK_AND );
VENT_G_OFF_OPT_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6413SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , VENT_GFANS_RDY_TRAN_2 , VENT_MOT6416SFC_TRAN_2 , VENT_MOT6416SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRA_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFA_OS_ONE_SHOT , VENT_GFB_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_MOT6416SFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , VENT_GFANS_RDY_TRAN_3 , VENT_MOT6413SFC_TRAN_2 , VENT_MOT6413SFC_TRAN_5 , VENT_G_FAN_OFF_OR , VENT_GFXFRB_AND_AND , VENT_PSTTMP_MSK_AND , VENT_TSTGFB_OS_ONE_SHOT , VENT_GFA_OS_ONE_SHOT );
VENT_NOTTESTGFA_NOT = NOT_FUNCTION( VENT_TSTGF_A_AND );
VENT_NOTTESTGFB_NOT = NOT_FUNCTION( VENT_TSTGF_B_AND );
VENT_NOT_GSTDBY_NOT = NOT_FUNCTION( VENT_DLY_STDBYG_DELAY );
VENT_PSTTMP_MSK_AND = AND_FUNCTION( VENT_GFANS_OFF_OR , VENT_NOTTESTTFA_NOT , VENT_NOTTESTTFB_NOT , VENT_GFAN_DN_LATCH );
VENT_RUN_RELAY_B_NAME = B_NAME_FUNCTION( SFC_STEP_RUN_RELAY_B_NAME );
VENT_STRT_GFAN_OR = OR_FUNCTION( VENT_START_INI_B_NAME , VENT_RUN_RELAY_B_NAME , SFC_STEP_HISPD_OR_OR , SFC_STEP_LOSPD_OR_OR , VENT_GFAN_HITMP_OR );
VENT_TSTGFA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_NOTTESTGFA_NOT , 1_0 , 0 );
VENT_TSTGFA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_NOTTESTGFA_NOT , 1_0 , 0 );
VENT_TSTGFB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , VENT_NOTTESTGFB_NOT , 1_0 , 0 );
VENT_TSTGFB_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , VENT_NOTTESTGFB_NOT , 1_0 , 0 );
VENT_TSTGF_A_AND = AND_FUNCTION( VENT_MAINTMODE_B_NAME , VENT_GTEST_OR_OR , VENT_GF_A_SEL_T_FLIPFLOP );
VENT_TSTGF_B_AND = AND_FUNCTION( VENT_MAINTMODE_B_NAME , VENT_GTEST_OR_OR , VENT_GF_B_SEL_NOT );