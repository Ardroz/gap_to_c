A_COMPARE_FUNCTION(A1_A06_AIO_BE6822_AI_COMBO , -5 ,10,&IFACE_HDWR_BE6822CMP_A_COMPARE,&IFACE_HDWR_BE6822CMP_A_EQUAL);
DELAY_FUNCTION(1 , IFACE_HDWR_COREIDLESW_A_SW ,  , IFACE_HDWR_BE6822CMP_A_COMPARE,&IFACE_HDWR_BE6822DLY_DELAY,&IFACE_HDWR_BE6822DLY_R_TIME);
A_COMPARE_FUNCTION(A1_A07_AIO_BE6823_AI_COMBO , -5 ,10,&IFACE_HDWR_BE6823CMP_A_COMPARE,&IFACE_HDWR_BE6823CMP_A_EQUAL);
DELAY_FUNCTION(1 , IFACE_HDWR_COREIDLESW_A_SW ,  , IFACE_HDWR_BE6823CMP_A_COMPARE,&IFACE_HDWR_BE6823DLY_DELAY,&IFACE_HDWR_BE6823DLY_R_TIME);
IFACE_HDWR_COREIDLESW_&IFACE_HDWR_COREIDLESW_A_SW = A_SW_FUNCTION( IFACE_HDWR_N25GT6050_A_COMPARE , 0.0 , 0.3 );
IFACE_HDWR_FLAMDTA_B_NAME = IFACE_HDWR_BE6822DLY_DELAY;
IFACE_HDWR_FLAMDTB_B_NAME = IFACE_HDWR_BE6823DLY_DELAY;
A_COMPARE_FUNCTION( , CORE_ANALOG_N25SEL , 6050.0,&IFACE_HDWR_N25GT6050_A_COMPARE,&IFACE_HDWR_N25GT6050_A_EQUAL);
IFACE_HDWR_WS4SEL_A_NAME = 0.0;