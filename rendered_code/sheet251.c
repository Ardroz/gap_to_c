XNSD_REF_BEG_REF_A_SW = A_SW_FUNCTION( FALSE , XNSD_REF_SYNC_SPD_A_NAME , 3550 );
XNSD_REF_BRKR_OPEN_NOT =! IFACE_CORE_Z_SWGRID_B_NAME;
ONE_SHOT_FUNCTION(1 , 1.0 ,  , XNSD_REF_BRKR_OPEN_NOT,&XNSD_REF_BRK_STPIDL_ONE_SHOT,&XNSD_REF_BRK_STPIDL_R_TIME);
XNSD_REF_CORR_EN_AND = GENERATOR_DROOP_B_NAME && XNSD_REF_ERR_COR_EN_OR;
XNSD_REF_DFLT_RATE_A_SW = A_SW_FUNCTION( XNSD_REF_FAST_LOAD_T_FLIPFLOP , 0.75 , 1 );
XNSD_REF_DMREFSEL_AND = SHUTDOWN_DECELMIN_B_NAME && SHUTDOWN_NOTMINLD_NOT;
XNSD_REF_DMREFSEL2_AND = ALARM_HMI_DM_LATCH && SHUTDOWN_NOTMINLD_NOT;
XNSD_REF_DSLC_BIAS_ADD = XNSD_REF_FREQCOR_RT_RATE_LIMIT + XNSD_REF_NPTSTPT_RAMP;
XNSD_REF_D_RST_LAT_LATCH = LATCH_FUNCTION( 1 , XNSD_REF_NPTTRKPOS_B_NAME , XNSD_REF_N_D_RST_OS_ONE_SHOT );
XNSD_REF_ERROR_A_LIMITER = A_LIMITER_FUNCTION( 1 , XNSD_REF_SPEED_ERR_SUBTRACT , 18 , -80 );
XNSD_REF_ERR_COR_EN_OR = XNSD_REF_NORMSTP_EN_AND;
XNSD_REF_ERR_COR_IN_A_SW = A_SW_FUNCTION( XNSD_REF_CORR_EN_AND , 0.0 , XNSD_REF_ERROR_A_LIMITER );
XNSD_REF_FASTAND_Z_ZMINUS1_B = XNSD_REF_FSTSTRTAND_AND;
XNSD_REF_FAST_LOAD_T_FLIPFLOP = T_FLIPFLOP_FUNCTION( 1 , XNSD_REF_FASTAND_Z_ZMINUS1_B ,  , XNSD_REF_RST_FAST_OR );
XNSD_REF_FREQCOR_RT_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , *TRUE , XNSD_REF_ERR_COR_IN_A_SW , 1 , 1 );
XNSD_REF_FSTSTRTAND_AND = START_PERM_FASTSTART_B_NAME && CORE_DIGITAL_FUELON && IFACE_CORE_Z_SWGRID_B_NAME;
ONE_SHOT_FUNCTION(1 , 0.5 ,  , XNSD_REF_REF_RESET_OR,&XNSD_REF_FUELOFFOS_ONE_SHOT,&XNSD_REF_FUELOFFOS_R_TIME);
LATCH1_FUNCTION( , 1 ,  ,  ,  ,  ,  , XNSD_REF_N_I_RST_OS_ONE_SHOT , GENERATOR_STP_2_SYNC_B_NAME ,  , XNSD_REF_NPTSYNCPOS_B_NAME,&XNSD_REF_ISOC_LAT_ALM_NO_1,&XNSD_REF_ISOC_LAT_ALM_NO_2,&XNSD_REF_ISOC_LAT_FIRST_ALM,&XNSD_REF_ISOC_LAT_HORN,&XNSD_REF_ISOC_LAT_LATCH1,&XNSD_REF_ISOC_LAT_SEL_1,&XNSD_REF_ISOC_LAT_SEL_2);
XNSD_REF_LOGAS_CTRL_B_NAME = FALSE;
XNSD_REF_MINREFOR_OR = SHUTDOWN_XNSDMINLD_B_NAME || XNSD_REF_FUELOFFOS_ONE_SHOT || XNSD_REF_DMREFSEL_AND || XNSD_REF_DMREFSEL2_AND;
XNSD_REF_MIN_MW_A_SW = A_SW_FUNCTION( TRUE , XNSD_REF_MWLMAX_A_NAME , XNSD_REF_MWGMAX_A_NAME );
XNSD_REF_MVNG_DN_Z_ZMINUS1_B = XNSD_REF_NPTSTPT_MOVING_DN;
XNSD_REF_MWCTRLFAST_ADD = XNSD_REF_RATECHHG_1_DIVIDE + 0.3;
XNSD_REF_MWGMAX_A_NAME = 55;
XNSD_REF_MWLMAX_A_NAME = 15;
XNSD_REF_MW_TO_REF_CALCULATE =  (XNSD_REF_MIN_MW_A_SW *XNSD_REF_MIN_MW_A_SWgn )   + XNSD_REF_SYNC_SPD_A_NAME;
XNSD_REF_NORMSTP_EN_AND = SFC_STEP_NORM_1_SFC_STEP;
XNSD_REF_NOTFASTAND_NOT =! XNSD_REF_FSTSTRTAND_AND;
XNSD_REF_NPTLWR_OR_OR = XNSD_REF_NPT_STPIDL_LATCH || XNSD_REF_BRK_STPIDL_ONE_SHOT;
XNSD_REF_NPTMAXPOS_B_NAME = XNSD_REF_NPTSTPT_P_LIM_4;
XNSD_REF_NPTMINPOS_B_NAME = XNSD_REF_NPTSTPT_P_LIM_1;
XNSD_REF_NPTRATE_IN_B_FUNCTION = B_FUNCTION_FUNCTION( 1 , isoch||droop||stp_idl||fueloff||pwrup , ||cond , XNSD_REF_ISOC_LAT_LATCH1 , XNSD_REF_D_RST_LAT_LATCH , XNSD_REF_NPTLWR_OR_OR , SHUTDOWN_CHOP_FUEL_B_NAME , CORE_DIGITAL_PWR_UP , XNSD_REF_FUELOFFOS_ONE_SHOT , isoch , droop , stp_idl , fueloff , pwrup , cond );
ONE_SHOT_FUNCTION(1 , 1.0 ,  , CORE_DIGITAL_STEPIDLE,&XNSD_REF_NPTSTEPEN_ONE_SHOT,&XNSD_REF_NPTSTEPEN_R_TIME);
RAMP_FUNCTION(1 , XNSD_REF_DFLT_RATE_A_SW , XNSD_REF_NPTLWR_B_NAME , XNSD_REF_SYNC_RST_OR , XNSD_REF_D_RST_LAT_LATCH , FALSE , XNSD_REF_NPTRSE_B_NAME , FALSE , FALSE , IFACE_CNFG_NSD_MN_OP_A_NAME , XNSD_REF_BEG_REF_A_SW , XNSD_REF_NPT_TRACK_ADD , IFACE_CNFG_MIN_REF_A_SW , XNSD_REF_NPTRSE_MAX_A_SW , XNSD_REF_MW_TO_REF_CALCULATE , IFACE_CNFG_MAX_REF_A_SW , XNSD_REF_NPTRATE_IN_B_FUNCTION , SHUTDOWN_CDLO_B_NAME , SHUTDOWN_DECELMIN_B_NAME , MW_CNTRL_MWCNTRLACT_B_NAME , MW_CNTRL_MW_FRTESEL_B_NAME , 100000.0 , XNSD_REF_RATECHNG_3_DIVIDE , 2.0 , XNSD_REF_RATECHHG_1_DIVIDE , XNSD_REF_MWCTRLFAST_ADD , 3627.0 , 1.0 , ,&XNSD_REF_NPTSTPT_MOVING_DN,&XNSD_REF_NPTSTPT_MOVING_UP,&XNSD_REF_NPTSTPT_P_LIM_1,&XNSD_REF_NPTSTPT_P_LIM_2,&XNSD_REF_NPTSTPT_P_LIM_3,&XNSD_REF_NPTSTPT_P_LIM_4,&XNSD_REF_NPTSTPT_P_LIM_5,&XNSD_REF_NPTSTPT_P_LIM_6,&XNSD_REF_NPTSTPT_P_LIM_7,&XNSD_REF_NPTSTPT_POS_SEL,&XNSD_REF_NPTSTPT_RAMP,&XNSD_REF_NPTSTPT_REV_RAMP);
XNSD_REF_NPTSYNCPOS_B_NAME = XNSD_REF_NPTSTPT_P_LIM_2;
XNSD_REF_NPTTRKPOS_B_NAME = XNSD_REF_NPTSTPT_P_LIM_3;
XNSD_REF_NPT_STPIDL_LATCH = LATCH_FUNCTION( 1 , XNSD_REF_NPTSYNCPOS_B_NAME , XNSD_REF_NPTSTEPEN_ONE_SHOT );
XNSD_REF_NPT_TRACK_ADD = XNSD_REF_NSD_HOLD_A_SW + XNSD_REF_NPT_TRCKMX_A_MAX;
XNSD_REF_NPT_TRCKMX_A_MAX = A_MAX_FUNCTION( 7.024 , CORE_ANALOG_DNSDMW );
XNSD_REF_NSDREF_A_NAME = XNSD_REF_DSLC_BIAS_ADD;
XNSD_REF_NSD_HOLD_A_SW = A_SW_FUNCTION( XNSD_REF_D_RST_LAT_LATCH , CORE_ANALOG_NSDSEL , XNSD_REF_NSD_HOLD_A_SW );
ONE_SHOT_FUNCTION(1 , 0.1 , CORE_DIGITAL_PWR_UP , GENERATOR_DROOP_B_NAME,&XNSD_REF_N_D_RST_OS_ONE_SHOT,&XNSD_REF_N_D_RST_OS_R_TIME);
ONE_SHOT_FUNCTION(1 , 0.1 ,  , GENERATOR_ISOCH_B_NAME,&XNSD_REF_N_I_RST_OS_ONE_SHOT,&XNSD_REF_N_I_RST_OS_R_TIME);
XNSD_REF_REF_AND_AND = SHUTDOWN_N25CTRLDLY_DELAY && FALSE;
XNSD_REF_REF_RESET_OR = SHUTDOWN_CHOP_FUEL_B_NAME || XNSD_REF_REF_AND_AND;
XNSD_REF_RST_FAST_OR = XNSD_REF_NOTFASTAND_NOT || XNSD_REF_NPTMAXPOS_B_NAME || XNSD_REF_MVNG_DN_Z_ZMINUS1_B;
XNSD_REF_SPEED_ERR_SUBTRACT = CORE_ANALOG_NSDSEL - XNSD_REF_SYNC_SPD_A_NAME;
XNSD_REF_SYNC_RST_OR = XNSD_REF_ISOC_LAT_LATCH1 || CORE_DIGITAL_PWR_UP || SHUTDOWN_CHOP_FUEL_B_NAME || XNSD_REF_NPTLWR_OR_OR || XNSD_REF_MINREFOR_OR || SFC_STEP_NORM_4_SFC_STEP;
XNSD_REF_SYNC_SPD_A_NAME = IFACE_CNFG_SYNC_SPD_A_SW;
