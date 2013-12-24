IFACE_HDWR_FCV62107DS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62107_COMM_FLT , A2_A06_DVR_FCV62107_DVR_FLT , A1_A12_BI3_EMDVR1STAT_BI_NOT );
IFACE_HDWR_GMVIA_A_NAME = A2_A06_DVR_FCV62107_RES_RDBK_1;
IFACE_HDWR_GMVIAALM_B_NAME = A2_A06_DVR_FCV62107_FDBK_FAIL1;
IFACE_HDWR_GMVIB_A_NAME = A2_A06_DVR_FCV62107_RES_RDBK_2;
IFACE_HDWR_GMVIBALM_B_NAME = A2_A06_DVR_FCV62107_FDBK_FAIL2;
IFACE_HDWR_GMVICOMFLT_B_NAME = SIMULATE_GMVICOMSW_B_SW;
IFACE_HDWR_GMVIDFALM_B_NAME = A2_A06_DVR_FCV62107_FB_DIF_ALM;
IFACE_HDWR_GMVIDFSD_B_NAME = A2_A06_DVR_FCV62107_FB_DIF_SD;
IFACE_HDWR_GMVIDRFLT_B_NAME = IFACE_HDWR_FCV62107DS_B_SW;
IFACE_HDWR_GMVIDVRALM_B_NAME = A2_A06_DVR_FCV62107_DVR_ALM;
IFACE_HDWR_GMVIMA_A_NAME = A2_A06_DVR_FCV62107_MOTOR_CUR;
IFACE_HDWR_GMVIPOSALM_B_NAME = SIMULATE_GMVIPOSACS_B_SW;
IFACE_HDWR_GMVIPOSSD_B_NAME = SIMULATE_GMVIPOSAC_B_SW;
IFACE_HDWR_GMVISEL_A_NAME = IFACE_HDWR_GMVISELSW_A_SW;
IFACE_HDWR_GMVISELSW_A_SW = A_SW_FUNCTION( A2_A06_DVR_FCV62107_COMM_FLT , A2_A06_DVR_FCV62107_PER_RDBK , A1_A06_AIO_FCV62107FB_AI_COMBO );
SIMULATE_GMVICOMSW_B_SW = B_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , A2_A06_DIG_FCV62107SD_LATCH , *FALSE );
SIMULATE_GMVIPOSAC_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62107_COMM_FLT , A2_A06_DVR_FCV62107_POS_ERR_SD , SIMULATE_POSANSDDLY_DELAY );
SIMULATE_GMVIPOSACS_B_SW = B_SW_FUNCTION( A2_A06_DVR_FCV62107_COMM_FLT , A2_A06_DVR_FCV62107_POS_ERR_AL , SIMULATE_POSANALDLY_DELAY );
DELAY_FUNCTION(1 , 0.25 , 0 , SIMULATE_POSANALM_A_COMPARE,&SIMULATE_POSANALDLY_DELAY,&SIMULATE_POSANALDLY_R_TIME);
A_COMPARE_FUNCTION(0 , SIMULATE_POSEERCALC_CALCULATE , 1,&SIMULATE_POSANALM_A_COMPARE,&SIMULATE_POSANALM_A_EQUAL);
A_COMPARE_FUNCTION(0 , SIMULATE_POSEERCALC_CALCULATE , 2,&SIMULATE_POSANSD_A_COMPARE,&SIMULATE_POSANSD_A_EQUAL);
DELAY_FUNCTION(1 , 0.5 , 0 , SIMULATE_POSANSD_A_COMPARE,&SIMULATE_POSANSDDLY_DELAY,&SIMULATE_POSANSDDLY_R_TIME);
SIMULATE_POSEERCALC_CALCULATE =  fabs (CORE_ANALOG_GMVIDMD -A1_A06_AIO_FCV62107FB_AI_COMBO ) ;
