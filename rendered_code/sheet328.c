I_NSD_N2ROTOR_A_NAME = I_NSD_NSDISP_A_2_RM;
I_NSD_NSDA_A_NAME = I_NSD_NSDISP_VALUE_1;
I_NSD_NSDAALM_B_NAME = I_NSD_NSDISP_IN_1_FLT;
I_NSD_NSDB_A_NAME = I_NSD_NSDISP_VALUE_2;
I_NSD_NSDBALM_B_NAME = I_NSD_NSDISP_IN_2_FLT;
I_NSD_NSDDFALM_B_NAME = I_NSD_NSDISP_MAXDIFF_AL;
A_2_RM_FUNCTION(1 , 0 , 0 , 0 , 0 , 0 , 0 , "HSS" , 30 , 350 , 40 , 4800 , I_NSD_NSDISP_A_2_RM , I_NSD_NSDOVRDENA_A_COMPARE , IFACE_HDWR_NSDA , IFACE_HDWR_NSDAVST , IFACE_HDWR_NSDB , IFACE_HDWR_NSDBVST , RESET_RESET_B_NAME,&I_NSD_NSDISP_A_2_RM,&I_NSD_NSDISP_ALL_FLT,&I_NSD_NSDISP_IN_1_FLT,&I_NSD_NSDISP_IN_2_FLT,&I_NSD_NSDISP_MAXDIFF_AL,&I_NSD_NSDISP_SPREAD,&I_NSD_NSDISP_VALUE_1,&I_NSD_NSDISP_VALUE_2);
I_NSD_NSDLOSSSD_B_NAME = I_NSD_NSDISP_ALL_FLT;
A_COMPARE_FUNCTION(0 , 8000 , C_N25B_N25R2_A_NAME,&I_NSD_NSDOVRDENA_A_COMPARE,&I_NSD_NSDOVRDENA_A_EQUAL);
I_NSD_NSDSEL_A_NAME = I_NSD_NSDISP_A_2_RM;
