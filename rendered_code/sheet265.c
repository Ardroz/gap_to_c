VENT_K347_B_NAME = B_NAME_FUNCTION( VENT_TE68310CMP_A_COMPARE );
VENT_PDT64232_A_NAME = A_NAME_FUNCTION( 0_0 );
VENT_PDT64232AL_B_NAME = B_NAME_FUNCTION( VENT_PDT64232LG_B_OUT_1 );
VENT_PDT64232LG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alm1 , alm2 , VENT_PDT64232_A_NAME , input , 5_0 , alm_sp_hi , 8_0 , sd_sp_hi , 1 , iin_1 , enable1 , if (input > alm_sp_hi & enable1 ) , { alm1 = true; } , else , { alm1 = false; } , if (input > sd_sp_hi && enable1) , { alm2 = true; } , else , { alm2 = false; } , 0 );
VENT_PDT64232SD_B_NAME = B_NAME_FUNCTION( VENT_PDT64232LG_B_OUT_2 );
VENT_PDT64234_A_NAME = A_NAME_FUNCTION( 0_0 );
VENT_PDT64234AL_B_NAME = B_NAME_FUNCTION( VENT_PDT64234LG_B_OUT_1 );
VENT_PDT64234LG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alm1 , alm2 , VENT_PDT64234_A_NAME , input , 5_0 , alm_sp_hi , 8_0 , sd_sp_hi , 1 , iin_1 , enable1 , if (input > alm_sp_hi & enable1 ) , { alm1 = true; } , else , { alm1 = false; } , if (input > sd_sp_hi & enable1 ) , { alm2 = true; } , else , { alm2 = false; } , 0 );
VENT_PDT64234SD_B_NAME = B_NAME_FUNCTION( VENT_PDT64234LG_B_OUT_2 );
VENT_PDT64235_A_NAME = A_NAME_FUNCTION( 0_0 );
VENT_PDT64235AL_B_NAME = B_NAME_FUNCTION( VENT_PDT64235LG_B_OUT_1 );
VENT_PDT64235LG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alm1 , alm2 , VENT_PDT64235_A_NAME , input , 3_45 , alm_sp_hi , 4_5 , sd_sp_hi , 1 , iin_1 , enable1 , if (input > alm_sp_hi & enable1 ) , { alm1 = true; } , else , { alm1 = false; } , if (input > sd_sp_hi & enable1 ) , { alm2 = true; } , else , { alm2 = false; } , 0 );
VENT_PDT64235SD_B_NAME = B_NAME_FUNCTION( VENT_PDT64235LG_B_OUT_2 );
VENT_PDT64236_A_NAME = A_NAME_FUNCTION( 0_0 );
VENT_PDT64236AL_B_NAME = B_NAME_FUNCTION( VENT_PDT64236LG_B_OUT_1 );
VENT_PDT64236LG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alm1 , alm2 , VENT_PDT64236_A_NAME , input , 3_45 , alm_sp_hi , 4_5 , sd_sp_hi , 1 , iin_1 , enable1 , if (input > alm_sp_hi & enable1 ) , { alm1 = true; } , else , { alm1 = false; } , if (input > sd_sp_hi & enable1 ) , { alm2 = true; } , else , { alm2 = false; } , 0 );
VENT_PDT64236SD_B_NAME = B_NAME_FUNCTION( VENT_PDT64236LG_B_OUT_2 );
VENT_TE68310_A_NAME = A_NAME_FUNCTION( 50_0 );
VENT_TE68310CMP_A_COMPARE = A_COMPARE_FUNCTION( VENT_TE68310_A_NAME , -5_0 , *65_0 (40_0, 90_0) );
VENT_TE68310LOG_CALC_PLUS = CALC_PLUS_FUNCTION( aout1 , iout1 , alm1 , alm2 , VENT_TE68310_A_NAME , input , 125_0 , alm_sp_hi , 32_0 , alm_sp_lo , 1 , iin_1 , FALSE , enable1 , if (input > alm_sp_hi ) , { alm1 = true; } , else , { alm1 = false; } , if (input < alm_sp_lo ) , { alm2 = true; } , else , { alm2 = false; } , 0 , 0 );
VENT_TE68310_HI_B_NAME = B_NAME_FUNCTION( VENT_TE68310LOG_B_OUT_1 );
VENT_TE68310_LO_B_NAME = B_NAME_FUNCTION( VENT_TE68310LOG_B_OUT_2 );
VENT_TE68311_A_NAME = A_NAME_FUNCTION( 50_0 );
VENT_TE68311LOG_CALC_PLUS = CALC_PLUS_FUNCTION( 0 , 0 , aout1 , iout1 , alm1 , alm2 , VENT_TE68311_A_NAME , input , 125_0 , alm_sp_hi , 32_0 , alm_sp_lo , 1 , iin_1 , FALSE , enable1 , if (input > alm_sp_hi ) , { alm1 = true; } , else , { alm1 = false; } , if (input < alm_sp_lo ) , { alm2 = true; } , else , { alm2 = false; } );
VENT_TE68311_HI_B_NAME = B_NAME_FUNCTION( VENT_TE68311LOG_B_OUT_1 );
VENT_TE68311_LO_B_NAME = B_NAME_FUNCTION( VENT_TE68311LOG_B_OUT_2 );
