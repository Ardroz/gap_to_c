S_OTRIGNG_IGN1GAS_B_NAME = S_OTRIGNG_IGN1GASTMP_AND;
S_OTRIGNG_IGN1GASTMP_AND = E_SEQUENCG_IGN1DMD_B_NAME && S_OTRIGNG_N25LT4600_A_COMPARE;
S_OTRIGNG_IGN2GAS_B_NAME = S_OTRIGNG_IGN2GASTMP_AND;
S_OTRIGNG_IGN2GASTMP_AND = E_SEQUENCG_IGN2DMD_B_NAME && S_OTRIGNG_N25LT4600_A_COMPARE;
S_OTRIGNG_IGN_CUPS_ADD = S_OTRIGNG_STAG04_A_SW + S_OTRIGNG_STAG09_11_A_SW;
S_OTRIGNG_MIN_OTRCUP_A_MIN = A_MIN_FUNCTION( 18 , S_OTRIGNG_IGN_CUPS_ADD );
A_COMPARE_FUNCTION(0 , 4600 , I_N25_N25SEL_A_NAME,&S_OTRIGNG_N25LT4600_A_COMPARE,&S_OTRIGNG_N25LT4600_A_EQUAL);
S_OTRIGNG_OTRIGNLIM_A_NAME = S_OTRIGNG_MIN_OTRCUP_A_MIN;
S_OTRIGNG_STAG04_A_SW = A_SW_FUNCTION( 0 , 6 , S_OTRIGNG_IGN1GASTMP_AND );
S_OTRIGNG_STAG09_11_A_SW = A_SW_FUNCTION( 0 , 12 , S_OTRIGNG_IGN2GASTMP_AND );
