IFACE_HDWR_BE6822CMP_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , A1_A06_AIO_BE6822_AI_COMBO , *10_0 (4_0, 20_0) , *-5_0 (-20_0, 20_0) );
IFACE_HDWR_BE6822CMP_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , A1_A06_AIO_BE6822_AI_COMBO , *10_0 (4_0, 20_0) , *-5_0 (-20_0, 20_0) );
IFACE_HDWR_BE6822DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , IFACE_HDWR_BE6822CMP_A_COMPARE , IFACE_HDWR_COREIDLESW_A_SW , 0 );
IFACE_HDWR_BE6822DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , IFACE_HDWR_BE6822CMP_A_COMPARE , IFACE_HDWR_COREIDLESW_A_SW , 0 );
IFACE_HDWR_BE6823CMP_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , A1_A07_AIO_BE6823_AI_COMBO , *10_0 (4_0, 20_0) , *-5_0 (-20_0, 20_0) );
IFACE_HDWR_BE6823CMP_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , A1_A07_AIO_BE6823_AI_COMBO , *10_0 (4_0, 20_0) , *-5_0 (-20_0, 20_0) );
IFACE_HDWR_BE6823DLY_DELAY = DELAY_FUNCTION( "DELAY" , 0 , IFACE_HDWR_BE6823CMP_A_COMPARE , IFACE_HDWR_COREIDLESW_A_SW , 0 );
IFACE_HDWR_BE6823DLY_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , IFACE_HDWR_BE6823CMP_A_COMPARE , IFACE_HDWR_COREIDLESW_A_SW , 0 );
IFACE_HDWR_COREIDLESW_A_SW = A_SW_FUNCTION( IFACE_HDWR_N25GT6050_A_COMPARE , 0_0 , *0_3 (0_0, 1_0) );
IFACE_HDWR_FLAMDTA_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_BE6822DLY_DELAY );
IFACE_HDWR_FLAMDTB_B_NAME = B_NAME_FUNCTION( IFACE_HDWR_BE6823DLY_DELAY );
IFACE_HDWR_N25GT6050_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , CORE_ANALOG_N25SEL , 6050_0 , 0 );
IFACE_HDWR_N25GT6050_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , CORE_ANALOG_N25SEL , 6050_0 , 0 );
IFACE_HDWR_WS4SEL_A_NAME = A_NAME_FUNCTION( 0_0 );