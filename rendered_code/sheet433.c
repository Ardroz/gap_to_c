D_WB27_1_DB27MAX_1_MULTIPLY = C_MODPARA_W25M_A_NAME * D_WB27_1_QMIN_SUB_SUBTRACT;
D_WB27_1_DB27MX_DIV_DIVIDE = D_WB27_1_DB27_HSS_A_MAX / D_WB27_1_DWA36B27TP_SUBTRACT;
D_WB27_1_DB27_HSS_A_MAX = A_MAX_FUNCTION( 1 , D_WB27_1_DB27MAX_1_MULTIPLY );
D_WB27_1_DWA36B27TP_SUBTRACT = D_TFAIRREG_DWB36_A_NAME - D_WB27_1_DWB36_HSS_A_MAX;
D_WB27_1_DWA36B27_1_A_NAME = D_WB27_1_DWA36B27TP_SUBTRACT;
D_WB27_1_DWAB27LTTP_ADD = D_WB27_1_DWB36_HSS_A_MAX + D_WB27_1_W25B_MULT_MULTIPLY;
D_WB27_1_DWAB27LT_1_A_NAME = D_WB27_1_DWAB27LTTP_ADD;
D_WB27_1_DWB36_HSS_A_MAX = A_MAX_FUNCTION( 0 , D_WB27_1_DWB36_SUB_SUBTRACT );
D_WB27_1_DWB36_SUB_SUBTRACT = D_TFAIRREG_DWB36_A_NAME - D_WB27_1_DB27MAX_1_MULTIPLY;
D_WB27_1_QMIN_SUB_SUBTRACT = D_WB27_1_WB27Q_1_AD_ADD - D_WB27MN_WB27QMIN_A_NAME;
D_WB27_1_W25B_MULT_MULTIPLY = C_MODPARA_W25M_A_NAME * D_WB27_1_DB27MX_DIV_DIVIDE * D_WB27_1_WB24Q_ADD_ADD;
D_WB27_1_WB24Q_ADD_ADD = 0.005 + ADJ_WB24QBIAJA_A_NAME;
D_WB27_1_WB27Q_1_AD_ADD = ADJ_WB27Q_1_JA_A_NAME + D_WB27_1_WB27Q_1_MX_A_NAME;
D_WB27_1_WB27Q_1_MX_A_NAME = 0.02;