COND_MON_AB2ABCCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_AB2ABCENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_20_OUT_1 , 0_0 );
COND_MON_AB2ABCCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_AB2ABCENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_20_OUT_1 , 0_0 );
COND_MON_AB2ABCENA_AND = AND_FUNCTION( COND_MON_BREQ_15_EQ , COND_MON_REQCMPDMD_GT , CORE_DIGITAL_FUELON );
COND_MON_AB2ABCTRNG_A_NAME = A_NAME_FUNCTION( COND_MON_AB2ABCCNT_COUNTER );
COND_MON_B2BC2CNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_B2BC2ENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_16_OUT_1 , 0_0 );
COND_MON_B2BC2CNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_B2BC2ENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_16_OUT_1 , 0_0 );
COND_MON_B2BC2ENA_AND = AND_FUNCTION( COND_MON_BRNREQ_3_EQ , COND_MON_REQCMPDMD_GT , CORE_DIGITAL_FUELON );
COND_MON_B2BC2_TRAN_A_NAME = A_NAME_FUNCTION( COND_MON_B2BC2CNT_COUNTER );
COND_MON_BC22BC_TRN_A_NAME = A_NAME_FUNCTION( COND_MON_BC2BCCNT_COUNTER );
COND_MON_BC2A2ABCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_BC2A2ABENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_19_OUT_1 , 0_0 );
COND_MON_BC2A2ABCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_BC2A2ABENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_19_OUT_1 , 0_0 );
COND_MON_BC2A2ABENA_AND = AND_FUNCTION( COND_MON_BREQ_10_EQ , COND_MON_REQCMPDMD_GT , CORE_DIGITAL_FUELON );
COND_MON_BC2A2ABTRN_A_NAME = A_NAME_FUNCTION( COND_MON_BC2A2ABCNT_COUNTER );
COND_MON_BC2BC2ATRN_A_NAME = A_NAME_FUNCTION( COND_MON_BCBC2ACNT_COUNTER );
COND_MON_BC2BCCNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_BC2BCENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_17_OUT_1 , 0_0 );
COND_MON_BC2BCCNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_BC2BCENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_17_OUT_1 , 0_0 );
COND_MON_BC2BCENA_AND = AND_FUNCTION( COND_MON_BRNREQ_5_EQ , COND_MON_REQCMPDMD_GT , CORE_DIGITAL_FUELON );
COND_MON_BCBC2ACNT_COUNTER = COUNTER_FUNCTION( 0 , COND_MON_BCBC2AENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_18_OUT_1 , 0_0 );
COND_MON_BCBC2ACNT_CMP_OUT = CMP_OUT_FUNCTION( 0 , COND_MON_BCBC2AENA_AND , COND_MON_NV_RESET_B_NAME , COND_MON_RST_18_OUT_1 , 0_0 );
COND_MON_BCBC2AENA_AND = AND_FUNCTION( COND_MON_BREQ_7_EQ , COND_MON_REQCMPDMD_GT , CORE_DIGITAL_FUELON );
COND_MON_BDMD_I_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_BRNDMDR );
COND_MON_BREQ_10_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQ_10_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQ_10_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 10 );
COND_MON_BREQ_15_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQ_15_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQ_15_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 15 );
COND_MON_BREQ_7_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_BREQ_7_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_BREQ_7_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 7 );
COND_MON_BREQ_IG_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_BRNREQR );
COND_MON_BRNREQ_3_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BRNREQ_3_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BRNREQ_3_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 3 );
COND_MON_BRNREQ_5_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_BRNREQ_5_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_BRNREQ_5_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , 5 );
COND_MON_COUNT_16_A_NAME = A_NAME_FUNCTION( COND_MON_B2BC2CNT_COUNTER );
COND_MON_COUNT_17_A_NAME = A_NAME_FUNCTION( COND_MON_BC2BCCNT_COUNTER );
COND_MON_COUNT_18_A_NAME = A_NAME_FUNCTION( COND_MON_BCBC2ACNT_COUNTER );
COND_MON_COUNT_19_A_NAME = A_NAME_FUNCTION( COND_MON_BC2A2ABCNT_COUNTER );
COND_MON_COUNT_20_A_NAME = A_NAME_FUNCTION( COND_MON_AB2ABCCNT_COUNTER );
COND_MON_PRIORCNT16_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT17_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT18_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT19_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_PRIORCNT20_I_TO_AN = I_TO_AN_FUNCTION( 0 , *0 (0, 999999) );
COND_MON_REQCMPDMD_EQ = EQ_FUNCTION( COND_MON_BREQ_IG_OUT_1 , COND_MON_BDMD_I_OUT_1 );
COND_MON_REQCMPDMD_LT = LT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , COND_MON_BDMD_I_OUT_1 );
COND_MON_REQCMPDMD_GT = GT_FUNCTION( COND_MON_BREQ_IG_OUT_1 , COND_MON_BDMD_I_OUT_1 );
COND_MON_RST_16_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT16_ZMINUS1 );
COND_MON_RST_17_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT17_ZMINUS1 );
COND_MON_RST_18_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT18_ZMINUS1 );
COND_MON_RST_19_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT19_ZMINUS1 );
COND_MON_RST_20_A_TO_INT = A_TO_INT_FUNCTION( 0 , COND_MON_WAIT_CNT20_ZMINUS1 );
COND_MON_SEL_CNT_16_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_16_A_NAME , COND_MON_PRIORCNT16_OUT_1 );
COND_MON_SEL_CNT_17_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_17_A_NAME , COND_MON_PRIORCNT17_OUT_1 );
COND_MON_SEL_CNT_18_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_18_A_NAME , COND_MON_PRIORCNT18_OUT_1 );
COND_MON_SEL_CNT_19_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_19_A_NAME , COND_MON_PRIORCNT19_OUT_1 );
COND_MON_SEL_CNT_20_A_SW = A_SW_FUNCTION( COND_MON_MANUAL_OS_ONE_SHOT , COND_MON_FB_CNT_20_A_NAME , COND_MON_PRIORCNT20_OUT_1 );
COND_MON_WAIT_CNT16_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_16_A_SW );
COND_MON_WAIT_CNT17_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_17_A_SW );
COND_MON_WAIT_CNT18_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_18_A_SW );
COND_MON_WAIT_CNT19_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_19_A_SW );
COND_MON_WAIT_CNT20_ZMINUS1 = ZMINUS1_FUNCTION( COND_MON_SEL_CNT_20_A_SW );
