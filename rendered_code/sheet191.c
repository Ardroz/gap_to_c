GAS_CHROM_CP_CV_1_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_C6_CALCULATE , 1_062 , 0_01 );
GAS_CHROM_CP_CV_10_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_CO2_SW_A_SW , 1_295 , 0_01 );
GAS_CHROM_CP_CV_11_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_ETHANE_CALCULATE , 1_194 , 0_01 );
GAS_CHROM_CP_CV_2_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_PROPANE_CALCULATE , 1_132 , 0_01 );
GAS_CHROM_CP_CV_3_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_IBUTANE_CALCULATE , 1_106 , 0_01 );
GAS_CHROM_CP_CV_4_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_NBUTANE_CALCULATE , 1_094 , 0_01 );
GAS_CHROM_CP_CV_5_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_NEOPENTANE_CALCULATE , 0_01 , *1_074 (0_8, 2_0) );
GAS_CHROM_CP_CV_6_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_IPENTANE_CALCULATE , 1_074 , 0_01 );
GAS_CHROM_CP_CV_7_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_NPENTANE_CALCULATE , 1_074 , 0_01 );
GAS_CHROM_CP_CV_8_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_N2_SW_A_SW , 1_4 , 0_01 );
GAS_CHROM_CP_CV_9_MULTIPLY = MULTIPLY_FUNCTION( 0 , GAS_CHROM_METHANE_C_CALCULATE , 1_311 , 0_01 );
GAS_CHROM_K_A_NAME = A_NAME_FUNCTION( GAS_CHROM_K_RATE_RAMP );
GAS_CHROM_K_LIMIT_HSS_BUS = HSS_BUS_FUNCTION( "HSS_BUS" , 0 , 0_0 , GAS_CHROM_SUM_CPCV_ADD , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_LIMIT_HSS_BUS = HSS_BUS_FUNCTION( "LO_LIM_I" , 0 , 0_0 , GAS_CHROM_SUM_CPCV_ADD , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_LIMIT_HSS_BUS = HSS_BUS_FUNCTION( "HI_LIM_I" , 0 , 0_0 , GAS_CHROM_SUM_CPCV_ADD , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_LIMIT_HSS_BUS = HSS_BUS_FUNCTION( "SEL_1" , 0 , 0_0 , GAS_CHROM_SUM_CPCV_ADD , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_LIMIT_HSS_BUS = HSS_BUS_FUNCTION( "SEL_2" , 0 , 0_0 , GAS_CHROM_SUM_CPCV_ADD , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_LWR_B_NAME = B_NAME_FUNCTION(  , 0 );
GAS_CHROM_K_RAISE_B_NAME = B_NAME_FUNCTION(  , 0 );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "RAMP" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "REV_RAMP" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "MOVING_UP" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "MOVING_DN" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "POS_SEL" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "P_LIM_1" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "P_LIM_2" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "P_LIM_3" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_K_RATE_RAMP = RAMP_FUNCTION( "P_LIM_4" , 0 , 0 , 1_28 , 0 , TIMERS_TEST_TRUE_B_NAME , 1_31 , GAS_CHROM_NOTMANUAL_NOT , GAS_CHROM_K_LIMIT_HSS_BUS , GAS_CHROM_K_LWR_B_NAME , GAS_CHROM_K_RAISE_B_NAME , FALSE , 0_0 , *0_004 (0_0004, 0_2) , *1_28 (1_0, 1_4) , *1_32 (1_0, 1_4) );
GAS_CHROM_MANUAL_K_B_NAME = B_NAME_FUNCTION(  , 0 );
GAS_CHROM_NOTMANUAL_NOT = NOT_FUNCTION( GAS_CHROM_MANUAL_K_B_NAME );
GAS_CHROM_SUM_CPCV_ADD = ADD_FUNCTION( 0 , GAS_CHROM_CP_CV_1_MULTIPLY , GAS_CHROM_CP_CV_2_MULTIPLY , GAS_CHROM_CP_CV_3_MULTIPLY , GAS_CHROM_CP_CV_4_MULTIPLY , GAS_CHROM_CP_CV_5_MULTIPLY , GAS_CHROM_CP_CV_6_MULTIPLY , GAS_CHROM_CP_CV_7_MULTIPLY , GAS_CHROM_CP_CV_8_MULTIPLY , GAS_CHROM_CP_CV_9_MULTIPLY , GAS_CHROM_CP_CV_10_MULTIPLY , GAS_CHROM_CP_CV_11_MULTIPLY );
