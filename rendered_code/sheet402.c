L_TFLMRGES_TFLOREFG_A_NAME = L_TFLMRGES_TFLOREFGTP_CALCULATE;
L_TFLMRGES_TFLOREFGTP_CALCULATE =  ( (L_TFLMRGES_TFLOTRHI_A_MUX_HSS -L_TFLMRGES_TFLOTRLO_A_MUX_HSS ) *S_BRNSTATG_BRNSCALER_A_NAME +    tflotrlo ) +ADJ_TFLOSCHJA_A_NAME +A_ABALOTR_TABALO_A_NAME +    tflotrtrg +L_TFXFRBS_OTRXFRBIAS_A_NAME +L_SPRRNG_TSPROURNG_A_NAME;
A_MUX_HSS_FUNCTION(1 , ADJ_TFIGNGASJ_A_NAME , L_TFLMRGES_T_RGOG0J_CURVE_2D , L_TFLMRGES_T_RGOG0J_CURVE_2D , L_TFLMRGES_T_RGOG0J_CURVE_2D , L_TFLMRGES_T_RGOG1J_CURVE_2D , L_TFLMRGES_T_RGOG2J_CURVE_2D , L_TFLMRGES_T_RGOG2J_CURVE_2D , L_TFLMRGES_T_RGOG2J_CURVE_2D , L_TFLMRGES_T_RGOG3J_CURVE_2D , L_TFSW_BRNDMDLT10_B_NAME , L_TFSW_BRNDMDLT3_B_NAME , L_TFSW_BRNDMDLT5_B_NAME , L_TFSW_BRNDMDLT7_B_NAME , L_TFSW_DMD13A13SW_B_NAME , L_TFSW_DMD15A13SW_B_NAME , L_TFSW_DMD15N13SW_B_NAME , L_TFSW_OTRLITFLM_B_NAME,&L_TFLMRGES_TFLOTRHI_A_MUX_HSS,&L_TFLMRGES_TFLOTRHI_INT_SEL);
A_MUX_HSS_FUNCTION(1 , L_TFLMRGES_T_RGOG0J_CURVE_2D , L_TFLMRGES_T_RGOG1J_CURVE_2D , L_TFLMRGES_T_RGOG1J_CURVE_2D , L_TFLMRGES_T_RGOG3J_CURVE_2D , L_TFLMRGES_TFLOTRHI_A_MUX_HSS , L_TFLMRGES_TFLOTRHI_A_MUX_HSS , L_TFLMRGES_TFLOTRHI_A_MUX_HSS , L_TFLMRGES_TFLOTRHI_A_MUX_HSS , L_TFLMRGES_TFLOTRHI_A_MUX_HSS , L_TFSW_BRNDMDLT10_B_NAME , L_TFSW_BRNDMDLT3_B_NAME , L_TFSW_BRNDMDLT5_B_NAME , L_TFSW_BRNDMDLT7_B_NAME , L_TFSW_DMD13A13SW_B_NAME , L_TFSW_DMD15A13SW_B_NAME , L_TFSW_DMD15N13SW_B_NAME , L_TFSW_OTRLITFLM_B_NAME,&L_TFLMRGES_TFLOTRLO_A_MUX_HSS,&L_TFLMRGES_TFLOTRLO_INT_SEL);
L_TFLMRGES_T_RGOG0J_CURVE_2D = CURVE_2D_FUNCTION( 1 , 3090 , 3090 , 3090 , 3100 , 3115 , 3190 , 3250 , 3290 , 3300 , 3300 , 3300 , 690 , 700 , 725 , 750 , 775 , 800 , 825 , 850 , 875 , 900 , 910 , I_T3ES_T3SEL_A_NAME );
L_TFLMRGES_T_RGOG1J_CURVE_2D = CURVE_2D_FUNCTION( 1 , 2870 , 2870 , 2870 , 2870 , 2870 , 2893 , 2907 , 2910 , 2910 , 2910 , 2910 , 2910 , 2910 , 2910 , 690 , 700 , 725 , 750 , 775 , 800 , 825 , 850 , 875 , 900 , 925 , 950 , 975 , 985 , I_T3ES_T3SEL_A_NAME );
L_TFLMRGES_T_RGOG2J_CURVE_2D = CURVE_2D_FUNCTION( 1 , 2850 , 2850 , 2850 , 2850 , 2850 , 2875 , 2900 , 2905 , 2905 , 2905 , 2905 , 2905 , 2905 , 1000 , 1025 , 1050 , 1060 , 790 , 800 , 825 , 850 , 875 , 900 , 925 , 950 , 975 , I_T3ES_T3SEL_A_NAME );
L_TFLMRGES_T_RGOG3J_CURVE_2D = CURVE_2D_FUNCTION( 1 , 2850 , 2850 , 2850 , 2850 , 2850 , 2875 , 2900 , 2905 , 2905 , 2905 , 2905 , 2905 , 2905 , 2905 , 2905 , 1000 , 1025 , 1050 , 1060 , 740 , 750 , 775 , 800 , 825 , 850 , 875 , 900 , 925 , 950 , 975 , I_T3ES_T3SEL_A_NAME );
