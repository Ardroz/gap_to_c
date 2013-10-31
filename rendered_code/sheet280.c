GENERATOR_BKR_OK_LATCH = LATCH_FUNCTION( 0 , GENERATOR_MASKBRKR_AND , GENERATOR_TRIP_OR );
GENERATOR_CTRL_ON_NOT = NOT_FUNCTION( GENERATOR_TRIP_OR );
GENERATOR_EX_SUMMARY_B_NAME = B_NAME_FUNCTION( GENERATOR_EX_SUM_OR_OR );
GENERATOR_EX_SUM_OR_OR = OR_FUNCTION( GENERATOR_EXCIT_ALM_B_NAME , GENERATOR_GEN_EX_LIM_B_NAME , GENERATOR_DIODE_FAIL_B_NAME , GENERATOR_AVR_ALARM_B_NAME , GENERATOR_AVR_FAULT_B_NAME );
GENERATOR_K85_B_NAME = B_NAME_FUNCTION( GENERATOR_BKR_OK_LATCH );
GENERATOR_LSH6834_B_NAME = B_NAME_FUNCTION( GENERATOR_NOTLSH6834_NOT );
GENERATOR_MASKBRKR_AND = AND_FUNCTION( GENERATOR_CTRL_ON_NOT , SHUTDOWN_NO_SHTDNS_B_NAME , SPEED_SW_NSDGT3590_A_COMPARE );
GENERATOR_NOTLSH6834_NOT = NOT_FUNCTION( TRUE );
GENERATOR_SYNC_EN_AND = AND_FUNCTION( GENERATOR_SYNC_ENBL_B_NAME , GENERATOR_MASKBRKR_AND , SFC_TIMER_WARMUP_DN_B_NAME , SFC_STEP_READY2SYNC_SFC_STEP );
GENERATOR_SYNC_ENABL_B_NAME = B_NAME_FUNCTION( GENERATOR_SYNC_EN_AND );
GENERATOR_SYNC_ENBL_B_NAME = B_NAME_FUNCTION( N3N42_BI_AUTO_SYNC_BI_L );
GENERATOR_TE6432_A_NAME = A_NAME_FUNCTION( 0_0 );
GENERATOR_TE6432LOG_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , GENERATOR_TE6432_A_NAME , 113_0 , 0 );
GENERATOR_TE6432LOG_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , GENERATOR_TE6432_A_NAME , 113_0 , 0 );
GENERATOR_TE6432_H_B_NAME = B_NAME_FUNCTION( GENERATOR_TE6432LOG_A_COMPARE );
GENERATOR_TE6433_A_NAME = A_NAME_FUNCTION( 0_0 );
GENERATOR_TE6433LOG_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , GENERATOR_TE6433_A_NAME , 113_0 , 0 );
GENERATOR_TE6433LOG_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , GENERATOR_TE6433_A_NAME , 113_0 , 0 );
GENERATOR_TE6433_H_B_NAME = B_NAME_FUNCTION( GENERATOR_TE6433LOG_A_COMPARE );
GENERATOR_TRIP_OR = OR_FUNCTION( CORE_DIGITAL_FUELOFF , SHUTDOWN_SD_CORE_B_NAME , SHUTDOWN_SDN_CORE_B_NAME , SHUTDOWN_STEPIDLE_B_NAME , GENERATOR_GEN86TRIPL_B_NAME , GENERATOR_GEN86TRIPR_B_NAME , SHUTDOWN_DMINTONS_B_NAME , SFC_STEP_NORM_3_SFC_STEP , ALARM_HMI_STI_LATCH , GENERATOR_STP_2_SYNC_B_NAME , SPEED_SW_NSDLT3420_NOT );
GENERATOR_VLT_LWRPLS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , GENERATOR_VOLT_LWR_B_NAME , 0 , *0_5 (0_1, 5_0) );
GENERATOR_VLT_LWRPLS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , GENERATOR_VOLT_LWR_B_NAME , 0 , *0_5 (0_1, 5_0) );
GENERATOR_VLT_RSEPLS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , GENERATOR_VOLT_RSE_B_NAME , 0 , *0_5 (0_1, 5_0) );
GENERATOR_VLT_RSEPLS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , GENERATOR_VOLT_RSE_B_NAME , 0 , *0_5 (0_1, 5_0) );
GENERATOR_VOLT_LOWER_B_NAME = B_NAME_FUNCTION( GENERATOR_VLT_LWRPLS_ONE_SHOT );
GENERATOR_VOLT_LWR_B_NAME = B_NAME_FUNCTION( OP_INTRFC_LWR_VLTS_B_NAME );
GENERATOR_VOLT_RAISE_B_NAME = B_NAME_FUNCTION( GENERATOR_VLT_RSEPLS_ONE_SHOT );
GENERATOR_VOLT_RSE_B_NAME = B_NAME_FUNCTION( OP_INTRFC_VOLT_RSE_B_NAME );