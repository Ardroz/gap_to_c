I_MW_ESTENA_AND = FALSE && I_MW_MWFLT_OR;
I_MW_MW_A_NAME = IFACE_HDWR_MW;
I_MW_MWALM_B_NAME = I_MW_MWFAIL_B_ALARM;
I_MW_MWALMOVRD_OR = I_MW_ESTENA_AND || I_MW_SWMW_3_EQ;
B_ALARM_FUNCTION(1 , 0 , 0.12 , I_MW_MWALMOVRD_OR , I_MW_MWFLT_OR , RESET_RESET_B_NAME,&I_MW_MWFAIL_B_ALARM,&I_MW_MWFAIL_HORN,&I_MW_MWFAIL_LIGHT);
I_MW_MWFLT_OR = I_MW_MWVAL_HI_LIM_I || I_MW_MWVAL_LO_LIM_I || IFACE_HDWR_MWVST;
I_MW_MWSEL_A_NAME = I_MW_MXISPS_A_MUX_HSS;
HSS_BUS_FUNCTION(1 , -2 , 56 , IFACE_HDWR_MW , IFACE_HDWR_MW,&I_MW_MWVAL_HI_LIM_I,&I_MW_MWVAL_HSS_BUS,&I_MW_MWVAL_LO_LIM_I,&I_MW_MWVAL_SEL_1,&I_MW_MWVAL_SEL_2);
A_MUX_HSS_FUNCTION(1 , 0 , I_MW_ESTENA_AND , I_MW_MWFAIL_B_ALARM , I_MW_MWVAL_HSS_BUS , I_MW_MXISPS_A_MUX_HSS,&I_MW_MXISPS_A_MUX_HSS,&I_MW_MXISPS_INT_SEL);
I_COMPARE_FUNCTION(2 , ADJ_SWMWJ_I_NAME,&I_MW_SWMW_3_EQ,&I_MW_SWMW_3_GT,&I_MW_SWMW_3_LT);
