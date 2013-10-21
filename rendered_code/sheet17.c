IFACE_HDWR_IGVA_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_IGVA_SW_A_SW );
IFACE_HDWR_IGVAALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_IGVAALM_SW_B_SW );
IFACE_HDWR_IGVAALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_FB_FAIL_1 , 0 );
IFACE_HDWR_IGVA_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_POS_RDBK_1 , IGV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_IGVB_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_IGVB_SW_A_SW );
IFACE_HDWR_IGVBALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_IGVBALM_SW_B_SW );
IFACE_HDWR_IGVBALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_FB_FAIL_2 , 0 );
IFACE_HDWR_IGVB_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_POS_RDBK_2 , IGV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_IGVDRFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_IGVDRFLTSW_B_SW );
IFACE_HDWR_IGVDRFLTSW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_DRIVER_FLT , 0 );
IFACE_HDWR_IGVFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_IGVFLT_SW_B_SW );
IFACE_HDWR_IGVFLT_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_FAULT , 0 );
IFACE_HDWR_IGVMA_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_IGVDVR_MA_OUT );
IFACE_HDWR_IGVOHMS_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_IGVDVR_ACT_OHMS );
IFACE_HDWR_IGVSEL_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_IGVSEL_SW_A_SW );
IFACE_HDWR_IGVSEL_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_IGVDVR_AVG_POS , IGV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_MASK_TL_AND = AND_FUNCTION( TIMERS_TEST_TRUE_B_NAME , IFACE_HDWR_TEST_LINE_B_NAME );
IFACE_HDWR_TEST_LINE_B_NAME = B_NAME_FUNCTION(  , 0 );
IFACE_HDWR_VBVA_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VBVA_SW_A_SW );
IFACE_HDWR_VBVAALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VBVAALM_SW_B_SW );
IFACE_HDWR_VBVAALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_FB_FAIL_1 , 0 );
IFACE_HDWR_VBVA_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_POS_RDBK_1 , VBV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_VBVB_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VBVB_SW_A_SW );
IFACE_HDWR_VBVBALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VBVBALM_SW_B_SW );
IFACE_HDWR_VBVBALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_FB_FAIL_2 , 0 );
IFACE_HDWR_VBVB_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_POS_RDBK_2 , VBV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_VBVDRFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VBVDRFLTSW_B_SW );
IFACE_HDWR_VBVDRFLTSW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_DRIVER_FLT , 0 );
IFACE_HDWR_VBVFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VBVFLT_SW_B_SW );
IFACE_HDWR_VBVFLT_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_FAULT , 0 );
IFACE_HDWR_VBVMA_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VBVMA_SW_A_SW );
IFACE_HDWR_VBVMA_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_MA_OUT , 20_0 );
IFACE_HDWR_VBVOHMS_A_NAME = A_NAME_FUNCTION( A1_A09_ACT_VBVDVR_ACT_OHMS );
IFACE_HDWR_VBVSEL_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VBVSEL_SW_A_SW );
IFACE_HDWR_VBVSEL_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A09_ACT_VBVDVR_AVG_POS , VBV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_VSVA_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VSVA_SW_A_SW );
IFACE_HDWR_VSVAALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VSVAALM_SW_B_SW );
IFACE_HDWR_VSVAALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_FB_FAIL_1 , 0 );
IFACE_HDWR_VSVA_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_POS_RDBK_1 , VSV_CAL_VLVDMD_A_NAME );
IFACE_HDWR_VSVB_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VSVB_SW_A_SW );
IFACE_HDWR_VSVBALM_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VSVBALM_SW_B_SW );
IFACE_HDWR_VSVBALM_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_FB_FAIL_2 , 0 );
IFACE_HDWR_VSVB_SW_A_SW = A_SW_FUNCTION( A1_A10_ACT_VSVDVR_POS_RDBK_2 , VSV_CAL_VLVDMD_A_NAME , IFACE_HDWR_MASK_TL_AND );
IFACE_HDWR_VSVDRFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VSVDRFLTSW_B_SW );
IFACE_HDWR_VSVDRFLTSW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_DRIVER_FLT , 0 );
IFACE_HDWR_VSVFLT_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_VSVFLT_SW_B_SW );
IFACE_HDWR_VSVFLT_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_FAULT , 0 );
IFACE_HDWR_VSVMA_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_MA_OUT );
IFACE_HDWR_VSVOHMS_A_NAME = A_NAME_FUNCTION( A1_A10_ACT_VSVDVR_ACT_OHMS );
IFACE_HDWR_VSVSEL_A_NAME = A_NAME_FUNCTION( IFACE_HDWR_VSVSEL_SW_A_SW );
IFACE_HDWR_VSVSEL_SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_MASK_TL_AND , A1_A10_ACT_VSVDVR_AVG_POS , VSV_CAL_VLVDMD_A_NAME );
