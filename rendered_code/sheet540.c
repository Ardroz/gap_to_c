O_VBV_ABSMAERR_CALCULATE = fabs (O_VBV_VBVMA_A_NAME -O_VBV_VBV_NULL_A_NAME ) ;
A_COMPARE_FUNCTION(0 , 10 , O_VBV_ABSMAERR_CALCULATE,&O_VBV_DELTA_10_A_COMPARE,&O_VBV_DELTA_10_A_EQUAL);
A_COMPARE_FUNCTION(0 , 15 , O_VBV_ABSMAERR_CALCULATE,&O_VBV_DELTA_15_A_COMPARE,&O_VBV_DELTA_15_A_EQUAL);
B_ALARM_FUNCTION(1 , 0 , 0 , FALSE , O_VBV_TM_SI_AND , RESET_RESET_B_NAME,&O_VBV_DRFLDMLTCH_B_ALARM,&O_VBV_DRFLDMLTCH_HORN,&O_VBV_DRFLDMLTCH_LIGHT);
DELAY_FUNCTION(1 , 0 , 0.5 , IFACE_HDWR_VBVDRFLT,&O_VBV_FLT_DLY_DELAY,&O_VBV_FLT_DLY_R_TIME);
O_VBV_FLT_OR_OR = IFACE_HDWR_VBVFLT || O_VBV_FLT_DLY_DELAY;
O_VBV_NSALM_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_VBV_DELTA_10_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && O_VLVCAL_N_STAGING_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_VBV_NSALM_AND,&O_VBV_NSALM_5SEC_DELAY,&O_VBV_NSALM_5SEC_R_TIME);
O_VBV_NSSI_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_VBV_DELTA_15_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && O_VLVCAL_N_STAGING_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_VBV_NSSI_AND,&O_VBV_NSSI_5SEC_DELAY,&O_VBV_NSSI_5SEC_R_TIME);
O_VBV_TM_SI_AND = O_VBV_FLT_OR_OR && O_VLVCAL_N_CALMODE_B_NAME;
O_VBV_VBVDRFLDM_B_NAME = O_VBV_DRFLDMLTCH_B_ALARM;
O_VBV_VBVNSALM_B_NAME = O_VBV_NSALM_5SEC_DELAY;
O_VBV_VBVNSDM_B_NAME = O_VBV_NSSI_5SEC_DELAY;
