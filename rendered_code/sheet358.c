I_NX19_FPV_A_NAME = I_NX19_FPVISP_NX19_FPV;
NX19_FPV_FUNCTION(1 , I_GASIS_MOLCO2SEL_A_NAME , I_GASIS_MOLN2SEL_A_NAME , I_NX19_P1_PSIG_SUBTRACT , I_SG_SGSEL_A_NAME , I_TGS_TGSSEL_A_NAME,&I_NX19_FPVISP_ALM,&I_NX19_FPVISP_NX19_FPV,&I_NX19_FPVISP_TAU_LIM);
I_NX19_P1_PSIG_SUBTRACT = 14.697 - I_GP1P_GP1PSEL_A_NAME;
I_NX19_ZALM_B_NAME = I_NX19_ZALMENA_AND;
I_NX19_ZALMENA_AND = E_SEQUENCG_FUELON_B_NAME && I_NX19_ZALMOR_OR;
I_NX19_ZALMOR_OR = I_NX19_FPVISP_ALM || I_NX19_FPVISP_TAU_LIM;