TLO_N25GT4500_A_COMPARE = A_COMPARE_FUNCTION( CORE_ANALOG_N25SEL , 4500_0 , 0 );
TLO_N25GT7800_NOT = NOT_FUNCTION( TLO_N25LT7800_A_COMPARE );
TLO_N25LT7800_A_COMPARE = A_COMPARE_FUNCTION( 7800_0 , CORE_ANALOG_N25SEL , 0 );
TLO_PLBLT15ENA_AND = AND_FUNCTION( TLO_PLUBLT15A_A_COMPARE , TLO_PT6121AOK_NOT , TLO_N25GT7800_NOT , TLO_USE_2NDRNG_NOT );
TLO_PLBLT15ENB_AND = AND_FUNCTION( TLO_N25GT7800_NOT , TLO_USE_2NDRNG_NOT , TLO_PLUBLT15B_A_COMPARE , TLO_PT6121BOK_NOT );
TLO_PLUBDFALM_B_NAME = B_NAME_FUNCTION( TLO_PLUBISP_MAXDIFF_AL );
TLO_PLUBISP_A_2_RM = A_2_RM_FUNCTION( 0 , TLO_PT6121A_A_NAME , N1N1_AI_PT6121A_LATCH_OR , 0 , TLO_PT6121B_A_NAME , N1N1_AI_PT6121B_LATCH_OR , 0 , "LSS" , "LSS" , TLO_PLUBISP_A_2_RM , 30_0 , 0 , 0 , -8_0 , 530_0 , 0 , 0 , ALARM_RESET_B_NAME , *2_0 (0_5, 10_0) );
TLO_PLUBLT15A_A_COMPARE = A_COMPARE_FUNCTION( 15_0 , TLO_PT6121A_A_NAME , 0_0 );
TLO_PLUBLT15B_A_COMPARE = A_COMPARE_FUNCTION( 15_0 , TLO_PT6121B_A_NAME , 0_0 );
TLO_PLUBLT6A_A_COMPARE = A_COMPARE_FUNCTION( 6_0 , TLO_PT6121A_A_NAME , 0_0 );
TLO_PLUBLT6B_A_COMPARE = A_COMPARE_FUNCTION( 6_0 , TLO_PT6121B_A_NAME , 0_0 );
TLO_PLUBLT6ENA_AND = AND_FUNCTION( TLO_N25LT7800_A_COMPARE , TLO_N25GT4500_A_COMPARE , TLO_PLUBLT6A_A_COMPARE , TLO_PT6121AOK_NOT , TLO_USE_2NDRNG_NOT );
TLO_PLUBLT6ENB_AND = AND_FUNCTION( TLO_N25LT7800_A_COMPARE , TLO_N25GT4500_A_COMPARE , TLO_PLUBLT6B_A_COMPARE , TLO_USE_2NDRNG_NOT , TLO_USE_2NDRNG_NOT , TLO_PT6121BOK_NOT );
TLO_PLUBSEL_A_NAME = A_NAME_FUNCTION( TLO_PLUBISP_A_2_RM );
TLO_PLUBVST_B_NAME = B_NAME_FUNCTION( TLO_PLUBISP_ALL_FLT );
TLO_PLUBVSTMSK_AND = AND_FUNCTION( TLO_PLUBISP_ALL_FLT , TLO_USE_2NDRNG_NOT );
TLO_PLUB_DM_B_NAME = B_NAME_FUNCTION( TLO_PLUBVSTMSK_AND );
TLO_PT6121A_A_NAME = A_NAME_FUNCTION( N1N1_AI_PT6121A_AI_420_L );
TLO_PT6121AOK_NOT = NOT_FUNCTION( N1N1_AI_PT6121A_LATCH_OR );
TLO_PT6121ASD1_B_NAME = B_NAME_FUNCTION( TLO_SD1_A_DLY_DELAY );
TLO_PT6121ASD2_B_NAME = B_NAME_FUNCTION( TLO_SD2_A_DLY_DELAY );
TLO_PT6121B_A_NAME = A_NAME_FUNCTION( N1N1_AI_PT6121B_AI_420_L );
TLO_PT6121BOK_NOT = NOT_FUNCTION( N1N1_AI_PT6121B_LATCH_OR );
TLO_PT6121BSD1_B_NAME = B_NAME_FUNCTION( TLO_SD1_B_DLY_DELAY );
TLO_PT6121BSD2_B_NAME = B_NAME_FUNCTION( TLO_SD2_B_DLY_DELAY );
TLO_SD1_A_DLY_DELAY = DELAY_FUNCTION( 0 , TLO_PLBLT15ENA_AND , 0_160 , 0 );
TLO_SD1_B_DLY_DELAY = DELAY_FUNCTION( 0 , TLO_PLBLT15ENB_AND , 0_160 , 0 );
TLO_SD2_A_DLY_DELAY = DELAY_FUNCTION( 0 , TLO_PLUBLT6ENA_AND , 0_160 , 0 );
TLO_SD2_B_DLY_DELAY = DELAY_FUNCTION( 0 , TLO_PLUBLT6ENB_AND , 0_160 , 0 );
TLO_USE_2NDRNG_NOT = NOT_FUNCTION( IFACE_CNFG_LUBPRS_OPT_B_NAME );
