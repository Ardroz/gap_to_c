A_ABALINR_ABALLIMIT_A_LIMITER = A_LIMITER_FUNCTION( 1 , A_ABALINR_BMODESW_A_SW , ADJ_TACSTCLMTJ_A_NAME , ADJ_TBLOWLMTJ_A_NAME );
A_ABALINR_BMODESW_A_SW = A_SW_FUNCTION( A_ABALINR_EABALSW_AND , A_ABALINR_TABALPVADD_ADD , A_EABAL_TABALI_E_A_NAME );
I_COMPARE_FUNCTION(0 , S_BRNREQ_BRNREQ_I_NAME,&A_ABALINR_BRNREQ_0_EQ,&A_ABALINR_BRNREQ_0_GT,&A_ABALINR_BRNREQ_0_LT);
A_ABALINR_EABALSW_AND = A_ABALINR_BRNREQ_0_GT && A_ABALINR_PX36SGTREF_A_COMPARE;
A_ABALINR_INNER_CLR_OR = A_ABALBCK_ABALBCKOUT_B_NAME || A_ABALINC_CLEAR_ABAL_B_NAME || A_ABALINR_N_XFRDONE_NOT;
A_ABALINR_INNER_RSET_OR = A_ABALSCAL_RESETABAL_B_NAME || A_TRIMWHOB_RESETINRB_B_NAME;
A_ABALINR_INR_RATE_A_SW = A_SW_FUNCTION( 1000 , A_ABALINC_CLEAR_ABAL_B_NAME , A_EABALRT_TABALRATE_A_NAME );
A_ABALINR_N_XFRDONE_NOT =! E_SEQUENCG_XFERDONE_B_NAME;
A_COMPARE_FUNCTION(0 , A_EABAL_ACC_REF_A_NAME , A_PX36AVG_PX36S_A_NAME,&A_ABALINR_PX36SGTREF_A_COMPARE,&A_ABALINR_PX36SGTREF_A_EQUAL);
A_ABALINR_SCALEMULT_MULTIPLY = A_ABALINR_TABITMP_A_SW * A_ABALSCAL_SCALEABAL_A_NAME;
A_ABALINR_TABALAVGPV_ZMINUS1 = A_ABALINR_TABALTRANS_A_SW;
A_ABALINR_TABALI_A_NAME = A_ABALINR_TABALIPV_ZMINUS1;
A_ABALINR_TABALINCSW_A_SW = A_SW_FUNCTION( 0 , A_ABALINC_TABALINC_A_NAME , A_ABALPERM_PERMIT_C_B_NAME );
A_ABALINR_TABALIPV_ZMINUS1 = A_ABALINR_SCALEMULT_MULTIPLY;
A_ABALINR_TABALIRT_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , A_ABALINR_INR_RATE_A_SW , A_ABALINR_INR_RATE_A_SW , A_ABALINR_TABALRTSW_A_SW , TRUE );
A_ABALINR_TABALPVADD_ADD = A_ABALINR_TABALAVGPV_ZMINUS1 + A_ABALINR_TABALINCSW_A_SW;
A_ABALINR_TABALRTSW_A_SW = A_SW_FUNCTION( 0 , A_ABALINR_ABALLIMIT_A_LIMITER , A_ABALINR_INNER_CLR_OR );
A_ABALINR_TABALTRANS_A_SW = A_SW_FUNCTION( 0 , A_ABALINR_INNER_RSET_OR , A_ABALINR_TABITMP_A_SW );
A_ABALINR_TABITMP_A_SW = A_SW_FUNCTION( A_ABALINR_ABALLIMIT_A_LIMITER , A_ABALINR_INNER_CLR_OR , A_ABALINR_TABALIRT_RATE_LIMIT );