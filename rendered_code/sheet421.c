F_TFRNGGES_F_DSFARO_CALCULATE = max ( 0 " " (F_TFRNGGES_F_FARFLO_CALCULATE - 0.055 ) ) *F_TFRNGGES_F_SLOPE_A_NAME;
F_TFRNGGES_F_FARCO_A_MIN = A_MIN_FUNCTION( 0.07499 , F_TFRNGGES_F_FARFLO_CALCULATE );
F_TFRNGGES_F_FARFLO_CALCULATE = wfotrm / ( 3600 *F_TFRNGGES_F_WAFLO_CALCULATE ) ;
F_TFRNGGES_F_FAROBR_CALCULATE = min (F_TFRNGGES_F_FARFLO_CALCULATE " " 0.0043551 /     (F_TFRNGGES_F_FARFLO_CALCULATE + 1E - 06 ) ) ;
F_TFRNGGES_F_HFLO_CALCULATE = max (F_INPUT_F_H3_A_NAME " " ( (F_INPUT_F_H3_A_NAME +I_LHV_LHVSELGS_A_NAME *    f_farobr + 283.575 *F_TFRNGGES_F_FARFLO_CALCULATE ) /     ( 1.0 +F_TFRNGGES_F_FARFLO_CALCULATE +F_CMPBLDES_F_WAR36_A_NAME ) ) ) ;
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , F_TFRNGGES_F_FARCO_A_MIN , F_TFRNGGES_F_HFLO_CALCULATE , T_HTOTMP,&F_TFRNGGES_F_SFARO_CURVES_3,&F_TFRNGGES_F_SFARO_REV_OUT);
F_TFRNGGES_F_TFLODF_A_NAME = F_TFRNGGES_F_TFODFTMP_CALCULATE;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFRNGGES_F_HFLO_CALCULATE , T_HTOTFL,&F_TFRNGGES_F_TFLOP_CURVES_2,&F_TFRNGGES_F_TFLOP_REV_OUT);
F_TFRNGGES_F_TFODFTMP_CALCULATE = f_tflop * (F_TFRNGGES_F_SFARO_CURVES_3 +F_TFRNGGES_F_DSFARO_CALCULATE ) - 459.67;
F_TFRNGGES_F_WAFLO_CALCULATE = max ( 0.000001 " " (S_STGDMDG_OTRDMDGS_A_NAME *S_STGVLVG_SWCOMBOGS_A_NAME *    f_wa36 ) ) ;