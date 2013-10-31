SFC_STEP_ANY_SD_OR_OR = OR_FUNCTION( SHUTDOWN_CDLO_B_NAME , SHUTDOWN_DECELMIN_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME );
SFC_STEP_BKRS_OPN_AND = AND_FUNCTION( GENERATOR_GEN_BKROPN_B_NAME , SFC_STEP_UTIL_SW_B_SW );
SFC_STEP_CNFG_CLDWN_B_NAME = B_NAME_FUNCTION(  , *TRUE );
SFC_STEP_COOLAT_SYN_SUBTRACT = SUBTRACT_FUNCTION( 0 , TIMERS_CHTOSEC7_MULTIPLY , SFC_STEP_COOLDN_SW_A_SW );
SFC_STEP_COOLDN_SW_A_SW = A_SW_FUNCTION( SFC_STEP_CNFG_CLDWN_B_NAME , *60_0 (0_0, 300_0) , *0_0 (0_0, 300_0) );
SFC_STEP_DEACTWTR_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SFC_STEP_DISABLEMW_A_NAME , CORE_ANALOG_MWSEL , *0_0 (-2_0, 2_0) );
SFC_STEP_DEACTWTR_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SFC_STEP_DISABLEMW_A_NAME , CORE_ANALOG_MWSEL , *0_0 (-2_0, 2_0) );
SFC_STEP_DISABLEMW_A_NAME = A_NAME_FUNCTION(  , *2_0 (1_0, 5_0) );
SFC_STEP_HISPD_OR_OR = OR_FUNCTION( FALSE , SFC_STEP_HICRANK_2_SFC_STEP , SFC_STEP_HICRANK_3_SFC_STEP , SFC_STEP_HICRANK_4_SFC_STEP , SFC_STEP_MOTOR_1_SFC_STEP , SFC_STEP_MOTOR_2_SFC_STEP , SFC_STEP_MOTOR_3_SFC_STEP , SFC_STEP_MOTOR_4_SFC_STEP , SFC_STEP_MOTOR_5_SFC_STEP );
SFC_STEP_MOTOR_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_NORM_5_TRAN_5 , SFC_STEP_STI_3_TRAN_3 , SFC_STEP_ES_2_TRAN_1 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25LT4600_NOT );
SFC_STEP_MOTOR_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_NORM_5_TRAN_5 , SFC_STEP_STI_3_TRAN_3 , SFC_STEP_ES_2_TRAN_1 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25LT4600_NOT );
SFC_STEP_MOTOR_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_NORM_5_TRAN_5 , SFC_STEP_STI_3_TRAN_3 , SFC_STEP_ES_2_TRAN_1 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25LT4600_NOT );
SFC_STEP_MOTOR_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_NORM_5_TRAN_5 , SFC_STEP_STI_3_TRAN_3 , SFC_STEP_ES_2_TRAN_1 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25LT4600_NOT );
SFC_STEP_MOTOR_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_NORM_5_TRAN_5 , SFC_STEP_STI_3_TRAN_3 , SFC_STEP_ES_2_TRAN_1 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25LT4600_NOT );
SFC_STEP_MOTOR_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_MOTOR_1_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_STEP_PMPON_LT17_AND );
SFC_STEP_MOTOR_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_MOTOR_1_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_STEP_PMPON_LT17_AND );
SFC_STEP_MOTOR_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_MOTOR_1_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_STEP_PMPON_LT17_AND );
SFC_STEP_MOTOR_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_MOTOR_1_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_STEP_PMPON_LT17_AND );
SFC_STEP_MOTOR_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_MOTOR_1_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_STEP_PMPON_LT17_AND );
SFC_STEP_MOTOR_3_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_MOTOR_2_TRAN_3 , SFC_STEP_FUELOFF_TRAN_2 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , HYD_STRT_SOV1619RMP_P_LIM_4 );
SFC_STEP_MOTOR_3_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_MOTOR_2_TRAN_3 , SFC_STEP_FUELOFF_TRAN_2 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , HYD_STRT_SOV1619RMP_P_LIM_4 );
SFC_STEP_MOTOR_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_MOTOR_2_TRAN_3 , SFC_STEP_FUELOFF_TRAN_2 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , HYD_STRT_SOV1619RMP_P_LIM_4 );
SFC_STEP_MOTOR_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_MOTOR_2_TRAN_3 , SFC_STEP_FUELOFF_TRAN_2 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , HYD_STRT_SOV1619RMP_P_LIM_4 );
SFC_STEP_MOTOR_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_MOTOR_2_TRAN_3 , SFC_STEP_FUELOFF_TRAN_2 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , HYD_STRT_SOV1619RMP_P_LIM_4 );
SFC_STEP_MOTOR_4_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_MOTOR_3_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25GT1700_A_COMPARE );
SFC_STEP_MOTOR_4_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_MOTOR_3_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25GT1700_A_COMPARE );
SFC_STEP_MOTOR_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_MOTOR_3_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25GT1700_A_COMPARE );
SFC_STEP_MOTOR_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_MOTOR_3_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25GT1700_A_COMPARE );
SFC_STEP_MOTOR_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_MOTOR_3_TRAN_3 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SPEED_SW_N25GT1700_A_COMPARE );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_MOTOR_4_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_4 , SFC_STEP_STPMOTOR_OR , SHUTDOWN_SISDESN_LATCH1 , SFC_TIMER_CDC_DN_B_NAME , SFC_STEP_RESET_STRT_LATCH );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MOTOR_6_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_MOTOR_5_TRAN_4 , SHUTDOWN_ANY_SD_B_NAME , SHUTDOWN_SISDESN_LATCH1 , FUEL_SYS_PRGDN_LATCH , SFC_STEP_ANY_SD_OR_OR );
SFC_STEP_MTR_OR_OR = OR_FUNCTION( SFC_STEP_MOTOR_1_SFC_STEP , SFC_STEP_MOTOR_2_SFC_STEP , SFC_STEP_MOTOR_3_SFC_STEP , SFC_STEP_MOTOR_4_SFC_STEP , SFC_STEP_MOTOR_5_SFC_STEP );
SFC_STEP_MTR_TO_ESN_OR = OR_FUNCTION( SFC_STEP_MOTOR_1_TRAN_1 , SFC_STEP_MOTOR_2_TRAN_1 , SFC_STEP_MOTOR_3_TRAN_1 , SFC_STEP_MOTOR_4_TRAN_1 , SFC_STEP_MOTOR_5_TRAN_1 , SFC_STEP_MOTOR_5_TRAN_3 , SFC_STEP_MOTOR_6_TRAN_1 );
SFC_STEP_MULT_TIME1_MULTIPLY = MULTIPLY_FUNCTION( 0 , SFC_TIMER_NS_TIMER_A_NAME , 60_0 );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_1_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , SFC_STEP_UNITONLINE_TRAN_4 , SFC_STEP_WATER_INJ_TRAN_4 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_RDYTOOPN_AND );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_2_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , SFC_STEP_NORM_1_TRAN_5 , SFC_STEP_UNITONLINE_TRAN_5 , SFC_STEP_WATER_INJ_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , TRUE );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_3_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , SFC_STEP_NORM_2_TRAN_5 , SFC_STEP_NS_OR_OR , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_BKRS_OPN_AND );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_4_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , SFC_STEP_NORM_3_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SFC_STEP_SYNC_COOL_DELAY );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_2" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_3" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_4" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NORM_5_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_5" , 0 , 0 , SFC_STEP_NORM_4_TRAN_5 , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND , SHUTDOWN_CHOP_FUEL_B_NAME );
SFC_STEP_NSTOESTMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SFC_STEP_ST_NS_TMR_LATCH , SFC_STEP_MULT_TIME1_MULTIPLY , 0 );
SFC_STEP_NSTOESTMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SFC_STEP_ST_NS_TMR_LATCH , SFC_STEP_MULT_TIME1_MULTIPLY , 0 );
SFC_STEP_NSTP_FAILD_B_NAME = B_NAME_FUNCTION( SFC_STEP_NSTOESTMR_DELAY );
SFC_STEP_NS_OR_OR = OR_FUNCTION( FALSE , SFC_STEP_FSNL_TRAN_4 , SFC_STEP_READY2SYNC_TRAN_4 , SFC_STEP_ACCTOSYNC_TRAN_4 , SFC_STEP_WARMUP_TRAN_4 );
SFC_STEP_PMPON_LT17_AND = AND_FUNCTION( HYD_STRT_STRT_LATCH_LATCH_R , SPEED_SW_N25LT1700_NOT );
SFC_STEP_RDYTOOPN_AND = AND_FUNCTION( SFC_STEP_DEACTWTR_A_COMPARE , SHUTDOWN_LTMINLD_A_COMPARE );
SFC_STEP_RESETTMR_OR = OR_FUNCTION( SFC_STEP_BKRS_OPN_AND , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , SFC_STEP_RST_AND_ST_AND );
SFC_STEP_RESET_STRT_LATCH = LATCH_FUNCTION( 0 , SFC_STEP_RST_START_AND , SFC_STEP_MOTOR_6_SFC_STEP );
SFC_STEP_RST_AND_ST_AND = AND_FUNCTION( SFC_STEP_START_OR_OR , SHUTDOWN_NO_SHTDNS_B_NAME , GLUB_DC_OFF_B_NAME );
SFC_STEP_RST_START_AND = AND_FUNCTION( SFC_STEP_RST_AND_ST_AND , SFC_STEP_MTR_OR_OR );
SFC_STEP_SD_EXCPTNM_OR = OR_FUNCTION( SHUTDOWN_STEPIDLE_B_NAME , SHUTDOWN_CDLO_B_NAME , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_DM_LATCH1 );
SFC_STEP_STPMOTOR_OR = OR_FUNCTION( SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_FOURHRLOK_B_NAME );
SFC_STEP_STRT_AGAIN_OR = OR_FUNCTION( SFC_STEP_STI_2_TRAN_3 , SFC_STEP_NORM_2_TRAN_4 , SFC_STEP_NORM_3_TRAN_4 , SFC_STEP_NORM_4_TRAN_4 , SFC_STEP_NORM_5_TRAN_4 );
SFC_STEP_ST_NS_TMR_LATCH = LATCH_FUNCTION( 0 , SFC_STEP_NORM_1_SFC_STEP , SFC_STEP_RESETTMR_OR );
SFC_STEP_SYNC_COOL_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SFC_STEP_NORM_4_SFC_STEP , SFC_STEP_COOLAT_SYN_SUBTRACT , 0 );
SFC_STEP_SYNC_COOL_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SFC_STEP_NORM_4_SFC_STEP , SFC_STEP_COOLAT_SYN_SUBTRACT , 0 );
SFC_STEP_UTIL_SW_B_SW = B_SW_FUNCTION( TRUE , GENERATOR_UTIL_BKROP_B_NAME , 0 );
SFC_TIMER_NS_TIMER_A_NAME = A_NAME_FUNCTION(  , *10_0 (10_0, 20_0) );