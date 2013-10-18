VENT_TAU_A_NAME = A_NAME_FUNCTION(  , *3_0 (0_0, 10_0) );
VENT_TE6421_A_NAME = A_NAME_FUNCTION( N2N5_RTD_TE6421_AI_RTD_L );
VENT_TE6421LAG_LAG_2 = LAG_2_FUNCTION( 0 , VENT_TAU_A_NAME , VENT_TE6421_A_NAME );
VENT_TE6421LALM_B_NAME = B_NAME_FUNCTION( VENT_TE6421LOG_B_OUT_3 );
VENT_TE6421LOG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alarm , shutdown , alarm2 , VENT_TE6421LAG_LAG_2 , input , 270_0 , alm_sp , 290_0 , shtdn_sp , 14_0 , alm_sp2 , 1 , iin_1 , VENT_TE6421_OK_NOT , enable1 , VENT_TE6421_OK_NOT , enable2 , if (input > alm_sp && enable1) , { alarm = true; } , else , { alarm = false; } , if (input > shtdn_sp && enable2) , { shutdown = true; } , else , { shutdown = false; } , if (input < alm_sp2 && enable1) , { alarm2 = true; } , else , { alarm2 = false; } );
VENT_TE6421_OK_NOT = NOT_FUNCTION( N2N5_RTD_TE6421_LATCH_OR );
VENT_TE6422_A_NAME = A_NAME_FUNCTION( N2N5_RTD_TE6422_AI_RTD_L );
VENT_TE6422LAG_LAG_2 = LAG_2_FUNCTION( 0 , VENT_TAU_A_NAME , VENT_TE6422_A_NAME );
VENT_TE6422LALM_B_NAME = B_NAME_FUNCTION( VENT_TE6422LOG_B_OUT_3 );
VENT_TE6422LOG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alarm , shutdown , alarm2 , VENT_TE6422LAG_LAG_2 , input , 270_0 , alm_sp , 290_0 , shtdn_sp , 14_0 , alm_sp2 , 1 , iin_1 , VENT_TE6422_OK_NOT , enable1 , VENT_TE6422_OK_NOT , enable2 , if (input > alm_sp && enable1) , { alarm = true; } , else , { alarm = false; } , if (input > shtdn_sp && enable2) , { shutdown = true; } , else , { shutdown = false; } , if (input < alm_sp2 && enable1) , { alarm2 = true; } , else , { alarm2 = false; } );
VENT_TE6422_OK_NOT = NOT_FUNCTION( N2N5_RTD_TE6422_LATCH_OR );
VENT_TE6423_A_NAME = A_NAME_FUNCTION( N2N5_RTD_TE6423_AI_RTD_L );
VENT_TE6423LAG_LAG_2 = LAG_2_FUNCTION( 0 , VENT_TAU_A_NAME , VENT_TE6423_A_NAME );
VENT_TE6423LALM_B_NAME = B_NAME_FUNCTION( VENT_TE6423LOG_B_OUT_3 );
VENT_TE6423LOG_CALC_PLUS = CALC_PLUS_FUNCTION( alm_sp2 , 1 , iin_1 , VENT_TE6423_OK_NOT , enable1 , VENT_TE6423_OK_NOT , enable2 , if (input > alm_sp && enable1) , { alarm = true; } , else , { alarm = false; } , if (input > shtdn_sp && enable2) , { shutdown = true; } , else , { shutdown = false; } , if (input < alm_sp2 && enable1) , { alarm2 = true; } , else , { alarm2 = false; } , 0 , 0 , aout1 , iout1 , alarm , shutdown , alarm2 , VENT_TE6423LAG_LAG_2 , input , 270_0 , alm_sp , 290_0 , shtdn_sp , 14_0 );
VENT_TE6423_OK_NOT = NOT_FUNCTION( N2N5_RTD_TE6423_LATCH_OR );
VENT_TE6424_A_NAME = A_NAME_FUNCTION( N2N5_RTD_TE6424_AI_RTD_L );
VENT_TE6424LAG_LAG_2 = LAG_2_FUNCTION( 0 , VENT_TAU_A_NAME , VENT_TE6424_A_NAME );
VENT_TE6424LALM_B_NAME = B_NAME_FUNCTION( VENT_TE6424LOG_B_OUT_3 );
VENT_TE6424LOG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alarm , shutdown , alarm2 , VENT_TE6424LAG_LAG_2 , input , 270_0 , alm_sp , 290_0 , shtdn_sp , 14_0 , alm_sp2 , 1 , iin_1 , VENT_TE6424_OK_NOT , enable1 , VENT_TE6424_OK_NOT , enable2 , if (input > alm_sp && enable1) , { alarm = true; } , else , { alarm = false; } , if (input > shtdn_sp && enable2) , { shutdown = true; } , else , { shutdown = false; } , if (input < alm_sp2 && enable1) , { alarm2 = true; } , else , { alarm2 = false; } );
VENT_TE6424_OK_NOT = NOT_FUNCTION( N2N5_RTD_TE6424_LATCH_OR );
VENT_TE_6421ALM_B_NAME = B_NAME_FUNCTION( VENT_TE6421LOG_B_OUT_1 );
VENT_TE_6421SD_B_NAME = B_NAME_FUNCTION( VENT_TE6421LOG_B_OUT_2 );
VENT_TE_6422ALM_B_NAME = B_NAME_FUNCTION( VENT_TE6422LOG_B_OUT_1 );
VENT_TE_6422SD_B_NAME = B_NAME_FUNCTION( VENT_TE6422LOG_B_OUT_2 );
VENT_TE_6423ALM_B_NAME = B_NAME_FUNCTION( VENT_TE6423LOG_B_OUT_1 );
VENT_TE_6423SD_B_NAME = B_NAME_FUNCTION( VENT_TE6423LOG_B_OUT_2 );
VENT_TE_6424ALM_B_NAME = B_NAME_FUNCTION( VENT_TE6424LOG_B_OUT_1 );
VENT_TE_6424SD_B_NAME = B_NAME_FUNCTION( VENT_TE6424LOG_B_OUT_2 );
