SPRINT_FT62231FLT_B_NAME = B_NAME_FUNCTION( SPRINT_FT62231VST_B_NAME );
SPRINT_FT62231VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_FT62270FLT_B_NAME = B_NAME_FUNCTION( SPRINT_FT62270VST_B_NAME );
SPRINT_FT62270VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_HEAT_EXCH_B_NAME = B_NAME_FUNCTION(  , 0 );
SPRINT_MSK62227_AND = AND_FUNCTION( SPRINT_NOT62227_NOT , SPRINT_PMPDLYON_DELAY );
SPRINT_MSK62233_AND = AND_FUNCTION( SPRINT_N62233_NOT , SPRINT_PMPDLYON_DELAY );
SPRINT_N62233_NOT = NOT_FUNCTION( SPRINT_PDSH62233_B_NAME );
SPRINT_NOT62227_NOT = NOT_FUNCTION( SPRINT_PSL62227_B_NAME );
SPRINT_PDSH62233_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PDSH62233H_B_NAME = B_NAME_FUNCTION( SPRINT_MSK62233_AND );
SPRINT_PMPDLYON_DELAY = DELAY_FUNCTION( 0 , SPRINT_MOT62226_B_NAME , 0 , *5_0 (0_0, 30_0) );
SPRINT_PMPDLYON_R_TIME = R_TIME_FUNCTION( 0 , SPRINT_MOT62226_B_NAME , 0 , *5_0 (0_0, 30_0) );
SPRINT_PSL62227_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PSL62227L_B_NAME = B_NAME_FUNCTION( SPRINT_MSK62227_AND );
SPRINT_PT62234FLT_B_NAME = B_NAME_FUNCTION( SPRINT_PT62234VST_B_NAME );
SPRINT_PT62234VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PT62239FLT_B_NAME = B_NAME_FUNCTION( SPRINT_PT62239VST_B_NAME );
SPRINT_PT62239VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PT62241FLT_B_NAME = B_NAME_FUNCTION( SPRINT_PT62241VST_B_NAME );
SPRINT_PT62241VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PT62250FLT_B_NAME = B_NAME_FUNCTION( SPRINT_PT62250VST_B_NAME );
SPRINT_PT62250VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PT62269FLT_B_NAME = B_NAME_FUNCTION( SPRINT_PT62269VST_B_NAME );
SPRINT_PT62269VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_TE62235FLT_B_NAME = B_NAME_FUNCTION( SPRINT_TE62235VST_B_NAME );
SPRINT_TE62235VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_TE62243_A_NAME = A_NAME_FUNCTION( 0_0 );
SPRINT_TE62243FLT_B_NAME = B_NAME_FUNCTION( SPRINT_TE62243VST_B_NAME );
SPRINT_TE62243LOG_ALM = ALM_FUNCTION( 0 , 0 , aout1 , iout1 , sd , SPRINT_TE62243_A_NAME , input , SPRINT_TE62243SPT_A_SW , sp , 1 , iin_1 , SPRINT_SOV62252_B_NAME , e1 , SPRINT_SOV62253_B_NAME , e2 , if ((input > sp) && (e1 || e2)) , { sd = true; } , else , { sd = false; } );
SPRINT_TE62243LOG_A_OUT_1 = A_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , sd , SPRINT_TE62243_A_NAME , input , SPRINT_TE62243SPT_A_SW , sp , 1 , iin_1 , SPRINT_SOV62252_B_NAME , e1 , SPRINT_SOV62253_B_NAME , e2 , if ((input > sp) && (e1 || e2)) , { sd = true; } , else , { sd = false; } );
SPRINT_TE62243LOG_I_OUT_1 = I_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , sd , SPRINT_TE62243_A_NAME , input , SPRINT_TE62243SPT_A_SW , sp , 1 , iin_1 , SPRINT_SOV62252_B_NAME , e1 , SPRINT_SOV62253_B_NAME , e2 , if ((input > sp) && (e1 || e2)) , { sd = true; } , else , { sd = false; } );
SPRINT_TE62243LOG_B_OUT_1 = B_OUT_1_FUNCTION( 0 , 0 , aout1 , iout1 , sd , SPRINT_TE62243_A_NAME , input , SPRINT_TE62243SPT_A_SW , sp , 1 , iin_1 , SPRINT_SOV62252_B_NAME , e1 , SPRINT_SOV62253_B_NAME , e2 , if ((input > sp) && (e1 || e2)) , { sd = true; } , else , { sd = false; } );
SPRINT_TE62243SPT_A_SW = A_SW_FUNCTION( SPRINT_HEAT_EXCH_B_NAME , *700_0 (250_0, 700_0) , *300_0 (200_0, 700_0) );
SPRINT_TE62243VST_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_TE62243_HH_B_NAME = B_NAME_FUNCTION( SPRINT_TE62243LOG_B_OUT_1 );
