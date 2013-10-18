IFACE_CNFG_CHDRIVE_I_NAME = I_NAME_FUNCTION(  , *0 (0, 1) );
IFACE_CNFG_CHPDET_OPT_B_NAME = B_NAME_FUNCTION(  , *TRUE );
IFACE_CNFG_COND_DLY_R_TIME = R_TIME_FUNCTION( 0 , FALSE , *10_0 (0_0, 60_0) , *60_0 (0_0, 60_0) );
IFACE_CNFG_COND_DLY_DELAY = DELAY_FUNCTION( 0 , FALSE , *10_0 (0_0, 60_0) , *60_0 (0_0, 60_0) );
IFACE_CNFG_CON_REF_A_SW = A_SW_FUNCTION( IFACE_CNFG_COND_DLY_DELAY , IFACE_CNFG_CON_REFSW1_A_SW , IFACE_CNFG_CON_REFSW2_A_SW );
IFACE_CNFG_CON_REFSW1_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3610_0 (3600_0, 3652_0) , *3637_0 (3627_0, 3679_0) );
IFACE_CNFG_CON_REFSW2_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3625_0 (3600_0, 3780_0) , *3652_0 (3627_0, 3807_0) );
IFACE_CNFG_FLMDTMODEJ_I_NAME = I_NAME_FUNCTION(  , *2 (0, 2) );
IFACE_CNFG_FLMDT_MODE_I_TO_AN = I_TO_AN_FUNCTION( 0 , IFACE_CNFG_FLMDTMODEJ_I_NAME );
IFACE_CNFG_FREQ_50_HZ_B_NAME = B_NAME_FUNCTION( FALSE );
IFACE_CNFG_GMVI_SN_I_NAME = I_NAME_FUNCTION(  , *60000001 (0, 999999999) );
IFACE_CNFG_GMVO_SN_I_NAME = I_NAME_FUNCTION(  , *60000002 (0, 999999999) );
IFACE_CNFG_GMVP_SN_I_NAME = I_NAME_FUNCTION(  , *60000000 (0, 999999999) );
IFACE_CNFG_KVOLOEMI_A_NAME = A_NAME_FUNCTION(  , *358_7 (10_0, 1000_0) );
IFACE_CNFG_KVOLOEMO_A_NAME = A_NAME_FUNCTION(  , *373_1 (10_0, 1000_0) );
IFACE_CNFG_KVOLOEMP_A_NAME = A_NAME_FUNCTION(  , *363_2 (10_0, 1000_0) );
IFACE_CNFG_LUBFLT_OPT_B_NAME = B_NAME_FUNCTION(  , 0 );
IFACE_CNFG_LUBPRS_OPT_B_NAME = B_NAME_FUNCTION(  , 0 );
IFACE_CNFG_LUBTMP_OPT_B_NAME = B_NAME_FUNCTION(  , *TRUE );
IFACE_CNFG_MAX_REF_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3780_0 (3700_0, 3780_0) , *3807_0 (3700_0, 3807_0) );
IFACE_CNFG_MIN_REF_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3600_0 (3600_0, 3650_0) , *3627_0 (3627_0, 3677_0) );
IFACE_CNFG_MX_LD_NWTR_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3780_0 (3607_0, 3780_0) , *3807_0 (3634_0, 3807_0) );
IFACE_CNFG_NPTMECHMN_A_NAME = A_NAME_FUNCTION(  , *1800_0 (0_0, 3780_0) );
IFACE_CNFG_NPTPWRMN_A_NAME = A_NAME_FUNCTION( IFACE_CNFG_REF_SW_DRP_A_SW );
IFACE_CNFG_NSD_MN_A_MUX_N_1 = A_MUX_N_1_FUNCTION( 0 , IFACE_CNFG_SWMW_I_NAME , IFACE_CNFG_SYNC_SPD_A_SW , IFACE_CNFG_NPTMECHMN_A_NAME , IFACE_CNFG_NPTPWRMN_A_NAME );
IFACE_CNFG_NSD_MN_OP_A_NAME = A_NAME_FUNCTION( IFACE_CNFG_NSD_MN_A_MUX_N_1 );
IFACE_CNFG_PRESYNCSPD_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , *3602_0 (3600_0, 3602_0) , *3629_0 (3627_0, 3629_0) );
IFACE_CNFG_REF_SW_DRP_A_SW = A_SW_FUNCTION( IFACE_CORE_Z_SWGRID_B_NAME , IFACE_CNFG_REF_SW_ISO_A_SW , IFACE_CNFG_CON_REF_A_SW );
IFACE_CNFG_REF_SW_ISO_A_SW = A_SW_FUNCTION( IFACE_CORE_Z_BREAKER_B_NAME , IFACE_CNFG_SYNC_SPD_A_SW , *3500_0 (1000_0, 3780_0) );
IFACE_CNFG_SWMW_I_NAME = I_NAME_FUNCTION(  , *3 (1, 3) );
IFACE_CNFG_SYNC_SPD_A_SW = A_SW_FUNCTION( IFACE_CNFG_FREQ_50_HZ_B_NAME , 3600_0 , 3627_0 );
IFACE_CNFG_Z_DMP_UNIT_B_NAME = B_NAME_FUNCTION( FALSE );
IFACE_CNFG_Z_DROOP_A_NAME = A_NAME_FUNCTION(  , *5_0 (4_0, 6_0) );
IFACE_CNFG_Z_NSDOSLIM_A_NAME = A_NAME_FUNCTION(  , *4300_0 (4050_0, 4300_0) );
IFACE_CNFG_Z_RT25_UNT_B_NAME = B_NAME_FUNCTION( FALSE );
IFACE_CNFG_Z_RT2_UNIT_B_NAME = B_NAME_FUNCTION( FALSE );
IFACE_CNFG_Z_SPR_UNIT_B_NAME = B_NAME_FUNCTION( FALSE );
IFACE_CNFG_Z_TBV_UNIT_B_NAME = B_NAME_FUNCTION(  , *TRUE );
IFACE_CNFG_Z_VT48_UNT_B_NAME = B_NAME_FUNCTION(  , 0 );
