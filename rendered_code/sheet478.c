S_BRNREQCI_ABOVIDLOR_OR = S_BRNREQCI_BRNDMXGS_GT || S_BRNREQCI_N25GTN25ID_A_COMPARE;
I_COMPARE_FUNCTION(0 , ADJ_BRNHISIJ_I_NAME,&S_BRNREQCI_BRNDMXGS_EQ,&S_BRNREQCI_BRNDMXGS_GT,&S_BRNREQCI_BRNDMXGS_LT);
DELAY_FUNCTION(1 , 0 , ADJ_CISTGDNJ_A_NAME , S_BRNREQCI_MINTFLAME_EQ,&S_BRNREQCI_CISTGDNDLY_DELAY,&S_BRNREQCI_CISTGDNDLY_R_TIME);
DELAY_FUNCTION(1 , 0 , ADJ_CISTGUPJ_A_NAME , S_BRNREQCI_MAXWFAND_AND,&S_BRNREQCI_CISTGUPDLY_DELAY,&S_BRNREQCI_CISTGUPDLY_R_TIME);
S_BRNREQCI_CITOSILOCK_OR = ADJ_STGUPCIENJ_B_NAME || S_BRNREQCI_N25ERRGTSP_A_COMPARE;
S_BRNREQCI_CI_STAGEDN_B_NAME = S_BRNREQCI_STAGEDN_OR;
S_BRNREQCI_CI_STAGEUP_B_NAME = S_BRNREQCI_STAGUPTMP_AND;
S_BRNREQCI_CI_STGRATE_A_NAME = S_BRNREQCI_STGRATETMP_A_SW;
A_COMPARE_FUNCTION(0 , 100 , S_BRNREQCI_ERRABS_ABSOLUTE,&S_BRNREQCI_CORE_IDLE_A_COMPARE,&S_BRNREQCI_CORE_IDLE_A_EQUAL);
I_COMPARE_FUNCTION(ADJ_BRNDMDSIJ_I_NAME , S_BRNDMDG_BRNDMDPV_I_NAME,&S_BRNREQCI_DMD_DMDSI_EQ,&S_BRNREQCI_DMD_DMDSI_GT,&S_BRNREQCI_DMD_DMDSI_LT);
S_BRNREQCI_ERRABS_ABSOLUTE = ABSOLUTE_FUNCTION( S_BRNREQCI_N25IDLERR_SUBTRACT );
A_COMPARE_FUNCTION(0 , R_N25REF_N25REF_A_NAME , R_N25SCHES_N25IDL_A_NAME,&S_BRNREQCI_IDLREFCMP_A_COMPARE,&S_BRNREQCI_IDLREFCMP_A_EQUAL);
I_COMPARE_FUNCTION(10 , R_ISSL_REGULATORI_I_NAME,&S_BRNREQCI_MAXTFLAME_EQ,&S_BRNREQCI_MAXTFLAME_GT,&S_BRNREQCI_MAXTFLAME_LT);
A_COMPARE_FUNCTION(0 , R_WF36DMD_WF36DMD_A_NAME , S_BRNREQCI_WFMXLIM_MULTIPLY,&S_BRNREQCI_MAXWF_A_COMPARE,&S_BRNREQCI_MAXWF_A_EQUAL);
S_BRNREQCI_MAXWFAND_AND = S_BRNREQCI_MAXTFLAME_EQ && S_BRNREQCI_MAXWF_A_COMPARE;
I_COMPARE_FUNCTION(5 , R_ISSL_REGULATORI_I_NAME,&S_BRNREQCI_MINTFLAME_EQ,&S_BRNREQCI_MINTFLAME_GT,&S_BRNREQCI_MINTFLAME_LT);
A_COMPARE_FUNCTION(0 , ADJ_STGUPN25JA_A_NAME , S_BRNREQCI_N25IDLERR_SUBTRACT,&S_BRNREQCI_N25ERRGTSP_A_COMPARE,&S_BRNREQCI_N25ERRGTSP_A_EQUAL);
A_COMPARE_FUNCTION(0 , I_N25_N25SEL_A_NAME , R_N25SCHES_N25IDL_A_NAME,&S_BRNREQCI_N25GTN25ID_A_COMPARE,&S_BRNREQCI_N25GTN25ID_A_EQUAL);
S_BRNREQCI_N25IDLERR_SUBTRACT = I_N25_N25SEL_A_NAME - R_N25SCHES_N25IDL_A_NAME;
S_BRNREQCI_N_PX36INHB_NOT =! S_PX36STDN_PX36INHIB_B_NAME;
S_BRNREQCI_N_STGDN_NOT =! S_BRNREQCI_STAGEDN_OR;
S_BRNREQCI_STAGEDN_OR = S_BRNREQCI_CISTGDNDLY_DELAY || S_BRNREQCI_STGDNENA_AND;
S_BRNREQCI_STAGRATE_A_SW = A_SW_FUNCTION( 0 , 25 , S_BRNREQCI_ST_STAG_OR );
S_BRNREQCI_STAGUPTMP_AND = S_BRNREQCI_ABOVIDLOR_OR && S_BRNREQCI_CISTGUPDLY_DELAY && S_BRNREQCI_CITOSILOCK_OR && S_BRNREQCI_DMD_DMDSI_LT && S_BRNREQCI_N_PX36INHB_NOT && S_BRNREQCI_N_STGDN_NOT;
S_BRNREQCI_STGDNENA_AND = S_BRNREQCI_CORE_IDLE_A_COMPARE && S_BRNREQCI_IDLREFCMP_A_COMPARE;
S_BRNREQCI_STGRATETMP_A_SW = A_SW_FUNCTION( 1 , S_BRNREQCI_STAGRATE_A_SW , S_BRNREQCI_STGDNENA_AND );
S_BRNREQCI_ST_STAG_OR = S_BRNREQCI_CISTGUPDLY_DELAY || S_BRNREQCI_STAGEDN_OR;
S_BRNREQCI_WFMXLIM_MULTIPLY = 0.95 * W_WFTFDM_G_WFMXPV_A_NAME;
