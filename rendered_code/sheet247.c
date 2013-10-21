TLO_HE6104_B_NAME = B_NAME_FUNCTION( TLO_LSL6102_B_NAME );
TLO_LSL6102_B_NAME = B_NAME_FUNCTION( N1N34_BI_LSL6102_BI_L );
TLO_LSL6102ALM_B_NAME = B_NAME_FUNCTION( TLO_LSL6102NT_NOT );
TLO_LSL6102NT_NOT = NOT_FUNCTION( TLO_LSL6102_B_NAME );
TLO_MOT6135_B_NAME = B_NAME_FUNCTION( TLO_N25GT4600_A_COMPARE );
TLO_N25GT4600_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , CORE_ANALOG_N25SEL , 4600_0 , -10_0 );
TLO_N25GT4600_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , CORE_ANALOG_N25SEL , 4600_0 , -10_0 );
TLO_PDSH6118_B_NAME = B_NAME_FUNCTION( N1N34_BI_PDSH6118_BI_L );
TLO_PDSH6118AL_B_NAME = B_NAME_FUNCTION( TLO_PDSH6118D_DELAY );
TLO_PDSH6118D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSH6118NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6118D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSH6118NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6118NT_NOT = NOT_FUNCTION( TLO_PDSH6118_B_NAME );
TLO_PDSH6120_B_NAME = B_NAME_FUNCTION( N1N34_BI_PDSH6120_BI_L );
TLO_PDSH6120AL_B_NAME = B_NAME_FUNCTION( TLO_PDSH6120D_DELAY );
TLO_PDSH6120D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSH6120NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6120D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSH6120NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6120NT_NOT = NOT_FUNCTION( TLO_PDSH6120_B_NAME );
TLO_PDSH6146_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSH6146_BI_L );
TLO_PDSH6146AL_B_NAME = B_NAME_FUNCTION( TLO_PDSH6146D_DELAY );
TLO_PDSH6146D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSH6146NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6146D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSH6146NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6146NT_NOT = NOT_FUNCTION( TLO_PDSH6146_B_NAME );
TLO_PDSH6148_B_NAME = B_NAME_FUNCTION( N1N31_BI_PDSH6148_BI_L );
TLO_PDSH6148AL_B_NAME = B_NAME_FUNCTION( TLO_PDSH6148D_DELAY );
TLO_PDSH6148D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSH6148NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6148D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSH6148NT_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSH6148NT_NOT = NOT_FUNCTION( TLO_PDSH6148_B_NAME );
TLO_PDSHH6119_B_NAME = B_NAME_FUNCTION( N1N34_BI_PDSHH6119_BI_L );
TLO_PDSHH6119D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSHH6119N_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSHH6119D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSHH6119N_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSHH6119N_NOT = NOT_FUNCTION( TLO_PDSHH_6119_B_SW );
TLO_PDSHH6119S_B_NAME = B_NAME_FUNCTION( TLO_PDSHH6119D_DELAY );
TLO_PDSHH6144_B_NAME = B_NAME_FUNCTION( N1N34_BI_PDSHH6144_BI_L );
TLO_PDSHH6144D_DELAY = DELAY_FUNCTION( "DELAY" , 0 , TLO_PDSHH6144N_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSHH6144D_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , TLO_PDSHH6144N_NOT , 0 , *10_0 (0_0, 120_0) );
TLO_PDSHH6144N_NOT = NOT_FUNCTION( TLO_PDSHH_6144_B_SW );
TLO_PDSHH6144S_B_NAME = B_NAME_FUNCTION( TLO_PDSHH6144D_DELAY );
TLO_PDSHH_6119_B_SW = B_SW_FUNCTION( TLO_PDSHH6119_B_NAME , TRUE , *TRUE );
TLO_PDSHH_6144_B_SW = B_SW_FUNCTION( TLO_PDSHH6144_B_NAME , TRUE , *TRUE );
TLO_TLUBGT100_A_COMPARE = A_COMPARE_FUNCTION( "A_COMPARE" , TLO_TLUBSEL_A_NAME , 100_0 , -5_0 );
TLO_TLUBGT100_A_COMPARE = A_COMPARE_FUNCTION( "A_EQUAL" , TLO_TLUBSEL_A_NAME , 100_0 , -5_0 );
TLO_TLUBSEL_A_NAME = A_NAME_FUNCTION( CORE_ANALOG_TLUBSEL );
TLO_TLUB_GT100_B_NAME = B_NAME_FUNCTION( TLO_TLUBGT100_A_COMPARE );
TLO_TSL6113_B_NAME = B_NAME_FUNCTION( N1N34_BI_TSL6113_BI_L );
TLO_TSL6113ALM_B_NAME = B_NAME_FUNCTION( TLO_TSL6113NT_NOT );
TLO_TSL6113NT_NOT = NOT_FUNCTION( TLO_TSL6113_B_NAME );
