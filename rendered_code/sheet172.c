MAPPING_ADDNEG_10_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_10_OUT_1 , *-1 (-1, 1) );
MAPPING_ADDNEG_11_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_11_OUT_1 , *-1 (-1, 1) );
MAPPING_ADDNEG_6_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_6_OUT_1 , *-1 (-1, 1) );
MAPPING_ADDNEG_7_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_7_OUT_1 , *-1 (-1, 1) );
MAPPING_ADDNEG_8_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_8_OUT_1 , *-1 (-1, 1) );
MAPPING_ADDNEG_9_I_ADD = I_ADD_FUNCTION( 0 , MAPPING_NEGIN_9_OUT_1 , *-1 (-1, 1) );
MAPPING_NEGIN_10_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_TFLOSCHJAF );
MAPPING_NEGIN_11_A_TO_INT = A_TO_INT_FUNCTION( 0 , 0_0 );
MAPPING_NEGIN_6_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_TFLDMDJAFB );
MAPPING_NEGIN_7_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_TFLMAXJAFB );
MAPPING_NEGIN_8_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_TFLMINJAFB );
MAPPING_NEGIN_9_A_TO_INT = A_TO_INT_FUNCTION( 0 , CORE_ANALOG_TFLISCHJAF );
MAPPING_NEGSW_10_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_10_LT , MAPPING_NEGIN_10_OUT_1 , MAPPING_ADDNEG_10_I_ADD );
MAPPING_NEGSW_11_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_11_LT , MAPPING_NEGIN_11_OUT_1 , MAPPING_ADDNEG_11_I_ADD );
MAPPING_NEGSW_7_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_7_LT , MAPPING_NEGIN_7_OUT_1 , MAPPING_ADDNEG_7_I_ADD );
MAPPING_NEGSW_8_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_8_LT , MAPPING_NEGIN_8_OUT_1 , MAPPING_ADDNEG_8_I_ADD );
MAPPING_NEGSW_9_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_9_LT , MAPPING_NEGIN_9_OUT_1 , MAPPING_ADDNEG_9_I_ADD );
MAPPING_NEG_CHK_10_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_10_OUT_1 , 0 );
MAPPING_NEG_CHK_10_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_10_OUT_1 , 0 );
MAPPING_NEG_CHK_10_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_10_OUT_1 , 0 );
MAPPING_NEG_CHK_11_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_11_OUT_1 , 0 );
MAPPING_NEG_CHK_11_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_11_OUT_1 , 0 );
MAPPING_NEG_CHK_11_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_11_OUT_1 , 0 );
MAPPING_NEG_CHK_6_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_6_OUT_1 , 0 );
MAPPING_NEG_CHK_6_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_6_OUT_1 , 0 );
MAPPING_NEG_CHK_6_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_6_OUT_1 , 0 );
MAPPING_NEG_CHK_7_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_7_OUT_1 , 0 );
MAPPING_NEG_CHK_7_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_7_OUT_1 , 0 );
MAPPING_NEG_CHK_7_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_7_OUT_1 , 0 );
MAPPING_NEG_CHK_8_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_8_OUT_1 , 0 );
MAPPING_NEG_CHK_8_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_8_OUT_1 , 0 );
MAPPING_NEG_CHK_8_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_8_OUT_1 , 0 );
MAPPING_NEG_CHK_9_I_COMPARE = I_COMPARE_FUNCTION( "EQ" , MAPPING_NEGIN_9_OUT_1 , 0 );
MAPPING_NEG_CHK_9_I_COMPARE = I_COMPARE_FUNCTION( "LT" , MAPPING_NEGIN_9_OUT_1 , 0 );
MAPPING_NEG_CHK_9_I_COMPARE = I_COMPARE_FUNCTION( "GT" , MAPPING_NEGIN_9_OUT_1 , 0 );
MAPPING_NEQSW_6_I_SW = I_SW_FUNCTION( MAPPING_NEG_CHK_6_LT , MAPPING_NEGIN_6_OUT_1 , MAPPING_ADDNEG_6_I_ADD );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_1" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_2" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_3" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_4" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_5" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );
MAPPING_SMALLNEGS2_I_TO_AN = I_TO_AN_FUNCTION( "OUT_6" , 0 , MAPPING_NEQSW_6_I_SW , MAPPING_NEGSW_7_I_SW , MAPPING_NEGSW_8_I_SW , MAPPING_NEGSW_9_I_SW , MAPPING_NEGSW_10_I_SW , MAPPING_NEGSW_11_I_SW );