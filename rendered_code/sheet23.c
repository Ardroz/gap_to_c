IFACE_HDWR_FCV62109DS_&IFACE_HDWR_FCV62109DS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62109_COMM_FLT , A2_A06_DVR_FCV62109_DVR_FLT , A1_A12_BI3_EMDVR2STAT_BI_NOT );
IFACE_HDWR_GMVOA_A_NAME = A2_A06_DVR_FCV62109_RES_RDBK_1;
IFACE_HDWR_GMVOAALM_B_NAME = A2_A06_DVR_FCV62109_FDBK_FAIL1;
IFACE_HDWR_GMVOB_A_NAME = A2_A06_DVR_FCV62109_RES_RDBK_2;
IFACE_HDWR_GMVOBALM_B_NAME = A2_A06_DVR_FCV62109_FDBK_FAIL2;
IFACE_HDWR_GMVOCOMFLT_B_NAME = SIMULATE_GMVOCOMSW_B_SW;
IFACE_HDWR_GMVODFALM_B_NAME = A2_A06_DVR_FCV62109_FB_DIF_ALM;
IFACE_HDWR_GMVODFSD_B_NAME = A2_A06_DVR_FCV62109_FB_DIF_SD;
IFACE_HDWR_GMVODRFLT_B_NAME = IFACE_HDWR_FCV62109DS_B_SW;
IFACE_HDWR_GMVODVRALM_B_NAME = A2_A06_DVR_FCV62109_DVR_ALM;
IFACE_HDWR_GMVOMA_A_NAME = A2_A06_DVR_FCV62109_MOTOR_CUR;
IFACE_HDWR_GMVOPOSALM_B_NAME = SIMULATE_GMVOPOSACS_B_SW;
IFACE_HDWR_GMVOPOSSD_B_NAME = SIMULATE_GMVOPOSAC_B_SW;
IFACE_HDWR_GMVOSEL_A_NAME = IFACE_HDWR_GMVOSELSW_A_SW;
IFACE_HDWR_GMVOSELSW_&IFACE_HDWR_GMVOSELSW_A_SW = A_SW_FUNCTION( A2_A06_DVR_FCV62109_COMM_FLT , A2_A06_DVR_FCV62109_PER_RDBK , A1_A06_AIO_FCV62109FB_AI_COMBO );
SIMULATE_GMVOCOMSW_&SIMULATE_GMVOCOMSW_B_SW = B_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , A2_A06_DIG_FCV62109SD_LATCH , *FALSE );
SIMULATE_GMVOPOSAC_&SIMULATE_GMVOPOSAC_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62109_COMM_FLT , A2_A06_DVR_FCV62109_POS_ERR_SD , SIMULATE_POSANSDDLO_DELAY );
SIMULATE_GMVOPOSACS_&SIMULATE_GMVOPOSACS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62109_COMM_FLT , A2_A06_DVR_FCV62109_POS_ERR_AL , SIMULATE_POSANALDLO_DELAY );
DELAY_FUNCTION(1 ,  , SIMULATE_POSANALMO_A_COMPARE , 0.25,&SIMULATE_POSANALDLO_DELAY,&SIMULATE_POSANALDLO_R_TIME);
A_COMPARE_FUNCTION( , SIMULATE_POSOERCALC_CALCULATE , 1,&SIMULATE_POSANALMO_A_COMPARE,&SIMULATE_POSANALMO_A_EQUAL);
DELAY_FUNCTION(1 ,  , SIMULATE_POSANSDO_A_COMPARE , 0.5,&SIMULATE_POSANSDDLO_DELAY,&SIMULATE_POSANSDDLO_R_TIME);
A_COMPARE_FUNCTION( , SIMULATE_POSOERCALC_CALCULATE , 2,&SIMULATE_POSANSDO_A_COMPARE,&SIMULATE_POSANSDO_A_EQUAL);
SIMULATE_POSOERCALC_CALCULATE =  fabs (CORE_ANALOG_GMVODMD -A1_A06_AIO_FCV62109FB_AI_COMBO ) ;
