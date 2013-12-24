L_SPRRNG_INRHPSW1_A_SW = A_SW_FUNCTION( L_SPRRNG_SPRCMAX_A_MAX , L_SPRRNG_T_ESPCRJ_CURVE_2D , U_H2OSOV_HPH2OSOV_B_NAME );
L_SPRRNG_INRHPSW2_A_SW = A_SW_FUNCTION( 0 , L_SPRRNG_T_SPRCRJ_CURVE_2D , U_H2OSOV_HPH2OSOV_B_NAME );
L_SPRRNG_INRLPSW_A_SW = A_SW_FUNCTION( L_SPRRNG_INRHPSW1_A_SW , L_SPRRNG_INRHPSW2_A_SW , U_H2OSOV_LPH2OSOV_B_NAME );
L_SPRRNG_INRSPRTLM_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , 100 , 100 , L_SPRRNG_INRSPSW_A_SW , TRUE );
L_SPRRNG_INRSPSW_A_SW = A_SW_FUNCTION( 0 , L_SPRRNG_INRLPSW_A_SW , U_ESPRINT_ZSPRINT_B_NAME );
L_SPRRNG_OTRHPSW1_A_SW = A_SW_FUNCTION( L_SPRRNG_SPRAMAX_A_MAX , L_SPRRNG_T_ESPARJ_CURVE_2D , U_H2OSOV_HPH2OSOV_B_NAME );
L_SPRRNG_OTRHPSW2_A_SW = A_SW_FUNCTION( 0 , L_SPRRNG_T_SPRARJ_CURVE_2D , U_H2OSOV_HPH2OSOV_B_NAME );
L_SPRRNG_OTRLPSW_A_SW = A_SW_FUNCTION( L_SPRRNG_OTRHPSW1_A_SW , L_SPRRNG_OTRHPSW2_A_SW , U_H2OSOV_LPH2OSOV_B_NAME );
L_SPRRNG_OTRSPRTLM_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , 100 , 100 , L_SPRRNG_OTRSPSW_A_SW , TRUE );
L_SPRRNG_OTRSPSW_A_SW = A_SW_FUNCTION( 0 , L_SPRRNG_OTRLPSW_A_SW , U_ESPRINT_ZSPRINT_B_NAME );
L_SPRRNG_SPRAMAX_A_MAX = A_MAX_FUNCTION( L_SPRRNG_T_ESPARJ_CURVE_2D , L_SPRRNG_T_SPRARJ_CURVE_2D );
L_SPRRNG_SPRCMAX_A_MAX = A_MAX_FUNCTION( L_SPRRNG_T_ESPCRJ_CURVE_2D , L_SPRRNG_T_SPRCRJ_CURVE_2D );
L_SPRRNG_TSPRINRNG_A_NAME = L_SPRRNG_INRSPRTLM_RATE_LIMIT;
L_SPRRNG_TSPROURNG_A_NAME = L_SPRRNG_OTRSPRTLM_RATE_LIMIT;
L_SPRRNG_T_ESPARJ_CURVE_2D = CURVE_2D_FUNCTION( 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20 , 22 , 24 , 26 , C_T25BIAS_ZWVI2_A_NAME );
L_SPRRNG_T_ESPCRJ_CURVE_2D = CURVE_2D_FUNCTION( -32.5 , -25 , -20 , -15 , 0 , 1 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 15 , 16 , 18 , 20 , 22 , 24 , 26 , 52 , 87 , 132 , 175 , 215 , 215 , 215 , 215 , 215 , C_T25BIAS_ZWVI2_A_NAME );
L_SPRRNG_T_SPRARJ_CURVE_2D = CURVE_2D_FUNCTION( 0 , 0 , 0 , 0 , 0 , 0 , 1 , 2 , 4 , 4 , 6 , 8 , 8 , 10 , 12 , 12 , 14 , 16 , 16 , 18 , 19 , 19 , 19 , 19 , 19 , 20 , 22 , 24 , 26 , C_T25BIAS_ZWVI25_A_NAME );
L_SPRRNG_T_SPRCRJ_CURVE_2D = CURVE_2D_FUNCTION( -32.5 , -20 , -8 , 0 , 1 , 2 , 4 , 5 , 6 , 8 , 10 , 12 , 14 , 15 , 16 , 18 , 20 , 22 , 24 , 25 , 26 , 32 , 50 , 67 , 85 , 85 , 85 , 85 , 85 , C_T25BIAS_ZWVI25_A_NAME );
