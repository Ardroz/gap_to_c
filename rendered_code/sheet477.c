S_BRNREQ_ATSIDLE_SUBTRACT = I_NSD_N2ROTOR_A_NAME - R_NSDSCHES_NSDDMD_A_NAME;
S_BRNREQ_BLDVLVFAIL_A_SW = A_SW_FUNCTION( 10 , 15 , S_BRNDMDG_BLDVLVFAIL_B_NAME );
S_BRNREQ_BRNLQMX_A_MAX = A_MAX_FUNCTION( S_BRNREQ_BRNREQTMP2_A_LIMITER , S_BRNREQ_LQMINSW_A_SW );
S_BRNREQ_BRNREQ_I_NAME = S_BRNREQ_BRNREQAI_OUT_1;
S_BRNREQ_BRNREQAI_OUT_1 =(int)S_BRNREQ_BRNREQMX_A_MUX_HSS;
if ( S_BRNREQ_N2AREG5TMR_AND ) {S_BRNREQ_BRNREQCALC_A_OUT_1 = C_N2RATE_N2ACCFLG_B_NAME;   S_BRNREQ_BRNREQCALC_B_OUT_2 = S_BRNSTGUP_SI_STAGEUP_B_NAME;}   elseif ( ! S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQ_N25LT9000_A_COMPARE &&     ! S_BRNREQ_BRNREQRPV_A_NAME && S_BRNREQ_N2DECTMR_AND ) {   S_BRNREQ_BRNREQCALC_I_OUT_1 = R_NSDSCHES_GT1MW_B_NAME;   S_BRNREQ_BRNREQCALC_B_OUT_1 = E_SEQUENCG_LIQDMD_B_NAME;   S_BRNREQ_BRNREQCALC_B_OUT_2 = S_BRNREQ_BRNREQCALC_A_OUT_2;   S_BRNREQ_BRNREQCALC_A_OUT_1 = ADJ_STARTRATEJ_A_NAME;   if ( S_BRNREQ_BRNREQCALC_I_OUT_1    || ( S_BRNREQCI_CI_STAGEUP_B_NAME && ! S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQCI_CI_STGRATE_A_NAME ) )    S_BRNREQ_BRNREQCALC_A_OUT_1 = C_N2RATE_N2DECFLG_B_NAME;   if ( ( S_BRNREQ_BRNREQCALC_B_OUT_1    || ( S_BRNREQ_REG10_EQ && ! S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQDN_BRNREQDN_A_NAME ) )     && ! ( S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQCI_CI_STAGEUP_B_NAME ) )    S_BRNREQ_BRNREQCALC_A_OUT_1 = 0;}   else{S_BRNREQ_BRNREQCALC_I_OUT_1 = S_BRNSTGDN_SI_STAGEDN_B_NAME;   S_BRNREQ_BRNREQCALC_B_OUT_1 = S_BRNREQUP_BRNREQUP_A_NAME;   S_BRNREQ_BRNREQCALC_B_OUT_2 = S_BRNRQST_BRNREQST_A_NAME;   S_BRNREQ_BRNREQCALC_A_OUT_1 = ADJ_STARTRATEJ_A_NAME;   if ( S_BRNREQ_BRNREQCALC_I_OUT_1    || ( S_BRNREQCI_CI_STAGEUP_B_NAME && ! S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQCI_CI_STGRATE_A_NAME ) )    S_BRNREQ_BRNREQCALC_A_OUT_1 = C_N2RATE_N2DECFLG_B_NAME;   if ( ( S_BRNREQ_BRNREQCALC_B_OUT_1    || ( S_BRNREQ_REG10_EQ && ! S_BRNREQ_N25_SIATV_A_COMPARE && S_BRNREQDN_BRNREQDN_A_NAME ) )     && ( ! S_BRNREQ_N25_SIATV_A_COMPARE || ! S_BRNREQCI_CI_STAGEUP_B_NAME ) )    S_BRNREQ_BRNREQCALC_A_OUT_1 = 0;}   if ( S_BRNREQ_REG5_EQ && S_BRNREQ_N25_SIATV_A_COMPARE ) {   S_BRNREQ_BRNREQCALC_A_OUT_1 = 0;}   if ( S_BRNREQCI_CI_STAGEDN_B_NAME && S_BRNREQ_N25_SIATV_A_COMPARE ) {   S_BRNREQ_BRNREQCALC_A_OUT_1 = C_N2RATE_N2DECFLG_B_NAME;};
S_BRNREQ_BRNREQLLAN_OUT_1 = (double)ADJ_BRNREQLLJ_I_NAME;
A_MUX_HSS_FUNCTION(1 , 0 , 0 , ADJ_BRNLQN2HIJ_OUT_1 , S_BRNREQ_BRNRQMN_LSS_BUS , S_BRNREQ_CMDREQLOW_OR , S_BRNREQ_LQN2OVRSPD_AND , Z_STEPIDLE_STEPIDLE_B_NAME,&S_BRNREQ_BRNREQMX_A_MUX_HSS,&S_BRNREQ_BRNREQMX_INT_SEL);
S_BRNREQ_BRNREQPV_I_NAME = S_BRNREQ_BRNREQZIA_OUT_1;
S_BRNREQ_BRNREQR_A_NAME = S_BRNREQ_BRNREQMX_A_MUX_HSS;
S_BRNREQ_BRNREQRPV_A_NAME = S_BRNREQ_BRNREQZ_ZMINUS1;
S_BRNREQ_BRNREQTMP2_A_LIMITER = A_LIMITER_FUNCTION( 1 , S_BRNREQ_BRNTRQTMP1_A_LIMITER , S_BRNREQDN_BRNREQDN_A_NAME , S_BRNREQUP_BRNREQUP_A_NAME );
S_BRNREQ_BRNREQZ_ZMINUS1 = S_BRNREQ_BRNREQMX_A_MUX_HSS;
S_BRNREQ_BRNREQZIA_OUT_1 =(int)S_BRNREQ_BRNREQZ_ZMINUS1;
LSS_BUS_FUNCTION(1 , 0 , 0 , ADJ_BRNRQMXJ_OUT_1 , S_BRNREQ_BLDVLVFAIL_A_SW , S_BRNREQ_BRNLQMX_A_MAX , S_BRNREQ_STE2MNSW_A_SW,&S_BRNREQ_BRNRQMN_HI_LIM_I,&S_BRNREQ_BRNRQMN_LO_LIM_I,&S_BRNREQ_BRNRQMN_LSS_BUS,&S_BRNREQ_BRNRQMN_SEL_1,&S_BRNREQ_BRNRQMN_SEL_2,&S_BRNREQ_BRNRQMN_SEL_3,&S_BRNREQ_BRNRQMN_SEL_4);
S_BRNREQ_BRNTRQTMP1_A_LIMITER = A_LIMITER_FUNCTION( 1 , S_BRNREQ_BRNREQCALC_A_OUT_1 , S_BRNREQ_BRNREQLLAN_OUT_1 , S_BRNREQ_BRNUL_SW_A_SW );
S_BRNREQ_BRNUL_SW_A_SW = A_SW_FUNCTION( E_SEQUENCG_LIQDMD_B_NAME , S_BRNULG_BRNUL_A_NAME , S_BRNULL_BRNULLQ_A_NAME );
S_BRNREQ_CMDREQLOW_OR = S_BRNREQ_GSN2OVRSPD_AND || Z_SHUTDOWN_SHUTDOWN_B_NAME;
S_BRNREQ_GSN2OVRSPD_AND = C_N2RATE_N2OVRSPD_B_NAME && S_BRNREQ_N_LIQDMD_NOT;
S_BRNREQ_LQMINSW_A_SW = A_SW_FUNCTION( 0 , 3 , S_BRNREQ_LQSTGDN_AND );
S_BRNREQ_LQN2OVRSPD_AND = C_N2RATE_N2OVRSPD_B_NAME && E_SEQUENCG_LIQDMD_B_NAME;
S_BRNREQ_LQSTGDN_AND = E_SEQUENCG_LIQDMD_B_NAME && S_BRNREQ_N_PX36STGD_NOT && S_BRNREQ_N25GT10000_A_COMPARE && S_BRNREQ_N2DOTLT0_A_COMPARE && S_BRNREQ_N2RTRLTMSS_A_COMPARE;
S_BRNREQ_MXACCSEC_MULTIPLY = 0.04 * ADJ_MXACDCCNTJ_A_NAME;
S_BRNREQ_MXDECSEC_MULTIPLY = 0.04 * ADJ_MXACDCCNTJ_A_NAME;
A_COMPARE_FUNCTION(0 , 10000 , IFACE_CORE_Z_THROTTLE,&S_BRNREQ_N25GT10000_A_COMPARE,&S_BRNREQ_N25GT10000_A_EQUAL);
A_COMPARE_FUNCTION(0 , 9000 , I_N25_N25SEL_A_NAME,&S_BRNREQ_N25LT9000_A_COMPARE,&S_BRNREQ_N25LT9000_A_EQUAL);
A_COMPARE_FUNCTION(0 , E_LITEPT_N25SIATV_A_NAME , I_N25_N25SEL_A_NAME,&S_BRNREQ_N25_SIATV_A_COMPARE,&S_BRNREQ_N25_SIATV_A_EQUAL);
S_BRNREQ_N2ACCREG5A_AND = C_N2RATE_N2ACCFLG_B_NAME && S_BRNREQ_REG5_EQ;
DELAY_FUNCTION(1 , 0 , S_BRNREQ_TMRACCFB_ZMINUS1_B , S_BRNREQ_TMRACCSW_A_SW,&S_BRNREQ_N2AREG5DLY_DELAY,&S_BRNREQ_N2AREG5DLY_R_TIME);
S_BRNREQ_N2AREG5TMR_AND = C_N2RATE_N2ACCFLG_B_NAME && S_BRNREQ_REG5_EQ && S_BRNREQ_RSETACCTMR_NOT;
DELAY_FUNCTION(1 , 0 , S_BRNREQ_TMRDECFB_ZMINUS1_B , S_BRNREQ_TMRDECSW_A_SW,&S_BRNREQ_N2DECDLY_DELAY,&S_BRNREQ_N2DECDLY_R_TIME);
S_BRNREQ_N2DECTMR_AND = C_N2RATE_N2DECFLG_B_NAME && S_BRNREQ_RSETDECTMR_NOT;
A_COMPARE_FUNCTION(0 , 10 , C_N2RATE_N2DOT_A_NAME,&S_BRNREQ_N2DOTLT0_A_COMPARE,&S_BRNREQ_N2DOTLT0_A_EQUAL);
A_COMPARE_FUNCTION(0 , ADJ_N2MXSSJ_A_NAME , I_NSD_N2ROTOR_A_NAME,&S_BRNREQ_N2RTRLTMSS_A_COMPARE,&S_BRNREQ_N2RTRLTMSS_A_EQUAL);
S_BRNREQ_N_LIQDMD_NOT =! E_SEQUENCG_LIQDMD_B_NAME;
A_COMPARE_FUNCTION(0 , 25 , S_BRNREQ_ATSIDLE_SUBTRACT,&S_BRNREQ_N_N2IDLE_A_COMPARE,&S_BRNREQ_N_N2IDLE_A_EQUAL);
S_BRNREQ_N_PX36STGD_NOT =! A_ABALTST_PX36STGDN_B_NAME;
S_BRNREQ_RATESISW_A_SW = A_SW_FUNCTION( 5 , S_BRNREQ_STGRTETMP_A_NAME , Z_STEPIDLE_STEPIDLE_B_NAME );
I_COMPARE_FUNCTION(10 , R_ISSL_REGULATORI_I_NAME,&S_BRNREQ_REG10_EQ,&S_BRNREQ_REG10_GT,&S_BRNREQ_REG10_LT);
I_COMPARE_FUNCTION(5 , R_ISSL_REGULATORI_I_NAME,&S_BRNREQ_REG5_EQ,&S_BRNREQ_REG5_GT,&S_BRNREQ_REG5_LT);
S_BRNREQ_RSETACCTMR_NOT =! S_BRNREQ_N2AREG5DLY_DELAY;
S_BRNREQ_RSETDECTMR_NOT =! S_BRNREQ_N2DECDLY_DELAY;
S_BRNREQ_STAGERATE_A_NAME = S_BRNREQ_RATESISW_A_SW;
S_BRNREQ_STE2MNSW_A_SW = A_SW_FUNCTION( 15 , S_STEP2MIN_BRNSTP2MN_A_NAME , S_STEP2MIN_STEP2MIN_B_NAME );
S_BRNREQ_STGRTETMP_A_NAME = S_BRNREQ_BRNREQCALC_A_OUT_2;
S_BRNREQ_TMRACCFB_ZMINUS1_B = S_BRNREQ_N2AREG5TMR_AND;
S_BRNREQ_TMRACCSW_A_SW = A_SW_FUNCTION( 0 , C_N2RATE_N2DECFLG_B_NAME , S_BRNREQ_MXACCSEC_MULTIPLY );
S_BRNREQ_TMRDECFB_ZMINUS1_B = S_BRNREQ_N2DECTMR_AND;
S_BRNREQ_TMRDECSW_A_SW = A_SW_FUNCTION( 0 , S_BRNREQ_MXDECSEC_MULTIPLY , S_BRNREQ_N2ACCREG5A_AND );