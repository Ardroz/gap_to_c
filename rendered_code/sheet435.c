D_WB27_2_B27_1_ADD_ADD = D_WB27_1_DWA36B27_1_A_NAME + D_WFTFLVBV_DWA36VBVLT_A_NAME;
D_WB27_2_DWA36B27_SUBTRACT = D_WB27_2_B27_1_ADD_ADD - D_WB27_2_VBVLFT_MAX_A_MAX;
D_WB27_2_DWA36B27MX_A_NAME = D_WB27_2_DWA36B27TP_MULTIPLY;
D_WB27_2_DWA36B27TP_MULTIPLY = C_MODPARA_W25M_A_NAME * D_WB27_2_SUB_MIN_SUBTRACT;
D_WB27_2_DWA36B_DIV_DIVIDE = D_WB27_2_DWA36B27_SUBTRACT / D_WB27_2_HSS_DWAMAX_A_MAX;
D_WB27_2_DWAB27LTTM_ADD = D_WB27_2_VBVLFT_MAX_A_MAX + D_WB27_2_W25M_MULT1_MULTIPLY;
D_WB27_2_DWAB27LT_2_A_NAME = D_WB27_2_DWAB27LTTM_ADD;
D_WB27_2_DWB27Q_DIVIDE = D_WB27_2_DWA36B27_SUBTRACT / D_WB27_2_W25M_MAX_A_MAX;
D_WB27_2_HSS_DWAMAX_A_MAX = A_MAX_FUNCTION( 1 , D_WB27_2_DWA36B27TP_MULTIPLY );
D_WB27_2_ST8DMD_A_NAME = D_WB27_2_ST8LCKSW_A_SW;
D_WB27_2_ST8DMDLIM_A_MIN = A_MIN_FUNCTION( 100 , D_WB27_2_T_B27DMD_CURVES_3 );
D_WB27_2_ST8LCKSW_A_SW = A_SW_FUNCTION( D_TFAIRREG_TFAIRDBON_B_NAME , D_WB27_2_ST8DMDLIM_A_MIN , D_WB27_2_ST8LCKSW_A_SW );
D_WB27_2_SUB_MIN_SUBTRACT = D_WB27_2_WB27MIN_A_MIN - D_WB27MN_WB27QMIN_A_NAME;
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , D_WB27_2_WB27QTMP_ADD , I_N25_N25SEL_A_NAME , T_B27DMD,&D_WB27_2_T_B27DMD_CURVES_3,&D_WB27_2_T_B27DMD_REV_OUT);
D_WB27_2_VBVLFT_MAX_A_MAX = A_MAX_FUNCTION( 0 , D_WB27_2_VBVLFT_SUB_SUBTRACT );
D_WB27_2_VBVLFT_SUB_SUBTRACT = D_WB27_2_B27_1_ADD_ADD - D_WB27_2_DWA36B27TP_MULTIPLY;
D_WB27_2_W25M_MAX_A_MAX = A_MAX_FUNCTION( 1 , C_MODPARA_W25M_A_NAME );
D_WB27_2_W25M_MULT1_MULTIPLY = C_MODPARA_W25M_A_NAME * D_WB27_2_DWA36B_DIV_DIVIDE * D_WB27_2_WB3QBIASAD_ADD;
D_WB27_2_WB27_MULTIPLY = C_MODPARA_W25M_A_NAME * D_WB27_2_WB27QTMP_ADD;
D_WB27_2_WB27C_A_NAME = D_WB27_2_WB27PV_ZMINUS1;
D_WB27_2_WB27MIN_A_MIN = A_MIN_FUNCTION( D_WB27_2_WB27Q_2_AD_ADD , D_WB27_2_WB27QU_CALCULATE );
D_WB27_2_WB27PV_ZMINUS1 = D_WB27_2_WB27_MULTIPLY;
D_WB27_2_WB27QC_A_NAME = D_WB27_2_WB27QTMP_ADD;
D_WB27_2_WB27QTMP_ADD = D_WB27_2_DWB27Q_DIVIDE + D_WB27MN_WB27QMIN_A_NAME;
D_WB27_2_WB27QU_CALCULATE =  ( ( max ( 0 " " (I_N25_N25SEL_A_NAME - 8250 ) ) *     - 8.691e - 6 ) + 0.111 ) ;
D_WB27_2_WB27Q_2_AD_ADD = 0.1 + ADJ_WB27Q_2_JA_A_NAME;
D_WB27_2_WB3QBIASAD_ADD = 0.0033 + ADJ_WB3QBIASJA_A_NAME;