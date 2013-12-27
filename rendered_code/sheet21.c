IFACE_HDWR_FCV62108DS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62108_COMM_FLT , A2_A06_DVR_FCV62108_DVR_FLT , A1_A12_BI3_EMDVR3STAT_BI_NOT );
IFACE_HDWR_GMVPA_A_NAME = A2_A06_DVR_FCV62108_RES_RDBK_1;
IFACE_HDWR_GMVPAALM_B_NAME = A2_A06_DVR_FCV62108_FDBK_FAIL1;
IFACE_HDWR_GMVPB_A_NAME = A2_A06_DVR_FCV62108_RES_RDBK_2;
IFACE_HDWR_GMVPBALM_B_NAME = A2_A06_DVR_FCV62108_FDBK_FAIL2;
IFACE_HDWR_GMVPCOMFLT_B_NAME = SIMULATE_GMVPCOMSW_B_SW;
IFACE_HDWR_GMVPDFALM_B_NAME = A2_A06_DVR_FCV62108_FB_DIF_ALM;
IFACE_HDWR_GMVPDFSD_B_NAME = A2_A06_DVR_FCV62108_FB_DIF_SD;
IFACE_HDWR_GMVPDRFLT_B_NAME = IFACE_HDWR_FCV62108DS_B_SW;
IFACE_HDWR_GMVPDVRALM_B_NAME = A2_A06_DVR_FCV62108_DVR_ALM;
IFACE_HDWR_GMVPMA_A_NAME = A2_A06_DVR_FCV62108_MOTOR_CUR;
IFACE_HDWR_GMVPPOSALM_B_NAME = SIMULATE_GMVPPOSACS_B_SW;
IFACE_HDWR_GMVPPOSSD_B_NAME = SIMULATE_GMVPPOSAC_B_SW;
IFACE_HDWR_GMVPSEL_A_NAME = IFACE_HDWR_GMVPSELSW_A_SW;
IFACE_HDWR_GMVPSELSW_A_SW = A_SW_FUNCTION( A2_A06_DVR_FCV62108_COMM_FLT , A2_A06_DVR_FCV62108_PER_RDBK , A1_A06_AIO_FCV62108FB_AI_COMBO );
SIMULATE_GMVPCOMSW_B_SW = B_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , A2_A06_DIG_FCV62108SD_LATCH , *FALSE );
SIMULATE_GMVPPOSAC_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62108_COMM_FLT , A2_A06_DVR_FCV62108_POS_ERR_SD , SIMULATE_POSANSDDLP_DELAY );
SIMULATE_GMVPPOSACS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62108_COMM_FLT , A2_A06_DVR_FCV62108_POS_ERR_AL , SIMULATE_POSANALDLP_DELAY );
DELAY_FUNCTION(1 , 0.25 , 0 , SIMULATE_POSANALMP_A_COMPARE,&SIMULATE_POSANALDLP_DELAY,&SIMULATE_POSANALDLP_R_TIME);
A_COMPARE_FUNCTION(0 , SIMULATE_POSPERCALC_CALCULATE , 1,&SIMULATE_POSANALMP_A_COMPARE,&SIMULATE_POSANALMP_A_EQUAL);
DELAY_FUNCTION(1 , 0.5 , 0 , SIMULATE_POSANSDP_A_COMPARE,&SIMULATE_POSANSDDLP_DELAY,&SIMULATE_POSANSDDLP_R_TIME);
A_COMPARE_FUNCTION(0 , SIMULATE_POSPERCALC_CALCULATE , 2,&SIMULATE_POSANSDP_A_COMPARE,&SIMULATE_POSANSDP_A_EQUAL);
SIMULATE_POSPERCALC_CALCULATE =  fabs (CORE_ANALOG_GMVPDMD -A1_A06_AIO_FCV62108FB_AI_COMBO ) ;