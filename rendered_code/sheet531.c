O_IGV_ABSMAERR_CALCULATE = fabs (O_IGV_IGVMA_A_NAME -O_IGV_IGV_NULL_A_NAME ) ;
A_COMPARE_FUNCTION(0 , 10 , O_IGV_ABSMAERR_CALCULATE,&O_IGV_DELTA_10_A_COMPARE,&O_IGV_DELTA_10_A_EQUAL);
A_COMPARE_FUNCTION(0 , 15 , O_IGV_ABSMAERR_CALCULATE,&O_IGV_DELTA_15_A_COMPARE,&O_IGV_DELTA_15_A_EQUAL);
DELAY_FUNCTION(1 , 0 , 0.5 , IFACE_HDWR_IGVDRFLT,&O_IGV_FLT_DLY_DELAY,&O_IGV_FLT_DLY_R_TIME);
O_IGV_FLT_OR_OR = IFACE_HDWR_IGVFLT || O_IGV_FLT_DLY_DELAY;
O_IGV_IGVDRFLSI_B_NAME = O_IGV_TM_SI_AND;
O_IGV_IGVNSALM_B_NAME = O_IGV_NSALM_5SEC_DELAY;
O_IGV_IGVNSDM_B_NAME = O_IGV_NSSI_5SEC_DELAY;
O_IGV_NSALM_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_IGV_DELTA_10_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_IGV_NSALM_AND,&O_IGV_NSALM_5SEC_DELAY,&O_IGV_NSALM_5SEC_R_TIME);
O_IGV_NSSI_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_IGV_DELTA_15_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_IGV_NSSI_AND,&O_IGV_NSSI_5SEC_DELAY,&O_IGV_NSSI_5SEC_R_TIME);
O_IGV_TM_SI_AND = O_IGV_FLT_OR_OR && O_VLVCAL_N_CALMODE_B_NAME;