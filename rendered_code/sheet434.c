D_WFTFLVBV_A36MB27B3_ADD = C_MODPARA_WA36M_A_NAME + D_WB27_2_WB27C_A_NAME + D_WFTFLB3_WB3C_A_NAME;
D_WFTFLVBV_ADD_MAX_A_MAX = A_MAX_FUNCTION( 1 , D_WFTFLVBV_A36MB27B3_ADD );
D_WFTFLVBV_DVBVDMD_A_NAME = D_WFTFLVBV_DVBVDMDTMP_SUBTRACT;
D_WFTFLVBV_DVBVDMDTMP_SUBTRACT = D_VBVSCH_VBVMIN_A_NAME - D_WFTFLVBV_T_VBVDMD_CURVES_2;
D_WFTFLVBV_DW36VBVLTP_A_MAX = A_MAX_FUNCTION( 0 , D_WFTFLVBV_DWA36_SUB_SUBTRACT );
D_WFTFLVBV_DWA36VBV_SUBTRACT = D_WB27_1_DWAB27LT_1_A_NAME - D_WFTFLVBV_DW36VBVLTP_A_MAX;
D_WFTFLVBV_DWA36VBVLT_A_NAME = D_WFTFLVBV_DW36VBVLTP_A_MAX;
D_WFTFLVBV_DWA36VBVMX_A_NAME = D_WFTFLVBV_DWA36VBVTM_MULTIPLY;
D_WFTFLVBV_DWA36VBVTM_MULTIPLY = D_WFTFLVBV_A36MB27B3_ADD * D_WFTFLVBV_DWB24QW25M_SUBTRACT;
D_WFTFLVBV_DWA36_SUB_SUBTRACT = D_WB27_1_DWAB27LT_1_A_NAME - D_WFTFLVBV_DWA36VBVTM_MULTIPLY;
D_WFTFLVBV_DWB24Q_DIVIDE = D_WFTFLVBV_ADD_MAX_A_MAX / D_WFTFLVBV_DWA36VBV_SUBTRACT;
D_WFTFLVBV_DWB24QW25M_SUBTRACT = D_WFTFLVBV_WB24MNQ25M_DIVIDE - D_WFTFLVBV_WB24MXQ25M_DIVIDE;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 0 , 0 , 5418-2587A_GE , D_WFTFLVBV_WB24Q_DIVIDE , T_VBVDMD,&D_WFTFLVBV_T_VBVDMD_CURVES_2,&D_WFTFLVBV_T_VBVDMD_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 0 , 0 , 5418-2587A_GE , D_VBVSCH_VBVMAX_A_NAME , T_VBVSCH,&D_WFTFLVBV_T_VBVSCH_CURVES_2,&D_WFTFLVBV_T_VBVSCH_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 0 , 0 , 5418-2587A_GE , D_VBVSCH_VBVMIN_A_NAME , T_VBVSCH,&D_WFTFLVBV_T_VBVSCHMI_CURVES_2,&D_WFTFLVBV_T_VBVSCHMI_REV_OUT);
D_WFTFLVBV_WB24MNQ_SUBTRACT = 1 - D_WFTFLVBV_T_VBVSCHMI_CURVES_2;
D_WFTFLVBV_WB24MNQ25M_DIVIDE = D_WFTFLVBV_T_VBVSCHMI_CURVES_2 / D_WFTFLVBV_WB24MNQ_SUBTRACT;
D_WFTFLVBV_WB24MXQ_SUBTRACT = 1 - D_WFTFLVBV_T_VBVSCH_CURVES_2;
D_WFTFLVBV_WB24MXQ25M_DIVIDE = D_WFTFLVBV_T_VBVSCH_CURVES_2 / D_WFTFLVBV_WB24MXQ_SUBTRACT;
D_WFTFLVBV_WB24Q_DIVIDE = D_WFTFLVBV_WB24QADD_ADD / D_WFTFLVBV_WB24QW25M_ADD;
D_WFTFLVBV_WB24QADD_ADD = 1 + D_WFTFLVBV_WB24QW25M_ADD;
D_WFTFLVBV_WB24QW25M_ADD = D_WFTFLVBV_DWB24Q_DIVIDE + D_WFTFLVBV_WB24MNQ25M_DIVIDE;