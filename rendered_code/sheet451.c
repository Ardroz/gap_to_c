R_N25HREG_N25HERR_A_NAME = R_N25HREG_N25HERRTMP_SUBTRACT;
R_N25HREG_N25HERRTMP_SUBTRACT = I_N25_N25SEL_A_NAME - R_N25SCHES_N25HREF_A_NAME;
R_N25HREG_N25HPRX_A_NAME = R_N25HREG_N25HPRXTMP_PID_2;
R_N25HREG_N25HPRXTMP_PID_2 = PID_2_FUNCTION( 1 , 100 , 100 , 0 , 0 , 0 , 0 , 0 , 0.01 , R_ISSL_LSS_3_LSS_BUS , R_ISSL_LSS_3_SEL_5 , R_N25HREG_N25H_KP_CALCULATE , R_N25HREG_N25H_WB_DIVIDE , R_N25HREG_N25HERRTMP_SUBTRACT );
R_N25HREG_N25H_KP_CALCULATE =  ( ( 2 *R_WBGNXX_N25GN1_A_NAME *ADJ_N25HGN1JM_A_NAME ) /    pphtopct ) / ( 1 +R_WBGNXX_N25WB_A_NAME ) ;
R_N25HREG_N25H_WB_DIVIDE = 0.02 / R_WBGNXX_N25WB_A_NAME;