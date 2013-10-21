SPRINT_DLY62270AL_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62270CMP_B_OUT_1 , 0 , *5_0 (3_0, 10_0) );
SPRINT_DLY62270AL_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62270CMP_B_OUT_1 , 0 , *5_0 (3_0, 10_0) );
SPRINT_DLY62270SD_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62270CMP_B_OUT_2 , 0 , *10_0 (3_0, 20_0) );
SPRINT_DLY62270SD_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62270CMP_B_OUT_2 , 0 , *10_0 (3_0, 20_0) );
SPRINT_DLY6231ALM_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62231CMP_B_OUT_1 , 0 , *5_0 (3_0, 10_0) );
SPRINT_DLY6231ALM_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62231CMP_B_OUT_1 , 0 , *5_0 (3_0, 10_0) );
SPRINT_DLY6231SD_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62231CMP_B_OUT_2 , 0 , *10_0 (3_0, 20_0) );
SPRINT_DLY6231SD_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62231CMP_B_OUT_2 , 0 , *10_0 (3_0, 20_0) );
SPRINT_FLOW_DLY1_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62234LOG_B_OUT_1 , 0 , *5_0 (0_0, 60_0) );
SPRINT_FLOW_DLY1_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62234LOG_B_OUT_1 , 0 , *5_0 (0_0, 60_0) );
SPRINT_FLOW_DLY2_DELAY = DELAY_FUNCTION( "DELAY" , 0 , SPRINT_FT62234LOG_B_OUT_2 , 0 , *5_0 (0_0, 60_0) );
SPRINT_FLOW_DLY2_DELAY = DELAY_FUNCTION( "R_TIME" , 0 , SPRINT_FT62234LOG_B_OUT_2 , 0 , *5_0 (0_0, 60_0) );
SPRINT_FT62231_A_NAME = A_NAME_FUNCTION( 0_0 );
SPRINT_FT62231CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "ALM" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62231_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , SPRINT_FTENA_MASK_AND , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } );
SPRINT_FT62231CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "A_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62231_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , SPRINT_FTENA_MASK_AND , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } );
SPRINT_FT62231CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "I_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62231_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , SPRINT_FTENA_MASK_AND , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } );
SPRINT_FT62231CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62231_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , SPRINT_FTENA_MASK_AND , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } );
SPRINT_FT62231CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_2" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62231_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , SPRINT_FTENA_MASK_AND , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } );
SPRINT_FT62231H_B_NAME = B_NAME_FUNCTION( SPRINT_DLY6231ALM_DELAY );
SPRINT_FT62231HH_B_NAME = B_NAME_FUNCTION( SPRINT_DLY6231SD_DELAY );
SPRINT_FT62234LOG_CALC_PLUS = CALC_PLUS_FUNCTION( "ALM" , 0 , 0 , aout1 , iout1 , sd1 , sd2 , SPRINT_PT62234_A_NAME , input , 25_0 , sdin1 , 50_0 , sdin2 , IFACE_SPRINT_SPRH2OSEL , flow , f1 , f2 , 1 , iin_1 , FALSE , e1 , if ((input < sdin1) && (flow > f1) && , e1) , { sd1 = true; } , else , { sd1 = false; } , if ((input < sdin2) && (flow > f2) && , e1) , { sd2 = true; } , else , { sd2 = false; } , *6_0 (0_0, 15_0) , *10_0 (0_0, 30_0) );
SPRINT_FT62234LOG_CALC_PLUS = CALC_PLUS_FUNCTION( "A_OUT_1" , 0 , 0 , aout1 , iout1 , sd1 , sd2 , SPRINT_PT62234_A_NAME , input , 25_0 , sdin1 , 50_0 , sdin2 , IFACE_SPRINT_SPRH2OSEL , flow , f1 , f2 , 1 , iin_1 , FALSE , e1 , if ((input < sdin1) && (flow > f1) && , e1) , { sd1 = true; } , else , { sd1 = false; } , if ((input < sdin2) && (flow > f2) && , e1) , { sd2 = true; } , else , { sd2 = false; } , *6_0 (0_0, 15_0) , *10_0 (0_0, 30_0) );
SPRINT_FT62234LOG_CALC_PLUS = CALC_PLUS_FUNCTION( "I_OUT_1" , 0 , 0 , aout1 , iout1 , sd1 , sd2 , SPRINT_PT62234_A_NAME , input , 25_0 , sdin1 , 50_0 , sdin2 , IFACE_SPRINT_SPRH2OSEL , flow , f1 , f2 , 1 , iin_1 , FALSE , e1 , if ((input < sdin1) && (flow > f1) && , e1) , { sd1 = true; } , else , { sd1 = false; } , if ((input < sdin2) && (flow > f2) && , e1) , { sd2 = true; } , else , { sd2 = false; } , *6_0 (0_0, 15_0) , *10_0 (0_0, 30_0) );
SPRINT_FT62234LOG_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_1" , 0 , 0 , aout1 , iout1 , sd1 , sd2 , SPRINT_PT62234_A_NAME , input , 25_0 , sdin1 , 50_0 , sdin2 , IFACE_SPRINT_SPRH2OSEL , flow , f1 , f2 , 1 , iin_1 , FALSE , e1 , if ((input < sdin1) && (flow > f1) && , e1) , { sd1 = true; } , else , { sd1 = false; } , if ((input < sdin2) && (flow > f2) && , e1) , { sd2 = true; } , else , { sd2 = false; } , *6_0 (0_0, 15_0) , *10_0 (0_0, 30_0) );
SPRINT_FT62234LOG_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_2" , 0 , 0 , aout1 , iout1 , sd1 , sd2 , SPRINT_PT62234_A_NAME , input , 25_0 , sdin1 , 50_0 , sdin2 , IFACE_SPRINT_SPRH2OSEL , flow , f1 , f2 , 1 , iin_1 , FALSE , e1 , if ((input < sdin1) && (flow > f1) && , e1) , { sd1 = true; } , else , { sd1 = false; } , if ((input < sdin2) && (flow > f2) && , e1) , { sd2 = true; } , else , { sd2 = false; } , *6_0 (0_0, 15_0) , *10_0 (0_0, 30_0) );
SPRINT_FT62270_A_NAME = A_NAME_FUNCTION( 0_0 );
SPRINT_FT62270CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "ALM" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62270_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } , 0 );
SPRINT_FT62270CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "A_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62270_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } , 0 );
SPRINT_FT62270CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "I_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62270_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } , 0 );
SPRINT_FT62270CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_1" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62270_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } , 0 );
SPRINT_FT62270CMP_CALC_PLUS = CALC_PLUS_FUNCTION( "B_OUT_2" , 0 , 0 , aout1 , iout1 , alarm , shutdown , SPRINT_FT62270_A_NAME , in1 , IFACE_CORE_H2ODMD_A_NAME , in2 , 3_0 , alm_sp , 6_0 , sht_sp , 1 , iin_1 , enable , if (fabs(in1-in2) > alm_sp && enable) , { alarm = true; } , else , { alarm = false; } , if (fabs(in1-in2) > sht_sp && enable) , { shutdown = true; } , else , { shutdown = false; } , 0 );
SPRINT_FT62270H_B_NAME = B_NAME_FUNCTION( SPRINT_DLY62270AL_DELAY );
SPRINT_FT62270HH_B_NAME = B_NAME_FUNCTION( SPRINT_DLY62270SD_DELAY );
SPRINT_FTENA_OR = OR_FUNCTION( SPRINT_LP_ON_3_SFC_STEP , SPRINT_HP_ON_3_SFC_STEP );
SPRINT_FTENA_MASK_AND = AND_FUNCTION( SPRINT_FTENA_OR , *TRUE );
SPRINT_GPM10LT50_B_NAME = B_NAME_FUNCTION( SPRINT_FLOW_DLY2_DELAY );
SPRINT_GPM6LT25_B_NAME = B_NAME_FUNCTION( SPRINT_FLOW_DLY1_DELAY );
SPRINT_PSL62227LL_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_PT62234_A_NAME = A_NAME_FUNCTION( 0_0 );
