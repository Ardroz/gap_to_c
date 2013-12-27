O_TBV_ABSMAERR_CALCULATE = fabs (O_TBV_TBVMA_A_NAME -O_TBV_TBV_NULL_A_NAME ) ;
A_COMPARE_FUNCTION(0 , 10 , O_TBV_ABSMAERR_CALCULATE,&O_TBV_DELTA_10_A_COMPARE,&O_TBV_DELTA_10_A_EQUAL);
A_COMPARE_FUNCTION(0 , 15 , O_TBV_ABSMAERR_CALCULATE,&O_TBV_DELTA_15_A_COMPARE,&O_TBV_DELTA_15_A_EQUAL);
DELAY_FUNCTION(1 , 0 , 0.5 , IFACE_HDWR_TBVDRFLT,&O_TBV_FLT_DLY_DELAY,&O_TBV_FLT_DLY_R_TIME);
O_TBV_FLT_OR_OR = IFACE_HDWR_TBVFLT || O_TBV_FLT_DLY_DELAY;
O_TBV_NSALM_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_TBV_DELTA_10_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && Q_CLBCFG_TBVSWACTIV_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_TBV_NSALM_AND,&O_TBV_NSALM_5SEC_DELAY,&O_TBV_NSALM_5SEC_R_TIME);
O_TBV_NSSI_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_TBV_DELTA_15_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && Q_CLBCFG_TBVSWACTIV_B_NAME;
DELAY_FUNCTION(1 , 0 , 5 , O_TBV_NSSI_AND,&O_TBV_NSSI_5SEC_DELAY,&O_TBV_NSSI_5SEC_R_TIME);
O_TBV_TBVDRFLALM_B_NAME = O_TBV_TM_SI_AND;
O_TBV_TBVNS2ALM_B_NAME = O_TBV_NSSI_5SEC_DELAY;
O_TBV_TBVNSALM_B_NAME = O_TBV_NSALM_5SEC_DELAY;
O_TBV_TM_SI_AND = O_TBV_FLT_OR_OR && O_VLVCAL_N_CALMODE_B_NAME && Q_CLBCFG_TBVSWACTIV_B_NAME;