I_TGS_TGSA_A_NAME = I_TGS_TGSISP_VALUE_1;
I_TGS_TGSAALM_B_NAME = I_TGS_TGSISP_IN_1_FLT;
I_TGS_TGSB_A_NAME = I_TGS_TGSISP_VALUE_2;
I_TGS_TGSBALM_B_NAME = I_TGS_TGSISP_IN_2_FLT;
I_TGS_TGSDFALM_B_NAME = I_TGS_TGSISP_MAXDIFF_AL;
A_COMPARE_FUNCTION(0 , 300 , I_TGS_TGSISP_A_2_RM,&I_TGS_TGSHICMP_A_COMPARE,&I_TGS_TGSHICMP_A_EQUAL);
I_TGS_TGSHIDM_B_NAME = I_TGS_TGSHICMP_A_COMPARE;
A_2_RM_FUNCTION(1 , 150 , 0 , 0 , 0 , 0 , 0 , "AVG" , 10 , 380 , -40 , 500 , I_TGS_TGSISP_A_2_RM , IFACE_HDWR_TGSA , IFACE_HDWR_TGSAVST , IFACE_HDWR_TGSB , IFACE_HDWR_TGSBVST , RESET_RESET_B_NAME , TRUE,&I_TGS_TGSISP_A_2_RM,&I_TGS_TGSISP_ALL_FLT,&I_TGS_TGSISP_IN_1_FLT,&I_TGS_TGSISP_IN_2_FLT,&I_TGS_TGSISP_MAXDIFF_AL,&I_TGS_TGSISP_SPREAD,&I_TGS_TGSISP_VALUE_1,&I_TGS_TGSISP_VALUE_2);
I_TGS_TGSLOSSALM_B_NAME = I_TGS_TGSISP_ALL_FLT;
I_TGS_TGSLOWALM_B_NAME = I_TGS_TGSLOWCMP_A_COMPARE;
A_COMPARE_FUNCTION(0 , 20 , I_TGS_TGSISP_A_2_RM,&I_TGS_TGSLOWCMP_A_COMPARE,&I_TGS_TGSLOWCMP_A_EQUAL);
I_TGS_TGSSEL_A_NAME = I_TGS_TGSISP_A_2_RM;