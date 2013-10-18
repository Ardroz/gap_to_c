VENT_FIREGASALM_B_NAME = B_NAME_FUNCTION( VENT_N_FGASALM_NOT );
VENT_FIREGASLAT_LATCH = LATCH_FUNCTION( 0 , VENT_N_FGASSD_NOT , SHUTDOWN_SD_RESET_B_NAME );
VENT_FIREGAS_SD_B_NAME = B_NAME_FUNCTION( VENT_FIREGASLAT_LATCH );
VENT_G_LEL_AL_B_NAME = B_NAME_FUNCTION( VENT_G_LEL_LAT_SEL_1 );
VENT_G_LEL_LAT_LATCH1 = LATCH1_FUNCTION( 0 , ALARM_RESET_B_NAME , VENT_LELLAT_INI_B_NAME , 0 , 0 , VENT_NOT_G_AL_NOT , 0 , 0 , VENT_NOT_G_SD_NOT , 0 , 0 );
VENT_G_LEL_SD_B_NAME = B_NAME_FUNCTION( VENT_G_LEL_LAT_SEL_2 );
VENT_IN64017OFF_B_SW = B_SW_FUNCTION( VENT_PDSH64017_B_NAME , TRUE , 0 );
VENT_IN64018OFF_B_SW = B_SW_FUNCTION( VENT_IN_64018_B_NAME , TRUE , 0 );
VENT_IN6405OFF_B_SW = B_SW_FUNCTION( VENT_PDSH6405_B_NAME , TRUE , 0 );
VENT_IN6406OFF_B_SW = B_SW_FUNCTION( VENT_PDSHH6406_B_NAME , TRUE , 0 );
VENT_ING_LEL_AL_B_NAME = B_NAME_FUNCTION( N3N41_BI_G_LEL_AL_BI_L );
VENT_ING_LEL_SD_B_NAME = B_NAME_FUNCTION( A1_A12_BI1_G_LEL_SD_BIO_BI );
VENT_INT_LEL_AL_B_NAME = B_NAME_FUNCTION( N3N41_BI_T_LEL_AL_BI_L );
VENT_INT_LEL_SD_B_NAME = B_NAME_FUNCTION( A1_A12_BI1_T_LEL_SD_BIO_BI );
VENT_IN_64018_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSHH64018_BI_L );
VENT_IN_FGASALM_B_NAME = B_NAME_FUNCTION( N3N41_BI_FGASMONFL_BI_L );
VENT_IN_FGAS_SD_B_NAME = B_NAME_FUNCTION( A1_A12_BI1_FIREGAS_SD_BIO_BI );
VENT_LELLAT_INI_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_PWR_UP );
VENT_NOT6405_NOT = NOT_FUNCTION( VENT_IN6405OFF_B_SW );
VENT_NOT6406_NOT = NOT_FUNCTION( VENT_IN6406OFF_B_SW );
VENT_NOT_6348_NOT = NOT_FUNCTION( VENT_PSHH6348_B_NAME );
VENT_NOT_64018_NOT = NOT_FUNCTION( VENT_IN64018OFF_B_SW );
VENT_NOT_G_AL_NOT = NOT_FUNCTION( VENT_ING_LEL_AL_B_NAME );
VENT_NOT_G_SD_NOT = NOT_FUNCTION( VENT_ING_LEL_SD_B_NAME );
VENT_NOT_T_AL_NOT = NOT_FUNCTION( VENT_INT_LEL_AL_B_NAME );
VENT_NOT_T_SD_NOT = NOT_FUNCTION( VENT_INT_LEL_SD_B_NAME );
VENT_N_FGASALM_NOT = NOT_FUNCTION( VENT_IN_FGASALM_B_NAME );
VENT_N_FGASSD_NOT = NOT_FUNCTION( VENT_IN_FGAS_SD_B_NAME );
VENT_PDSH64017_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSH64017_BI_L );
VENT_PDSH64017N_NOT = NOT_FUNCTION( VENT_IN64017OFF_B_SW );
VENT_PDSH6405_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSH6405_BI_L );
VENT_PDSH6405AL_B_NAME = B_NAME_FUNCTION( VENT_NOT6405_NOT );
VENT_PDSHH64018_B_NAME = B_NAME_FUNCTION( VENT_NOT_64018_NOT );
VENT_PDSHH6406_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSHH6406_BI_L );
VENT_PDSHH6406S_B_NAME = B_NAME_FUNCTION( VENT_NOT6406_NOT );
VENT_PDSH_64017_B_NAME = B_NAME_FUNCTION( VENT_PDSH64017N_NOT );
VENT_PSHH6348_B_NAME = B_NAME_FUNCTION( N3N41_BI_PSHH6348_BI_L );
VENT_PSHH6348LT_LATCH = LATCH_FUNCTION( 0 , VENT_NOT_6348_NOT , SHUTDOWN_SD_RESET_B_NAME );
VENT_PSHH6348SD_B_NAME = B_NAME_FUNCTION( VENT_PSHH6348LT_LATCH );
VENT_T_LEL_AL_B_NAME = B_NAME_FUNCTION( VENT_T_LEL_LAT_SEL_1 );
VENT_T_LEL_LAT_LATCH1 = LATCH1_FUNCTION( 0 , ALARM_RESET_B_NAME , VENT_LELLAT_INI_B_NAME , 0 , 0 , VENT_NOT_T_AL_NOT , 0 , 0 , VENT_NOT_T_SD_NOT , 0 , 0 );
VENT_T_LEL_SD_B_NAME = B_NAME_FUNCTION( VENT_T_LEL_LAT_SEL_2 );
