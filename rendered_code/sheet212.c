SFC_STEP_BOTHOFF_AND = AND_FUNCTION( SFC_STEP_HYDSTRTOFF_NOT , FUEL_SYS_FUEL_OFF_B_NAME , SPEED_SW_N25LT4600_NOT );
SFC_STEP_ES_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_ATCORE_TRAN_2 , SFC_STEP_ACCTOSYNC_TRAN_2 , SFC_STEP_WARMUP_TRAN_2 , SFC_STEP_WATER_INJ_TRAN_2 , FALSE , SFC_STEP_UNITONLINE_TRAN_2 , SFC_STEP_NORM_1_TRAN_2 , SFC_STEP_NORM_2_TRAN_2 , SFC_STEP_NORM_3_TRAN_2 , SFC_STEP_NORM_4_TRAN_2 , SFC_STEP_NORM_5_TRAN_2 , SFC_STEP_STI_1_TRAN_2 , SFC_STEP_STI_2_TRAN_2 , SFC_STEP_FSNL_TRAN_2 , SFC_STEP_HI_SPDSEL3_TRAN_2 , SFC_STEP_READY2SYNC_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME , SFC_STEP_BOTHOFF_AND );
SFC_STEP_ES_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_ATCORE_TRAN_2 , SFC_STEP_ACCTOSYNC_TRAN_2 , SFC_STEP_WARMUP_TRAN_2 , SFC_STEP_WATER_INJ_TRAN_2 , FALSE , SFC_STEP_UNITONLINE_TRAN_2 , SFC_STEP_NORM_1_TRAN_2 , SFC_STEP_NORM_2_TRAN_2 , SFC_STEP_NORM_3_TRAN_2 , SFC_STEP_NORM_4_TRAN_2 , SFC_STEP_NORM_5_TRAN_2 , SFC_STEP_STI_1_TRAN_2 , SFC_STEP_STI_2_TRAN_2 , SFC_STEP_FSNL_TRAN_2 , SFC_STEP_HI_SPDSEL3_TRAN_2 , SFC_STEP_READY2SYNC_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME , SFC_STEP_BOTHOFF_AND );
SFC_STEP_ES_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_ATCORE_TRAN_2 , SFC_STEP_ACCTOSYNC_TRAN_2 , SFC_STEP_WARMUP_TRAN_2 , SFC_STEP_WATER_INJ_TRAN_2 , FALSE , SFC_STEP_UNITONLINE_TRAN_2 , SFC_STEP_NORM_1_TRAN_2 , SFC_STEP_NORM_2_TRAN_2 , SFC_STEP_NORM_3_TRAN_2 , SFC_STEP_NORM_4_TRAN_2 , SFC_STEP_NORM_5_TRAN_2 , SFC_STEP_STI_1_TRAN_2 , SFC_STEP_STI_2_TRAN_2 , SFC_STEP_FSNL_TRAN_2 , SFC_STEP_HI_SPDSEL3_TRAN_2 , SFC_STEP_READY2SYNC_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME , SFC_STEP_BOTHOFF_AND );
SFC_STEP_ES_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_ATCORE_TRAN_2 , SFC_STEP_ACCTOSYNC_TRAN_2 , SFC_STEP_WARMUP_TRAN_2 , SFC_STEP_WATER_INJ_TRAN_2 , FALSE , SFC_STEP_UNITONLINE_TRAN_2 , SFC_STEP_NORM_1_TRAN_2 , SFC_STEP_NORM_2_TRAN_2 , SFC_STEP_NORM_3_TRAN_2 , SFC_STEP_NORM_4_TRAN_2 , SFC_STEP_NORM_5_TRAN_2 , SFC_STEP_STI_1_TRAN_2 , SFC_STEP_STI_2_TRAN_2 , SFC_STEP_FSNL_TRAN_2 , SFC_STEP_HI_SPDSEL3_TRAN_2 , SFC_STEP_READY2SYNC_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME , SFC_STEP_BOTHOFF_AND );
SFC_STEP_ES_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_ES_1_TRAN_2 , HYD_STRT_SOV1619RMP_P_LIM_1 );
SFC_STEP_ES_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_ES_1_TRAN_2 , HYD_STRT_SOV1619RMP_P_LIM_1 );
SFC_STEP_ES_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_ES_1_TRAN_2 , HYD_STRT_SOV1619RMP_P_LIM_1 );
SFC_STEP_HERETOLONG_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SFC_STEP_STI_1_ACTIVETIME , 0 , *30_0 (10_0, 40_0) );
SFC_STEP_HERETOLONG_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SFC_STEP_STI_1_ACTIVETIME , 0 , *30_0 (10_0, 40_0) );
SFC_STEP_HTL_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_STEP_HERETOLONG_A_COMPARE );
SFC_STEP_HYDSTRTOFF_NOT = NOT_FUNCTION( HYD_STRT_STRT_LATCH_LATCH_R );
SFC_STEP_NS_TO_ESN_OR = OR_FUNCTION( SFC_STEP_NORM_1_TRAN_1 , SFC_STEP_NORM_2_TRAN_1 , SFC_STEP_NORM_3_TRAN_1 , SFC_STEP_NORM_4_TRAN_1 , SFC_STEP_NORM_5_TRAN_1 );
SFC_STEP_PDSL6407FL_B_NAME = B_NAME_FUNCTION( SFC_STEP_PRGFAILSFC_SFC_STEP );
SFC_STEP_PRGFAILSFC_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_VENT_TRAN_2 , SHUTDOWN_SDN_LATCH1 );
SFC_STEP_PRGFAILSFC_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_VENT_TRAN_2 , SHUTDOWN_SDN_LATCH1 );
SFC_STEP_PRGFAILSFC_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_VENT_TRAN_2 , SHUTDOWN_SDN_LATCH1 );
SFC_STEP_SEQ_TO_ESN_OR = OR_FUNCTION( SFC_STEP_VENT_TRAN_1 , SFC_STEP_PRGFAILSFC_TRAN_1 , SFC_STEP_HYD_STRT_TRAN_1 , SFC_STEP_GLUB_TRAN_2 , SFC_STEP_GLUB_TRAN_1 , SFC_STEP_HI_SPDSEL1_TRAN_1 , SFC_STEP_HI_SPDSEL2_TRAN_1 , SFC_STEP_ATCORE_TRAN_1 , SFC_STEP_ACCTOSYNC_TRAN_1 , SFC_STEP_WARMUP_TRAN_1 , SFC_STEP_WATER_INJ_TRAN_1 , SFC_STEP_LOCRANK_1_TRAN_2 , SFC_STEP_UNITONLINE_TRAN_1 , SFC_STEP_HICRANK_1_TRAN_2 , SFC_STEP_FSNL_TRAN_1 , SFC_STEP_HI_SPDSEL3_TRAN_1 , SFC_STEP_FUELOFF_TRAN_1 , SFC_STEP_READY2SYNC_TRAN_1 , SFC_STEP_NGGGT1700_TRAN_1 , SFC_STEP_TURB_PRG_TRAN_1 );
SFC_STEP_SITOESNOR_OR = OR_FUNCTION( SFC_STEP_STI_1_TRAN_1 , SFC_STEP_STI_2_TRAN_1 , SFC_STEP_STI_3_TRAN_1 );
SFC_STEP_SI_DN_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SFC_TIMER_STI_1_DN_B_NAME );
SFC_STEP_STITOESN_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_STI_3_TRAN_2 , SFC_STEP_MOTOR_1_TRAN_2 , SFC_STEP_MOTOR_2_TRAN_2 , SFC_STEP_MOTOR_3_TRAN_2 , SFC_STEP_MOTOR_4_TRAN_2 , SFC_STEP_MOTOR_5_TRAN_2 , SFC_STEP_MOTOR_6_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME );
SFC_STEP_STITOESN_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_STI_3_TRAN_2 , SFC_STEP_MOTOR_1_TRAN_2 , SFC_STEP_MOTOR_2_TRAN_2 , SFC_STEP_MOTOR_3_TRAN_2 , SFC_STEP_MOTOR_4_TRAN_2 , SFC_STEP_MOTOR_5_TRAN_2 , SFC_STEP_MOTOR_6_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME );
SFC_STEP_STITOESN_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_STI_3_TRAN_2 , SFC_STEP_MOTOR_1_TRAN_2 , SFC_STEP_MOTOR_2_TRAN_2 , SFC_STEP_MOTOR_3_TRAN_2 , SFC_STEP_MOTOR_4_TRAN_2 , SFC_STEP_MOTOR_5_TRAN_2 , SFC_STEP_MOTOR_6_TRAN_2 , SHUTDOWN_SDN_CORE_B_NAME );
SFC_STEP_STI_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_ACCTOSYNC_TRAN_3 , SFC_STEP_WARMUP_TRAN_3 , SFC_STEP_WATER_INJ_TRAN_3 , FALSE , SFC_STEP_UNITONLINE_TRAN_3 , SFC_STEP_NORM_1_TRAN_3 , SFC_STEP_NORM_2_TRAN_3 , SFC_STEP_NORM_3_TRAN_3 , SFC_STEP_NORM_4_TRAN_3 , SFC_STEP_NORM_5_TRAN_3 , SFC_STEP_FSNL_TRAN_3 , SFC_STEP_READY2SYNC_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STP_DN_OR );
SFC_STEP_STI_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_ACCTOSYNC_TRAN_3 , SFC_STEP_WARMUP_TRAN_3 , SFC_STEP_WATER_INJ_TRAN_3 , FALSE , SFC_STEP_UNITONLINE_TRAN_3 , SFC_STEP_NORM_1_TRAN_3 , SFC_STEP_NORM_2_TRAN_3 , SFC_STEP_NORM_3_TRAN_3 , SFC_STEP_NORM_4_TRAN_3 , SFC_STEP_NORM_5_TRAN_3 , SFC_STEP_FSNL_TRAN_3 , SFC_STEP_READY2SYNC_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STP_DN_OR );
SFC_STEP_STI_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_ACCTOSYNC_TRAN_3 , SFC_STEP_WARMUP_TRAN_3 , SFC_STEP_WATER_INJ_TRAN_3 , FALSE , SFC_STEP_UNITONLINE_TRAN_3 , SFC_STEP_NORM_1_TRAN_3 , SFC_STEP_NORM_2_TRAN_3 , SFC_STEP_NORM_3_TRAN_3 , SFC_STEP_NORM_4_TRAN_3 , SFC_STEP_NORM_5_TRAN_3 , SFC_STEP_FSNL_TRAN_3 , SFC_STEP_READY2SYNC_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STP_DN_OR );
SFC_STEP_STI_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_ACCTOSYNC_TRAN_3 , SFC_STEP_WARMUP_TRAN_3 , SFC_STEP_WATER_INJ_TRAN_3 , FALSE , SFC_STEP_UNITONLINE_TRAN_3 , SFC_STEP_NORM_1_TRAN_3 , SFC_STEP_NORM_2_TRAN_3 , SFC_STEP_NORM_3_TRAN_3 , SFC_STEP_NORM_4_TRAN_3 , SFC_STEP_NORM_5_TRAN_3 , SFC_STEP_FSNL_TRAN_3 , SFC_STEP_READY2SYNC_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STP_DN_OR );
SFC_STEP_STI_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_ACCTOSYNC_TRAN_3 , SFC_STEP_WARMUP_TRAN_3 , SFC_STEP_WATER_INJ_TRAN_3 , FALSE , SFC_STEP_UNITONLINE_TRAN_3 , SFC_STEP_NORM_1_TRAN_3 , SFC_STEP_NORM_2_TRAN_3 , SFC_STEP_NORM_3_TRAN_3 , SFC_STEP_NORM_4_TRAN_3 , SFC_STEP_NORM_5_TRAN_3 , SFC_STEP_FSNL_TRAN_3 , SFC_STEP_READY2SYNC_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STP_DN_OR );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_STI_1_TRAN_3 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SFC_STEP_STI_RESET_AND , SFC_STEP_SI_DN_Z_ZMINUS1_B );
SFC_STEP_STI_3_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_STI_2_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SISDESN_LATCH1 , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_STI_3_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_STI_2_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SISDESN_LATCH1 , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_STI_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_STI_2_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SISDESN_LATCH1 , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_STI_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_STI_2_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SISDESN_LATCH1 , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_STI_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_STI_2_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SISDESN_LATCH1 , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_STI_RESET_AND = AND_FUNCTION( ALARM_RESET_B_NAME , SHUTDOWN_NO_SHTDNS_B_NAME );
SFC_STEP_STP_DN_OR = OR_FUNCTION( CORE_DIGITAL_N25CTRL , SFC_STEP_HTL_Z_ZMINUS1_B );
