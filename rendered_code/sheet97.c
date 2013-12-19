VSV_CAL_LOOKLIVE_OR = VSV_CAL_CAL_03_SFC_STEP || VSV_CAL_CAL_04_SFC_STEP || VSV_CAL_CAL_05_SFC_STEP || VSV_CAL_CAL_06_SFC_STEP || VSV_CAL_CAL_07_SFC_STEP || VSV_CAL_CAL_07A_SFC_STEP || VSV_CAL_NV_WRITEMK_AND;
VSV_CAL_NV1_Z_ZMINUS1 = VSV_CAL_SW1_A_SW;
VSV_CAL_NV2_Z_ZMINUS1 = VSV_CAL_SW2_A_SW;
VSV_CAL_NV3_Z_ZMINUS1 = VSV_CAL_SW3_A_SW;
VSV_CAL_NV4_Z_ZMINUS1 = VSV_CAL_SW4_A_SW;
VSV_CAL_NV5_Z_ZMINUS1 = VSV_CAL_SW5_A_SW;
VSV_CAL_NV6_Z_ZMINUS1 = VSV_CAL_SW6_A_SW;
VSV_CAL_NV7_Z_ZMINUS1 = VSV_CAL_SW7_A_SW;
VSV_CAL_NV8_Z_ZMINUS1 = VSV_CAL_SW8_A_SW;
VSV_CAL_NV_WRITEMK_AND = CDP_CAL_NV_WRITE_ONE_SHOT;
VSV_CAL_SW1_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_109 , VSV_CAL_VAB_MNSAMP_OUT_1 );
VSV_CAL_SW2_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_110 , VSV_CAL_VAB_MNSAMP_OUT_2 );
VSV_CAL_SW3_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_111 , VSV_CAL_VAB_MNSAMP_OUT_3 );
VSV_CAL_SW4_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_112 , VSV_CAL_VAB_MNSAMP_OUT_4 );
VSV_CAL_SW5_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_113 , VSV_CAL_VAB_MXSAMP_OUT_1 );
VSV_CAL_SW6_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_114 , VSV_CAL_VAB_MXSAMP_OUT_2 );
VSV_CAL_SW7_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_115 , VSV_CAL_VAB_MXSAMP_OUT_3 );
VSV_CAL_SW8_A_SW = A_SW_FUNCTION( VSV_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_116 , VSV_CAL_VAB_MXSAMP_OUT_4 );
VSV_CAL_V1_V2_1MNR_CALCULATE =  (VSV_CAL_VA1_MIN_A_NAME -VSV_CAL_VB1_MAX_A_NAME )  /  (VSV_CAL_VA1_MIN_A_NAME +VSV_CAL_VB1_MAX_A_NAME ) ;
VSV_CAL_V1_V2_1MXR_CALCULATE =  (VSV_CAL_VA1_MAX_A_NAME -VSV_CAL_VB1_MIN_A_NAME )  /  (VSV_CAL_VA1_MAX_A_NAME +VSV_CAL_VB1_MIN_A_NAME ) ;
VSV_CAL_V1_V2_2MNR_CALCULATE =  (VSV_CAL_VA2_MIN_A_NAME -VSV_CAL_VB2_MAX_A_NAME )  /  (VSV_CAL_VA2_MIN_A_NAME +VSV_CAL_VB2_MAX_A_NAME ) ;
VSV_CAL_V1_V2_2MXR_CALCULATE =  (VSV_CAL_VA2_MAX_A_NAME -VSV_CAL_VB2_MIN_A_NAME )  /  (VSV_CAL_VA2_MAX_A_NAME +VSV_CAL_VB2_MIN_A_NAME ) ;
VSV_CAL_VA1_MAX_A_NAME = COND_MON_NV_LOG_OUT_115;
VSV_CAL_VA1_MIN_A_NAME = COND_MON_NV_LOG_OUT_109;
VSV_CAL_VA2_MAX_A_NAME = COND_MON_NV_LOG_OUT_116;
VSV_CAL_VA2_MIN_A_NAME = COND_MON_NV_LOG_OUT_110;
SAMP_HOLD_FUNCTION(1 , VSV_CAL_VA_1_A_NAME , VSV_CAL_VA_2_A_NAME , VSV_CAL_VB_1_A_NAME , VSV_CAL_VB_2_A_NAME , VSV_CAL_CAL_04_SFC_STEP,&VSV_CAL_VAB_MNSAMP_OUT_1,&VSV_CAL_VAB_MNSAMP_OUT_2,&VSV_CAL_VAB_MNSAMP_OUT_3,&VSV_CAL_VAB_MNSAMP_OUT_4);
SAMP_HOLD_FUNCTION(1 , VSV_CAL_VB_1_A_NAME , VSV_CAL_VB_2_A_NAME , VSV_CAL_VA_1_A_NAME , VSV_CAL_VA_2_A_NAME , VSV_CAL_CAL_07_SFC_STEP,&VSV_CAL_VAB_MXSAMP_OUT_1,&VSV_CAL_VAB_MXSAMP_OUT_2,&VSV_CAL_VAB_MXSAMP_OUT_3,&VSV_CAL_VAB_MXSAMP_OUT_4);
VSV_CAL_VB1_MAX_A_NAME = COND_MON_NV_LOG_OUT_111;
VSV_CAL_VB1_MIN_A_NAME = COND_MON_NV_LOG_OUT_113;
VSV_CAL_VB2_MAX_A_NAME = COND_MON_NV_LOG_OUT_112;
VSV_CAL_VB2_MIN_A_NAME = COND_MON_NV_LOG_OUT_114;