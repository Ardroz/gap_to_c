CURVES_3_FUNCTION(1 , 0 , 5412-995_WGC , MFMV_AREA_2_EA , O_GMVI_GMVIDEG_A_ACT_CORR , O_GMVI_PRATIO_I_DIVIDE,&O_GMVI_AREA_2_EA_CURVES_3,&O_GMVI_AREA_2_EA_REV_OUT);
O_GMVI_DERIV_BIAS_MULTIPLY = O_GMVI_DERIV_SW_A_SW * O_GMVI_NOM_GP1I_SUBTRACT;
O_GMVI_DERIV_SW_A_SW = A_SW_FUNCTION( O_GMVI_GP1I_COMP_A_COMPARE , O_GMVI_HI_DERIV_CURVES_3 , O_GMVI_LO_DERIV_CURVES_3 );
O_GMVI_EA_GMVI_ADD = O_GMVI_AREA_2_EA_CURVES_3 + O_GMVI_DERIV_BIAS_MULTIPLY;
LAG_FUNCTION(1 , 0.04 , O_GMVI_GMVIDMDPV_ZMINUS1,&O_GMVI_GMVIACTLAG_DERIV,&O_GMVI_GMVIACTLAG_LAG);
O_GMVI_GMVIDEGDMD_MULTIPLY = 0.6 * O_GMVI_GMVIDMD_A_NAME;
ACT_CORR_FUNCTION(1 , 0 , *FALSE , 60 , E_SEQUENCG_FUELOFF_B_NAME , IFACE_CNFG_GMVI_SN , O_GMVI_GMVIACTLAG_LAG , VALVE_ANGLE_2_AREA,&O_GMVI_GMVIDEG_A_ACT_CORR,&O_GMVI_GMVIDEG_A_CAL_DATE,&O_GMVI_GMVIDEG_A_ERROR_CODE,&O_GMVI_GMVIDEG_A_FAULT,&O_GMVI_GMVIDEG_A_RES1_OFSET,&O_GMVI_GMVIDEG_A_RES2_OFSET,&O_GMVI_GMVIDEG_A_SER_NUM,&O_GMVI_GMVIDEG_A_V_TYPE);
O_GMVI_GMVIDMDPV_ZMINUS1 = O_GMVI_GMVIDEGDMD_MULTIPLY;
O_GMVI_GMVIEAX1K_A_NAME = O_GMVI_WFGMVITMP_AREA_X1000;
I_COMPARE_FUNCTION(IFACE_CNFG_GMVI_SN , O_GMVI_GMVIDEG_A_SER_NUM,&O_GMVI_GMVISNCOMP_EQ,&O_GMVI_GMVISNCOMP_GT,&O_GMVI_GMVISNCOMP_LT);
O_GMVI_GMVISNMIS_NOT =! O_GMVI_GMVISNCOMP_EQ;
O_GMVI_GMVISNSD_B_NAME = O_GMVI_GMVISNTMP_AND;
O_GMVI_GMVISNSDEN_OR = O_GMVI_GMVIDEG_A_FAULT || O_GMVI_GMVISNMIS_NOT;
O_GMVI_GMVISNTMP_AND = O_GMVI_GMVISNSDEN_OR;
A_COMPARE_FUNCTION(0 , 0 , O_GMVI_NOM_GP1I_SUBTRACT,&O_GMVI_GP1I_COMP_A_COMPARE,&O_GMVI_GP1I_COMP_A_EQUAL);
CURVES_3_FUNCTION(1 , 0 , 5412-995_WGC , MFMV_HI_DERIV , O_GMVI_GMVIDEG_A_ACT_CORR , O_GMVI_PRATIO_I_DIVIDE,&O_GMVI_HI_DERIV_CURVES_3,&O_GMVI_HI_DERIV_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5412-995_WGC , MFMV_LO_DERIV , O_GMVI_GMVIDEG_A_ACT_CORR , O_GMVI_PRATIO_I_DIVIDE,&O_GMVI_LO_DERIV_CURVES_3,&O_GMVI_LO_DERIV_REV_OUT);
O_GMVI_NOM_GP1I_SUBTRACT = 500 - I_GP1I_GP1ISEL_A_NAME;
O_GMVI_PRATIO_I_DIVIDE = I_GP1I_GP1ISEL_A_NAME / I_GP2I_GP2ISEL_A_NAME;
O_GMVI_RES1_OFSET_A_NAME = O_GMVI_GMVIDEG_A_RES1_OFSET;
O_GMVI_RES2_OFSET_A_NAME = O_GMVI_GMVIDEG_A_RES2_OFSET;
O_GMVI_WFGMVI_A_NAME = O_GMVI_WFGMVITMP_GAS_FLO_EQ;
GAS_FLO_EQ_FUNCTION(1 , 0 , 0 , 0 , 1 , 35000 , I_GASIS_KSEL_A_NAME , I_GASIS_ZSEL_A_NAME , I_GP1I_GP1ISEL_A_NAME , I_GP2I_GP2ISEL_A_NAME , I_SG_SGSEL_A_NAME , I_TGS_TGSSEL_A_NAME , O_GMVI_EA_GMVI_ADD , RESET_RESET_B_NAME,&O_GMVI_WFGMVITMP_AREA_X1000,&O_GMVI_WFGMVITMP_CHOKED_FLO,&O_GMVI_WFGMVITMP_GAS_FLO_EQ,&O_GMVI_WFGMVITMP_INPUT_FLT,&O_GMVI_WFGMVITMP_OUTPUT_LMT,&O_GMVI_WFGMVITMP_PRES_RATIO);
