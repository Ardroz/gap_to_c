BENTLY_CRF_HI_VAL_AND = AND_FUNCTION( BENTLY_N25MXVSN25_LT , BENTLY_N2LT3590_A_COMPARE , BENTLY_N2GT3000_A_COMPARE );
BENTLY_CRF_LO_VAL_OR = OR_FUNCTION( BENTLY_N2LT3000_A_COMPARE , BENTLY_N2GT3590_A_COMPARE , BENTLY_N25MXVSN25_GT , BENTLY_N25MXVSN25_EQ );
BENTLY_N25MXVSN25_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , BENTLY_N25_TO_I_OUT_1 , BENTLY_N25_TO_I_OUT_2 );
BENTLY_N25MXVSN25_I_COMPARE = I_COMPARE_FUNCTION( "LT" , BENTLY_N25_TO_I_OUT_1 , BENTLY_N25_TO_I_OUT_2 );
BENTLY_N25MXVSN25_I_COMPARE = I_COMPARE_FUNCTION( "GT" , BENTLY_N25_TO_I_OUT_1 , BENTLY_N25_TO_I_OUT_2 );
BENTLY_N25_TO_I_A_TO_INT = A_TO_INT_FUNCTION( "OUT_1" , 0 , CORE_ANALOG_N25SEL , CORE_ANALOG_T_N25MAX );
BENTLY_N25_TO_I_A_TO_INT = A_TO_INT_FUNCTION( "OUT_2" , 0 , CORE_ANALOG_N25SEL , CORE_ANALOG_T_N25MAX );
BENTLY_N2GT3000_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , CORE_ANALOG_N2ROTOR , 0 , *1000_0 (1000_0, 3000_0) );
BENTLY_N2GT3000_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , CORE_ANALOG_N2ROTOR , 0 , *1000_0 (1000_0, 3000_0) );
BENTLY_N2GT3590_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , CORE_ANALOG_N2ROTOR , 3590_0 , 0 );
BENTLY_N2GT3590_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , CORE_ANALOG_N2ROTOR , 3590_0 , 0 );
BENTLY_N2LT3000_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , 3000_0 , CORE_ANALOG_N2ROTOR , 0 );
BENTLY_N2LT3000_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , 3000_0 , CORE_ANALOG_N2ROTOR , 0 );
BENTLY_N2LT3590_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , CORE_ANALOG_N2ROTOR , 0 , *3450_0 (3000_0, 3590_0) );
BENTLY_N2LT3590_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , CORE_ANALOG_N2ROTOR , 0 , *3450_0 (3000_0, 3590_0) );
NEVADA_CD42FL3MSK_AND = AND_FUNCTION( NEVADA_COMM_BR_V_9_17 , 0 );
NEVADA_CD42FL4MSK_AND = AND_FUNCTION( NEVADA_COMM_BR_V_9_25 , 0 );
NEVADA_CD_40_FL_1_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_5_1 );
NEVADA_CD_40_FL_2_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_5_9 );
NEVADA_CD_40_FL_3_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_5_17 );
NEVADA_CD_40_FL_4_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_5_25 );
NEVADA_CD_42_FL_1_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_9_1 );
NEVADA_CD_42_FL_2_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_9_9 );
NEVADA_CD_42_FL_3_B_NAME = B_NAME_FUNCTION( NEVADA_CD42FL3MSK_AND );
NEVADA_CD_42_FL_4_B_NAME = B_NAME_FUNCTION( NEVADA_CD42FL4MSK_AND );
NEVADA_CNFG_40_FL_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_1_33 );
NEVADA_CNFG_42_FL_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_1_63 );
NEVADA_C_FAIL_ALM_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_1_45 );
NEVADA_C_FAIL_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , NEVADA_COMM_BR_V_1_45 , 0 , *600_0 (10_0, 3600_0) );
NEVADA_C_FAIL_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , NEVADA_COMM_BR_V_1_45 , 0 , *600_0 (10_0, 3600_0) );
NEVADA_C_FAIL_DM_B_NAME = B_NAME_FUNCTION( NEVADA_C_FAIL_DLY_DELAY );
NEVADA_DYN_PRS_FL_B_NAME = B_NAME_FUNCTION( NEVADA_COMM_BR_V_1_49 );