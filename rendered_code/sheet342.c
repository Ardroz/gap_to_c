I_PTB_PTBA_A_NAME = I_PTB_PTBISP_VALUE_1;
I_PTB_PTBAALM_B_NAME = I_PTB_PTBISP_IN_1_FLT;
I_PTB_PTBB_A_NAME = I_PTB_PTBISP_VALUE_2;
I_PTB_PTBBALM_B_NAME = I_PTB_PTBISP_IN_2_FLT;
DELAY_FUNCTION(1 , 0 , 0.06 , I_PTB_PTBDFLO_A_COMPARE,&I_PTB_PTBDF_DELAY,&I_PTB_PTBDF_R_TIME);
I_PTB_PTBDFALM_B_NAME = I_PTB_PTBDF_DELAY;
I_PTB_PTBDFDM_B_NAME = I_PTB_PTBISP_MAXDIFF_AL;
A_COMPARE_FUNCTION(0 , 6 , I_PTB_PTBISP_SPREAD,&I_PTB_PTBDFLO_A_COMPARE,&I_PTB_PTBDFLO_A_EQUAL);
A_2_RM_FUNCTION(1 , 0 , 0 , 0 , 0 , 0 , "AVG" , "AVG" , 0 , 150 , 25 , 60 , 8 , I_PTB_PTBISP_A_2_RM , IFACE_HDWR_PTBA , IFACE_HDWR_PTBAVST , IFACE_HDWR_PTBB , IFACE_HDWR_PTBBVST , RESET_RESET_B_NAME,&I_PTB_PTBISP_A_2_RM,&I_PTB_PTBISP_ALL_FLT,&I_PTB_PTBISP_IN_1_FLT,&I_PTB_PTBISP_IN_2_FLT,&I_PTB_PTBISP_MAXDIFF_AL,&I_PTB_PTBISP_SPREAD,&I_PTB_PTBISP_VALUE_1,&I_PTB_PTBISP_VALUE_2);
I_PTB_PTBLOSSDM_B_NAME = I_PTB_PTBISP_ALL_FLT;
I_PTB_PTBSEL_A_NAME = I_PTB_PTBISP_A_2_RM;
