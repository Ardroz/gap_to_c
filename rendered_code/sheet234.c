DELAY_FUNCTION(1 , 180 , 0 , GLUB_EITHER_ON_OR,&GLUB_AC_PMPDLY2_DELAY,&GLUB_AC_PMPDLY2_R_TIME);
GLUB_GENRNDNNDE_B_SW = B_SW_FUNCTION( GLUB_FREQ_60_NOT , GLUB_LS_6042_B_NAME , GLUB_RNDN_NDE60_AND );
GLUB_GENRNDNOK_AND = GLUB_GENRNDN_DE_B_SW && GLUB_GENRNDNNDE_B_SW && GLUB_FREQ_50_B_NAME;
GLUB_GENRNDN_DE_B_SW = B_SW_FUNCTION( GLUB_FREQ_60_NOT , GLUB_LS_6041_B_NAME , GLUB_RNDN_DE_60_AND );
GLUB_GEN_ABRT1_AND = GLUB_GNRNDFL_OR && SFC_STEP_GLUB_SFC_STEP;
GLUB_GEN_ABRT2_AND = GLUB_RNDNNDEMSK_AND && SFC_STEP_GLUB_SFC_STEP;
GLUB_GNRNDFL_OR = GLUB_GNRNDNAAND_AND || GLUB_RNDNDE_MSK_AND || GLUB_GNRNDNBAND_AND;
GLUB_GNRNDNAAND_AND = GLUB_GNRNDN_AFL_NOT && GLUB_AC_PMPDLY2_DELAY && GLUB_RNDN_SWTCH_B_NAME;
GLUB_GNRNDNAMSK_AND = GLUB_GNRNDNAAND_AND && GLUB_FREQ_50_B_NAME;
GLUB_GNRNDNANDE_AND = GLUB_RNDNNDEAFL_NOT && GLUB_AC_PMPDLY2_DELAY && GLUB_RNDN_SWTCH_B_NAME;
GLUB_GNRNDNA_DE_AND = GLUB_RNDNDE_AFL_NOT && GLUB_AC_PMPDLY2_DELAY;
GLUB_GNRNDNBAND_AND = GLUB_AC_PMPDLY2_DELAY && GLUB_GNRNDN_BFL_NOT && GLUB_RNDN_SWTCH_B_NAME;
GLUB_GNRNDNBMSK_AND = GLUB_GNRNDNBAND_AND && GLUB_FREQ_50_B_NAME;
GLUB_GNRNDNBNDE_AND = GLUB_RNDNNDEBFL_NOT && GLUB_AC_PMPDLY2_DELAY && GLUB_RNDN_SWTCH_B_NAME;
GLUB_GNRNDNB_DE_AND = GLUB_RNDNDE_BFL_NOT && GLUB_AC_PMPDLY2_DELAY;
GLUB_GNRNDNOK_OR = GLUB_GENRNDNOK_AND || GLUB_RNDN_OK_AND;
GLUB_GNRNDN_AFL_NOT =! GLUB_GENRNDN_DE_B_SW;
GLUB_GNRNDN_BFL_NOT =! GLUB_GENRNDNNDE_B_SW;
GLUB_GNRNDN_OK_B_NAME = GLUB_GNRNDNOK_OR;
GLUB_GRNDNABRT1_B_NAME = GLUB_GEN_ABRT1_AND;
GLUB_GRNDNABRT2_B_NAME = GLUB_GEN_ABRT2_AND;
GLUB_LS6041A_B_NAME = FALSE;
GLUB_LS6041AALM_B_NAME = GLUB_RNDNDEAMSK_AND;
GLUB_LS6041ALM_B_NAME = GLUB_GNRNDNAMSK_AND;
GLUB_LS6041B_B_NAME = FALSE;
GLUB_LS6041BALM_B_NAME = GLUB_RNDNDEBMSK_AND;
GLUB_LS6042A_B_NAME = FALSE;
GLUB_LS6042AALM_B_NAME = GLUB_RNDNNDEAMK_AND;
GLUB_LS6042ALM_B_NAME = GLUB_GNRNDNBMSK_AND;
GLUB_LS6042B_B_NAME = FALSE;
GLUB_LS6042BALM_B_NAME = GLUB_RNDNNDEBMK_AND;
GLUB_LS_6041_B_NAME = FALSE;
GLUB_LS_6042_B_NAME = FALSE;
GLUB_RNDNDEAMSK_AND = GLUB_GNRNDNA_DE_AND && GLUB_FREQ_60_NOT && GLUB_RNDN_SWTCH_B_NAME;
GLUB_RNDNDEBMSK_AND = GLUB_GNRNDNB_DE_AND && GLUB_FREQ_60_NOT && GLUB_RNDN_SWTCH_B_NAME;
GLUB_RNDNDE_AFL_NOT =! GLUB_LS6041A_B_NAME;
GLUB_RNDNDE_BFL_NOT =! GLUB_LS6041B_B_NAME;
GLUB_RNDNNDEAFL_NOT =! GLUB_LS6042A_B_NAME;
GLUB_RNDNNDEAMK_AND = GLUB_GNRNDNANDE_AND && GLUB_FREQ_60_NOT && GLUB_RNDN_SWTCH_B_NAME;
GLUB_RNDNNDEBFL_NOT =! GLUB_LS6042B_B_NAME;
GLUB_RNDNNDEBMK_AND = GLUB_GNRNDNBNDE_AND && GLUB_FREQ_60_NOT && GLUB_RNDN_SWTCH_B_NAME;
GLUB_RNDN_DE_60_AND = GLUB_LS6041A_B_NAME && GLUB_LS6041B_B_NAME;
GLUB_RNDN_NDE60_AND = GLUB_LS6042A_B_NAME && GLUB_LS6042B_B_NAME;
