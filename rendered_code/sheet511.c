A_ABALINC_ABALON_B_NAME = M_DATALON_ABALON_B_NAME;
A_ABALINC_ABALPLSTMP_AND = A_ABALINC_ABAL_ON_OR_OR && A_ABALINC_N_CLEAR_NOT && M_DATALON_ABALON_B_NAME;
A_ABALINC_ABAL_ON_OR_OR = A_ABALINC_ACSTCTMREN_AND || A_ABALINC_BLOWTMREN_AND;
A_ABALINC_ABAL_PULSE_B_NAME = A_ABALINC_ABALPLSTMP_AND;
A_ABALINC_ABCTABALI_ABSOLUTE = ABSOLUTE_FUNCTION( A_ABALINR_TABALI_A_NAME );
A_ABALINC_ABSTABALBK_ABSOLUTE = ABSOLUTE_FUNCTION( A_ABALAVG_TABALBULK_A_NAME );
A_ABALINC_ABSTABALO_ABSOLUTE = ABSOLUTE_FUNCTION( A_ABALOTR_TABALO_A_NAME );
DELAY_FUNCTION(1 , 0 , 0.96 , A_ABALINC_ACSTCTMREN_AND,&A_ABALINC_ACSTCTMR_DELAY,&A_ABALINC_ACSTCTMR_R_TIME);
A_ABALINC_ACSTCTMREN_AND = A_ABALINC_B_ACST_AND && A_ABALINC_N_TMRABAL1_NOT;
DELAY_FUNCTION(1 , 0 , 0.96 , A_ABALINC_BLOWTMREN_AND,&A_ABALINC_BLOWTMR_DELAY,&A_ABALINC_BLOWTMR_R_TIME);
A_ABALINC_BLOWTMREN_AND = A_ABALINC_BMODESW_B_SW && A_ABALINC_N_TMRABAL2_NOT && A_ABALTST_T_BLOWOUT_B_NAME;
A_ABALINC_BMODESW_B_SW = B_SW_FUNCTION( A_ABALINC_BRNDMD_0_EQ , A_ABALINC_N_TACOUST_NOT , A_ABALINC_PX36SLTREF_A_COMPARE );
I_COMPARE_FUNCTION(0 , S_BRNDMDG_BRNDMD_I_NAME,&A_ABALINC_BRNDMD_0_EQ,&A_ABALINC_BRNDMD_0_GT,&A_ABALINC_BRNDMD_0_LT);
A_ABALINC_B_ACST_AND = A_ABALINC_BRNDMD_0_EQ && A_ABALTST_T_ACOUSTIC_B_NAME;
  bool A_ABALINC_CLEAR_LAST_TRIGGER;
ONE_SHOT_FUNCTION(0 , 1 , 0.5 , A_ABALINC_CLEAR_OR_OR,&A_ABALINC_CLEAR_ONE_SHOT,&A_ABALINC_CLEAR_R_TIME,&A_ABALINC_CLEAR_LAST_TRIGGER);
DELAY_FUNCTION(1 , 0 , A_ABALINC_CLEARENA_AND , ADJ_EABLRSTMRJ_A_NAME,&A_ABALINC_CLEARDLY_DELAY,&A_ABALINC_CLEARDLY_R_TIME);
A_ABALINC_CLEARENA_AND = A_ABALINC_CLRTMRRST_NOT && A_ABALINC_PS36S_REF_A_COMPARE && A_ABALINC_STRT_BCK_OR && ADJ_ENBLCLRSW_B_NAME;
A_ABALINC_CLEAR_ABAL_B_NAME = A_ABALINC_CLEAR_ONE_SHOT;
A_ABALINC_CLEAR_OR_OR = A_ABALINC_CLEARDLY_DELAY || M_DATALON_CLEARABAL_B_NAME;
A_ABALINC_CLRTMRFB_ZMINUS1_B = A_ABALINC_CLEARDLY_DELAY;
A_ABALINC_CLRTMRRST_NOT =! A_ABALINC_CLRTMRFB_ZMINUS1_B;
A_ABALINC_N_CLEAR_NOT =! A_ABALINC_CLEAR_ONE_SHOT;
A_ABALINC_N_TACOUST_NOT =! A_ABALTST_T_ACOUSTIC_B_NAME;
A_ABALINC_N_TMRABAL1_NOT =! A_ABALINC_TMRABAL1_ZMINUS1_B;
A_ABALINC_N_TMRABAL2_NOT =! A_ABALINC_TMRABAL2_ZMINUS1_B;
A_COMPARE_FUNCTION(0 , A_ABALINC_PX36SPV_ZMINUS1 , A_EABAL_ACC_REFPV_A_NAME,&A_ABALINC_PS36S_REF_A_COMPARE,&A_ABALINC_PS36S_REF_A_EQUAL);
A_COMPARE_FUNCTION(0 , A_EABAL_ACC_REFPV_A_NAME , A_PX36AVG_PX36S_A_NAME,&A_ABALINC_PX36SLTREF_A_COMPARE,&A_ABALINC_PX36SLTREF_A_EQUAL);
A_ABALINC_PX36SPV_ZMINUS1 = A_PX36AVG_PX36S_A_NAME;
A_ABALINC_STRT_BCK_OR = A_ABALINC_TABALBGT01_A_COMPARE || A_ABALINC_TABALIGT01_A_COMPARE || A_ABALINC_TABALOGT01_A_COMPARE;
A_ABALINC_TABAINCTMP_A_SW = A_SW_FUNCTION( 0 , A_ABALINC_ABALPLSTMP_AND , A_ABALINC_TABAL_SW_A_SW );
A_COMPARE_FUNCTION(0 , 0.1 , A_ABALINC_ABSTABALBK_ABSOLUTE,&A_ABALINC_TABALBGT01_A_COMPARE,&A_ABALINC_TABALBGT01_A_EQUAL);
A_COMPARE_FUNCTION(0 , 0.1 , A_ABALINC_ABCTABALI_ABSOLUTE,&A_ABALINC_TABALIGT01_A_COMPARE,&A_ABALINC_TABALIGT01_A_EQUAL);
A_ABALINC_TABALINC_A_NAME = A_ABALINC_TABAINCTMP_A_SW;
A_COMPARE_FUNCTION(0 , 0.1 , A_ABALINC_ABSTABALO_ABSOLUTE,&A_ABALINC_TABALOGT01_A_COMPARE,&A_ABALINC_TABALOGT01_A_EQUAL);
A_ABALINC_TABAL_SW_A_SW = A_SW_FUNCTION( 20 , A_ABALINC_B_ACST_AND , ADJ_ABLINCBACJ_A_NAME );
A_ABALINC_TMRABAL1_ZMINUS1_B = A_ABALINC_ACSTCTMR_DELAY;
A_ABALINC_TMRABAL2_ZMINUS1_B = A_ABALINC_BLOWTMR_DELAY;
