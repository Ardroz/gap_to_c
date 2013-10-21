MLO_HOLD_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( HYD_STRT_NOTSTART_NOT );
SFC_STEP_BACK_OP_OR = OR_FUNCTION( SFC_STEP_NORM_NS_AND , SFC_STEP_MNT_NSD_AND );
SFC_STEP_CNK_STPOR1_OR = OR_FUNCTION( FALSE , SFC_STEP_LOCRANK_1_TRAN_1 , SFC_STEP_LOCRANK_2_TRAN_1 , SFC_STEP_LOCRANK_3_TRAN_1 , SFC_STEP_LOCRANK_4_TRAN_1 , SFC_STEP_HICRANK_1_TRAN_1 , SFC_STEP_HICRANK_2_TRAN_1 , SFC_STEP_HICRANK_3_TRAN_1 , SFC_STEP_HICRANK_4_TRAN_1 , SFC_STEP_WWCRANK_0_TRAN_1 , SFC_STEP_WWCRANK_1_TRAN_1 , SFC_STEP_WWCRANK_2_TRAN_1 , SFC_STEP_WWCRANK_2_TRAN_1 , SFC_STEP_WWCRANK_3_TRAN_1 , SFC_STEP_WWCRANK_6_TRAN_1 , SFC_STEP_WWCRANK_7_TRAN_1 , SFC_STEP_WWCRANK_4_TRAN_1 , SFC_STEP_WWCRANK_5_TRAN_1 , SFC_STEP_WWCRANK_8_TRAN_1 , SFC_STEP_WWCRANK_10_TRAN_1 , SFC_STEP_WWCRANK_11_TRAN_1 , SFC_STEP_CNK_STPOR2_OR );
SFC_STEP_CNK_STPOR2_OR = OR_FUNCTION( SFC_STEP_SEQ_TO_ESN_OR , SFC_STEP_MTR_TO_ESN_OR , SFC_STEP_NS_TO_ESN_OR , SFC_STEP_OUTOFOP_TRAN_1 , SFC_STEP_ES_1_TRAN_1 , SFC_STEP_STITOESN_TRAN_1 , SFC_STEP_SITOESNOR_OR );
SFC_STEP_CRANKING_OR = OR_FUNCTION( SFC_STEP_LOCRANK_1_SFC_STEP , SFC_STEP_LOCRANK_2_SFC_STEP , SFC_STEP_LOCRANK_3_SFC_STEP , SFC_STEP_LOCRANK_4_SFC_STEP , SFC_STEP_HICRANK_1_SFC_STEP , SFC_STEP_HICRANK_2_SFC_STEP , SFC_STEP_HICRANK_3_SFC_STEP , SFC_STEP_HICRANK_4_SFC_STEP , WTR_WASH_WW_ACTIVE_B_NAME );
SFC_STEP_CRANKSTOP_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_CNK_STPOR1_OR , MLO_HOLD_Z_ZMINUS1_B );
SFC_STEP_CRANKSTOP_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_CNK_STPOR1_OR , MLO_HOLD_Z_ZMINUS1_B );
SFC_STEP_CRANKSTOP_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_CNK_STPOR1_OR , MLO_HOLD_Z_ZMINUS1_B );
SFC_STEP_CRNKSTPLTC_LATCH = LATCH_FUNCTION( 0 , SFC_STEP_CRANKSTOP_SFC_STEP , GLUB_JCKPMPOFF_OR );
SFC_STEP_ESN_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_CRANKSTOP_TRAN_1 , SFC_STEP_BACK_OP_OR );
SFC_STEP_ESN_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_CRANKSTOP_TRAN_1 , SFC_STEP_BACK_OP_OR );
SFC_STEP_ESN_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_CRANKSTOP_TRAN_1 , SFC_STEP_BACK_OP_OR );
SFC_STEP_HICRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_3 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_HICRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_3 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_HICRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_3 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_HICRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_3 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_HICRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_3 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_HICRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_HICRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_HICRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_HICRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_HICRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_HICRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_HICRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_HICRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_HICRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_HICRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_HICRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_HICRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_HICRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_HICRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_HICRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_HICRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_HICRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_HICRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_HISPD_DN_B_NAME );
SFC_STEP_HICRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_HICRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_HISPD_DN_B_NAME );
SFC_STEP_HICRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_HICRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_HISPD_DN_B_NAME );
SFC_STEP_HICRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_HICRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_HISPD_DN_B_NAME );
SFC_STEP_LOCRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_4 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_LOCRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_4 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_LOCRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_4 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_LOCRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_4 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_LOCRANK_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_OUTOFOP_TRAN_4 , SFC_STEP_STPCNKOR_OR , GLUB_ABORT_SFC_STEP , GLUB_JCKPMPSTRT_LATCH );
SFC_STEP_LOCRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_LOCRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_LOCRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_LOCRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_LOCRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_LOCRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_LOCRANK_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_LOCRANK_1_TRAN_3 , SFC_STEP_STPCNKOR_OR , HYD_STRT_PUMPONDLY_DELAY );
SFC_STEP_LOCRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_LOCRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_LOCRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_LOCRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_LOCRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_LOCRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_LOCRANK_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_LOCRANK_2_TRAN_2 , SFC_STEP_STPCNKOR_OR , GLUB_MOT6031_B_NAME );
SFC_STEP_LOCRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_LOCRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_LOSPD_DN_B_NAME );
SFC_STEP_LOCRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_LOCRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_LOSPD_DN_B_NAME );
SFC_STEP_LOCRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_LOCRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_LOSPD_DN_B_NAME );
SFC_STEP_LOCRANK_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_LOCRANK_3_TRAN_2 , SFC_STEP_STPCNKOR_OR , SFC_TIMER_LOSPD_DN_B_NAME );
SFC_STEP_MNT_NSD_AND = AND_FUNCTION( FALSE , SFC_STEP_NOT_SDN_NOT , SFC_STEP_NOT_NS_NOT );
SFC_STEP_NORM_NS_AND = AND_FUNCTION( SHUTDOWN_NO_SHTDNS_B_NAME , TRUE );
SFC_STEP_NOT_NS_NOT = NOT_FUNCTION( SFC_STEP_STPCNKOR_OR );
SFC_STEP_NOT_SDN_NOT = NOT_FUNCTION( SHUTDOWN_SDN_CORE_B_NAME );
SFC_STEP_OP_INI_NS_OR = OR_FUNCTION( SHUTDOWN_NS_LAT_SEL_1 , SHUTDOWN_NS_LAT_SEL_1 );
SFC_STEP_STPCNKOR_OR = OR_FUNCTION( SFC_STEP_SD_COND_OR_OR , SFC_STEP_OP_INI_NS_OR );
