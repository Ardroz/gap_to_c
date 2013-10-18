SPRINT_GAS_OR_LIQ_OR = OR_FUNCTION( FUEL_SYS_GAS100_B_NAME , CORE_DIGITAL_FUELOFF );
SPRINT_HP_OFF_1_TRAN_3 = TRAN_3_FUNCTION( SPRINT_RAMP_DOWN_P_LIM_1 , 0 , 0 , SPRINT_SPRTRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND );
SPRINT_HP_OFF_1_SFC_STEP = SFC_STEP_FUNCTION( SPRINT_RAMP_DOWN_P_LIM_1 , 0 , 0 , SPRINT_SPRTRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND );
SPRINT_HP_OFF_1_ACTIVETIME = ACTIVETIME_FUNCTION( SPRINT_RAMP_DOWN_P_LIM_1 , 0 , 0 , SPRINT_SPRTRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND );
SPRINT_HP_OFF_1_TRAN_1 = TRAN_1_FUNCTION( SPRINT_RAMP_DOWN_P_LIM_1 , 0 , 0 , SPRINT_SPRTRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND );
SPRINT_HP_OFF_1_TRAN_2 = TRAN_2_FUNCTION( SPRINT_RAMP_DOWN_P_LIM_1 , 0 , 0 , SPRINT_SPRTRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND );
SPRINT_HP_OFF_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_HP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DRAINHP_TM_DELAY );
SPRINT_HP_OFF_2_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_HP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DRAINHP_TM_DELAY );
SPRINT_HP_OFF_2_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_HP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DRAINHP_TM_DELAY );
SPRINT_HP_OFF_2_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_HP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DRAINHP_TM_DELAY );
SPRINT_HP_OFF_2_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_HP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DRAINHP_TM_DELAY );
SPRINT_LP_OFF_1_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_SPRYRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_RAMP_DOWN_P_LIM_1 );
SPRINT_LP_OFF_1_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_SPRYRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_RAMP_DOWN_P_LIM_1 );
SPRINT_LP_OFF_1_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_SPRYRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_RAMP_DOWN_P_LIM_1 );
SPRINT_LP_OFF_1_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_SPRYRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_RAMP_DOWN_P_LIM_1 );
SPRINT_LP_OFF_1_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_SPRYRMPOFF_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_RAMP_DOWN_P_LIM_1 );
SPRINT_LP_OFF_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPEHLD_DELAY );
SPRINT_LP_OFF_2_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_LP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPEHLD_DELAY );
SPRINT_LP_OFF_2_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_LP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPEHLD_DELAY );
SPRINT_LP_OFF_2_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_LP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPEHLD_DELAY );
SPRINT_LP_OFF_2_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_LP_OFF_1_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPEHLD_DELAY );
SPRINT_LP_OFF_3_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_OFF_2_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , TRUE );
SPRINT_LP_OFF_3_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_LP_OFF_2_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , TRUE );
SPRINT_LP_OFF_3_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_LP_OFF_2_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , TRUE );
SPRINT_LP_OFF_3_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_LP_OFF_2_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , TRUE );
SPRINT_LP_OFF_3_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_LP_OFF_2_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , TRUE );
SPRINT_LP_OFF_4_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_XFR_WT_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPPHLD_DELAY );
SPRINT_LP_OFF_4_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_LP_XFR_WT_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPPHLD_DELAY );
SPRINT_LP_OFF_4_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_LP_XFR_WT_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPPHLD_DELAY );
SPRINT_LP_OFF_4_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_LP_XFR_WT_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPPHLD_DELAY );
SPRINT_LP_OFF_4_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_LP_XFR_WT_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DLY_LPPHLD_DELAY );
SPRINT_LP_OFF_5_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_OFF_4_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_LP_OFF_5_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_LP_OFF_4_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_LP_OFF_5_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_LP_OFF_4_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_LP_OFF_5_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_LP_OFF_4_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_LP_OFF_5_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_LP_OFF_4_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_LP_XFR_WT_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_OFF_3_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_LP_XFR_WT_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_LP_OFF_3_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_LP_XFR_WT_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_LP_OFF_3_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_MASK_PURGE_AND = AND_FUNCTION( SPRINT_OFF_4_SFC_STEP , SPRINT_NOT_RUNNIN_NOT );
SPRINT_NOTOFF_NOT = NOT_FUNCTION( SPRINT_TRANSOFF_AND );
SPRINT_NOTREADY_SFC_STEP = SFC_STEP_FUNCTION( 0 , "ACTIVE" , SPRINT_OFF_4_TRAN_3 , SPRINT_SPRT_READY_TRAN_1 , SPRINT_NOTOFF_NOT );
SPRINT_NOTREADY_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , "ACTIVE" , SPRINT_OFF_4_TRAN_3 , SPRINT_SPRT_READY_TRAN_1 , SPRINT_NOTOFF_NOT );
SPRINT_NOTREADY_TRAN_1 = TRAN_1_FUNCTION( 0 , "ACTIVE" , SPRINT_OFF_4_TRAN_3 , SPRINT_SPRT_READY_TRAN_1 , SPRINT_NOTOFF_NOT );
SPRINT_NOT_RUNNIN_NOT = NOT_FUNCTION( FALSE );
SPRINT_OFF_1_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_HP_OFF_2_TRAN_3 , SPRINT_SPRNTOFFOR_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_EVAC_SW1_B_SW );
SPRINT_OFF_1_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_HP_OFF_2_TRAN_3 , SPRINT_SPRNTOFFOR_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_EVAC_SW1_B_SW );
SPRINT_OFF_1_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_HP_OFF_2_TRAN_3 , SPRINT_SPRNTOFFOR_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_EVAC_SW1_B_SW );
SPRINT_OFF_1_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_HP_OFF_2_TRAN_3 , SPRINT_SPRNTOFFOR_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_EVAC_SW1_B_SW );
SPRINT_OFF_1_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_HP_OFF_2_TRAN_3 , SPRINT_SPRNTOFFOR_OR , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_EVAC_SW1_B_SW );
SPRINT_OFF_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_OFF_WT_XFR_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_OFF_2_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_OFF_WT_XFR_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_OFF_2_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_OFF_WT_XFR_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_OFF_2_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_OFF_WT_XFR_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_OFF_2_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_OFF_WT_XFR_TRAN_1 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_LP_PRG_TMR_DELAY );
SPRINT_OFF_3_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_OFF_2_TRAN_3 , SPRINT_LP_OFF_5_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DN_PRG_TMR_DELAY );
SPRINT_OFF_3_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_OFF_2_TRAN_3 , SPRINT_LP_OFF_5_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DN_PRG_TMR_DELAY );
SPRINT_OFF_3_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_OFF_2_TRAN_3 , SPRINT_LP_OFF_5_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DN_PRG_TMR_DELAY );
SPRINT_OFF_3_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_OFF_2_TRAN_3 , SPRINT_LP_OFF_5_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DN_PRG_TMR_DELAY );
SPRINT_OFF_3_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_OFF_2_TRAN_3 , SPRINT_LP_OFF_5_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_DN_PRG_TMR_DELAY );
SPRINT_OFF_4_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_OFF_3_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_TRAN_4_OR_OR );
SPRINT_OFF_4_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_OFF_3_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_TRAN_4_OR_OR );
SPRINT_OFF_4_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_OFF_3_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_TRAN_4_OR_OR );
SPRINT_OFF_4_TRAN_2 = TRAN_2_FUNCTION( 0 , 0 , SPRINT_OFF_3_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_TRAN_4_OR_OR );
SPRINT_OFF_4_TRAN_3 = TRAN_3_FUNCTION( 0 , 0 , SPRINT_OFF_3_TRAN_3 , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_TRAN_4_OR_OR );
SPRINT_OFF_WT_XFR_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_OFF_1_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_OFF_WT_XFR_ACTIVETIME = ACTIVETIME_FUNCTION( 0 , 0 , SPRINT_OFF_1_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_OFF_WT_XFR_TRAN_1 = TRAN_1_FUNCTION( 0 , 0 , SPRINT_OFF_1_TRAN_3 , SPRINT_GAS_OR_LIQ_OR );
SPRINT_OK_TO_XFR_OR = OR_FUNCTION( SPRINT_LP_XFR_WT_SFC_STEP , SPRINT_OFF_WT_XFR_SFC_STEP , SPRINT_NOTREADY_SFC_STEP );
SPRINT_SPRINT_OUT_B_NAME = B_NAME_FUNCTION( SPRINT_SPRNT_O_OR_OR );
SPRINT_SPRNTOFFOR_OR = OR_FUNCTION( SPRINT_HP_ON_1_TRAN_1 , SPRINT_HP_ON_2_TRAN_1 );
SPRINT_SPRNT_O_OR_OR = OR_FUNCTION( SPRINT_HP_OFF_2_SFC_STEP , SPRINT_LP_OFF_3_SFC_STEP , SPRINT_LP_OFF_5_SFC_STEP , SPRINT_OFF_1_SFC_STEP , SPRINT_OFF_2_SFC_STEP , SPRINT_OFF_3_SFC_STEP , SPRINT_MASK_PURGE_AND , SPRINT_NOTREADY_SFC_STEP );
SPRINT_SPRTRMPOFF_OR = OR_FUNCTION( SPRINT_LP_2_HP_1_TRAN_1 , SPRINT_LP_2_HP_2_TRAN_1 , SPRINT_LP_2_HP_3_TRAN_1 , SPRINT_LP_2_HP_4_TRAN_1 , SPRINT_LP_2_HP_5_TRAN_1 , SPRINT_HP_ON_3_TRAN_1 );
SPRINT_SPRYRMPOFF_OR = OR_FUNCTION( SPRINT_HP_2_LP_1_TRAN_1 , SPRINT_HP_2_LP_2_TRAN_1 , SPRINT_HP_2_LP_3_TRAN_1 , SPRINT_LP_ON_1_TRAN_1 , SPRINT_LP_ON_2_TRAN_1 , SPRINT_LP_ON_3_TRAN_1 );
SPRINT_TRAN_4_OR_OR = OR_FUNCTION( SPRINT_HP_PRG_TMR_DELAY , FALSE );
