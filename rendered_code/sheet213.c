SFC_STEP_COND_A_AND = AND_FUNCTION( SFC_STEP_T0_GT_20_A_COMPARE , SFC_STEP_T0_LT_50_NOT );
SFC_STEP_COND_B_B_NAME = B_NAME_FUNCTION( SFC_STEP_T0_LT_20_NOT );
SFC_STEP_COND_C_B_NAME = B_NAME_FUNCTION( SFC_STEP_T0_GT_50_A_COMPARE );
SFC_STEP_HOLD_OFF_SFC_STEP = SFC_STEP_FUNCTION( "SFC_STEP" , 0 , 0 , SFC_STEP_WWCRANK_11_TRAN_2 , SFC_STEP_NOT_ABORT_NOT );
SFC_STEP_HOLD_OFF_SFC_STEP = SFC_STEP_FUNCTION( "ACTIVETIME" , 0 , 0 , SFC_STEP_WWCRANK_11_TRAN_2 , SFC_STEP_NOT_ABORT_NOT );
SFC_STEP_HOLD_OFF_SFC_STEP = SFC_STEP_FUNCTION( "TRAN_1" , 0 , 0 , SFC_STEP_WWCRANK_11_TRAN_2 , SFC_STEP_NOT_ABORT_NOT );
SFC_STEP_NOT_ABORT_NOT = NOT_FUNCTION( SFC_STEP_WW_ABORT_LATCH1 );
SFC_STEP_SOV6504_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6516_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6540_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6560_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6561_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6562_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6563_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_SOV6564_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_T0_A_NAME = A_NAME_FUNCTION( VENT_AIRFILTAVG_TC_MON );
SFC_STEP_T0_GT_20_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SFC_STEP_T0_A_NAME , 20_0 , 0 );
SFC_STEP_T0_GT_20_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SFC_STEP_T0_A_NAME , 20_0 , 0 );
SFC_STEP_T0_GT_50_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SFC_STEP_T0_A_NAME , 50_0 , 0 );
SFC_STEP_T0_GT_50_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SFC_STEP_T0_A_NAME , 50_0 , 0 );
SFC_STEP_T0_LT_20_NOT = NOT_FUNCTION( SFC_STEP_T0_GT_20_A_COMPARE );
SFC_STEP_T0_LT_50_NOT = NOT_FUNCTION( SFC_STEP_T0_GT_50_A_COMPARE );
SFC_STEP_TE6559_H_B_NAME = B_NAME_FUNCTION( FALSE );
SFC_STEP_WW_OK_OR = OR_FUNCTION( SFC_STEP_COND_A_AND , SFC_STEP_COND_C_B_NAME );
