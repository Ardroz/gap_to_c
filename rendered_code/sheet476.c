I_COMPARE_FUNCTION(10 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQDN_BRNDMD_10_EQ,&S_BRNREQDN_BRNDMD_10_GT,&S_BRNREQDN_BRNDMD_10_LT);
I_COMPARE_FUNCTION(13 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQDN_BRNDMD_13_EQ,&S_BRNREQDN_BRNDMD_13_GT,&S_BRNREQDN_BRNDMD_13_LT);
I_COMPARE_FUNCTION(3 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQDN_BRNDMD_3_EQ,&S_BRNREQDN_BRNDMD_3_GT,&S_BRNREQDN_BRNDMD_3_LT);
I_COMPARE_FUNCTION(5 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQDN_BRNDMD_5_EQ,&S_BRNREQDN_BRNDMD_5_GT,&S_BRNREQDN_BRNDMD_5_LT);
I_COMPARE_FUNCTION(7 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQDN_BRNDMD_7_EQ,&S_BRNREQDN_BRNDMD_7_GT,&S_BRNREQDN_BRNDMD_7_LT);
S_BRNREQDN_BRNREQDN_A_NAME = S_BRNREQDN_BRNRQDNTMP_A_MUX_HSS;
A_MUX_HSS_FUNCTION(1 , 0 , 10 , 13 , 3 , 5 , 7 , S_BRNREQDN_BRNDMD_10_GT , S_BRNREQDN_BRNDMD_3_GT , S_BRNREQDN_BRNDMD_5_GT , S_BRNREQDN_BRNDMD_7_GT , S_BRNREQDN_DMD13A13S_AND,&S_BRNREQDN_BRNRQDNTMP_A_MUX_HSS,&S_BRNREQDN_BRNRQDNTMP_INT_SEL);
S_BRNREQDN_DMD13A13S_AND = S_BRNREQDN_BRNDMD_13_GT && S_COLDAB9C_T2SW13_B_NAME;
