A1_A09_ACT_FLT_IO_FLT = IO_FLT_FUNCTION(  );
A1_A09_ACT_TBVDVR_ACT_CTRL = ACT_CTRL_FUNCTION( TBV_CAL_DEMAND_A_NAME , CORE_DIGITAL_TBVVLVSD , ALARM_RESET_B_NAME , 0 , 3 , A1_A09_ACT_TBV_KP_A_NAME , 1_0 , 50_0 , 1_0 , 0 , 0 , 5 , 60_0 , -100_0 , TBV_CAL_NULL_I_A_NAME , 0_0 , 100_0 , 0 , 7_07 , 4 , 0 , 2_0 , 1_0 , 4 , 3_0 , 1 , 1_0 , 1_0 , CORE_DIGITAL_CALMODE , TBV_CAL_CAL_ENBL_B_NAME , TBV_CAL_AT_0_B_NAME , TBV_CAL_AT_100_B_NAME , 0 , *0_0 (-10_0, 110_0) , *5000_0 (0_0, 10000_0) );
A1_A09_ACT_TBV_KP_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_TBV_KP );
A1_A09_ACT_VBVDVR_ACT_CTRL = ACT_CTRL_FUNCTION( VBV_CAL_DEMAND_A_NAME , CORE_DIGITAL_VBVVLVSD , ALARM_RESET_B_NAME , 0 , 3 , A1_A09_ACT_VBV_KP_A_NAME , 0_0 , 50_0 , 05_0 , 0 , 2 , 5 , 120_0 , -80_0 , VBV_CAL_NULL_I_A_NAME , 0_0 , 0_0 , 0 , 7_07 , 4 , TRUE , 2_0 , 1_0 , 4 , 6_0 , 2 , 150_0 , 10000_0 , CORE_DIGITAL_CALMODE , VBV_CAL_CAL_ENBL_B_NAME , VBV_CAL_AT_0_B_NAME , VBV_CAL_AT_100_B_NAME , 0 , *0_0 (-10_0, 110_0) , *5000_0 (0_0, 10000_0) );
A1_A09_ACT_VBV_KP_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_VBV_KP );
UL_1_A1_A09_ACT_AO_ACT_CTL = AO_ACT_CTL_FUNCTION( A1_A09_ACT_VBVDVR , 0 , 0 , A1_A09_ACT_TBVDVR , 0 , 0 , A1_A09_ACT_FLT );
