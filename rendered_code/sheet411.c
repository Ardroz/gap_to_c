F_HPTWK_F_H41R_CALCULATE = f_pw4 / (F_HPTPES_F_W41_A_NAME *F_HPTPES_F_T41_A_NAME ) ;
F_HPTWK_F_HRM41_A_NAME = F_HPTWK_F_HRM41TMP_MULTIPLY;
F_HPTWK_F_HRM41TMP_MULTIPLY = 1.08397 * F_GAMXES_F_SNGC41_A_NAME * F_GAMXES_F_SNGC41_A_NAME * F_HPTWK_F_H41R_CALCULATE;
F_HPTWK_F_PW4_ADD = F_CMPBLDES_F_PW25_A_NAME + F_HPTWK_F_YSHPH_CALCULATE;
F_HPTWK_F_SQT41_A_NAME = F_HPTWK_F_SQT41TMP_SQRT;
F_HPTWK_F_SQT41TMP_SQRT = SQRT_FUNCTION( 1 , F_HPTPES_F_T41_A_NAME );
F_HPTWK_F_XNR41TMP_CALCULATE =  (F_INPUT_F_N25SEL_A_NAME /F_HPTWK_F_SQT41TMP_SQRT ) *F_GAMXES_F_SNGC41_A_NAME * 1.19641;
F_HPTWK_F_XNRM41_A_NAME = F_HPTWK_F_XNR41TMP_CALCULATE;
F_HPTWK_F_YSHPH_CALCULATE =  (C_N25B_N25DOT_A_NAME * 20.922 *F_INPUT_F_N25SEL_A_NAME ) / 70959.683;
