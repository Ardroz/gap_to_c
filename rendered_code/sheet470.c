S_ABCINHIB_ABC2ABALM_B_NAME = S_ABCINHIB_INHIBLCH_LATCH;
DELAY_FUNCTION(1 , 0 , ADJ_ABC2ABDLYJ_A_NAME , S_ABCINHIB_ABCSET_AND,&S_ABCINHIB_ABC2ABDLY_DELAY,&S_ABCINHIB_ABC2ABDLY_R_TIME);
S_ABCINHIB_ABCINHIBIT_B_NAME = S_ABCINHIB_ABCINHTMP_OR;
S_ABCINHIB_ABCINHTMP_OR = S_ABCINHIB_EXTSTAGDN_AND || S_ABCINHIB_INHIBLCH_LATCH;
S_ABCINHIB_ABCSET_AND = S_ABCINHIB_BRNDMD_10_GT && S_ABCINHIB_DWB36HI_A_COMPARE && S_ABCINHIB_REG_2_6_9_OR;
S_ABCINHIB_ABCSTGVLV_OR = S_ABCINHIB_ABC2ABDLY_DELAY || S_ABCINHIB_FUELSTGDN_OR;
S_ABCINHIB_ABCZ_ZMINUS1_B = S_ABCINHIB_ABCSTGVLV_OR;
I_COMPARE_FUNCTION(10 , S_BRNDMDG_BRNDMDPV_I_NAME,&S_ABCINHIB_BRNDMD_10_EQ,&S_ABCINHIB_BRNDMD_10_GT,&S_ABCINHIB_BRNDMD_10_LT);
A_COMPARE_FUNCTION(0 , ADJ_DWB36ABCJ_A_NAME , D_TFAIRREG_DWB36PCT_A_NAME,&S_ABCINHIB_DWB36HI_A_COMPARE,&S_ABCINHIB_DWB36HI_A_EQUAL);
A_COMPARE_FUNCTION(0 , ADJ_DWB36ABJ_A_NAME , D_TFAIRREG_DWB36PCT_A_NAME,&S_ABCINHIB_DWB36LO_A_COMPARE,&S_ABCINHIB_DWB36LO_A_EQUAL);
S_ABCINHIB_DWBABLO_AND = S_ABCINHIB_BRNDMD_10_EQ && S_ABCINHIB_DWB36LO_A_COMPARE;
S_ABCINHIB_EXTSTAGDN_AND = IFACE_CORE_Z_ABC2AB && IFACE_CORE_Z_SWGRID;
S_ABCINHIB_FUELSTGDN_OR = I_GP2I_GP2ILOSS_B_NAME || O_CDP_CDPVLVSD_B_NAME || O_ST8_ST8VLVSD_B_NAME || S_ABCINHIB_GASFLTINGA_AND || S_ABCINHIB_LIQFLTEN_AND;
S_ABCINHIB_GASFLTINGA_AND = S_ABCINHIB_GASON_OR && S_ABCINHIB_SVDFLSTGDN_OR;
S_ABCINHIB_GASON_OR = S_ABCINHIB_N_XFERDONE_NOT || S_ABCINHIB_XFRGSSEL_A_COMPARE;
S_ABCINHIB_INHIBLCH_LATCH = LATCH_FUNCTION(1,S_ABCINHIB_ABCSTGVLV_OR,S_ABCINHIB_INHIBRST_OR,S_ABCINHIB_INHIBLCH_LATCH);
S_ABCINHIB_INHIBRST_OR = S_ABCINHIB_BRNDMD_10_LT || S_ABCINHIB_DWBABLO_AND || S_ABCINHIB_OFFLNRSET_AND;
S_ABCINHIB_LIQFLTEN_AND = E_SEQUENCG_LIQDMD_B_NAME && S_ABCINHIB_VLVL02_ZMINUS1_B;
I_COMPARE_FUNCTION(9 , R_ISSL_REGULATORI_I_NAME,&S_ABCINHIB_MAX25CTRL_EQ,&S_ABCINHIB_MAX25CTRL_GT,&S_ABCINHIB_MAX25CTRL_LT);
I_COMPARE_FUNCTION(2 , R_ISSL_REGULATORI_I_NAME,&S_ABCINHIB_N25CTRL_EQ,&S_ABCINHIB_N25CTRL_GT,&S_ABCINHIB_N25CTRL_LT);
S_ABCINHIB_NOABCFLSYS_B_NAME = S_ABCINHIB_SVDFL_LATCH;
S_ABCINHIB_N_XFERDONE_NOT =! E_SEQUENCG_XFERDONE_B_NAME;
S_ABCINHIB_OFFLINE_NOT =! IFACE_CORE_Z_SWGRID;
S_ABCINHIB_OFFLNRSET_AND = S_ABCINHIB_ABCZ_ZMINUS1_B && S_ABCINHIB_OFFLINE_NOT;
S_ABCINHIB_REG_2_6_9_OR = S_ABCINHIB_MAX25CTRL_EQ || S_ABCINHIB_N25CTRL_EQ || S_ABCINHIB_T48CTRL_EQ;
S_ABCINHIB_SVDFL_LATCH = LATCH_FUNCTION(1,RESET_RESET_B_NAME,S_ABCINHIB_FUELSTGDN_OR,S_ABCINHIB_SVDFL_LATCH);
S_ABCINHIB_SVDFLSTGDN_OR = S_ABCINHIB_VLVG10Z_ZMINUS1_B || S_ABCINHIB_VLVG11Z_ZMINUS1_B || S_ABCINHIB_VLVG1Z_ZMINUS1_B || S_ABCINHIB_VLVG3Z_ZMINUS1_B || S_ABCINHIB_VLVG5Z_ZMINUS1_B;
I_COMPARE_FUNCTION(6 , R_ISSL_REGULATORI_I_NAME,&S_ABCINHIB_T48CTRL_EQ,&S_ABCINHIB_T48CTRL_GT,&S_ABCINHIB_T48CTRL_LT);
S_ABCINHIB_VLVG10Z_ZMINUS1_B = O_SVD_VLVGALM10_B_NAME;
S_ABCINHIB_VLVG11Z_ZMINUS1_B = O_SVD_VLVGALM11_B_NAME;
S_ABCINHIB_VLVG1Z_ZMINUS1_B = O_SVD_VLVGALM01_B_NAME;
S_ABCINHIB_VLVG3Z_ZMINUS1_B = O_SVD_VLVGALM03_B_NAME;
S_ABCINHIB_VLVG5Z_ZMINUS1_B = O_SVD_VLVGALM05_B_NAME;
S_ABCINHIB_VLVL02_ZMINUS1_B = E_SEQUENCG_VLVLALM02_B_NAME;
A_COMPARE_FUNCTION(0 , 0.5 , E_SEQUENCG_XFERDMD_A_NAME,&S_ABCINHIB_XFRGSSEL_A_COMPARE,&S_ABCINHIB_XFRGSSEL_A_EQUAL);
