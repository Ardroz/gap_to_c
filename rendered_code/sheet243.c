FIN_FAN_A_OR = OR_FUNCTION( FIN_FAN_ENBLALMOVR_AND , FIN_FAN_LAT68327A_LATCH );
FIN_FAN_ALLVIBTIN_AND = AND_FUNCTION( FIN_FAN_LAT68327A_LATCH , FIN_FAN_LAT68327B_LATCH , FIN_FAN_C_OR_2FANS_OR );
FIN_FAN_B_OR = OR_FUNCTION( FIN_FAN_ENBLALMOVR_AND , FIN_FAN_LAT68327B_LATCH );
FIN_FAN_C_OR = OR_FUNCTION( FIN_FAN_ENBLALMOVR_AND , FIN_FAN_LAT68327C_LATCH );
FIN_FAN_C_OR_2FANS_OR = OR_FUNCTION( FIN_FAN_LAT68327C_LATCH , FIN_FAN_TWO_FANS_NOT );
FIN_FAN_EN_VIB_B_NAME = B_NAME_FUNCTION(  , *TRUE );
FIN_FAN_L68327ARST_AND = AND_FUNCTION( ALARM_RESET_B_NAME , FIN_FAN_NOT327A_NOT );
FIN_FAN_L68327BRST_AND = AND_FUNCTION( ALARM_RESET_B_NAME , FIN_FAN_NOT372B_NOT );
FIN_FAN_L68327CRST_AND = AND_FUNCTION( ALARM_RESET_B_NAME , FIN_FAN_NOT327C_NOT );
FIN_FAN_LAT68327A_LATCH = LATCH_FUNCTION( 0 , FIN_FAN_MASK_XFRA_AND , FIN_FAN_L68327ARST_AND );
FIN_FAN_LAT68327B_LATCH = LATCH_FUNCTION( 0 , FIN_FAN_MASK_XFRB_AND , FIN_FAN_L68327BRST_AND );
FIN_FAN_LAT68327C_LATCH = LATCH_FUNCTION( 0 , FIN_FAN_MASK_XFRC_AND , FIN_FAN_L68327CRST_AND );
FIN_FAN_MASK_XFRA_AND = AND_FUNCTION( FIN_FAN_VIB327A_B_NAME , FIN_FAN_MOT68326A_B_NAME , FIN_FAN_EN_FINFAN_B_NAME , FIN_FAN_EN_VIB_B_NAME );
FIN_FAN_MASK_XFRB_AND = AND_FUNCTION( FIN_FAN_VIB327B_B_NAME , FIN_FAN_MOT68326B_B_NAME , FIN_FAN_EN_FINFAN_B_NAME , FIN_FAN_EN_VIB_B_NAME );
FIN_FAN_MASK_XFRC_AND = AND_FUNCTION( FIN_FAN_NOT327C_NOT , FIN_FAN_MOT6092_B_NAME , FIN_FAN_EN_FINFAN_B_NAME , FIN_FAN_THREE_FANS_B_NAME , FIN_FAN_EN_VIB_B_NAME );
FIN_FAN_NOT327A_NOT = NOT_FUNCTION( FIN_FAN_VIB327A_B_NAME );
FIN_FAN_NOT327C_NOT = NOT_FUNCTION( FIN_FAN_VIB327C_B_NAME );
FIN_FAN_NOT372B_NOT = NOT_FUNCTION( FIN_FAN_VIB327B_B_NAME );
FIN_FAN_TWO_FANS_NOT = NOT_FUNCTION( FIN_FAN_THREE_FANS_B_NAME );
FIN_FAN_VIB327A_B_NAME = B_NAME_FUNCTION( A1_A12_BI1_XSH68327A_BIO_BI );
FIN_FAN_VIB327B_B_NAME = B_NAME_FUNCTION( A1_A12_BI1_XSH68327B_BIO_BI );
FIN_FAN_VIB327C_B_NAME = B_NAME_FUNCTION(  , 0 );
FIN_FAN_X68327AOS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , FIN_FAN_A_OR , 0_16 , 0 );
FIN_FAN_X68327AOS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , FIN_FAN_A_OR , 0_16 , 0 );
FIN_FAN_X68327A_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( FIN_FAN_LAT68327A_LATCH );
FIN_FAN_X68327BOS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , FIN_FAN_B_OR , 0_16 , 0 );
FIN_FAN_X68327BOS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , FIN_FAN_B_OR , 0_16 , 0 );
FIN_FAN_X68327B_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( FIN_FAN_LAT68327B_LATCH );
FIN_FAN_X68327COS_ONE_SHOT = ONE_SHOT_FUNCTION( "ONE_SHOT" , 0 , FIN_FAN_C_OR , 0_16 , 0 );
FIN_FAN_X68327COS_ONE_SHOT = ONE_SHOT_FUNCTION( "R_TIME" , 0 , FIN_FAN_C_OR , 0_16 , 0 );
FIN_FAN_X68327C_Z_ZMINUS1_B = ZMINUS1_B_FUNCTION( FIN_FAN_LAT68327C_LATCH );
FIN_FAN_XSH68327A_B_NAME = B_NAME_FUNCTION( FIN_FAN_X68327A_Z_ZMINUS1_B );
FIN_FAN_XSH68327B_B_NAME = B_NAME_FUNCTION( FIN_FAN_X68327B_Z_ZMINUS1_B );
FIN_FAN_XSH68327C_B_NAME = B_NAME_FUNCTION( FIN_FAN_X68327C_Z_ZMINUS1_B );
FIN_FAN_XSH68327HI_B_NAME = B_NAME_FUNCTION( FIN_FAN_ALLVIBTIN_AND );
