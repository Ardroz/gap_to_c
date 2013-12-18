CDP_CAL_LOOKLIVE_OR = CDP_CAL_CAL_03_SFC_STEP || CDP_CAL_CAL_04_SFC_STEP || CDP_CAL_CAL_05_SFC_STEP || CDP_CAL_CAL_06_SFC_STEP || CDP_CAL_CAL_07_SFC_STEP || CDP_CAL_CAL_07A_SFC_STEP || CDP_CAL_NV_WRITEMK_AND;
CDP_CAL_NV1_Z_ZMINUS1 = CDP_CAL_SW1_A_SW;
CDP_CAL_NV2_Z_ZMINUS1 = CDP_CAL_SW2_A_SW;
CDP_CAL_NV3_Z_ZMINUS1 = CDP_CAL_SW3_A_SW;
CDP_CAL_NV4_Z_ZMINUS1 = CDP_CAL_SW4_A_SW;
CDP_CAL_NV5_Z_ZMINUS1 = CDP_CAL_SW5_A_SW;
CDP_CAL_NV6_Z_ZMINUS1 = CDP_CAL_SW6_A_SW;
CDP_CAL_NV7_Z_ZMINUS1 = CDP_CAL_SW7_A_SW;
CDP_CAL_NV8_Z_ZMINUS1 = CDP_CAL_SW8_A_SW;
CDP_CAL_NV_WRITEMK_AND = CDP_CAL_NV_WRITE_ONE_SHOT;
CDP_CAL_SW1_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_117 , CDP_CAL_VAB_MNSAMP_OUT_1 );
CDP_CAL_SW2_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_118 , CDP_CAL_VAB_MNSAMP_OUT_2 );
CDP_CAL_SW3_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_119 , CDP_CAL_VAB_MNSAMP_OUT_3 );
CDP_CAL_SW4_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_120 , CDP_CAL_VAB_MNSAMP_OUT_4 );
CDP_CAL_SW5_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_121 , CDP_CAL_VAB_MXSAMP_OUT_1 );
CDP_CAL_SW6_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_122 , CDP_CAL_VAB_MXSAMP_OUT_2 );
CDP_CAL_SW7_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_123 , CDP_CAL_VAB_MXSAMP_OUT_3 );
CDP_CAL_SW8_A_SW = A_SW_FUNCTION( CDP_CAL_LOOKLIVE_OR , COND_MON_NV_LOG_OUT_124 , CDP_CAL_VAB_MXSAMP_OUT_4 );
CDP_CAL_V1_V2_1MNR_CALCULATE =  (CDP_CAL_VA1_MIN_A_NAME -CDP_CAL_VB1_MAX_A_NAME )  /  (CDP_CAL_VA1_MIN_A_NAME +CDP_CAL_VB1_MAX_A_NAME ) ;
CDP_CAL_V1_V2_1MXR_CALCULATE =  (CDP_CAL_VA1_MAX_A_NAME -CDP_CAL_VB1_MIN_A_NAME )  /  (CDP_CAL_VA1_MAX_A_NAME +CDP_CAL_VB1_MIN_A_NAME ) ;
CDP_CAL_V1_V2_2MNR_CALCULATE =  (CDP_CAL_VA2_MIN_A_NAME -CDP_CAL_VB2_MAX_A_NAME )  /  (CDP_CAL_VA2_MIN_A_NAME +CDP_CAL_VB2_MAX_A_NAME ) ;
CDP_CAL_V1_V2_2MXR_CALCULATE =  (CDP_CAL_VA2_MAX_A_NAME -CDP_CAL_VB2_MIN_A_NAME )  /  (CDP_CAL_VA2_MAX_A_NAME +CDP_CAL_VB2_MIN_A_NAME ) ;
CDP_CAL_VA1_MAX_A_NAME = COND_MON_NV_LOG_OUT_123;
CDP_CAL_VA1_MIN_A_NAME = COND_MON_NV_LOG_OUT_117;
CDP_CAL_VA2_MAX_A_NAME = COND_MON_NV_LOG_OUT_124;
CDP_CAL_VA2_MIN_A_NAME = COND_MON_NV_LOG_OUT_118;
SAMP_HOLD_FUNCTION(1 , CDP_CAL_VA_1_A_NAME , CDP_CAL_VA_2_A_NAME , CDP_CAL_VB_1_A_NAME , CDP_CAL_VB_2_A_NAME , CDP_CAL_CAL_04_SFC_STEP,&CDP_CAL_VAB_MNSAMP_OUT_1,&CDP_CAL_VAB_MNSAMP_OUT_2,&CDP_CAL_VAB_MNSAMP_OUT_3,&CDP_CAL_VAB_MNSAMP_OUT_4);
SAMP_HOLD_FUNCTION(1 , CDP_CAL_VB_1_A_NAME , CDP_CAL_VB_2_A_NAME , CDP_CAL_VA_1_A_NAME , CDP_CAL_VA_2_A_NAME , CDP_CAL_CAL_07_SFC_STEP,&CDP_CAL_VAB_MXSAMP_OUT_1,&CDP_CAL_VAB_MXSAMP_OUT_2,&CDP_CAL_VAB_MXSAMP_OUT_3,&CDP_CAL_VAB_MXSAMP_OUT_4);
CDP_CAL_VB1_MAX_A_NAME = COND_MON_NV_LOG_OUT_119;
CDP_CAL_VB1_MIN_A_NAME = COND_MON_NV_LOG_OUT_121;
CDP_CAL_VB2_MAX_A_NAME = COND_MON_NV_LOG_OUT_120;
CDP_CAL_VB2_MIN_A_NAME = COND_MON_NV_LOG_OUT_122;
