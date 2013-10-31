SPRINT_DRN_DLYSW_A_SW = A_SW_FUNCTION( SPRINT_SV62252_53_AND , 0_0 , *10_0 (0_0, 30_0) );
SPRINT_HP_DRAIN_B_NAME = B_NAME_FUNCTION( SPRINT_SOVDRN_OR_OR );
SPRINT_JIMMY_SW1_B_SW = B_SW_FUNCTION( SPRINT_JIMMY_SPRT_B_NAME , SPRINT_OFF_4_SFC_STEP , SPRINT_S62330_OR2_OR );
SPRINT_JIMMY_SW3_B_SW = B_SW_FUNCTION( SPRINT_JIMMY_SW2_B_SW , SPRINT_JIMMY_SPRT_B_NAME , FALSE );
SPRINT_MSK62238_AND = AND_FUNCTION( SPRINT_S62238_OR_OR , SPRINT_T2GT40_A_COMPARE );
SPRINT_S62238_OR_OR = OR_FUNCTION( SPRINT_LP_2_HP_3_SFC_STEP , SPRINT_LP_2_HP_5_SFC_STEP , SPRINT_LP_OFF_3_SFC_STEP , SPRINT_LP_OFF_5_SFC_STEP , SPRINT_OFF_1_SFC_STEP , SPRINT_OFF_2_SFC_STEP );
SPRINT_S62238_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_MSK62238_AND );
SPRINT_S62251_OR_OR = OR_FUNCTION( SPRINT_OFF_3_SFC_STEP , SPRINT_JIMMY_SW3_B_SW );
SPRINT_S62251_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_S62251_OR_OR );
SPRINT_S62253_OR_OR = OR_FUNCTION( SPRINT_LP_2_HP_3_SFC_STEP , SPRINT_LP_2_HP_4_SFC_STEP , SPRINT_LP_2_HP_5_SFC_STEP , SPRINT_JIMMY_SW3_B_SW , SPRINT_HP_ON_3_SFC_STEP , SPRINT_HP_OFF_1_SFC_STEP , SPRINT_HP_2_LP_1_SFC_STEP , SPRINT_LP_2_HP_2_SFC_STEP );
SPRINT_S62253_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_S62253_OR_OR );
SPRINT_S62260_OR_OR = OR_FUNCTION( SPRINT_HP_ON_2_SFC_STEP , SPRINT_LP_ON_2_SFC_STEP , SPRINT_S62260_PRG_DELAY );
SPRINT_S62260_PRG_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_OFF_3_SFC_STEP , 0 , SPRINT_DRN_DLYSW_A_SW );
SPRINT_S62260_PRG_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_OFF_3_SFC_STEP , 0 , SPRINT_DRN_DLYSW_A_SW );
SPRINT_S62260_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_S62260_OR_OR );
SPRINT_S62330_OR2_OR = OR_FUNCTION( SPRINT_LP_2_HP_3_SFC_STEP , SPRINT_LP_OFF_3_SFC_STEP , SPRINT_OFF_1_SFC_STEP );
SPRINT_S62330_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_JIMMY_SW1_B_SW );
SPRINT_SOV62238_B_NAME = B_NAME_FUNCTION( SPRINT_S62238_Z_ZMINUS1_B );
SPRINT_SOV62251_B_NAME = B_NAME_FUNCTION( SPRINT_S62251_Z_ZMINUS1_B );
SPRINT_SOV62253_B_NAME = B_NAME_FUNCTION( SPRINT_S62253_Z_ZMINUS1_B );
SPRINT_SOV62260_B_NAME = B_NAME_FUNCTION( SPRINT_S62260_Z_ZMINUS1_B );
SPRINT_SOV62330_B_NAME = B_NAME_FUNCTION( SPRINT_S62330_Z_ZMINUS1_B );
SPRINT_SOVDRN_OR_OR = OR_FUNCTION( SPRINT_HP_2_LP_3_SFC_STEP , SPRINT_HP_OFF_2_SFC_STEP , SPRINT_OFF_1_SFC_STEP , SPRINT_OFF_2_SFC_STEP , SPRINT_OFF_3_SFC_STEP );
SPRINT_SV62252_53_AND = AND_FUNCTION( SPRINT_SOV62253_B_NAME , SPRINT_SOV62252_B_NAME );
SPRINT_T2GT40_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , SPRINT_T2SEL_A_NAME , 40_0 , 0 );
SPRINT_T2GT40_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , SPRINT_T2SEL_A_NAME , 40_0 , 0 );
SPRINT_T2SEL_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_T2SEL );