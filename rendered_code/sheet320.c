I_T3ES_T31A1BFL_AND = I_T3ES_T3A1OR2_OR && I_T3ES_T3B1OR2_OR;
I_T3ES_T3A1OR2_OR = I_T3ES_T3A1FAIL_B_NAME || I_T3ES_T3A2FAIL_B_NAME;
I_T3ES_T3ABABS_CALCULATE = fabs (I_T3ES_T3ASEL_A_NAME -I_T3ES_T3BSEL_A_NAME ) ;
I_T3ES_T3ABDFALM_B_NAME = I_T3ES_T3DFNOT_NOT;
I_T3ES_T3ABLOSS_AND = I_T3ES_T3AFAIL_B_NAME && I_T3ES_T3BFAIL_B_NAME;
A_COMPARE_FUNCTION(0 , 40 , I_T3ES_T3ABABS_CALCULATE,&I_T3ES_T3ABLT40_A_COMPARE,&I_T3ES_T3ABLT40_A_EQUAL);
I_T3ES_T3ABMX_A_MAX = A_MAX_FUNCTION( I_T3ES_T3ASEL_A_NAME , I_T3ES_T3BSEL_A_NAME );
I_T3ES_T3ADDR_ADD = C_SPR3MOD_SPRDELT3_A_NAME + I_T3ES_T3SELMUX_A_MUX_HSS;
I_T3ES_T3AVG_CALCULATE =  (I_T3ES_T3ASEL_A_NAME +I_T3ES_T3BSEL_A_NAME ) / 2;
I_T3ES_T3B1OR2_OR = I_T3ES_T3B1FAIL_B_NAME || I_T3ES_T3B2FAIL_B_NAME;
I_T3ES_T3DFNOT_NOT =! I_T3ES_T3ABLT40_A_COMPARE;
I_T3ES_T3LOSSSD_B_NAME = I_T3ES_T3ABLOSS_AND;
I_T3ES_T3SEL_A_NAME = I_T3ES_T3ADDR_ADD;
A_MUX_HSS_FUNCTION(1 , 200 , I_T3ES_T31A1BFL_AND , I_T3ES_T3A1OR2_OR , I_T3ES_T3AALM_B_NAME , I_T3ES_T3ABLOSS_AND , I_T3ES_T3ABLT40_A_COMPARE , I_T3ES_T3ABMX_A_MAX , I_T3ES_T3ABMX_A_MAX , I_T3ES_T3ASEL_A_NAME , I_T3ES_T3ASEL_A_NAME , I_T3ES_T3AVG_CALCULATE , I_T3ES_T3B1OR2_OR , I_T3ES_T3BALM_B_NAME , I_T3ES_T3BSEL_A_NAME , I_T3ES_T3BSEL_A_NAME,&I_T3ES_T3SELMUX_A_MUX_HSS,&I_T3ES_T3SELMUX_INT_SEL);
