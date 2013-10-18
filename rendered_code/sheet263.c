VENT_FANSOK_NOT = NOT_FUNCTION( VENT_STOPFANS_LATCH );
VENT_GFANHTMPMS_AND = AND_FUNCTION( VENT_GFAN_HITMP_OR , SFC_STEP_RUNNING_B_NAME );
VENT_GFAN_HITMP_OR = OR_FUNCTION( VENT_TE6430_HI_A_COMPARE , VENT_TE6402_HI_A_COMPARE );
VENT_GRUNBOTHA_OR = OR_FUNCTION( VENT_G_DLY_A_DELAY , VENT_GFANHTMPMS_AND , VENT_G_LEL_AL_B_NAME , VENT_G_LEL_SD_B_NAME , VENT_BOTHGFAILZ_ZMINUS1_B , VENT_HOLD_AG_Z_ZMINUS1_B );
VENT_GRUNBOTHB_OR = OR_FUNCTION( VENT_G_DLY_B_DELAY , VENT_GFANHTMPMS_AND , VENT_G_LEL_AL_B_NAME , VENT_G_LEL_SD_B_NAME , VENT_BOTHGFAILZ_ZMINUS1_B , VENT_HOLD_BG_Z_ZMINUS1_B );
VENT_G_DLY_A_DELAY = DELAY_FUNCTION( 0 , VENT_MOT6413SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_G_DLY_A_R_TIME = R_TIME_FUNCTION( 0 , VENT_MOT6413SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_G_DLY_B_DELAY = DELAY_FUNCTION( 0 , VENT_MOT6416SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_G_DLY_B_R_TIME = R_TIME_FUNCTION( 0 , VENT_MOT6416SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_HITMP_RUN1_OR = OR_FUNCTION( VENT_TE6454_HI_A_COMPARE , VENT_TE6401_HI_A_COMPARE );
VENT_HITMP_RUN2_OR = OR_FUNCTION( VENT_MASKHITMP_AND , VENT_TE6454DM_B_NAME );
VENT_HOLD_A_AND = AND_FUNCTION( VENT_NOT6453_NOT , VENT_AFAIL_T_LT_LATCH , VENT_MOT6418SFC_SFC_STEP , 0 );
VENT_HOLD_AG_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_HOLD_A_G_AND );
VENT_HOLD_A_G_AND = AND_FUNCTION( VENT_NOT6410_NOT , VENT_AFAIL_G_LT_LATCH , VENT_MOT6416SFC_SFC_STEP , 0 );
VENT_HOLD_A_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_HOLD_A_AND );
VENT_HOLD_B_AND = AND_FUNCTION( VENT_NOT6408_NOT , VENT_BFAIL_T_LT_LATCH , VENT_MOT6417SFC_SFC_STEP , 0 );
VENT_HOLD_BG_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_HOLD_B_G_AND );
VENT_HOLD_B_G_AND = AND_FUNCTION( VENT_NOT6409_NOT , VENT_BFAIL_G_LT_LATCH , VENT_MOT6413SFC_SFC_STEP , 0 );
VENT_HOLD_B_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_HOLD_B_AND );
VENT_LEL_HI_OR = OR_FUNCTION( VENT_T_LEL_AL_B_NAME , VENT_T_LEL_SD_B_NAME );
VENT_LEL_MASK_AND = AND_FUNCTION( VENT_LEL_HI_OR , *TRUE );
VENT_MASKHITMP_AND = AND_FUNCTION( VENT_HITMP_RUN1_OR , SFC_STEP_RUNNING_B_NAME );
VENT_MASK_HTMPR_AND = AND_FUNCTION( VENT_HITMP_RUN2_OR , VENT_N_T_LEL_LA_NOT );
VENT_MOT6413_B_NAME = B_NAME_FUNCTION( VENT_R_G_A_MASK_AND );
VENT_MOT6416_B_NAME = B_NAME_FUNCTION( VENT_R_G_B_MASK_AND );
VENT_MOT6417_B_NAME = B_NAME_FUNCTION( VENT_R_T_A_MASK_AND );
VENT_MOT6418_B_NAME = B_NAME_FUNCTION( VENT_R_T_B_MASK_AND );
VENT_NOTFALD_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_NOTGFAILED_NOT );
VENT_NOTGFAILED_NOT = NOT_FUNCTION( VENT_BOTHGFLMSK_AND );
VENT_NOT_PWRUP_NOT = NOT_FUNCTION( CORE_DIGITAL_PWR_UP );
VENT_N_T_LEL_LA_NOT = NOT_FUNCTION( VENT_T_LEL_LAT_LATCH1 );
VENT_RUNBOTHG_OR = OR_FUNCTION( VENT_NOTFALD_Z_ZMINUS1_B , *TRUE );
VENT_R_G_A_MASK_AND = AND_FUNCTION( VENT_NOT_PWRUP_NOT , VENT_GRUNBOTHA_OR , VENT_FANSOK_NOT , VENT_RUNBOTHG_OR , VENT_GOFF_LAT_LATCH );
VENT_R_G_B_MASK_AND = AND_FUNCTION( VENT_GOFF_LAT_LATCH , VENT_GRUNBOTHB_OR , VENT_FANSOK_NOT , VENT_RUNBOTHG_OR , VENT_NOT_PWRUP_NOT );
VENT_R_T_A_MASK_AND = AND_FUNCTION( VENT_TOFF_LAT_LATCH , VENT_TRUNBOTHA_OR , VENT_FANSOK_NOT , VENT_NOT_PWRUP_NOT );
VENT_R_T_B_MASK_AND = AND_FUNCTION( VENT_TOFF_LAT_LATCH , VENT_TRUNBOTHB_OR , VENT_FANSOK_NOT , VENT_NOT_PWRUP_NOT );
VENT_TE6401_HI_A_COMPARE = A_COMPARE_FUNCTION( VENT_TE6401_A_NAME , 200_0 , *-30_0 (-60_0, 10_0) );
VENT_TE6401_HI_A_EQUAL = A_EQUAL_FUNCTION( VENT_TE6401_A_NAME , 200_0 , *-30_0 (-60_0, 10_0) );
VENT_TE6402_HI_A_COMPARE = A_COMPARE_FUNCTION( VENT_TE6402_A_NAME , *125_0 (125_0, 150_0) , *-10_0 (-30_0, 10_0) );
VENT_TE6402_HI_A_EQUAL = A_EQUAL_FUNCTION( VENT_TE6402_A_NAME , *125_0 (125_0, 150_0) , *-10_0 (-30_0, 10_0) );
VENT_TE6430_HI_A_COMPARE = A_COMPARE_FUNCTION( VENT_TE6430_A_NAME , 200_0 , *-15_0 (-30_0, 10_0) );
VENT_TE6430_HI_A_EQUAL = A_EQUAL_FUNCTION( VENT_TE6430_A_NAME , 200_0 , *-15_0 (-30_0, 10_0) );
VENT_TE6454_HI_A_COMPARE = A_COMPARE_FUNCTION( VENT_TE6454_A_NAME , 140_0 , *-20_0 (-60_0, 10_0) );
VENT_TE6454_HI_A_EQUAL = A_EQUAL_FUNCTION( VENT_TE6454_A_NAME , 140_0 , *-20_0 (-60_0, 10_0) );
VENT_TRUNBOTHA_OR = OR_FUNCTION( VENT_T_DLY_A_DELAY , VENT_MASK_HTMPR_AND , VENT_HOLD_A_Z_ZMINUS1_B , VENT_LEL_MASK_AND , VENT_RUNBOTH_T_ZMINUS1_B );
VENT_TRUNBOTHB_OR = OR_FUNCTION( VENT_T_DLY_B_DELAY , VENT_MASK_HTMPR_AND , VENT_HOLD_B_Z_ZMINUS1_B , VENT_LEL_MASK_AND , VENT_RUNBOTH_T_ZMINUS1_B );
VENT_T_DLY_A_DELAY = DELAY_FUNCTION( 0 , VENT_MOT6417SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_T_DLY_A_R_TIME = R_TIME_FUNCTION( 0 , VENT_MOT6417SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_T_DLY_B_DELAY = DELAY_FUNCTION( 0 , VENT_MOT6418SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
VENT_T_DLY_B_R_TIME = R_TIME_FUNCTION( 0 , VENT_MOT6418SFC_SFC_STEP , 0 , *2_0 (0_0, 5_0) );
