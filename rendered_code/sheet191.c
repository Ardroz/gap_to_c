GAS_CHROM_CP_CV_1_MULTIPLY = GAS_CHROM_C6_CALCULATE * 1.062 * 0.01;
GAS_CHROM_CP_CV_10_MULTIPLY = GAS_CHROM_CO2_SW_A_SW * 1.295 * 0.01;
GAS_CHROM_CP_CV_11_MULTIPLY = GAS_CHROM_ETHANE_CALCULATE * 1.194 * 0.01;
GAS_CHROM_CP_CV_2_MULTIPLY = GAS_CHROM_PROPANE_CALCULATE * 1.132 * 0.01;
GAS_CHROM_CP_CV_3_MULTIPLY = GAS_CHROM_IBUTANE_CALCULATE * 1.106 * 0.01;
GAS_CHROM_CP_CV_4_MULTIPLY = GAS_CHROM_NBUTANE_CALCULATE * 1.094 * 0.01;
GAS_CHROM_CP_CV_5_MULTIPLY = GAS_CHROM_NEOPENTANE_CALCULATE * 1.074 * 0.01;
GAS_CHROM_CP_CV_6_MULTIPLY = GAS_CHROM_IPENTANE_CALCULATE * 1.074 * 0.01;
GAS_CHROM_CP_CV_7_MULTIPLY = GAS_CHROM_NPENTANE_CALCULATE * 1.074 * 0.01;
GAS_CHROM_CP_CV_8_MULTIPLY = GAS_CHROM_N2_SW_A_SW * 1.4 * 0.01;
GAS_CHROM_CP_CV_9_MULTIPLY = GAS_CHROM_METHANE_C_CALCULATE * 1.311 * 0.01;
GAS_CHROM_K_A_NAME = GAS_CHROM_K_RATE_RAMP;
HSS_BUS_FUNCTION(1 , 1.32 , 0.0 , GAS_CHROM_SUM_CPCV_ADD , 1.28,&GAS_CHROM_K_LIMIT_HI_LIM_I,&GAS_CHROM_K_LIMIT_HSS_BUS,&GAS_CHROM_K_LIMIT_LO_LIM_I,&GAS_CHROM_K_LIMIT_SEL_1,&GAS_CHROM_K_LIMIT_SEL_2);
GAS_CHROM_K_LWR_B_NAME = *FALSE;
GAS_CHROM_K_RAISE_B_NAME = *FALSE;
RAMP_FUNCTION(1 , 0.004 , TIMERS_TEST_TRUE_B_NAME , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , 1.31 , GAS_CHROM_K_LIMIT_HSS_BUS , 1.28 , 1.32 , FALSE , 0.0 , 1.28 , 0 , 0,&GAS_CHROM_K_RATE_MOVING_DN,&GAS_CHROM_K_RATE_MOVING_UP,&GAS_CHROM_K_RATE_P_LIM_1,&GAS_CHROM_K_RATE_P_LIM_2,&GAS_CHROM_K_RATE_P_LIM_3,&GAS_CHROM_K_RATE_P_LIM_4,&GAS_CHROM_K_RATE_POS_SEL,&GAS_CHROM_K_RATE_RAMP,&GAS_CHROM_K_RATE_REV_RAMP);
GAS_CHROM_MANUAL_K_B_NAME = *FALSE;
GAS_CHROM_NOTMANUAL_NOT =! GAS_CHROM_MANUAL_K_B_NAME;
GAS_CHROM_SUM_CPCV_ADD = GAS_CHROM_CP_CV_1_MULTIPLY + GAS_CHROM_CP_CV_10_MULTIPLY + GAS_CHROM_CP_CV_11_MULTIPLY + GAS_CHROM_CP_CV_2_MULTIPLY + GAS_CHROM_CP_CV_3_MULTIPLY + GAS_CHROM_CP_CV_4_MULTIPLY + GAS_CHROM_CP_CV_5_MULTIPLY + GAS_CHROM_CP_CV_6_MULTIPLY + GAS_CHROM_CP_CV_7_MULTIPLY + GAS_CHROM_CP_CV_8_MULTIPLY + GAS_CHROM_CP_CV_9_MULTIPLY;