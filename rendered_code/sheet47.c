COND_MON_ABLACBC2AG_A_NAME = A_NAME_FUNCTION( COND_MON_G7ACTCNT_COUNTER );
COND_MON_ABLACTABCG_A_NAME = A_NAME_FUNCTION( COND_MON_G15ACTCNT_COUNTER );
COND_MON_ABLACTABG_A_NAME = A_NAME_FUNCTION( COND_MON_G10ACTCNT_COUNTER );
COND_MON_ABLACTBC2G_A_NAME = A_NAME_FUNCTION( COND_MON_G3ACTCNT_COUNTER );
COND_MON_ABLACTBCG_A_NAME = A_NAME_FUNCTION( COND_MON_G5ACTCNT_COUNTER );
COND_MON_ABLACTBG_A_NAME = A_NAME_FUNCTION( COND_MON_BGACTCNT_COUNTER );
COND_MON_BGACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP0_EQ , COND_MON_ABALADJOR_OR );
COND_MON_BGACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_BGACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_26_OUT_1 , 0_0 );
COND_MON_BGACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_BGACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_26_OUT_1 , 0_0 );
COND_MON_BREQCMP0_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 0 );
COND_MON_BREQCMP0_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 0 );
COND_MON_BREQCMP0_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 0 );
COND_MON_BREQCMP10_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQCMP10_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQCMP10_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQCMP15_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQCMP15_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQCMP15_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQCMP3_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BREQCMP3_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BREQCMP3_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BREQCMP5_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_BREQCMP5_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_BREQCMP5_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_BREQCMP7_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_BREQCMP7_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_BREQCMP7_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_COUNT_26_A_NAME = A_NAME_FUNCTION( COND_MON_BGACTCNT_COUNTER );
COND_MON_COUNT_27_A_NAME = A_NAME_FUNCTION( COND_MON_G3ACTCNT_COUNTER );
COND_MON_COUNT_28_A_NAME = A_NAME_FUNCTION( COND_MON_G5ACTCNT_COUNTER );
COND_MON_COUNT_29_A_NAME = A_NAME_FUNCTION( COND_MON_G7ACTCNT_COUNTER );
COND_MON_COUNT_30_A_NAME = A_NAME_FUNCTION( COND_MON_G10ACTCNT_COUNTER );
COND_MON_COUNT_31_A_NAME = A_NAME_FUNCTION( COND_MON_G15ACTCNT_COUNTER );
COND_MON_G10ACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP10_EQ , COND_MON_ABALADJOR_OR );
COND_MON_G10ACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_G10ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_30_OUT_1 , 0_0 );
COND_MON_G10ACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_G10ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_30_OUT_1 , 0_0 );
COND_MON_G15ACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP15_EQ , COND_MON_ABALADJOR_OR );
COND_MON_G15ACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_G15ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_31_OUT_1 , 0_0 );
COND_MON_G15ACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_G15ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_31_OUT_1 , 0_0 );
COND_MON_G3ACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP3_EQ , COND_MON_ABALADJOR_OR );
COND_MON_G3ACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_G3ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_27_OUT_1 , 0_0 );
COND_MON_G3ACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_G3ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_27_OUT_1 , 0_0 );
COND_MON_G5ACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP5_EQ , COND_MON_ABALADJOR_OR );
COND_MON_G5ACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_G5ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_28_OUT_1 , 0_0 );
COND_MON_G5ACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_G5ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_28_OUT_1 , 0_0 );
COND_MON_G7ACTADJ_AND = AND_FUNCTION( CORE_DIGITAL_T_ACOUSTIC , COND_MON_BREQCMP7_EQ , COND_MON_ABALADJOR_OR );
COND_MON_G7ACTCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_G7ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_29_OUT_1 , 0_0 );
COND_MON_G7ACTCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_G7ACTADJ_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_29_OUT_1 , 0_0 );
COND_MON_PRIORCNT26_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT27_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT28_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT29_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT30_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT31_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_RST_26_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT26_ZMINUS1 );
COND_MON_RST_27_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT27_ZMINUS1 );
COND_MON_RST_28_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT28_ZMINUS1 );
COND_MON_RST_29_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT29_ZMINUS1 );
COND_MON_RST_30_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT30_ZMINUS1 );
COND_MON_RST_31_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT31_ZMINUS1 );
COND_MON_SEL_CNT_26_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_26_A_NAME , COND_MON_PRIORCNT26_OUT_1 );
COND_MON_SEL_CNT_27_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_27_A_NAME , COND_MON_PRIORCNT27_OUT_1 );
COND_MON_SEL_CNT_28_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_29_A_NAME , COND_MON_PRIORCNT28_OUT_1 );
COND_MON_SEL_CNT_29_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_29_A_NAME , COND_MON_PRIORCNT29_OUT_1 );
COND_MON_SEL_CNT_30_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_30_A_NAME , COND_MON_PRIORCNT30_OUT_1 );
COND_MON_SEL_CNT_31_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_31_A_NAME , COND_MON_PRIORCNT31_OUT_1 );
COND_MON_WAIT_CNT26_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_26_A_SW );
COND_MON_WAIT_CNT27_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_27_A_SW );
COND_MON_WAIT_CNT28_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_28_A_SW );
COND_MON_WAIT_CNT29_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_29_A_SW );
COND_MON_WAIT_CNT30_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_30_A_SW );
COND_MON_WAIT_CNT31_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_31_A_SW );
