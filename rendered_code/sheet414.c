F_TFFLMGES_FFARFLFTMP_DIVIDE = F_BURNERES_F_WFC_A_NAME / F_TFFLMGES_F_WAFLGTMP_MULTIPLY;
F_TFFLMGES_F_DSFAR_CALCULATE = max ( 0.0 " " (F_TFFLMGES_FFARFLFTMP_DIVIDE - 0.055 ) ) *F_TFFLMGES_F_SLOPE_CALCULATE;
F_TFFLMGES_F_FARC_A_MIN = A_MIN_FUNCTION( 0.07499 , F_TFFLMGES_FFARFLFTMP_DIVIDE );
F_TFFLMGES_F_FARFLG_A_NAME = F_TFFLMGES_FFARFLFTMP_DIVIDE;
F_TFFLMGES_F_HFL_CALCULATE =  (F_INPUT_F_H3_A_NAME + (19000 + 283.575 ) *    f_farflg ) / ( 1.0 +F_TFFLMGES_FFARFLFTMP_DIVIDE +F_CMPBLDES_F_WAR36_A_NAME ) ;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFFLMGES_F_HFL_CALCULATE , T_HTOTFL,&F_TFFLMGES_F_HTOTFL_CURVES_2,&F_TFFLMGES_F_HTOTFL_REV_OUT);
F_TFFLMGES_F_PFLG_A_NAME = F_TFFLMGES_F_PFLGTMP_CALCULATE;
F_TFFLMGES_F_PFLGTMP_CALCULATE = 0.5 * (C_P3COR_P3EST_A_NAME +F_BURNERES_F_P4_A_NAME ) ;
F_TFFLMGES_F_SFAR_ADD = F_TFFLMGES_F_DSFAR_CALCULATE + F_TFFLMGES_T_HTOTMP_CURVES_3;
F_TFFLMGES_F_SLOPE_CALCULATE = min ( 0 " " ( (F_TFFLMGES_F_PFLGTMP_CALCULATE - 30.0 ) / 66.7 - 1.5 ) ) ;
F_TFFLMGES_F_TFLAMEG_CALCULATE = f_tfl *F_TFFLMGES_F_SFAR_ADD;
F_TFFLMGES_F_TFLCYCG_A_NAME = F_TFFLMGES_F_TFLCYCGT_SUBTRACT;
F_TFFLMGES_F_TFLCYCGT_SUBTRACT = 459.67 - F_TFFLMGES_F_TFLAMEG_CALCULATE;
F_TFFLMGES_F_WAFLG_A_NAME = F_TFFLMGES_F_WAFLGTMP_MULTIPLY;
F_TFFLMGES_F_WAFLGTMP_MULTIPLY = F_TFYTFHES_F_WA36_A_NAME * S_STGVLVG_SWCOMBGS_A_NAME;
F_TFFLMGES_TFLAMPCTG_A_NAME = F_TFFLMGES_TFLPCTGTMP_CALCULATE;
F_TFFLMGES_TFLPCTGTMP_CALCULATE =  ( (F_TFFLMGES_F_TFLCYCGT_SUBTRACT -L_TFLMBLKG_TFLMING_A_NAME ) /     (L_TFLMBLKG_TFLMAXG_A_NAME -L_TFLMBLKG_TFLMING_A_NAME ) ) * 100;
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , F_TFFLMGES_F_FARC_A_MIN , F_TFFLMGES_F_HFL_CALCULATE , T_HTOTMP,&F_TFFLMGES_T_HTOTMP_CURVES_3,&F_TFFLMGES_T_HTOTMP_REV_OUT);
