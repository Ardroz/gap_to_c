A_COMPARE_FUNCTION(0 , XNSD_REF_NSDREF_A_NAME , 3726,&XNSD_REF_ATPRESELLD_A_COMPARE,&XNSD_REF_ATPRESELLD_A_EQUAL);
XNSD_REF_BASESELENB_AND = TIMERS_DO_F_START_B_NAME && CORE_DIGITAL_FUELON && IFACE_CORE_Z_SWGRID_B_NAME && XNSD_REF_GENBRKR_OS_ONE_SHOT;
XNSD_REF_BASESELOFF_OR = XNSD_REF_NPTMAXPOS_B_NAME || XNSD_REF_NPTSTPT_MOVING_DN || SHUTDOWN_ANY_SD_B_NAME || SPEED_SW_ZERO_AND || GENERATOR_ISOCH_B_NAME;
XNSD_REF_BASESELRSE_LATCH = LATCH_FUNCTION(1,XNSD_REF_BASESELOFF_OR,XNSD_REF_BASESELENB_AND,XNSD_REF_BASESELRSE_LATCH);
XNSD_REF_DSM_LOWER_B_NAME = N3N42_BI_DSM_LWR_BI_L;
XNSD_REF_DSM_LWR_AND = XNSD_REF_DSM_LOWER_B_NAME && XNSD_REF_SYNC_ENBLE_B_NAME && XNSD_REF_MASK_RSLWR_AND;
XNSD_REF_DSM_RAISE_B_NAME = N3N42_BI_DSM_RSE_BI_L;
XNSD_REF_DSM_RSE_AND = XNSD_REF_DSM_RAISE_B_NAME && XNSD_REF_SYNC_ENBLE_B_NAME && XNSD_REF_MASK_RSLWR_AND && TRUE;
XNSD_REF_FUELXFRLWR_B_NAME = FALSE;
  bool XNSD_REF_GENBRKR_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.5 , 0 , GENERATOR_GEN_BKRCLS_B_NAME,&XNSD_REF_GENBRKR_OS_ONE_SHOT,&XNSD_REF_GENBRKR_OS_R_TIME,&XNSD_REF_GENBRKR_OS_LAST_TRIGGER);
XNSD_REF_HMI_LOWER_B_NAME = OP_INTRFC_MW_LOWER_B_NAME;
XNSD_REF_HMI_RAISE_B_NAME = OP_INTRFC_MW_RAISE_B_NAME;
XNSD_REF_INHIBITOFF_NOR =! XNSD_REF_SYNC_ENBLE_B_NAME || MW_CNTRL_MWCNTRLACT_B_NAME;
XNSD_REF_MAN_LOWER_OR = XNSD_REF_MW_LOWER_B_SW || XNSD_REF_HMI_LOWER_B_NAME;
XNSD_REF_MAN_LWR_AND = XNSD_REF_MAN_LOWER_OR && XNSD_REF_MASK_RSLWR_AND && XNSD_REF_INHIBITOFF_NOR;
XNSD_REF_MAN_RSE_AND = XNSD_REF_INHIBITOFF_NOR && XNSD_REF_RAISE_OR_OR && XNSD_REF_MASK_RSLWR_AND;
XNSD_REF_MASK_RSLWR_AND = SPEED_SW_NSDGT3420_A_COMPARE && XNSD_REF_RUN_RELAY_B_NAME && SHUTDOWN_NO_SHTDNS_B_NAME;
XNSD_REF_MN_RMP_MIN_A_NAME = 5;
XNSD_REF_MW_LOWER_B_SW = B_SW_FUNCTION( LOC_REM_LOCAL_NOT , FALSE , OP_INTRFC_MW_L_H_B_NAME );
XNSD_REF_MW_LWR_AND = MW_CNTRL_MW_NPTLWR_B_NAME && MW_CNTRL_MWCNTRLACT_B_NAME && XNSD_REF_MASK_RSLWR_AND;
XNSD_REF_MW_RAISE_B_SW = B_SW_FUNCTION( LOC_REM_LOCAL_NOT , FALSE , OP_INTRFC_MW_R_H_B_NAME );
XNSD_REF_MW_RSE_AND = MW_CNTRL_MW_NPTRSE_B_NAME && MW_CNTRL_MWCNTRLACT_B_NAME && XNSD_REF_MASK_RSLWR_AND;
XNSD_REF_N2LWR_OR_OR = XNSD_REF_FUELXFRLWR_B_NAME || XNSD_REF_MAN_LWR_AND || XNSD_REF_MW_LWR_AND || XNSD_REF_DSM_LWR_AND;
XNSD_REF_N2RSE_OR_OR = XNSD_REF_MAN_RSE_AND || XNSD_REF_MW_RSE_AND || XNSD_REF_DSM_RSE_AND;
XNSD_REF_NM_SD_MIN_A_NAME = 2;
XNSD_REF_NM_SPT_RT_A_NAME = 7.5;
XNSD_REF_NPTLWR_B_NAME = XNSD_REF_N2LWR_OR_OR;
XNSD_REF_NPTOVRLIM_A_SW = A_SW_FUNCTION( FALSE , 3780 , XNSD_REF_MW_TO_REF_CALCULATE );
XNSD_REF_NPTRSE_B_NAME = XNSD_REF_N2RSE_OR_OR;
XNSD_REF_NPTRSE_MAX_A_SW = A_SW_FUNCTION( FALSE , XNSD_REF_NPTOVRLIM_A_SW , 3808.0 );
XNSD_REF_PRESELENB_AND = FALSE && CORE_DIGITAL_FUELON && IFACE_CORE_Z_SWGRID_B_NAME;
XNSD_REF_PRESELOFF_OR = XNSD_REF_NPTSTPT_MOVING_DN || XNSD_REF_ATPRESELLD_A_COMPARE || SHUTDOWN_ANY_SD_B_NAME || SPEED_SW_ZERO_AND;
XNSD_REF_PRESELRSE_LATCH = LATCH_FUNCTION(1,XNSD_REF_PRESELOFF_OR,XNSD_REF_PRESELENB_AND,XNSD_REF_PRESELRSE_LATCH);
XNSD_REF_RAISE_OR_OR = XNSD_REF_MW_RAISE_B_SW || XNSD_REF_HMI_RAISE_B_NAME || XNSD_REF_BASESELRSE_LATCH || XNSD_REF_PRESELRSE_LATCH;
XNSD_REF_RATECHHG_1_DIVIDE = 3.0 / XNSD_REF_NM_SPT_RT_A_NAME;
XNSD_REF_RATECHNG_2_DIVIDE = 3.0 / XNSD_REF_MN_RMP_MIN_A_NAME;
XNSD_REF_RATECHNG_3_DIVIDE = 3.0 / XNSD_REF_NM_SD_MIN_A_NAME;
XNSD_REF_RUN_RELAY_B_NAME = SFC_STEP_RUN_RELAY_B_NAME;
XNSD_REF_SYNC_ENBLE_B_NAME = GENERATOR_SYNC_ENABL_B_NAME;
