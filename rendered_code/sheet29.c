IFACE_CORE_ABALLAT_LATCH = LATCH_FUNCTION( 0 , IFACE_CORE_ABALONOR_OR , IFACE_CORE_ABALOFFOR_OR );
IFACE_CORE_ABALOFFOR_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_97 , DATA_IO_RL2_BW_V_97 , 0 );
IFACE_CORE_ABALONOR_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_96 , DATA_IO_RL2_BW_V_96 , CORE_DIGITAL_PWR_UP , 0 );
IFACE_CORE_ALM_DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , IFACE_CORE_GETDATA_OS_ONE_SHOT , CORE_DIGITAL_STPTIMEPV , 0 );
IFACE_CORE_ALM_DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , IFACE_CORE_GETDATA_OS_ONE_SHOT , CORE_DIGITAL_STPTIMEPV , 0 );
IFACE_CORE_BLK_MAN_OR = OR_FUNCTION( CORE_DIGITAL_PWR_UP , LOAD_PERM_NOTLOAD_NOT );
IFACE_CORE_CLEAR_ABAL_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_95 , DATA_IO_RL2_BW_V_95 , 0 );
IFACE_CORE_DEC_ENA_AND = AND_FUNCTION( FALSE , *TRUE );
IFACE_CORE_GETDATA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , IFACE_CORE_GET_DATA_OR , 1_0 , 0 );
IFACE_CORE_GETDATA_OS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , IFACE_CORE_GET_DATA_OR , 1_0 , 0 );
IFACE_CORE_GET_DATA_OR = OR_FUNCTION( IFACE_CORE_DEC_ENA_AND , FALSE , IFACE_CORE_STEP_ENA_AND );
IFACE_CORE_MANSTRKFF_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_EN_B_NAME , IFACE_CORE_BLK_MAN_OR , 0 );
IFACE_CORE_MANSVD01_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_01_T_FLIPFLOP );
IFACE_CORE_MANSVD02_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_02_T_FLIPFLOP );
IFACE_CORE_MANSVD03_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_03_T_FLIPFLOP );
IFACE_CORE_MANSVD04_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_04_T_FLIPFLOP );
IFACE_CORE_MANSVD05_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_05_T_FLIPFLOP );
IFACE_CORE_MANSVD06_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_06_T_FLIPFLOP );
IFACE_CORE_MANSVD07_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_07_T_FLIPFLOP );
IFACE_CORE_MANSVD08_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_08_T_FLIPFLOP );
IFACE_CORE_MANSVD09_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_09_T_FLIPFLOP );
IFACE_CORE_MANSVD10_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_10_T_FLIPFLOP );
IFACE_CORE_MANSVD11_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MAN_FF_11_T_FLIPFLOP );
IFACE_CORE_MANSVDEN_B_NAME = B_NAME_FUNCTION( IFACE_CORE_MANSTRKFF_T_FLIPFLOP );
IFACE_CORE_MAN_FF_01_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_01_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_02_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_02_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_03_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_03_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_04_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_04_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_05_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_05_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_06_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_06_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_07_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_07_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_08_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_08_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_09_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_09_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_10_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_10_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_MAN_FF_11_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , OP_INTRFC_MAN_STG_11_B_NAME , IFACE_CORE_NOTMAN_NOT , 0 );
IFACE_CORE_NOTMAN_NOT = NOT_FUNCTION( CORE_DIGITAL_MAN_STG_EN );
IFACE_CORE_PRINTLOGOR_OR = OR_FUNCTION( OP_INTRFC_PRINT_LOG_B_NAME , 0 );
IFACE_CORE_PRINT_LOG_B_NAME = B_NAME_FUNCTION( IFACE_CORE_PRINTLOGOR_OR );
IFACE_CORE_STARTLOGOR_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_36 , DATA_IO_RL2_BW_V_36 , 0 );
IFACE_CORE_START_LOG_B_NAME = B_NAME_FUNCTION( IFACE_CORE_STARTLOGOR_OR );
IFACE_CORE_STEP_ENA_AND = AND_FUNCTION( FALSE , *TRUE );
IFACE_CORE_STOPLOGOR_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_34 , DATA_IO_RL2_BW_V_34 , IFACE_CORE_ALM_DLY_DELAY , 0 );
IFACE_CORE_STOP_LOG_B_NAME = B_NAME_FUNCTION( IFACE_CORE_STOPLOGOR_OR );
IFACE_CORE_STOP_PRINT_B_NAME = B_NAME_FUNCTION( IFACE_CORE_STPRINTOR_OR );
IFACE_CORE_STPRINTOR_OR = OR_FUNCTION( OP_INTRFC_STOP_PRINT_B_NAME , 0 );
IFACE_CORE_TFLDMDJA_A_NAME = A_NAME_FUNCTION( MAPPING_TFLDMDJFBS_A_NAME );
IFACE_CORE_TFLISCHJA_A_NAME = A_NAME_FUNCTION( MAPPING_TFLISCHFBS_A_NAME );
IFACE_CORE_TFLMAXJA_A_NAME = A_NAME_FUNCTION( MAPPING_TFLMAXJFBS_A_NAME );
IFACE_CORE_TFLMINJA_A_NAME = A_NAME_FUNCTION( MAPPING_TFLMINJFBS_A_NAME );
IFACE_CORE_TFLOSCHJA_A_NAME = A_NAME_FUNCTION( MAPPING_TFLOSCHFBS_A_NAME );
IFACE_CORE_Z_ABALON_B_NAME = B_NAME_FUNCTION( IFACE_CORE_ABALLAT_LATCH );
IFACE_CORE_Z_CLEARABL_B_NAME = B_NAME_FUNCTION( IFACE_CORE_CLEAR_ABAL_OR );