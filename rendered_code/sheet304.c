EGD_INTER_ANTIICE_ON_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R372_OUT_3_1 );
EGD_INTER_B16_CON_1_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_B16_CON_2_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_B16_CON_3_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_B1_16_AN_OUT_1 = OUT_1_FUNCTION( 0 , EGD_INTER_B16_CON_1_EGD_I , *0 (0, 6565536) );
EGD_INTER_B1_16_AN_OUT_2 = OUT_2_FUNCTION( 0 , EGD_INTER_B16_CON_1_EGD_I , *0 (0, 6565536) );
EGD_INTER_B2_16_AN_OUT_1 = OUT_1_FUNCTION( 0 , EGD_INTER_B16_CON_2_EGD_I , *0 (0, 6565536) );
EGD_INTER_B2_16_AN_OUT_2 = OUT_2_FUNCTION( 0 , EGD_INTER_B16_CON_2_EGD_I , *0 (0, 6565536) );
EGD_INTER_B3_16_AN_OUT_2 = OUT_2_FUNCTION( EGD_INTER_B16_CON_3_EGD_I , 0 , *0 (0, 6565536) );
EGD_INTER_B3_16_AN_OUT_1 = OUT_1_FUNCTION( EGD_INTER_B16_CON_3_EGD_I , 0 , *0 (0, 6565536) );
EGD_INTER_BOOST_FAIL_B_NAME = B_NAME_FUNCTION( EGD_INTER_BST_FLMASK_AND );
EGD_INTER_BST_FLMASK_AND = AND_FUNCTION( EGD_INTER_WORD_R372_OUT_1_1 , 0 );
EGD_INTER_CON1_SW_A_SW = A_SW_FUNCTION( EGD_INTER_B1_16_AN_OUT_1 , EGD_INTER_B1_16_AN_OUT_2 , 0 );
EGD_INTER_CON2_SW_A_SW = A_SW_FUNCTION( EGD_INTER_B2_16_AN_OUT_1 , EGD_INTER_B2_16_AN_OUT_2 , 0 );
EGD_INTER_CON3_SW_A_SW = A_SW_FUNCTION( EGD_INTER_B3_16_AN_OUT_1 , EGD_INTER_B3_16_AN_OUT_2 , 0 );
EGD_INTER_CONSUMER_LNK_ERR_1 = LNK_ERR_1_FUNCTION( 0 , 192_168_2_4 , A1_A01_CPU_PORT_18246_UDP_P , 0 , 0 , 0 , EGD_INTER_B16_CON_1 , EGD_INTER_B16_CON_2 , EGD_INTER_INT_REG_1 , EGD_INTER_INT_REG_2 , EGD_INTER_INT_REG_3 , EGD_INTER_INT_REG_4 , EGD_INTER_REAL_1 , EGD_INTER_REAL_2 , EGD_INTER_REAL_3 , EGD_INTER_B16_CON_3 , *2 (0, 255) , *1000 (500, 100000) , *1000_0 (500_0, 100000_0) );
EGD_INTER_CONSUMER_STATUS_1 = STATUS_1_FUNCTION( 0 , 192_168_2_4 , A1_A01_CPU_PORT_18246_UDP_P , 0 , 0 , 0 , EGD_INTER_B16_CON_1 , EGD_INTER_B16_CON_2 , EGD_INTER_INT_REG_1 , EGD_INTER_INT_REG_2 , EGD_INTER_INT_REG_3 , EGD_INTER_INT_REG_4 , EGD_INTER_REAL_1 , EGD_INTER_REAL_2 , EGD_INTER_REAL_3 , EGD_INTER_B16_CON_3 , *2 (0, 255) , *1000 (500, 100000) , *1000_0 (500_0, 100000_0) );
EGD_INTER_CONSUMER_LNK_ERR_2 = LNK_ERR_2_FUNCTION( 0 , 192_168_2_4 , A1_A01_CPU_PORT_18246_UDP_P , 0 , 0 , 0 , EGD_INTER_B16_CON_1 , EGD_INTER_B16_CON_2 , EGD_INTER_INT_REG_1 , EGD_INTER_INT_REG_2 , EGD_INTER_INT_REG_3 , EGD_INTER_INT_REG_4 , EGD_INTER_REAL_1 , EGD_INTER_REAL_2 , EGD_INTER_REAL_3 , EGD_INTER_B16_CON_3 , *2 (0, 255) , *1000 (500, 100000) , *1000_0 (500_0, 100000_0) );
EGD_INTER_CONSUMER_STATUS_2 = STATUS_2_FUNCTION( 0 , 192_168_2_4 , A1_A01_CPU_PORT_18246_UDP_P , 0 , 0 , 0 , EGD_INTER_B16_CON_1 , EGD_INTER_B16_CON_2 , EGD_INTER_INT_REG_1 , EGD_INTER_INT_REG_2 , EGD_INTER_INT_REG_3 , EGD_INTER_INT_REG_4 , EGD_INTER_REAL_1 , EGD_INTER_REAL_2 , EGD_INTER_REAL_3 , EGD_INTER_B16_CON_3 , *2 (0, 255) , *1000 (500, 100000) , *1000_0 (500_0, 100000_0) );
EGD_INTER_CONSUMER_UPDATE_T = UPDATE_T_FUNCTION( 0 , 192_168_2_4 , A1_A01_CPU_PORT_18246_UDP_P , 0 , 0 , 0 , EGD_INTER_B16_CON_1 , EGD_INTER_B16_CON_2 , EGD_INTER_INT_REG_1 , EGD_INTER_INT_REG_2 , EGD_INTER_INT_REG_3 , EGD_INTER_INT_REG_4 , EGD_INTER_REAL_1 , EGD_INTER_REAL_2 , EGD_INTER_REAL_3 , EGD_INTER_B16_CON_3 , *2 (0, 255) , *1000 (500, 100000) , *1000_0 (500_0, 100000_0) );
EGD_INTER_DMPR_1_A_NAME = A_NAME_FUNCTION( EGD_INTER_SCALE_1_CURVE_2D );
EGD_INTER_DMPR_2_A_NAME = A_NAME_FUNCTION( EGD_INTER_SCALE_2_CURVE_2D );
EGD_INTER_DMPR_3_A_NAME = A_NAME_FUNCTION( EGD_INTER_SCALE_3_CURVE_2D );
EGD_INTER_DMPR_4_A_NAME = A_NAME_FUNCTION( EGD_INTER_SCALE_4_CURVE_2D );
EGD_INTER_DMPR_FAIL_B_NAME = B_NAME_FUNCTION( EGD_INTER_DMP_FLMASK_AND );
EGD_INTER_DMP_FLMASK_AND = AND_FUNCTION( EGD_INTER_WORD_R372_OUT_2_1 , 0 );
EGD_INTER_INT_1_I_TO_AN = I_TO_AN_FUNCTION( 0 , EGD_INTER_INT_REG_1_EGD_I );
EGD_INTER_INT_2_I_TO_AN = I_TO_AN_FUNCTION( 0 , EGD_INTER_INT_REG_2_EGD_I );
EGD_INTER_INT_3_I_TO_AN = I_TO_AN_FUNCTION( 0 , EGD_INTER_INT_REG_3_EGD_I );
EGD_INTER_INT_4_I_TO_AN = I_TO_AN_FUNCTION( 0 , EGD_INTER_INT_REG_4_EGD_I );
EGD_INTER_INT_REG_1_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_INT_REG_2_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_INT_REG_3_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_INT_REG_4_EGD_I = EGD_I_FUNCTION(  );
EGD_INTER_MOT64219A_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R361_OUT_1_1 );
EGD_INTER_MOT64219B_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R361_OUT_2_1 );
EGD_INTER_NRTH1_A_NAME = A_NAME_FUNCTION( EGD_INTER_REAL_2_EGD_A );
EGD_INTER_NRTH1_HMTY_A_NAME = A_NAME_FUNCTION( EGD_INTER_REAL_3_EGD_A );
EGD_INTER_PDS1_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_9_1 );
EGD_INTER_PDS2_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_10_1 );
EGD_INTER_REAL_1_EGD_A = EGD_A_FUNCTION(  );
EGD_INTER_REAL_2_EGD_A = EGD_A_FUNCTION(  );
EGD_INTER_REAL_3_EGD_A = EGD_A_FUNCTION(  );
EGD_INTER_SCALE_1_CURVE_2D = CURVE_2D_FUNCTION( 0 , EGD_INTER_INT_1_OUT_1 , 0_0 , 0_0 , 0_0 , 100_0 , 65000_0 , 100_0 , *6400_0 (1_0, 7500_0) , *32000_0 (100_0, 64000_0) );
EGD_INTER_SCALE_2_CURVE_2D = CURVE_2D_FUNCTION( 0 , EGD_INTER_INT_2_OUT_1 , 0_0 , 0_0 , 0_0 , 100_0 , 65000_0 , 100_0 , *6400_0 (1_0, 7500_0) , *32000_0 (100_0, 64000_0) );
EGD_INTER_SCALE_3_CURVE_2D = CURVE_2D_FUNCTION( 0 , EGD_INTER_INT_3_OUT_1 , 0_0 , 0_0 , 0_0 , 100_0 , 65000_0 , 100_0 , *6400_0 (1_0, 7500_0) , *32000_0 (100_0, 64000_0) );
EGD_INTER_SCALE_4_CURVE_2D = CURVE_2D_FUNCTION( 0 , EGD_INTER_INT_4_OUT_1 , 0_0 , 0_0 , 0_0 , 100_0 , 65000_0 , 100_0 , *6400_0 (1_0, 7500_0) , *32000_0 (100_0, 64000_0) );
EGD_INTER_TE1_A_NAME = A_NAME_FUNCTION( EGD_INTER_REAL_1_EGD_A );
EGD_INTER_WORD_R360_OUT_1_1 = OUT_1_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_2_1 = OUT_2_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_3_1 = OUT_3_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_4_1 = OUT_4_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_5_1 = OUT_5_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_6_1 = OUT_6_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_7_1 = OUT_7_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_8_1 = OUT_8_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_9_1 = OUT_9_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_10_1 = OUT_10_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_11_1 = OUT_11_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_12_1 = OUT_12_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_13_1 = OUT_13_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_14_1 = OUT_14_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_15_1 = OUT_15_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R360_OUT_16_1 = OUT_16_1_FUNCTION( 0 , 0 , EGD_INTER_CON1_SW_A_SW , ZSH3 ANTI-ICE DMPR A OPN , ZSL3 ANTI-ICE DMPR A OPN , ZSH4 ANTI-ICE DMPR B OPN , ZSL4 ANTI-ICE DMPR B OPN , ZSH1 VENT DMPR A OPN , ZSL1 VENT DMPR A OPN , ZSH2 VENT DMPR B OPN , ZSL2 VENT DMPR B OPN , PDS1 BOOST A AIR FLW PRS SW , PDS2 BOOST A AIR FLW PRS SW , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_1_1 = OUT_1_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_2_1 = OUT_2_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_3_1 = OUT_3_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_4_1 = OUT_4_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_5_1 = OUT_5_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_6_1 = OUT_6_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_7_1 = OUT_7_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_8_1 = OUT_8_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_9_1 = OUT_9_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_10_1 = OUT_10_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_11_1 = OUT_11_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_12_1 = OUT_12_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_13_1 = OUT_13_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_14_1 = OUT_14_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_15_1 = OUT_15_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R361_OUT_16_1 = OUT_16_1_FUNCTION( 0 , 0 , EGD_INTER_CON2_SW_A_SW , RUN/STOP BOOST FAN A , RUN/STOP BOOST FAN B , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_1_1 = OUT_1_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_2_1 = OUT_2_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_3_1 = OUT_3_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_4_1 = OUT_4_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_5_1 = OUT_5_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_6_1 = OUT_6_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_7_1 = OUT_7_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_8_1 = OUT_8_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_9_1 = OUT_9_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_10_1 = OUT_10_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_11_1 = OUT_11_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_12_1 = OUT_12_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_13_1 = OUT_13_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_14_1 = OUT_14_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_15_1 = OUT_15_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_WORD_R372_OUT_16_1 = OUT_16_1_FUNCTION( 0 , 0 , EGD_INTER_CON3_SW_A_SW , BOOST FANS AIRFLOW FAILURE , DAMPER FAIL TO RETURN TO REST , ANTI-ICE RUNNING , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
EGD_INTER_ZSH1_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_5_1 );
EGD_INTER_ZSH2_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_7_1 );
EGD_INTER_ZSH3_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_1_1 );
EGD_INTER_ZSH4_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_3_1 );
EGD_INTER_ZSL1_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_6_1 );
EGD_INTER_ZSL2_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_8_1 );
EGD_INTER_ZSL3_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_2_1 );
EGD_INTER_ZSL4_B_NAME = B_NAME_FUNCTION( EGD_INTER_WORD_R360_OUT_4_1 );
