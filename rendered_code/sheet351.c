DELAY_FUNCTION(1 , 120 , 0 , E_SEQUENCG_FUELOFF_B_NAME,&I_GP2O_GP2FUELDLY_DELAY,&I_GP2O_GP2FUELDLY_R_TIME);
I_GP2O_GP2OA_A_NAME = I_GP2O_GP2OISP_VALUE_1;
I_GP2O_GP2OAALM_B_NAME = I_GP2O_GP2OISP_IN_1_FLT;
I_GP2O_GP2OB_A_NAME = I_GP2O_GP2OISP_VALUE_2;
I_GP2O_GP2OBALM_B_NAME = I_GP2O_GP2OISP_IN_2_FLT;
I_GP2O_GP2ODFALM_B_NAME = I_GP2O_GP2OISP_MAXDIFF_AL;
I_GP2O_GP2OHI_OR = I_GP2O_GP2OHISD1_AND || I_GP2O_GP2OHISD2_AND;
A_COMPARE_FUNCTION(0 , I_GP1O_GP1OSEL_A_NAME , I_GP2O_GP2OISP_A_2_RM,&I_GP2O_GP2OHICMP1_A_COMPARE,&I_GP2O_GP2OHICMP1_A_EQUAL);
A_COMPARE_FUNCTION(0 , I_GP2O_GP2OISP_A_2_RM , I_GP2O_GP2OPS3_ADD,&I_GP2O_GP2OHICMP2_A_COMPARE,&I_GP2O_GP2OHICMP2_A_EQUAL);
DELAY_FUNCTION(1 , 0 , 0.04 , I_GP2O_GP2OHICMP1_A_COMPARE,&I_GP2O_GP2OHIDLY_DELAY,&I_GP2O_GP2OHIDLY_R_TIME);
I_GP2O_GP2OHISD_B_NAME = I_GP2O_GP2OHI_OR;
I_GP2O_GP2OHISD1_AND = I_GP2O_GP2O_DLY_DELAY && I_GP2O_GP2OHIDLY_DELAY;
I_GP2O_GP2OHISD2_AND = I_GP2O_GP2FUELDLY_DELAY && I_GP2O_GP2OHICMP2_A_COMPARE;
A_2_RM_FUNCTION(1 , 150 , 0 , 0 , 0 , 0 , 0 , 0 , "AVG" , "LSS" , 1.5 , 8 , 800 , I_GP2O_GP2OISP_A_2_RM , IFACE_HDWR_GP2OA , IFACE_HDWR_GP2OAVST , IFACE_HDWR_GP2OB , IFACE_HDWR_GP2OBVST , RESET_RESET_B_NAME,&I_GP2O_GP2OISP_A_2_RM,&I_GP2O_GP2OISP_ALL_FLT,&I_GP2O_GP2OISP_IN_1_FLT,&I_GP2O_GP2OISP_IN_2_FLT,&I_GP2O_GP2OISP_MAXDIFF_AL,&I_GP2O_GP2OISP_SPREAD,&I_GP2O_GP2OISP_VALUE_1,&I_GP2O_GP2OISP_VALUE_2);
I_GP2O_GP2OLOSSSD_B_NAME = I_GP2O_GP2OISP_ALL_FLT;
I_GP2O_GP2OPS3_ADD = ADJ_GP2OLIMJA_A_NAME + I_PS3_PS32SEL_A_NAME;
I_GP2O_GP2OSEL_A_NAME = I_GP2O_GP2OISP_A_2_RM;
DELAY_FUNCTION(1 , 0 , 1 , O_GMVO_FUELONOTR_B_NAME,&I_GP2O_GP2O_DLY_DELAY,&I_GP2O_GP2O_DLY_R_TIME);
