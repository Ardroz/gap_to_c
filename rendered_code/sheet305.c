LEAF_LOAD_ATIDLEOFF_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_IDLELATCH_LATCH , 1_0 , 0 );
LEAF_LOAD_AT_IDLE_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_C_N25ATIDL );
LEAF_LOAD_A_TO_I_A_TO_INT = A_TO_INT_FUNCTION( 0 , LEAF_LOAD_BRNDMDR_A_NAME , LEAF_LOAD_BRNDMD_A_NAME );
LEAF_LOAD_BASELINESW_A_SW = A_SW_FUNCTION( LEAF_LOAD_BKRCLSD_B_NAME , LEAF_LOAD_LOAD_SCALE_CURVE_2D , *3_0 (1_0, 6_0) );
LEAF_LOAD_BKRCLSD_B_NAME = B_NAME_FUNCTION( IFACE_CORE_Z_BREAKER_B_NAME );
LEAF_LOAD_BRNDMD_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_BRNDMDR );
LEAF_LOAD_BRNDMDR_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_BRNREQR );
LEAF_LOAD_CLROS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_MAN_RST_B_NAME , 1_0 , 0 );
LEAF_LOAD_FUEL_OFF_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_FUELOFF );
LEAF_LOAD_IDLELATCH_LATCH = LATCH_FUNCTION( 0 , LEAF_LOAD_AT_IDLE_B_NAME , LEAF_LOAD_FUEL_OFF_B_NAME );
LEAF_LOAD_INTEGRATE_INTEGRATE = INTEGRATE_FUNCTION( 0 , LEAF_LOAD_INT_SW_A_SW , -32767_0 , 32767_0 , -32767_0 , 32767_0 , 0_0 , LEAF_LOAD_RESET_OR_OR , 0_0 );
LEAF_LOAD_INT_SW_A_SW = A_SW_FUNCTION( LEAF_LOAD_RUN_INT_LATCH1 , 0_0 , LEAF_LOAD_PX36PSISEC_CURVE_2D );
LEAF_LOAD_LITEOFF_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_LITEOFF );
LEAF_LOAD_LITEOFFOS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_LITEOFF_B_NAME , 1_0 , 0 );
LEAF_LOAD_LOAD_SCALE_CURVE_2D = CURVE_2D_FUNCTION( 0 , LEAF_LOAD_PS3_A_NAME , 8_0 , 1_6 , 500_0 , 18_4 );
LEAF_LOAD_MANONOS_ONE_SHOT = ONE_SHOT_FUNCTION( LEAF_LOAD_MANUALON_B_NAME , 1_0 , 0 , 0 );
LEAF_LOAD_MANOSOFF_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_MANUALOFF_B_NAME , 1_0 , 0 );
LEAF_LOAD_MANUALOFF_B_NAME = B_NAME_FUNCTION(  , 0 );
LEAF_LOAD_MANUALON_B_NAME = B_NAME_FUNCTION(  , 0 );
LEAF_LOAD_MAN_RST_B_NAME = B_NAME_FUNCTION(  , 0 );
LEAF_LOAD_OFFOR_OR = OR_FUNCTION( LEAF_LOAD_ATIDLEOFF_ONE_SHOT , LEAF_LOAD_REQEQ_OS_ONE_SHOT , LEAF_LOAD_MANOSOFF_ONE_SHOT , LEAF_LOAD_FUEL_OFF_B_NAME );
LEAF_LOAD_PS3_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_PS3EST );
LEAF_LOAD_PSI_SUB_SUBTRACT = SUBTRACT_FUNCTION( 0 , LEAF_LOAD_PX36SEL_A_NAME , LEAF_LOAD_BASELINESW_A_SW );
LEAF_LOAD_PX36PSISEC_CURVE_2D = CURVE_2D_FUNCTION( 0 , LEAF_LOAD_PSI_SUB_SUBTRACT , -1_0 , 0_0 , -0_0001 , 0_0 , 0_0 , 1_0 , 2_0 , 3_0 , 4_0 , 5_0 , 6_0 , 7_0 , 8_0 , 9_0 , 10_0 , 11_0 , 12_0 , 13_0 , *1_0 (0_1, 1000_0) , *1_5 (0_1, 1000_0) , *2_25 (0_1, 1000_0) , *3_375 (0_1, 1000_0) , *5_0625 (0_1, 1000_0) , *7_5938 (0_1, 1000_0) , *11_3906 (0_1, 1000_0) , *17_0859 (0_1, 1000_0) , *25_6289 (0_1, 1000_0) , *38_4434 (0_1, 1000_0) , *57_665 (0_1, 1000_0) , *86_976 (0_1, 1000_0) , *129_7463 (0_1, 1000_0) , *194_6195 (0_1, 1000_0) );
LEAF_LOAD_PX36SEL_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_PX36SEL );
LEAF_LOAD_REQEQ_DLY_DELAY = DELAY_FUNCTION( 0 , LEAF_LOAD_REQ_VS_DMD_EQ , 0 , *5_0 (0_0, 10_0) );
LEAF_LOAD_REQEQ_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_REQEQ_DLY_DELAY , 0_5 , 0 );
LEAF_LOAD_REQ_OR_OR = OR_FUNCTION( LEAF_LOAD_REQ_VS_DMD_GT , LEAF_LOAD_REQ_VS_DMD_LT );
LEAF_LOAD_REQ_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , LEAF_LOAD_REQ_OR_OR , 0_16 , 0 );
LEAF_LOAD_REQ_VS_DMD_I_COMPARE = I_COMPARE_FUNCTION( LEAF_LOAD_A_TO_I_OUT_1 , LEAF_LOAD_A_TO_I_OUT_2 );
LEAF_LOAD_RESET_OR_OR = OR_FUNCTION( LEAF_LOAD_FUEL_OFF_B_NAME , LEAF_LOAD_CLROS_ONE_SHOT , LEAF_LOAD_REQ_OS_ONE_SHOT );
LEAF_LOAD_RUN_INT_LATCH1 = LATCH1_FUNCTION( 0 , LEAF_LOAD_OFFOR_OR , 0 , 0 , 0 , LEAF_LOAD_LITEOFFOS_ONE_SHOT , 0 , 0 , LEAF_LOAD_MANONOS_ONE_SHOT , 0 , 0 , LEAF_LOAD_REQ_OS_ONE_SHOT , 0 , 0 );
LEAF_LOAD_TODATALOG_A_NAME = A_NAME_FUNCTION( LEAF_LOAD_INTEGRATE_INTEGRATE );
