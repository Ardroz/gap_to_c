FUEL_SYS_BKS_FAIL_B_NAME = B_NAME_FUNCTION( FUEL_SYS_BLKSNOTOPN_AND );
FUEL_SYS_BLKSFL_OR_OR = OR_FUNCTION( FUEL_SYS_GSSOVALM1_B_NAME , FUEL_SYS_GSSOVALM3_B_NAME );
FUEL_SYS_BLKSNOTOPN_AND = AND_FUNCTION( FUEL_SYS_GASSTRT_05_SFC_STEP , FUEL_SYS_BLKSFL_OR_OR );
FUEL_SYS_BLKSOFF_B_NAME = B_NAME_FUNCTION( FUEL_SYS_NSOV624904_NOT );
FUEL_SYS_CHOPFUEL_B_NAME = B_NAME_FUNCTION( SHUTDOWN_CHOP_FUEL_B_NAME );
FUEL_SYS_CLR_HOLD_OR = OR_FUNCTION( FUEL_SYS_CHOPFUEL_B_NAME , FUEL_SYS_DELAY_CLR_DELAY );
FUEL_SYS_DELAY_CLR_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_SOV6204_B_NAME , 0 , *5_0 (0_0, 10_0) );
FUEL_SYS_FUELNOTON_NOT = NOT_FUNCTION( FUEL_SYS_INI_LAT_LATCH1 );
FUEL_SYS_FUEL_INI_B_NAME = B_NAME_FUNCTION( FUEL_SYS_HOLD_INI_LATCH );
FUEL_SYS_FUEL_OFF_B_NAME = B_NAME_FUNCTION( FUEL_SYS_FUELNOTON_NOT );
FUEL_SYS_FUEL_ON_B_NAME = B_NAME_FUNCTION( FUEL_SYS_INI_LAT_LATCH1 );
FUEL_SYS_FUEL_ONG_B_NAME = B_NAME_FUNCTION( FUEL_SYS_GASSTRT_05_SFC_STEP );
FUEL_SYS_FUEL_ONL_B_NAME = B_NAME_FUNCTION( FALSE );
FUEL_SYS_GSOVDELAY_A_NAME = A_NAME_FUNCTION(  , *1_0 (0_0, 3_0) );
FUEL_SYS_GSOV_DLY_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_SOV6249_04_LATCH1 , FUEL_SYS_GSOVDELAY_A_NAME , 0 );
FUEL_SYS_GSSOVALM1_B_NAME = B_NAME_FUNCTION( FUEL_SYS_ZS6249DLY1_DELAY );
FUEL_SYS_GSSOVALM2_B_NAME = B_NAME_FUNCTION( FUEL_SYS_ZS6249DLY2_DELAY );
FUEL_SYS_GSSOVALM3_B_NAME = B_NAME_FUNCTION( FUEL_SYS_ZS6204DLY1_DELAY );
FUEL_SYS_GSSOVALM4_B_NAME = B_NAME_FUNCTION( FUEL_SYS_ZS6204DLY2_DELAY );
FUEL_SYS_HOLD_INI_LATCH = LATCH_FUNCTION( 0 , FUEL_SYS_PAUL_OS_ONE_SHOT , FUEL_SYS_CLR_HOLD_OR );
FUEL_SYS_INI_LAT_LATCH1 = LATCH1_FUNCTION( FUEL_SYS_FUEL_ONL_B_NAME , 0 , 0 , FUEL_SYS_FUEL_ONG_B_NAME , 0 , 0 , 0 , FUEL_SYS_CHOPFUEL_B_NAME , 0 , FUEL_SYS_CHOPFUEL_B_NAME , 0 );
FUEL_SYS_NSOV624904_NOT = NOT_FUNCTION( FUEL_SYS_GSOV_DLY_DELAY );
FUEL_SYS_N_CHOPFUEL_NOT = NOT_FUNCTION( FUEL_SYS_CHOPFUEL_B_NAME );
FUEL_SYS_OPNBLK_STR_B_NAME = B_NAME_FUNCTION( FUEL_SYS_GASSTRT_05_SFC_STEP );
FUEL_SYS_PAUL_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , FUEL_SYS_INI_LAT_LATCH1 , FUEL_SYS_CLR_HOLD_OR , *2_0 (1_0, 3_0) );
FUEL_SYS_SOV6204_B_NAME = B_NAME_FUNCTION( FUEL_SYS_GSOV_DLY_DELAY );
FUEL_SYS_SOV6208_B_NAME = B_NAME_FUNCTION( FUEL_SYS_SOV6249_04_LATCH1 );
FUEL_SYS_SOV6249_B_NAME = B_NAME_FUNCTION( FUEL_SYS_GSOV_DLY_DELAY );
FUEL_SYS_SOV6249_04_LATCH1 = LATCH1_FUNCTION( 0 , FUEL_SYS_CHOPFUEL_B_NAME , 0 , FUEL_SYS_CHOPFUEL_B_NAME , 0 , FUEL_SYS_OPNBLK_STR_B_NAME , 0 , 0 );
FUEL_SYS_ZS6204_B_NAME = B_NAME_FUNCTION( A1_A12_BI2_ZS6204_BIO_BI );
FUEL_SYS_ZS6204DLY1_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_ZS6204NOPN_AND , 0 , *2_5 (0_0, 5_0) );
FUEL_SYS_ZS6204DLY2_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_ZS6204NCLS_AND , 0 , *1_0 (0_0, 5_0) );
FUEL_SYS_ZS6204NCLS_AND = AND_FUNCTION( FUEL_SYS_BLKSOFF_B_NAME , FUEL_SYS_ZS6204OPEN_NOT );
FUEL_SYS_ZS6204NOPN_AND = AND_FUNCTION( FUEL_SYS_ZS6204_B_NAME , FUEL_SYS_GSOV_DLY_DELAY );
FUEL_SYS_ZS6204OPEN_NOT = NOT_FUNCTION( FUEL_SYS_ZS6204_B_NAME );
FUEL_SYS_ZS6249_B_NAME = B_NAME_FUNCTION( A1_A12_BI2_ZS6249_BIO_BI );
FUEL_SYS_ZS6249DLY1_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_ZS6249NOPN_AND , 0 , *2_5 (0_0, 5_0) );
FUEL_SYS_ZS6249DLY2_DELAY = DELAY_FUNCTION( 0 , FUEL_SYS_ZS6249NCLS_AND , 0 , *1_0 (0_0, 5_0) );
FUEL_SYS_ZS6249NCLS_AND = AND_FUNCTION( FUEL_SYS_BLKSOFF_B_NAME , FUEL_SYS_ZS6249OPEN_NOT );
FUEL_SYS_ZS6249NOPN_AND = AND_FUNCTION( FUEL_SYS_ZS6249_B_NAME , FUEL_SYS_GSOV_DLY_DELAY );
FUEL_SYS_ZS6249OPEN_NOT = NOT_FUNCTION( FUEL_SYS_ZS6249_B_NAME );
