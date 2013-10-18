VENT_DLY_STDBYG_DELAY = DELAY_FUNCTION( 0 , VENT_STNDBYG_Z_ZMINUS1_B , 1_0 , 0 );
VENT_DLY_STDBYG_R_TIME = R_TIME_FUNCTION( 0 , VENT_STNDBYG_Z_ZMINUS1_B , 1_0 , 0 );
VENT_DLY_STDBYT_DELAY = DELAY_FUNCTION( 0 , VENT_STNDBYT_Z_ZMINUS1_B , 1_0 , 0 );
VENT_DLY_STDBYT_R_TIME = R_TIME_FUNCTION( 0 , VENT_STNDBYT_Z_ZMINUS1_B , 1_0 , 0 );
VENT_ESTOP_5_B_NAME = B_NAME_FUNCTION( VENT_FIREGAS_SD_B_NAME );
VENT_ESTOP_6_B_NAME = B_NAME_FUNCTION( VENT_PSHH6348SD_B_NAME );
VENT_FANS_OK_NOR = NOR_FUNCTION( VENT_LOCESTOP_NOT , VENT_REMESTOP_NOT , VENT_ESTOP_5_B_NAME , VENT_ESTOP_6_B_NAME );
VENT_GFANOFFSEL_B_NAME = B_NAME_FUNCTION( OP_INTRFC_GFAN_OFFSW_B_NAME );
VENT_GFFOFF_FAN_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , VENT_GOFF_OR_OR , 0 , 0 );
VENT_GOFF_DCS_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_GOFF_LAT_LATCH = LATCH_FUNCTION( 0 , VENT_LET_G_RUN_AND , VENT_GFFOFF_FAN_T_FLIPFLOP );
VENT_GOFF_OR_OR = OR_FUNCTION( VENT_GOFF_DCS_B_NAME , VENT_GFANOFFSEL_B_NAME );
VENT_G_STDBYLAT_LATCH = LATCH_FUNCTION( 0 , VENT_DLY_STDBYG_DELAY , VENT_RESET_B_NAME );
VENT_LET_G_RUN_AND = AND_FUNCTION( VENT_NOTGFFOFF_NOT , ALARM_RESET_B_NAME );
VENT_LET_T_RUN_AND = AND_FUNCTION( VENT_NOTTFFOFF_NOT , ALARM_RESET_B_NAME );
VENT_LOCESTOP_NOT = NOT_FUNCTION( VENT_NLOC_ESTOP_B_NAME );
VENT_NLOC_ESTOP_B_NAME = B_NAME_FUNCTION( TRUE );
VENT_NOTGFFOFF_NOT = NOT_FUNCTION( VENT_GFFOFF_FAN_T_FLIPFLOP );
VENT_NOTTFFOFF_NOT = NOT_FUNCTION( VENT_TFFOFF_FAN_T_FLIPFLOP );
VENT_NO_FANS_NOT = NOT_FUNCTION( VENT_FANS_OK_NOR );
VENT_NREM_ESTOP_B_NAME = B_NAME_FUNCTION( N3N40_BI_REM_ESTOP_BI_L );
VENT_REMESTOP_NOT = NOT_FUNCTION( VENT_NREM_ESTOP_B_NAME );
VENT_SD_RESET_B_NAME = B_NAME_FUNCTION( SHUTDOWN_SD_RESET_B_NAME );
VENT_STDBYAANDG_AND = AND_FUNCTION( VENT_GF_A_SEL_T_FLIPFLOP , VENT_MOT6416SFC_SFC_STEP );
VENT_STDBYAANDT_AND = AND_FUNCTION( VENT_TF_A_SEL_T_FLIPFLOP , VENT_MOT6418SFC_SFC_STEP );
VENT_STDBYBANDG_AND = AND_FUNCTION( VENT_GF_B_SEL_NOT , VENT_MOT6413SFC_SFC_STEP );
VENT_STDBYBANDT_AND = AND_FUNCTION( VENT_TF_B_SEL_NOT , VENT_MOT6417SFC_SFC_STEP );
VENT_STNDBYFANG_B_NAME = B_NAME_FUNCTION( VENT_G_STDBYLAT_LATCH );
VENT_STNDBYFANT_B_NAME = B_NAME_FUNCTION( VENT_T_STDBYLAT_LATCH );
VENT_STNDBYG_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_STNDBY_ORG_OR );
VENT_STNDBYT_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( VENT_STNDBY_ORT_OR );
VENT_STNDBY_ORG_OR = OR_FUNCTION( VENT_STDBYAANDG_AND , VENT_STDBYBANDG_AND );
VENT_STNDBY_ORT_OR = OR_FUNCTION( VENT_STDBYAANDT_AND , VENT_STDBYBANDT_AND );
VENT_STOPFANS_LATCH = LATCH_FUNCTION( 0 , VENT_NO_FANS_NOT , VENT_SD_RESET_B_NAME );
VENT_TFANOFFSEL_B_NAME = B_NAME_FUNCTION( OP_INTRFC_TFAN_OFFSW_B_NAME );
VENT_TFFOFF_FAN_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , VENT_TOFF_OR_OR , 0 , 0 );
VENT_TOFF_DCS_B_NAME = B_NAME_FUNCTION(  , 0 );
VENT_TOFF_LAT_LATCH = LATCH_FUNCTION( 0 , VENT_LET_T_RUN_AND , VENT_TFFOFF_FAN_T_FLIPFLOP );
VENT_TOFF_OR_OR = OR_FUNCTION( VENT_TOFF_DCS_B_NAME , VENT_TFANOFFSEL_B_NAME );
VENT_T_STDBYLAT_LATCH = LATCH_FUNCTION( 0 , VENT_DLY_STDBYT_DELAY , VENT_RESET_B_NAME );
