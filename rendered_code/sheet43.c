COND_MON_ACSTSI_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_SIACSTENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_05_OUT_1 , 0_0 );
COND_MON_ACSTSI_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_SIACSTENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_05_OUT_1 , 0_0 );
COND_MON_ACTSIOR_OR = OR_FUNCTION( CORE_STPIDL_SI_CORE015 , CORE_STPIDL_SI_CORE023 );
COND_MON_COUNT_01_A_NAME = A_NAME_FUNCTION( COND_MON_GFIRE_STRT_COUNTER );
COND_MON_COUNT_02_A_NAME = A_NAME_FUNCTION( COND_MON_DMS_COUNTER );
COND_MON_COUNT_03_A_NAME = A_NAME_FUNCTION( COND_MON_SDTRIPS_COUNTER );
COND_MON_COUNT_04_A_NAME = A_NAME_FUNCTION( COND_MON_SDNTRIPS_COUNTER );
COND_MON_COUNT_05_A_NAME = A_NAME_FUNCTION( COND_MON_ACSTSI_COUNTER );
COND_MON_COUNT_06_A_NAME = A_NAME_FUNCTION( COND_MON_SICNT_COUNTER );
COND_MON_DMCNT_A_NAME = A_NAME_FUNCTION( COND_MON_DMS_COUNTER );
COND_MON_DMS_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_DM_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_02_OUT_1 , 0_0 );
COND_MON_DMS_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_DM_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_02_OUT_1 , 0_0 );
COND_MON_DM_EN_AND = AND_FUNCTION( SHUTDOWN_DM_LATCH1 , CORE_DIGITAL_FUELON );
COND_MON_FUELONDLY_DELAY = DELAY_FUNCTION( 0 , CORE_DIGITAL_FUELON , 0 , 1_0 );
COND_MON_FUELONDLY_R_TIME = R_TIME_FUNCTION( 0 , CORE_DIGITAL_FUELON , 0 , 1_0 );
COND_MON_GESD_EN_AND = AND_FUNCTION( SHUTDOWN_SD_CORE_B_NAME , COND_MON_FUELONDLY_DELAY );
COND_MON_GFIRE_STRT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_GSTART_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_01_OUT_1 , 0_0 );
COND_MON_GFIRE_STRT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_GSTART_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_01_OUT_1 , 0_0 );
COND_MON_GSTART_EN_AND = AND_FUNCTION( COND_MON_LITEOS_ONE_SHOT , CORE_DIGITAL_FUELON );
COND_MON_LESD_EN_AND = AND_FUNCTION( COND_MON_FUELONDLY_DELAY , SHUTDOWN_SDN_CORE_B_NAME );
COND_MON_LITEOS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , CORE_DIGITAL_LITEOFF , 1_0 , 0 );
COND_MON_LITEOS_R_TIME = R_TIME_FUNCTION( 0 , CORE_DIGITAL_LITEOFF , 1_0 , 0 );
COND_MON_N_ACTSI_NOT = NOT_FUNCTION( COND_MON_ACTSIOR_OR );
COND_MON_PRIORCNT01_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT02_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT03_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT04_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT05_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT06_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_RST_01_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT_1_ZMINUS1 );
COND_MON_RST_02_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT02_ZMINUS1 );
COND_MON_RST_03_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT03_ZMINUS1 );
COND_MON_RST_04_A_TO_INT = A_TO_INT_FUNCTION( COND_MON_WAIT_CNT04_ZMINUS1 , 0 );
COND_MON_RST_05_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT05_ZMINUS1 );
COND_MON_RST_06_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT06_ZMINUS1 );
COND_MON_S2IFORACO_A_NAME = A_NAME_FUNCTION( COND_MON_ACSTSI_COUNTER );
COND_MON_SDNTRIPS_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_LESD_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_04_OUT_1 , 0_0 );
COND_MON_SDNTRIPS_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_LESD_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_04_OUT_1 , 0_0 );
COND_MON_SDTRIPS_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_GESD_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_03_OUT_1 , 0_0 );
COND_MON_SDTRIPS_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_GESD_EN_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_03_OUT_1 , 0_0 );
COND_MON_SEL_CNT_01_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_01_A_NAME , COND_MON_PRIORCNT01_OUT_1 );
COND_MON_SEL_CNT_02_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_02_A_NAME , COND_MON_PRIORCNT02_OUT_1 );
COND_MON_SEL_CNT_03_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_03_A_NAME , COND_MON_PRIORCNT03_OUT_1 );
COND_MON_SEL_CNT_04_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_04_A_NAME , COND_MON_PRIORCNT04_OUT_1 );
COND_MON_SEL_CNT_05_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_05_A_NAME , COND_MON_PRIORCNT05_OUT_1 );
COND_MON_SEL_CNT_06_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_06_A_NAME , COND_MON_PRIORCNT06_OUT_1 );
COND_MON_SIACSTENA_AND = AND_FUNCTION( COND_MON_ACTSIOR_OR , CORE_DIGITAL_FUELON );
COND_MON_SICNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_SIENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_06_OUT_1 , 0_0 );
COND_MON_SICNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_SIENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_06_OUT_1 , 0_0 );
COND_MON_SIENA_AND = AND_FUNCTION( COND_MON_N_ACTSI_NOT , CORE_DIGITAL_STEPIDLE , CORE_DIGITAL_FUELON );
COND_MON_SIOTHER_A_NAME = A_NAME_FUNCTION( COND_MON_SICNT_COUNTER );
COND_MON_STARTSG_A_NAME = A_NAME_FUNCTION( COND_MON_GFIRE_STRT_COUNTER );
COND_MON_TRIPSD_A_NAME = A_NAME_FUNCTION( COND_MON_SDTRIPS_COUNTER );
COND_MON_TRIPSDN_A_NAME = A_NAME_FUNCTION( COND_MON_SDNTRIPS_COUNTER );
COND_MON_WAIT_CNT02_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_02_A_SW );
COND_MON_WAIT_CNT03_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_03_A_SW );
COND_MON_WAIT_CNT04_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_04_A_SW );
COND_MON_WAIT_CNT05_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_05_A_SW );
COND_MON_WAIT_CNT06_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_06_A_SW );
COND_MON_WAIT_CNT_1_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_01_A_SW );
