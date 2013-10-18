COND_MON_ABC2ABDCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_ABCABDNENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_15_OUT_1 , 0_0 );
COND_MON_ABC2ABSTPD_A_NAME = A_NAME_FUNCTION( COND_MON_ABC2ABDCNT_COUNTER );
COND_MON_ABCABDNENA_AND = AND_FUNCTION( CORE_DIGITAL_ABC2ABALM , CORE_DIGITAL_FUELON );
COND_MON_ABCPLTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_ABCPLTENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_14_OUT_1 , 0_0 );
COND_MON_ABCPLTENA_AND = AND_FUNCTION( CORE_ALARM_ALMCORE148 , CORE_DIGITAL_FUELON );
COND_MON_ABPLTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_ABPLTENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_13_OUT_1 , 0_0 );
COND_MON_ABPLTENA_AND = AND_FUNCTION( CORE_ALARM_ALMCORE147 , CORE_DIGITAL_FUELON );
COND_MON_BRNMDCHNG_A_NAME = A_NAME_FUNCTION( COND_MON_STGCNT_COUNTER );
COND_MON_CDCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_CD_ENABLE_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_CD_OUT_1 , 0_0 );
COND_MON_CDLO_OR_OR = OR_FUNCTION( SHUTDOWN_CDLO_LAT_LATCH1 , SHUTDOWN_CDLO_GEN_LATCH1 );
COND_MON_CDLO_STPS_A_NAME = A_NAME_FUNCTION( COND_MON_CDCNT_COUNTER );
COND_MON_CD_ENABLE_AND = AND_FUNCTION( COND_MON_CDLO_OR_OR , CORE_DIGITAL_FUELON );
COND_MON_CD_TO_NVL_A_NAME = A_NAME_FUNCTION( COND_MON_CDCNT_COUNTER );
COND_MON_COUNT_09_A_NAME = A_NAME_FUNCTION( COND_MON_STGCNT_COUNTER );
COND_MON_COUNT_13_A_NAME = A_NAME_FUNCTION( COND_MON_ABPLTCNT_COUNTER );
COND_MON_COUNT_14_A_NAME = A_NAME_FUNCTION( COND_MON_ABCPLTCNT_COUNTER );
COND_MON_COUNT_15_A_NAME = A_NAME_FUNCTION( COND_MON_ABC2ABDCNT_COUNTER );
COND_MON_NORM_STPS_A_NAME = A_NAME_FUNCTION( COND_MON_NSCNT_COUNTER );
COND_MON_NSCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_NS_ENABLE_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_NS_OUT_1 , 0_0 );
COND_MON_NS_ENABLE_AND = AND_FUNCTION( SHUTDOWN_NS_LAT_LATCH1 , CORE_DIGITAL_FUELON );
COND_MON_NS_TO_NVL_A_NAME = A_NAME_FUNCTION( COND_MON_NSCNT_COUNTER );
COND_MON_PRIORCNT09_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT13_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT14_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT15_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNTCD_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNTNS_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_RST_09_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT09_ZMINUS1 );
COND_MON_RST_13_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT13_ZMINUS1 );
COND_MON_RST_14_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT14_ZMINUS1 );
COND_MON_RST_15_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT15_ZMINUS1 );
COND_MON_RST_CD_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNTCD_ZMINUS1 );
COND_MON_RST_NS_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNTNS_ZMINUS1 );
COND_MON_SEL_CNT_09_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_09_A_NAME , COND_MON_PRIORCNT09_OUT_1 );
COND_MON_SEL_CNT_13_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_13_A_NAME , COND_MON_PRIORCNT13_OUT_1 );
COND_MON_SEL_CNT_14_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_14_A_NAME , COND_MON_PRIORCNT14_OUT_1 );
COND_MON_SEL_CNT_15_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_15_A_NAME , COND_MON_PRIORCNT15_OUT_1 );
COND_MON_SEL_CNT_CD_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_08_A_NAME , COND_MON_PRIORCNTCD_OUT_1 );
COND_MON_SEL_CNT_NS_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_07_A_NAME , COND_MON_PRIORCNTNS_OUT_1 );
COND_MON_STGCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_STGRENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_09_OUT_1 , 0_0 );
COND_MON_STGRENA_AND = AND_FUNCTION( CORE_DIGITAL_STAGING , CORE_DIGITAL_FUELON );
COND_MON_TFLP10S_A_NAME = A_NAME_FUNCTION( COND_MON_ABPLTCNT_COUNTER );
COND_MON_TFLP15S_A_NAME = A_NAME_FUNCTION( COND_MON_ABCPLTCNT_COUNTER );
COND_MON_WAIT_CNT09_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_09_A_SW );
COND_MON_WAIT_CNT13_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_13_A_SW );
COND_MON_WAIT_CNT14_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_14_A_SW );
COND_MON_WAIT_CNT15_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_15_A_SW );
COND_MON_WAIT_CNTCD_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_CD_A_SW );
COND_MON_WAIT_CNTNS_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_NS_A_SW );
