I_TLUB_TGBAA_A_NAME = I_TLUB_TGBAISP_VALUE_1;
I_TLUB_TGBAAALM_B_NAME = I_TLUB_TGBAISP_IN_1_FLT;
I_TLUB_TGBAB_A_NAME = I_TLUB_TGBAISP_VALUE_2;
I_TLUB_TGBABALM_B_NAME = I_TLUB_TGBAISP_IN_2_FLT;
DELAY_FUNCTION(0.2 , 1 , 0 , I_TLUB_TGBAHIALMX_A_COMPARE,&I_TLUB_TGBAH1DLY_DELAY,&I_TLUB_TGBAH1DLY_R_TIME);
B_ALARM_FUNCTION(0.2 , 1 , 0 , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_TGBAHISDX_A_COMPARE , RESET_RESET_B_NAME,&I_TLUB_TGBAH2DLY_B_ALARM,&I_TLUB_TGBAH2DLY_HORN,&I_TLUB_TGBAH2DLY_LIGHT);
I_TLUB_TGBAHIALM_B_NAME = I_TLUB_TGBAH1DLY_DELAY;
A_COMPARE_FUNCTION(0 , 285 , I_TLUB_TGBAISP_A_2_RM,&I_TLUB_TGBAHIALMX_A_COMPARE,&I_TLUB_TGBAHIALMX_A_EQUAL);
I_TLUB_TGBAHIDM_B_NAME = I_TLUB_TGBAH2DLY_B_ALARM;
A_COMPARE_FUNCTION(0 , 310 , I_TLUB_TGBAISP_A_2_RM,&I_TLUB_TGBAHISDX_A_COMPARE,&I_TLUB_TGBAHISDX_A_EQUAL);
A_2_RM_FUNCTION(-35 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1000 , 390 , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_TGBAISP_A_2_RM , IFACE_HDWR_TGBAA , IFACE_HDWR_TGBAAVST , IFACE_HDWR_TGBAB , IFACE_HDWR_TGBABVST , RESET_RESET_B_NAME,&I_TLUB_TGBAISP_A_2_RM,&I_TLUB_TGBAISP_ALL_FLT,&I_TLUB_TGBAISP_IN_1_FLT,&I_TLUB_TGBAISP_IN_2_FLT,&I_TLUB_TGBAISP_MAXDIFF_AL,&I_TLUB_TGBAISP_SPREAD,&I_TLUB_TGBAISP_VALUE_1,&I_TLUB_TGBAISP_VALUE_2);
I_TLUB_TGBALOSSDM_B_NAME = I_TLUB_TGBAISP_ALL_FLT;
I_TLUB_TGBASEL_A_NAME = I_TLUB_TGBAISP_A_2_RM;
I_TLUB_TGBBA_A_NAME = I_TLUB_TGBBISP_VALUE_1;
I_TLUB_TGBBAALM_B_NAME = I_TLUB_TGBBISP_IN_1_FLT;
I_TLUB_TGBBB_A_NAME = I_TLUB_TGBBISP_VALUE_2;
I_TLUB_TGBBBALM_B_NAME = I_TLUB_TGBBISP_IN_2_FLT;
DELAY_FUNCTION(0.2 , 1 , 0 , I_TLUB_TGBBHIALMX_A_COMPARE,&I_TLUB_TGBBH1DLY_DELAY,&I_TLUB_TGBBH1DLY_R_TIME);
B_ALARM_FUNCTION(0.2 , 1 , 0 , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_TGBBHISDX_A_COMPARE , RESET_RESET_B_NAME,&I_TLUB_TGBBH2DLY_B_ALARM,&I_TLUB_TGBBH2DLY_HORN,&I_TLUB_TGBBH2DLY_LIGHT);
I_TLUB_TGBBHIALM_B_NAME = I_TLUB_TGBBH1DLY_DELAY;
A_COMPARE_FUNCTION(0 , 305 , I_TLUB_TGBBISP_A_2_RM,&I_TLUB_TGBBHIALMX_A_COMPARE,&I_TLUB_TGBBHIALMX_A_EQUAL);
I_TLUB_TGBBHIDM_B_NAME = I_TLUB_TGBBH2DLY_B_ALARM;
A_COMPARE_FUNCTION(0 , 330 , I_TLUB_TGBBISP_A_2_RM,&I_TLUB_TGBBHISDX_A_COMPARE,&I_TLUB_TGBBHISDX_A_EQUAL);
A_2_RM_FUNCTION(-35 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1000 , 390 , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_LUBTMPDSBL_B_NAME , I_TLUB_TGBBISP_A_2_RM , IFACE_HDWR_TGBBA , IFACE_HDWR_TGBBAVST , IFACE_HDWR_TGBBB , IFACE_HDWR_TGBBBVST , RESET_RESET_B_NAME,&I_TLUB_TGBBISP_A_2_RM,&I_TLUB_TGBBISP_ALL_FLT,&I_TLUB_TGBBISP_IN_1_FLT,&I_TLUB_TGBBISP_IN_2_FLT,&I_TLUB_TGBBISP_MAXDIFF_AL,&I_TLUB_TGBBISP_SPREAD,&I_TLUB_TGBBISP_VALUE_1,&I_TLUB_TGBBISP_VALUE_2);
I_TLUB_TGBBLOSSDM_B_NAME = I_TLUB_TGBBISP_ALL_FLT;
I_TLUB_TGBBSEL_A_NAME = I_TLUB_TGBBISP_A_2_RM;
