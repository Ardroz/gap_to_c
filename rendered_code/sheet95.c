VSV_CAL_AVG_POS_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_AVG_POS );
VSV_CAL_CALMODE_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_CALMODE );
VSV_CAL_CAL_STATUS_I_NAME = I_NAME_FUNCTION( A1_A10_ACT_VSVDVR_CAL_STATUS );
VSV_CAL_CURRENT_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_MA_OUT );
VSV_CAL_DLYFAIL_1_DELAY = DELAY_FUNCTION( 0 , VSV_CAL_FDBK_FAIL1_AND , 0 , *120_0 (30_0, 240_0) );
VSV_CAL_DLYFAIL_1_R_TIME = R_TIME_FUNCTION( 0 , VSV_CAL_FDBK_FAIL1_AND , 0 , *120_0 (30_0, 240_0) );
VSV_CAL_DLYFAIL_2_DELAY = DELAY_FUNCTION( 0 , VSV_CAL_FDBK_FAIL2_AND , 0 , *120_0 (30_0, 240_0) );
VSV_CAL_DLYFAIL_2_R_TIME = R_TIME_FUNCTION( 0 , VSV_CAL_FDBK_FAIL2_AND , 0 , *120_0 (30_0, 240_0) );
VSV_CAL_DLY_HI_DELAY = DELAY_FUNCTION( 0 , VSV_CAL_VAHI_VBLO_AND , 0 , *15_0 (0_0, 50_0) );
VSV_CAL_DLY_HI_R_TIME = R_TIME_FUNCTION( 0 , VSV_CAL_VAHI_VBLO_AND , 0 , *15_0 (0_0, 50_0) );
VSV_CAL_DLY_LO_DELAY = DELAY_FUNCTION( 0 , VSV_CAL_VALO_VBHI_AND , 0 , *15_0 (0_0, 50_0) );
VSV_CAL_DLY_LO_R_TIME = R_TIME_FUNCTION( 0 , VSV_CAL_VALO_VBHI_AND , 0 , *15_0 (0_0, 50_0) );
VSV_CAL_ENB_STROK_B_SW = B_SW_FUNCTION( VSV_CAL_AUTMAN_FF_T_FLIPFLOP , TRUE , VSV_CAL_STRKENOS_ONE_SHOT );
VSV_CAL_EQ_0_EQ = EQ_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 0 );
VSV_CAL_EQ_0_LT = LT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 0 );
VSV_CAL_EQ_0_GT = GT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 0 );
VSV_CAL_EQ_1_EQ = EQ_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 1 );
VSV_CAL_EQ_1_LT = LT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 1 );
VSV_CAL_EQ_1_GT = GT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 1 );
VSV_CAL_EQ_2_EQ = EQ_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 2 );
VSV_CAL_EQ_2_LT = LT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 2 );
VSV_CAL_EQ_2_GT = GT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 2 );
VSV_CAL_EQ_3_EQ = EQ_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 3 );
VSV_CAL_EQ_3_LT = LT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 3 );
VSV_CAL_EQ_3_GT = GT_FUNCTION( VSV_CAL_CAL_STATUS_I_NAME , 3 );
VSV_CAL_EQ_3_NOSTR_AND = AND_FUNCTION( VSV_CAL_EQ_3_EQ , VSV_CAL_ENB_STROK_B_SW );
VSV_CAL_ERROR_A_NAME = A_NAME_FUNCTION(  , *2_0 (0_1, 10_0) );
VSV_CAL_FB_FL_NOR1_NAND = NAND_FUNCTION( VSV_CAL_VALOVBHICA_B_OUT_1 , VSV_CAL_VALOVBHICA_B_OUT_2 , VSV_CAL_VALOVBHICA_B_OUT_3 , VSV_CAL_VALOVBHICA_B_OUT_4 );
VSV_CAL_FB_FL_NOR2_NAND = NAND_FUNCTION( VSV_CAL_VAHIVBLOCA_B_OUT_1 , VSV_CAL_VAHIVBLOCA_B_OUT_2 , VSV_CAL_VAHIVBLOCA_B_OUT_3 , VSV_CAL_VAHIVBLOCA_B_OUT_4 );
VSV_CAL_FDBK_FAIL1_AND = AND_FUNCTION( VSV_CAL_CAL_03_SFC_STEP , VSV_CAL_FB_FL_NOR1_NAND );
VSV_CAL_FDBK_FAIL2_AND = AND_FUNCTION( VSV_CAL_CAL_06_SFC_STEP , VSV_CAL_FB_FL_NOR2_NAND );
VSV_CAL_NULL_IN_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_VSV_NULL );
VSV_CAL_PRCNT_A_NAME = A_NAME_FUNCTION(  , *10_0 (0_1, 100_0) );
VSV_CAL_PRCNT_ERR_DIVIDE = DIVIDE_FUNCTION( 0 , VSV_CAL_PRCNT_A_NAME , 100_0 );
VSV_CAL_SPEC_HCL_A_NAME = A_NAME_FUNCTION(  , *4_4 (-10_0, 10_0) );
VSV_CAL_SPEC_HOP_A_NAME = A_NAME_FUNCTION(  , *4_4 (-10_0, 10_0) );
VSV_CAL_SPEC_LCL_A_NAME = A_NAME_FUNCTION(  , *1_54 (-10_0, 10_0) );
VSV_CAL_SPEC_LOP_A_NAME = A_NAME_FUNCTION(  , *1_54 (-10_0, 10_0) );
VSV_CAL_VAHIVBLOCA_ALM = ALM_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_B_OUT_2 = B_OUT_2_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_B_OUT_3 = B_OUT_3_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHIVBLOCA_B_OUT_4 = B_OUT_4_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LOP_A_NAME , spec_lo , VSV_CAL_SPEC_HOP_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VAHI_VBLO_AND = AND_FUNCTION( VSV_CAL_VAHIVBLOCA_B_OUT_1 , VSV_CAL_VAHIVBLOCA_B_OUT_2 , VSV_CAL_VAHIVBLOCA_B_OUT_3 , VSV_CAL_VAHIVBLOCA_B_OUT_4 , VSV_CAL_CAL_06_SFC_STEP );
VSV_CAL_VALOVBHICA_ALM = ALM_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_B_OUT_2 = B_OUT_2_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_B_OUT_3 = B_OUT_3_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALOVBHICA_B_OUT_4 = B_OUT_4_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , VSV_CAL_SPEC_LCL_A_NAME , spec_lo , VSV_CAL_SPEC_HCL_A_NAME , spec_hi , VSV_CAL_VA_1_A_NAME , va1 , VSV_CAL_VA_2_A_NAME , va2 , VSV_CAL_VB_1_A_NAME , vb1 , VSV_CAL_VB_2_A_NAME , vb2 , VSV_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , VSV_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
VSV_CAL_VALO_VBHI_AND = AND_FUNCTION( VSV_CAL_VALOVBHICA_B_OUT_1 , VSV_CAL_VALOVBHICA_B_OUT_2 , VSV_CAL_VALOVBHICA_B_OUT_3 , VSV_CAL_VALOVBHICA_B_OUT_4 , VSV_CAL_CAL_03_SFC_STEP );
VSV_CAL_VA_1_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_FDBK_V_1A );
VSV_CAL_VA_2_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_FDBK_V_2A );
VSV_CAL_VB_1_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_FDBK_V_1B );
VSV_CAL_VB_2_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_FDBK_V_2B );
VSV_CAL_VLVDMD_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_VSVVLVDMD );
