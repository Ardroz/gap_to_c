CDP_CAL_AVG_POS_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_AVG_POS );
CDP_CAL_CALMODE_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_CALMODE );
CDP_CAL_CAL_STATUS_I_NAME = I_NAME_FUNCTION( A2_A03_ACT_CDPDVR_CAL_STATUS );
CDP_CAL_CURRENT_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_MA_OUT );
CDP_CAL_DLYFAIL_1_DELAY = DELAY_FUNCTION( 0 , CDP_CAL_FDBK_FAIL1_AND , 0 , *120_0 (30_0, 240_0) );
CDP_CAL_DLYFAIL_1_R_TIME = R_TIME_FUNCTION( 0 , CDP_CAL_FDBK_FAIL1_AND , 0 , *120_0 (30_0, 240_0) );
CDP_CAL_DLYFAIL_2_DELAY = DELAY_FUNCTION( 0 , CDP_CAL_FDBK_FAIL2_AND , 0 , *120_0 (30_0, 240_0) );
CDP_CAL_DLYFAIL_2_R_TIME = R_TIME_FUNCTION( 0 , CDP_CAL_FDBK_FAIL2_AND , 0 , *120_0 (30_0, 240_0) );
CDP_CAL_DLY_HI_DELAY = DELAY_FUNCTION( 0 , CDP_CAL_VAHI_VBLO_AND , 0 , *15_0 (0_0, 50_0) );
CDP_CAL_DLY_HI_R_TIME = R_TIME_FUNCTION( 0 , CDP_CAL_VAHI_VBLO_AND , 0 , *15_0 (0_0, 50_0) );
CDP_CAL_DLY_LO_DELAY = DELAY_FUNCTION( 0 , CDP_CAL_VALO_VBHI_AND , 0 , *15_0 (0_0, 50_0) );
CDP_CAL_DLY_LO_R_TIME = R_TIME_FUNCTION( 0 , CDP_CAL_VALO_VBHI_AND , 0 , *15_0 (0_0, 50_0) );
CDP_CAL_ENB_STROK_B_SW = B_SW_FUNCTION( CDP_CAL_AUTMAN_FF_T_FLIPFLOP , TRUE , CDP_CAL_STRKENOS_ONE_SHOT );
CDP_CAL_EQ_0_EQ = EQ_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 0 );
CDP_CAL_EQ_0_LT = LT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 0 );
CDP_CAL_EQ_0_GT = GT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 0 );
CDP_CAL_EQ_1_EQ = EQ_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 1 );
CDP_CAL_EQ_1_LT = LT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 1 );
CDP_CAL_EQ_1_GT = GT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 1 );
CDP_CAL_EQ_2_EQ = EQ_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 2 );
CDP_CAL_EQ_2_LT = LT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 2 );
CDP_CAL_EQ_2_GT = GT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 2 );
CDP_CAL_EQ_3_EQ = EQ_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 3 );
CDP_CAL_EQ_3_LT = LT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 3 );
CDP_CAL_EQ_3_GT = GT_FUNCTION( CDP_CAL_CAL_STATUS_I_NAME , 3 );
CDP_CAL_EQ_3_NOSTR_AND = AND_FUNCTION( CDP_CAL_EQ_3_EQ , CDP_CAL_ENB_STROK_B_SW );
CDP_CAL_ERROR_A_NAME = A_NAME_FUNCTION(  , *2_0 (0_1, 10_0) );
CDP_CAL_FB_FL_NOR1_NAND = NAND_FUNCTION( CDP_CAL_VALOVBHICA_B_OUT_1 , CDP_CAL_VALOVBHICA_B_OUT_2 , CDP_CAL_VALOVBHICA_B_OUT_3 , CDP_CAL_VALOVBHICA_B_OUT_4 );
CDP_CAL_FB_FL_NOR2_NAND = NAND_FUNCTION( CDP_CAL_VAHIVBLOCA_B_OUT_1 , CDP_CAL_VAHIVBLOCA_B_OUT_2 , CDP_CAL_VAHIVBLOCA_B_OUT_3 , CDP_CAL_VAHIVBLOCA_B_OUT_4 );
CDP_CAL_FDBK_FAIL1_AND = AND_FUNCTION( CDP_CAL_CAL_03_SFC_STEP , CDP_CAL_FB_FL_NOR1_NAND );
CDP_CAL_FDBK_FAIL2_AND = AND_FUNCTION( CDP_CAL_CAL_06_SFC_STEP , CDP_CAL_FB_FL_NOR2_NAND );
CDP_CAL_NULL_IN_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_CDP_NULL );
CDP_CAL_PRCNT_A_NAME = A_NAME_FUNCTION(  , *10_0 (0_1, 100_0) );
CDP_CAL_PRCNT_ERR_DIVIDE = DIVIDE_FUNCTION( 0 , CDP_CAL_PRCNT_A_NAME , 100_0 );
CDP_CAL_SPEC_HCL_A_NAME = A_NAME_FUNCTION(  , *4_2 (-10_0, 10_0) );
CDP_CAL_SPEC_HOP_A_NAME = A_NAME_FUNCTION(  , *4_2 (-10_0, 10_0) );
CDP_CAL_SPEC_LCL_A_NAME = A_NAME_FUNCTION(  , *1_76 (-10_0, 10_0) );
CDP_CAL_SPEC_LOP_A_NAME = A_NAME_FUNCTION(  , *1_6 (-10_0, 10_0) );
CDP_CAL_VAHIVBLOCA_ALM = ALM_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_B_OUT_2 = B_OUT_2_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_B_OUT_3 = B_OUT_3_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHIVBLOCA_B_OUT_4 = B_OUT_4_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LOP_A_NAME , spec_lo , CDP_CAL_SPEC_HOP_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_hi-va1) < (pct*spec_hi) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_hi-va2) < (pct*spec_hi) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_lo-vb1) < (pct*spec_lo) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_lo-vb2) < (pct*spec_lo) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VAHI_VBLO_AND = AND_FUNCTION( CDP_CAL_VAHIVBLOCA_B_OUT_1 , CDP_CAL_VAHIVBLOCA_B_OUT_2 , CDP_CAL_VAHIVBLOCA_B_OUT_3 , CDP_CAL_VAHIVBLOCA_B_OUT_4 , CDP_CAL_CAL_06_SFC_STEP );
CDP_CAL_VALOVBHICA_ALM = ALM_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_B_OUT_2 = B_OUT_2_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_B_OUT_3 = B_OUT_3_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALOVBHICA_B_OUT_4 = B_OUT_4_FUNCTION( 0 , 0 , aout1 , iout1 , out1 , out2 , out3 , out4 , CDP_CAL_SPEC_LCL_A_NAME , spec_lo , CDP_CAL_SPEC_HCL_A_NAME , spec_hi , CDP_CAL_VA_1_A_NAME , va1 , CDP_CAL_VA_2_A_NAME , va2 , CDP_CAL_VB_1_A_NAME , vb1 , CDP_CAL_VB_2_A_NAME , vb2 , CDP_CAL_PRCNT_ERR_DIVIDE , pct , 1 , iin_1 , CDP_CAL_AUTMAN_FF_T_FLIPFLOP , man , if (fabs(spec_lo-va1) < (pct*spec_lo) , || man) , { out1 = true; } , else , { out1 = false; } , if (fabs(spec_lo-va2) < (pct*spec_lo) , || man) , { out2 = true; } , else , { out2 = false; } , if (fabs(spec_hi-vb1) < (pct*spec_hi) , || man) , { out3 = true; } , else , { out3 = false; } , if (fabs(spec_hi-vb2) < (pct*spec_hi) , || man) , { out4 = true; } , else , { out4 = false; } );
CDP_CAL_VALO_VBHI_AND = AND_FUNCTION( CDP_CAL_VALOVBHICA_B_OUT_1 , CDP_CAL_VALOVBHICA_B_OUT_2 , CDP_CAL_VALOVBHICA_B_OUT_3 , CDP_CAL_VALOVBHICA_B_OUT_4 , CDP_CAL_CAL_03_SFC_STEP );
CDP_CAL_VA_1_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_FDBK_V_1A );
CDP_CAL_VA_2_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_FDBK_V_2A );
CDP_CAL_VB_1_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_FDBK_V_1B );
CDP_CAL_VB_2_A_NAME = A_NAME_FUNCTION( A2_A03_ACT_CDPDVR_FDBK_V_2B );
CDP_CAL_VLVDMD_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_CDPVLVDMD );
