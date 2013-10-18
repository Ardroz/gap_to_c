COND_MON_BASET3_HR_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_03_A_SW );
COND_MON_BASET48_HR_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_01_A_SW );
COND_MON_PEAKT3_HR_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_04_A_SW );
COND_MON_PEAKT48_HR_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_02_A_SW );
COND_MON_PRIORTM01_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 99999999) );
COND_MON_PRIORTM02_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 99999999) );
COND_MON_PRIORTM03_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 99999999) );
COND_MON_PRIORTM04_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 99999999) );
COND_MON_SEL_HRS_1_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_01_A_SW );
COND_MON_SEL_HRS_2_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_02_A_SW );
COND_MON_SEL_HRS_3_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_03_A_SW );
COND_MON_SEL_HRS_4_A_NAME = A_NAME_FUNCTION( COND_MON_SEL_TMR_04_A_SW );
COND_MON_SEL_TMR_01_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_WAIT_TMR01_ZMINUS1 , COND_MON_PRIORTM01_OUT_1 );
COND_MON_SEL_TMR_02_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_WAIT_TMR02_ZMINUS1 , COND_MON_PRIORTM02_OUT_1 );
COND_MON_SEL_TMR_03_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_WAIT_TMR03_ZMINUS1 , COND_MON_PRIORTM03_OUT_1 );
COND_MON_SEL_TMR_04_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_WAIT_TMR04_ZMINUS1 , COND_MON_PRIORTM04_OUT_1 );
COND_MON_T3BASE_AND = AND_FUNCTION( COND_MON_T3GT998_A_COMPARE , COND_MON_T3LT1003_A_COMPARE , CORE_DIGITAL_FUELON );
COND_MON_T3BASETM_ACCUM = ACCUM_FUNCTION( COND_MON_T3BASE_AND , 0 , COND_MON_NV_RESET_B_NAME , 1_0 , "HR" );
COND_MON_T3GT1003_A_COMPARE = A_COMPARE_FUNCTION( CORE_ANALOG_T3SEL , 1003_0 , 0 );
COND_MON_T3GT998_A_COMPARE = A_COMPARE_FUNCTION( CORE_ANALOG_T3SEL , 998_0 , 0 );
COND_MON_T3LT1003_A_COMPARE = A_COMPARE_FUNCTION( 1002_9 , CORE_ANALOG_T3SEL , 0 );
COND_MON_T3PEAK_AND = AND_FUNCTION( COND_MON_T3GT1003_A_COMPARE , CORE_DIGITAL_FUELON , IFACE_CORE_Z_SWPEAK_B_NAME );
COND_MON_T3PEAKTM_ACCUM = ACCUM_FUNCTION( COND_MON_T3PEAK_AND , 0 , COND_MON_NV_RESET_B_NAME , 1_0 , "HR" );
COND_MON_T48BASE_AND = AND_FUNCTION( COND_MON_T48GT1575_A_COMPARE , COND_MON_T48LT1584_A_COMPARE , CORE_DIGITAL_FUELON );
COND_MON_T48BASETM_ACCUM = ACCUM_FUNCTION( COND_MON_T48BASE_AND , 0 , COND_MON_NV_RESET_B_NAME , 1_0 , "HR" );
COND_MON_T48GT1575_A_COMPARE = A_COMPARE_FUNCTION( CORE_ANALOG_T48SEL , 1575_0 , 0 );
COND_MON_T48GT1585_A_COMPARE = A_COMPARE_FUNCTION( CORE_ANALOG_T48SEL , 1585_0 , 0 );
COND_MON_T48LT1584_A_COMPARE = A_COMPARE_FUNCTION( 1584_9 , CORE_ANALOG_T48SEL , 0 );
COND_MON_T48PEAK_AND = AND_FUNCTION( COND_MON_T48GT1585_A_COMPARE , CORE_DIGITAL_FUELON , IFACE_CORE_Z_SWPEAK_B_NAME );
COND_MON_T48PEAKTM_ACCUM = ACCUM_FUNCTION( COND_MON_T48PEAK_AND , 0 , COND_MON_NV_RESET_B_NAME , 1_0 , "HR" );
COND_MON_TM1HRS_DIVIDE = DIVIDE_FUNCTION( 0 , COND_MON_TM1SEC_T_TO_AN , 3600_0 );
COND_MON_TM1RSETADD_ADD = ADD_FUNCTION( 0 , COND_MON_TM1HRS_DIVIDE , COND_MON_FB_HRS_1_A_NAME );
COND_MON_TM1SEC_T_TO_AN = T_TO_AN_FUNCTION( 0 , COND_MON_T48BASETM_ELAP_TIME );
COND_MON_TM2HRS_DIVIDE = DIVIDE_FUNCTION( 0 , COND_MON_TM2TA_T_TO_AN , 3600_0 );
COND_MON_TM2RSETADD_ADD = ADD_FUNCTION( 0 , COND_MON_TM2HRS_DIVIDE , COND_MON_FB_HRS_2_A_NAME );
COND_MON_TM2TA_T_TO_AN = T_TO_AN_FUNCTION( 0 , COND_MON_T48PEAKTM_ELAP_TIME );
COND_MON_TM3HRS_DIVIDE = DIVIDE_FUNCTION( 0 , COND_MON_TM3TA_T_TO_AN , 3600_0 );
COND_MON_TM3RSETADD_ADD = ADD_FUNCTION( 0 , COND_MON_TM3HRS_DIVIDE , COND_MON_FB_HRS_3_A_NAME );
COND_MON_TM3TA_T_TO_AN = T_TO_AN_FUNCTION( 0 , COND_MON_T3BASETM_ELAP_TIME );
COND_MON_TM4HRS_DIVIDE = DIVIDE_FUNCTION( 0 , COND_MON_TM4TA_T_TO_AN , 3600_0 );
COND_MON_TM4RSETADD_ADD = ADD_FUNCTION( 0 , COND_MON_TM4HRS_DIVIDE , COND_MON_FB_HRS_4_A_NAME );
COND_MON_TM4TA_T_TO_AN = T_TO_AN_FUNCTION( 0 , COND_MON_T3PEAKTM_ELAP_TIME );
COND_MON_WAIT_TMR01_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_TM1RSETADD_ADD );
COND_MON_WAIT_TMR02_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_TM2RSETADD_ADD );
COND_MON_WAIT_TMR03_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_TM3RSETADD_ADD );
COND_MON_WAIT_TMR04_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_TM4RSETADD_ADD );
