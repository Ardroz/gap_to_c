V_VDCOMIG_GP2IQPS3_DIVIDE = C_P3COR_PS3EST_A_NAME / I_GP2I_GP2ISEL_A_NAME;
V_VDCOMIG_INR_VOL_ADD = 333 + ADJ_KVOLOEMIJA_A_NAME + V_VDCOMIG_VLV_VOL_MULTIPLY;
V_VDCOMIG_INR_VOLUME_MULTIPLY = 300 * V_VDCOMIG_INR_VOL_ADD;
V_VDCOMIG_INV_CUPS_DIVIDE = 1 / V_VDCOMIG_MAX_CUPS_A_MAX;
V_VDCOMIG_LAG_TAU_MULTIPLY = 0.2 * V_VDCOMIG_TAU_MAX_A_MAX;
V_VDCOMIG_MAX_CUPS_A_MAX = A_MAX_FUNCTION( 3 , S_STGDMDG_INRDMDGS_A_NAME );
V_VDCOMIG_TAU_IN_MULTIPLY = V_VDCOMIG_INR_VOLUME_MULTIPLY * V_VDCOMIG_INV_CUPS_DIVIDE * V_VDCOMIG_T_INRSLP_CURVES_2 * V_VDPS3F_INVROOTRT_A_NAME;
V_VDCOMIG_TAU_MAX_A_MAX = A_MAX_FUNCTION( 0.05 , V_VDCOMIG_TAU_IN_MULTIPLY );
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , T_INRSLP , V_VDCOMIG_GP2IQPS3_DIVIDE,&V_VDCOMIG_T_INRSLP_CURVES_2,&V_VDCOMIG_T_INRSLP_REV_OUT);
V_VDCOMIG_VDCOMI_LEADLAG_2 = LEADLAG_2_FUNCTION( 1 , V_VDCOMIG_LAG_TAU_MULTIPLY , V_VDCOMIG_TAU_MAX_A_MAX , X_INRGFSDG_WFINRVDCGS_A_NAME );
V_VDCOMIG_VLV_VOL_MULTIPLY = 35.37 * S_STGDMDG_INRDMDGS_A_NAME;
V_VDCOMIG_WFIDMDTMP_MULTIPLY = S_STGDMDG_INRDMDGS_A_NAME * V_VDCOMIG_VDCOMI_LEADLAG_2;
V_VDCOMIG_WFINRDMDGS_A_NAME = V_VDCOMIG_WFIDMDTMP_MULTIPLY;