HMI_INTER_XE6807_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6807_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6807_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6807_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6807N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6807_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6807_AH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_12 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_AH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_12 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_AH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_12 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_AH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_12 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_AHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_12 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6807_DH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_13 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_DH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_13 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_DH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_13 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_DH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_13 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6807_DHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_13 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6807_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_5_1 , *16383_5 (1_0, 100000_0) );
HMI_INTER_XE6808_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_9 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6808_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_9 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6808_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_9 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6808_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_9 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6808N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6808_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6808_AH_ALM = ALM_FUNCTION( NEVADA_COMM_AR_V_3_14 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_AH_A_OUT_1 = A_OUT_1_FUNCTION( NEVADA_COMM_AR_V_3_14 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_AH_I_OUT_1 = I_OUT_1_FUNCTION( NEVADA_COMM_AR_V_3_14 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_AH_B_OUT_1 = B_OUT_1_FUNCTION( NEVADA_COMM_AR_V_3_14 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_AHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_14 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6808_DH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_15 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_DH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_15 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_DH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_15 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_DH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_15 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6808_DHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_15 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6808_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_5_9 , *16383_5 (1_0, 100000_0) );
HMI_INTER_XE6809_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6809_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6809_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6809_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6809N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6809_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6809_AH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_16 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_AH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_16 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_AH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_16 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_AH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_16 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_AHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_16 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6809_DH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_DH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_DH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_DH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_17 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6809_DHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_17 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6809_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_5_17 , *16383_5 (1_0, 100000_0) );
HMI_INTER_XE6810_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_25 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6810_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_25 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6810_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_25 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6810_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_5_25 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *10_0 (0_0, 20_0) );
HMI_INTER_XE6810N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6810_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6810_AH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_18 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_AH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_18 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_AH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_18 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_AH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_18 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_AHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_18 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6810_DH_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_19 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_DH_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_19 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_DH_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_19 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_DH_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_3_19 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *5_0 (0_0, 20_0) );
HMI_INTER_XE6810_DHN_DIVIDE = DIVIDE_FUNCTION( 0 , NEVADA_COMM_AR_V_3_19 , *327_67 (1_0, 1000_0) );
HMI_INTER_XE6810_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_5_25 , *16383_5 (1_0, 100000_0) );
HMI_INTER_XE6897_ALM = ALM_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *1_0 (0_0, 20_0) );
HMI_INTER_XE6897_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *1_0 (0_0, 20_0) );
HMI_INTER_XE6897_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *1_0 (0_0, 20_0) );
HMI_INTER_XE6897_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_1 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , *1_0 (0_0, 20_0) );
HMI_INTER_XE6897N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6897_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6897_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_6_1 , *16383_5 (1_0, 100000_0) );
HMI_INTER_XE6898_ALM = ALM_FUNCTION( if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_2 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , *1_0 (0_0, 20_0) );
HMI_INTER_XE6898_A_OUT_1 = A_OUT_1_FUNCTION( if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_2 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , *1_0 (0_0, 20_0) );
HMI_INTER_XE6898_I_OUT_1 = I_OUT_1_FUNCTION( if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_2 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , *1_0 (0_0, 20_0) );
HMI_INTER_XE6898_B_OUT_1 = B_OUT_1_FUNCTION( if ( SI ) , { out = ((in/32767)*range) * 25_4; } , else , { out = (in/32767)*range; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , NEVADA_COMM_AR_V_6_2 , in , range , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , *1_0 (0_0, 20_0) );
HMI_INTER_XE6898N_DIVIDE = DIVIDE_FUNCTION( 0 , HMI_INTER_XE6898_SW_A_SW , *327_67 (1_0, 100000_0) );
HMI_INTER_XE6898_SW_A_SW = A_SW_FUNCTION( BENTLY_TEST_ALMSP_B_NAME , NEVADA_COMM_AR_V_6_2 , *16383_5 (1_0, 100000_0) );
