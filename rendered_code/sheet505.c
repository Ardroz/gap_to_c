A_COMPARE_FUNCTION(0 , B_BODYTFFH_B_N25FB_ZMINUS1 , E_LITEPT_N25SIATV_A_NAME,&B_BODYTFFH_BN25_LT_SI_A_COMPARE,&B_BODYTFFH_BN25_LT_SI_A_EQUAL);
B_BODYTFFH_BOD_RESET_OR = ADJ_BODRESETSW_B_NAME || B_BODYTFFH_N25SELLT3K_A_COMPARE;
B_BODYTFFH_B_GH25G_A_NAME = B_BODYTFFH_B_GH25GFB_ZMINUS1;
B_BODYTFFH_B_GH25GFB_ZMINUS1 = B_BODYTFFH_GH25G_INIT_A_SW;
B_BODYTFFH_B_GH25GFV_SUBTRACT = B_BODYTFFH_B_GH25GFB_ZMINUS1 - B_BODYTFFH_B_YTFFH_CALCULATE;
B_BODYTFFH_B_GH25GLIM_A_LIMITER = A_LIMITER_FUNCTION( 1 , 2.5 , -5 , B_BODYTFFH_B_GH25GFV_SUBTRACT );
B_BODYTFFH_B_HL41RG_A_NAME = B_BODYTFFH_B_HL41RGFB_ZMINUS1;
B_BODYTFFH_B_HL41RGFB_ZMINUS1 = B_BODYTFFH_B_HL41RGIN_A_SW;
B_BODYTFFH_B_HL41RGIN_A_SW = A_SW_FUNCTION( 0.008 , B_BODYTFFH_B_HL41RGTM_CALCULATE , B_BODYTFFH_BOD_RESET_OR );
B_BODYTFFH_B_HL41RGTM_CALCULATE = max ( 0.0 " " min ( 1.0 " " (B_BODYTFFH_B_HL41RGFB_ZMINUS1 + 0.5 *    b_yl41r ) ) ) ;
B_BODYTFFH_B_HL41RP_CALCULATE = b_h41ir * ( 1.0 -B_BODHPTFF_B_E42D4_A_NAME ) ;
B_BODYTFFH_B_N25_A_NAME = B_BODYTFFH_B_N25FB_ZMINUS1;
B_BODYTFFH_B_N25DOT_CALCULATE =  ( 70959.683 *B_BODYTFFH_B_YSHPH_SUBTRACT ) / ( 20.922 *B_BODYTFFH_B_N25FB_ZMINUS1 ) ;
B_BODYTFFH_B_N25FB_ZMINUS1 = B_BODYTFFH_B_N25INIT_A_SW;
B_BODYTFFH_B_N25FV_CALCULATE = max ( 100.0 " " min ( 13000.0 " " (B_BODYTFFH_B_N25FB_ZMINUS1 +B_BODYTFFH_B_N25FB_ZMINUS1dot *    0.16 ) ) ) ;
B_BODYTFFH_B_N25INIT_A_SW = A_SW_FUNCTION( B_BODYTFFH_B_N25FV_CALCULATE , B_BODYTFFH_INIT_BN25_OR , I_N25_N25SEL_A_NAME );
B_BODYTFFH_B_PW4_MULTIPLY = B_BDHPTPES_B_T41_A_NAME * B_BDHPTPES_B_W41_A_NAME * B_BODHPTWK_B_H41R_A_NAME;
B_BODYTFFH_B_W41R_CALCULATE =  (B_BDHPTPES_B_W41_A_NAME *B_BODHPTWK_B_SQT41_A_NAME ) /B_BDBURNES_B_P4_A_NAME;
B_BODYTFFH_B_W41RJ_CALCULATE = b_wrb41 * 1.7667 * ( 1.0411e - 5 *    b_t41 + 0.97096 ) ;
B_BODYTFFH_B_YL41R_SUBTRACT = B_BODYTFFH_B_HL41RGFB_ZMINUS1 - B_BODYTFFH_B_HL41RP_CALCULATE;
B_BODYTFFH_B_YSHPH_SUBTRACT = B_BDCOMPES_B_PW25_A_NAME - B_BODYTFFH_B_PW4_MULTIPLY;
B_BODYTFFH_B_YTFFH_CALCULATE =  (B_BODYTFFH_B_W41RJ_CALCULATE -B_BODYTFFH_B_W41R_CALCULATE ) * 0.031949;
B_BODYTFFH_GH25G_INIT_A_SW = A_SW_FUNCTION( 0 , B_BODYTFFH_B_GH25GLIM_A_LIMITER , B_BODYTFFH_BOD_RESET_OR );
B_BODYTFFH_INIT_BN25_OR = B_BODYTFFH_BN25_LT_SI_A_COMPARE || B_BODYTFFH_BOD_RESET_OR || B_BODYTFFH_N25_LT_SI_A_COMPARE;
A_COMPARE_FUNCTION(0 , 3000 , I_N25_N25SEL_A_NAME,&B_BODYTFFH_N25SELLT3K_A_COMPARE,&B_BODYTFFH_N25SELLT3K_A_EQUAL);
A_COMPARE_FUNCTION(0 , E_LITEPT_N25SIATV_A_NAME , I_N25_N25SEL_A_NAME,&B_BODYTFFH_N25_LT_SI_A_COMPARE,&B_BODYTFFH_N25_LT_SI_A_EQUAL);
