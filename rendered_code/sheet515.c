A_EABALON_EABALENA_AND = A_EABALON_PX36SGTACC_A_COMPARE && A_EABALON_STAGXFRDLY_DELAY;
A_EABALON_EABALON_B_NAME = A_EABALON_EABALONLTC_LATCH_R;
A_EABALON_EABALONLTC_LATCH_R = LATCH_R_FUNCTION(1,A_EABALON_EABALENA_AND,A_EABALON_EABALRSET_OR,A_EABALON_EABALONLTC_LATCH_R);
A_EABALON_EABALRSET_OR = A_EABALON_N_XFERDONE_NOT || A_EABALON_PXNGTACC_NOT || S_BRNSTATG_STAGING_B_NAME;
A_EABALON_FUELCHG_B_NAME = A_EABALON_FUELXOR_XOR;
A_EABALON_FUELXOR_XOR = XOR_FUNCTION( A_EABALON_XFRDNZ_ZMINUS1_B , E_SEQUENCG_XFERDONE_B_NAME );
A_EABALON_N_STAGING_NOT =! S_BRNSTATG_STAGING_B_NAME;
A_EABALON_N_XFERDONE_NOT =! E_SEQUENCG_XFERDONE_B_NAME;
A_COMPARE_FUNCTION(0 , A_EABAL_ACC_REFPV_A_NAME , A_PX36AVG_PX36S_A_NAME,&A_EABALON_PX36SGTACC_A_COMPARE,&A_EABALON_PX36SGTACC_A_EQUAL);
A_EABALON_PXNGTACC_NOT =! A_EABALON_PX36SGTACC_A_COMPARE;
DELAY_FUNCTION(1 , 0 , A_EABALON_XFDNNTSTAG_AND , ADJ_ABALDLYJ_A_NAME,&A_EABALON_STAGXFRDLY_DELAY,&A_EABALON_STAGXFRDLY_R_TIME);
A_EABALON_XFDNNTSTAG_AND = A_EABALON_N_STAGING_NOT && E_SEQUENCG_XFERDONE_B_NAME;
A_EABALON_XFRDNZ_ZMINUS1_B = E_SEQUENCG_XFERDONE_B_NAME;
