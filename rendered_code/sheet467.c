V_VDCOMPG_GP2PQPS3_DIVIDE = C_P3COR_PS3EST_A_NAME / I_GP2P_GP2PSEL_A_NAME;
V_VDCOMPG_LAG_TAU_MULTIPLY = 0.2 * V_VDCOMPG_TAU_PLT_A_MAX;
  bool V_VDCOMPG_N2OVRSPDOS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(0 , 1 , ADJ_WFPLTDLYJ_A_NAME , C_N2RATE_N2OVRSPD_B_NAME,&V_VDCOMPG_N2OVRSPDOS_ONE_SHOT,&V_VDCOMPG_N2OVRSPDOS_R_TIME,&V_VDCOMPG_N2OVRSPDOS_LAST_TRIGGER);
V_VDCOMPG_OVSP_ORRID_A_SW = A_SW_FUNCTION( 25000 , ADJ_WFPLTDMDJ_A_NAME , V_VDCOMPG_N2OVRSPDOS_ONE_SHOT );
V_VDCOMPG_PLT_VOL_ADD = 1047 + ADJ_KVOLOEMPJA_A_NAME;
V_VDCOMPG_PLT_VOLUME_MULTIPLY = 300 * V_VDCOMPG_PLT_VOL_ADD;
V_VDCOMPG_TAU_PL_MULTIPLY = V_VDCOMPG_PLT_VOLUME_MULTIPLY * V_VDCOMPG_T_PLTSLP_CURVES_2 * V_VDPS3F_INVROOTRT_A_NAME;
V_VDCOMPG_TAU_PLT_A_MAX = A_MAX_FUNCTION( 0.05 , V_VDCOMPG_TAU_PL_MULTIPLY );
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , T_PLTSLP , V_VDCOMPG_GP2PQPS3_DIVIDE,&V_VDCOMPG_T_PLTSLP_CURVES_2,&V_VDCOMPG_T_PLTSLP_REV_OUT);
V_VDCOMPG_WFPDMDTMP_LEADLAG_2 = LEADLAG_2_FUNCTION( 1 , V_VDCOMPG_LAG_TAU_MULTIPLY , V_VDCOMPG_TAU_PLT_A_MAX , X_PLTGFSDG_WFPLTVDCGS_A_NAME );
V_VDCOMPG_WFPLTDMDGS_A_NAME = V_VDCOMPG_WFPLTMIN_A_MIN;
V_VDCOMPG_WFPLTMIN_A_MIN = A_MIN_FUNCTION( V_VDCOMPG_OVSP_ORRID_A_SW , V_VDCOMPG_WFPDMDTMP_LEADLAG_2 );