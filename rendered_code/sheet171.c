LOC_REM_COMMANDMAP_AND = AND_FUNCTION( LOC_REM_OK_NOT2_NOT , MAPPING_MAP_EN_OR_OR );
LOC_REM_MAPDLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , LOC_REM_COMMANDMAP_AND , 0 , *0_0 (0_0, 60_0) );
LOC_REM_MAPDLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , LOC_REM_COMMANDMAP_AND , 0 , *0_0 (0_0, 60_0) );
LOC_REM_MAPHMI_ON_B_NAME = B_NAME_FUNCTION( LOC_REM_MAPDLY_DELAY );
LOC_REM_NOTMAP_NOT = NOT_FUNCTION( LOC_REM_MAPHMI_ON_B_NAME );
LOC_REM_OK_NOT2_NOT = NOT_FUNCTION( DATA_IO_LINKERR_OR_OR );
MAPPING_AW_1_CMP_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGSW_1_I_SW , MAPPING_AW_1_SW_I_SW );
MAPPING_AW_1_CMP_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGSW_1_I_SW , MAPPING_AW_1_SW_I_SW );
MAPPING_AW_1_CMP_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGSW_1_I_SW , MAPPING_AW_1_SW_I_SW );
MAPPING_AW_1_OR_OR = OR_FUNCTION( MAPPING_AW_1_CMP_LT , MAPPING_AW_1_CMP_GT );
MAPPING_AW_1_SW_I_SW = I_SW_FUNCTION( MAPPING_AW_1_Z_ZMINUS1_B , MAPPING_AW_1_SW_I_SW , MAPPING_NEGSW_1_I_SW );
MAPPING_AW_1_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_AW_1_OR_OR );
MAPPING_AW_2_CMP_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGSW_2_I_SW , MAPPING_AW_2_SW_I_SW );
MAPPING_AW_2_CMP_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGSW_2_I_SW , MAPPING_AW_2_SW_I_SW );
MAPPING_AW_2_CMP_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGSW_2_I_SW , MAPPING_AW_2_SW_I_SW );
MAPPING_AW_2_OR_OR = OR_FUNCTION( MAPPING_AW_2_CMP_LT , MAPPING_AW_2_CMP_GT );
MAPPING_AW_2_SW_I_SW = I_SW_FUNCTION( MAPPING_AW_2_Z_ZMINUS1_B , MAPPING_AW_2_SW_I_SW , MAPPING_NEGSW_2_I_SW );
MAPPING_AW_2_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_AW_2_OR_OR );
MAPPING_AW_3_CMP_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGSW_3_I_SW , MAPPING_AW_3_SW_I_SW );
MAPPING_AW_3_CMP_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGSW_3_I_SW , MAPPING_AW_3_SW_I_SW );
MAPPING_AW_3_CMP_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGSW_3_I_SW , MAPPING_AW_3_SW_I_SW );
MAPPING_AW_3_OR_OR = OR_FUNCTION( MAPPING_AW_3_CMP_LT , MAPPING_AW_3_CMP_GT );
MAPPING_AW_3_SW_I_SW = I_SW_FUNCTION( MAPPING_AW_3_Z_ZMINUS1_B , MAPPING_AW_3_SW_I_SW , MAPPING_NEGSW_3_I_SW );
MAPPING_AW_3_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_AW_3_OR_OR );
MAPPING_AW_4_CMP_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGSW_4_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_AW_4_CMP_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGSW_4_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_AW_4_CMP_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGSW_4_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_AW_4_OR_OR = OR_FUNCTION( MAPPING_AW_4_CMP_LT , MAPPING_AW_4_CMP_GT );
MAPPING_AW_4_SW_I_SW = I_SW_FUNCTION( MAPPING_AW_4_Z_ZMINUS1_B , MAPPING_AW_4_SW_I_SW , MAPPING_NEGSW_4_I_SW );
MAPPING_AW_4_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_AW_4_OR_OR );
MAPPING_AW_5_CMP_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGSW_5_I_SW , MAPPING_AW_5_SW_I_SW );
MAPPING_AW_5_CMP_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGSW_5_I_SW , MAPPING_AW_5_SW_I_SW );
MAPPING_AW_5_CMP_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGSW_5_I_SW , MAPPING_AW_5_SW_I_SW );
MAPPING_AW_5_OR_OR = OR_FUNCTION( MAPPING_AW_5_CMP_LT , MAPPING_AW_5_CMP_GT );
MAPPING_AW_5_SW_I_SW = I_SW_FUNCTION( MAPPING_AW_5_Z_ZMINUS1_B , MAPPING_AW_5_SW_I_SW , MAPPING_NEGSW_5_I_SW );
MAPPING_AW_5_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_AW_5_OR_OR );
MAPPING_MAPENBL1Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_MPENBLRST1_OR );
MAPPING_MAPENBL2Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( MAPPING_MPENBLRST2_OR );
MAPPING_MAP_ENBL1_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , DATA_IO_LL2_BW_V_98 , MAPPING_MAPENBL1Z_ZMINUS1_B , 0 );
MAPPING_MAP_ENBL2_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 0 , DATA_IO_RL2_BW_V_98 , MAPPING_MAPENBL2Z_ZMINUS1_B , 0 );
MAPPING_MAP_EN_OR_OR = OR_FUNCTION( MAPPING_MAP_ENBL1_T_FLIPFLOP , MAPPING_MAP_ENBL2_T_FLIPFLOP );
MAPPING_MPENBLRST1_OR = OR_FUNCTION( DATA_IO_RL2_BW_V_98 , CORE_DIGITAL_GEMAPINPUT );
MAPPING_MPENBLRST2_OR = OR_FUNCTION( DATA_IO_LL2_BW_V_98 , CORE_DIGITAL_GEMAPINPUT );
MAPPING_SMALLNEGS_I_TO_AN = I_TO_AN_FUNCTION( "OUT_1" , MAPPING_AW_5_SW_I_SW , 0 , MAPPING_AW_1_SW_I_SW , MAPPING_AW_2_SW_I_SW , MAPPING_AW_3_SW_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_SMALLNEGS_I_TO_AN = I_TO_AN_FUNCTION( "OUT_2" , MAPPING_AW_5_SW_I_SW , 0 , MAPPING_AW_1_SW_I_SW , MAPPING_AW_2_SW_I_SW , MAPPING_AW_3_SW_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_SMALLNEGS_I_TO_AN = I_TO_AN_FUNCTION( "OUT_3" , MAPPING_AW_5_SW_I_SW , 0 , MAPPING_AW_1_SW_I_SW , MAPPING_AW_2_SW_I_SW , MAPPING_AW_3_SW_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_SMALLNEGS_I_TO_AN = I_TO_AN_FUNCTION( "OUT_4" , MAPPING_AW_5_SW_I_SW , 0 , MAPPING_AW_1_SW_I_SW , MAPPING_AW_2_SW_I_SW , MAPPING_AW_3_SW_I_SW , MAPPING_AW_4_SW_I_SW );
MAPPING_SMALLNEGS_I_TO_AN = I_TO_AN_FUNCTION( "OUT_5" , MAPPING_AW_5_SW_I_SW , 0 , MAPPING_AW_1_SW_I_SW , MAPPING_AW_2_SW_I_SW , MAPPING_AW_3_SW_I_SW , MAPPING_AW_4_SW_I_SW );