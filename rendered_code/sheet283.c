SPRINT_DLY_HPHLD_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_HP_2_LP__Z_ZMINUS1_B , 0 , *20_0 (0_0, 300_0) );
SPRINT_DLY_HPHLD_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_HP_2_LP__Z_ZMINUS1_B , 0 , *20_0 (0_0, 300_0) );
SPRINT_DLY_LPEHLD_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_LP_E__Z_ZMINUS1_B , 0 , *10_0 (0_0, 300_0) );
SPRINT_DLY_LPEHLD_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_LP_E__Z_ZMINUS1_B , 0 , *10_0 (0_0, 300_0) );
SPRINT_DLY_LPPHLD_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_LP_PRG_Z_ZMINUS1_B , 0 , *0_0 (0_0, 300_0) );
SPRINT_DLY_LPPHLD_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_LP_PRG_Z_ZMINUS1_B , 0 , *0_0 (0_0, 300_0) );
SPRINT_DN_PRGT_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_OFF_3_SFC_STEP );
SPRINT_DN_PRG_TMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_DN_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_DN_PRG_TMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_DN_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_DRAINHP_TM_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_DRNHPTMR_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_DRAINHP_TM_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_DRNHPTMR_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_DRNHPTMR_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_DRN_TMR_OR_OR );
SPRINT_DRN_TMR_OR_OR = OR_FUNCTION( SPRINT_HP_2_LP_3_SFC_STEP , SPRINT_HP_OFF_2_SFC_STEP );
SPRINT_EVAC_TMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_EVAC_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_EVAC_TMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_EVAC_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_EVAC_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_EV_TM_OR_OR );
SPRINT_EV_TM_OR_OR = OR_FUNCTION( SPRINT_LP_2_HP_3_SFC_STEP , SPRINT_LP_OFF_3_SFC_STEP , SPRINT_OFF_1_SFC_STEP );
SPRINT_FILL_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FILL_OR_OR , SPRINT_FILL_TM_SW_A_SW , 0 );
SPRINT_FILL_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FILL_OR_OR , SPRINT_FILL_TM_SW_A_SW , 0 );
SPRINT_FILL_DN_OR = OR_FUNCTION( SPRINT_FILL_DLY_DELAY , SPRINT_P62239GT15_A_COMPARE );
SPRINT_FILL_OR_OR = OR_FUNCTION( SPRINT_HP_ON_2_SFC_STEP , SPRINT_LP_ON_2_SFC_STEP );
SPRINT_FILL_TM_SW_A_SW = A_SW_FUNCTION( SPRINT_TEST_TIMER_B_NAME , *90_0 (0_0, 180_0) , *20_0 (0_0, 180_0) );
SPRINT_HP_2_LP__Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_HP_2_LP_2_SFC_STEP );
SPRINT_HP_PRGT_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_JIMMY_SW2_B_SW );
SPRINT_HP_PRG_TMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_HP_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_HP_PRG_TMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_HP_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_JIMMY_SPRT_B_NAME = B_NAME_FUNCTION(  , 0 );
SPRINT_JIMMY_SW2_B_SW = B_SW_FUNCTION( SPRINT_JIMMY_SPRT_B_NAME , SPRINT_PURGE_HP_OR , SPRINT_MASK_PURGE_AND );
SPRINT_LP_E_HLD_OR = OR_FUNCTION( SPRINT_LP_2_HP_2_SFC_STEP , SPRINT_LP_OFF_2_SFC_STEP );
SPRINT_LP_E__Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_LP_E_HLD_OR );
SPRINT_LP_PRGT_OR_OR = OR_FUNCTION( SPRINT_LP_2_HP_5_SFC_STEP , SPRINT_LP_OFF_5_SFC_STEP , SPRINT_OFF_2_SFC_STEP );
SPRINT_LP_PRGT_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_LP_PRGT_OR_OR );
SPRINT_LP_PRG_HLD_OR = OR_FUNCTION( SPRINT_LP_2_HP_4_SFC_STEP , SPRINT_LP_OFF_4_SFC_STEP );
SPRINT_LP_PRG_TMR_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_LP_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_LP_PRG_TMR_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_LP_PRGT_Z_ZMINUS1_B , 0 , *30_0 (0_0, 300_0) );
SPRINT_LP_PRG_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_LP_PRG_HLD_OR );
SPRINT_P62239GT15_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SPRINT_PT62234_A_NAME , 15_0 , 0 );
SPRINT_P62239GT15_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SPRINT_PT62234_A_NAME , 15_0 , 0 );
SPRINT_PURGE_HP_OR = OR_FUNCTION( SPRINT_HP_2_LP_3_SFC_STEP , SPRINT_OFF_4_SFC_STEP );
SPRINT_TEST_TIMER_B_NAME = B_NAME_FUNCTION(  , 0 );
SPRINT_TIMERS_A_MUX_HSS = A_MUX_HSS_FUNCTION( "A_MUX_HSS" , 0 , 0 , SPRINT_TMR_CNVT_OUT_1 , SPRINT_FILL_OR_OR , SPRINT_TMR_CNVT_OUT_2 , SPRINT_HP_2_LP__Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_3 , SPRINT_DRNHPTMR_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_4 , SPRINT_LP_E__Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_5 , SPRINT_EVAC_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_6 , SPRINT_LP_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_7 , SPRINT_DN_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_8 , SPRINT_HP_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_9 , SPRINT_LP_PRG_Z_ZMINUS1_B );
SPRINT_TIMERS_A_MUX_HSS = A_MUX_HSS_FUNCTION( "INT_SEL" , 0 , 0 , SPRINT_TMR_CNVT_OUT_1 , SPRINT_FILL_OR_OR , SPRINT_TMR_CNVT_OUT_2 , SPRINT_HP_2_LP__Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_3 , SPRINT_DRNHPTMR_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_4 , SPRINT_LP_E__Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_5 , SPRINT_EVAC_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_6 , SPRINT_LP_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_7 , SPRINT_DN_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_8 , SPRINT_HP_PRGT_Z_ZMINUS1_B , SPRINT_TMR_CNVT_OUT_9 , SPRINT_LP_PRG_Z_ZMINUS1_B );
SPRINT_TMR_ANLG_I_TO_AN = I_TO_AN_FUNCTION( 0 , SPRINT_TIMERS_INT_SEL );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_1" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_2" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_3" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_4" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_5" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_6" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_7" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_8" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
SPRINT_TMR_CNVT_I_TO_AN = I_TO_AN_FUNCTION( "OUT_9" , 0 , SPRINT_FILL_DLY_R_TIME , SPRINT_DLY_HPHLD_R_TIME , SPRINT_DRAINHP_TM_R_TIME , SPRINT_DLY_LPEHLD_R_TIME , SPRINT_EVAC_TMR_R_TIME , SPRINT_LP_PRG_TMR_R_TIME , SPRINT_DN_PRG_TMR_R_TIME , SPRINT_HP_PRG_TMR_R_TIME , SPRINT_DLY_LPPHLD_R_TIME );
