GENERATOR_CDLO_GENR_B_NAME = B_NAME_FUNCTION( FALSE );
GENERATOR_FSWM_GENR_B_NAME = B_NAME_FUNCTION( FALSE );
GENERATOR_GEN_EARTH_B_NAME = B_NAME_FUNCTION( FALSE );
GENERATOR_GS124_CLSD_B_NAME = B_NAME_FUNCTION( FALSE );
GENERATOR_PSS_ON_B_NAME = B_NAME_FUNCTION( GENERATOR_PSS_ONENBL_AND );
GENERATOR_PSS_ONENBL_AND = AND_FUNCTION( GENERATOR_GEN_BKRCLS_B_NAME , GENERATOR_UTIL_SW_B_SW );
GENERATOR_SML_GENR_B_NAME = B_NAME_FUNCTION( FALSE );
GENERATOR_UTIL_SW_B_SW = B_SW_FUNCTION( TRUE , GENERATOR_UTIL_BKRCL_B_NAME , 0 );
