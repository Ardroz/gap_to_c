P_TBCSCHO_CNETLDORSW_A_SW = A_SW_FUNCTION( P_TBCORFOK_TBCORFOK_B_NAME , P_TBCSCH_NETLOAD_A_NAME , P_TBCSCHO_NETLDORTMP_LAG );
P_TBCSCHO_C_NETLDORF_A_NAME = P_TBCSCHO_CNETLDORSW_A_SW;
P_TBCSCHO_C_NETLOAD_A_NAME = P_TBCSCH_NETLOAD_A_NAME;
P_TBCSCHO_NETLDORA_ADD = ADJ_NETLDORJA_A_NAME + P_TBCSCHO_NETLDORM_MULTIPLY;
P_TBCSCHO_NETLDORM_MULTIPLY = ADJ_NETLDORJM_A_NAME * P_TBCSCHO_TBOPTBP3A_ADD;
LAG_FUNCTION(1 , 0.48 , P_TBCSCHO_NETLDORA_ADD,&P_TBCSCHO_NETLDORTMP_DERIV,&P_TBCSCHO_NETLDORTMP_LAG);
P_TBCSCHO_NETLOADORF_A_NAME = P_TBCSCHO_NETLDORTMP_LAG;
P_TBCSCHO_TBOP25A_ADD = ADJ_TBRESLDJA_A_NAME + P_TBCSCHO_TBOP25M_MULTIPLY;
P_TBCSCHO_TBOP25M_MULTIPLY = ADJ_TBOP25JM_A_NAME * I_P25_P25SEL_A_NAME;
P_TBCSCHO_TBOP48A_ADD = P_TBCSCHO_TBOP25A_ADD + P_TBCSCHO_TBOP48M_MULTIPLY;
P_TBCSCHO_TBOP48M_MULTIPLY = ADJ_TBOP48JM_A_NAME * I_P48_P48SEL_A_NAME;
P_TBCSCHO_TBOPTBP3_DIVIDE = I_PS3_PS32SEL_A_NAME / I_PTB_PTBSEL_A_NAME;
P_TBCSCHO_TBOPTBP3A_ADD = P_TBCSCHO_TBOP48A_ADD + P_TBCSCHO_TBOPTBP3M_MULTIPLY;
P_TBCSCHO_TBOPTBP3M_MULTIPLY = ADJ_TBOPTBP3JM_A_NAME * P_TBCSCHO_TBOPTBP3_DIVIDE;
