U_ESPRNTWS_T_H2OSPJ_CURVE_2D = CURVE_2D_FUNCTION( 0 , 0 , 0 , 1 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 8 , 0 , 100 , 110 , 120 , 26.9 , 27 , 30 , 40 , -40 , 45 , 48 , 50 , 60 , 70 , 80 , 90 , C_INLETCAL_T2RTE_A_NAME );
U_H2ODMD_C_H2OSPDMD_A_NAME = U_H2ODMD_DELT0MULT_MULTIPLY;
U_H2ODMD_DELT0MULT_MULTIPLY = C_INLETCAL_DELTA0_A_NAME * U_H2ODMD_STEPMULT_MULTIPLY;
U_H2ODMD_ESPRJA_ADD = ADJ_H2ODMDJA_A_NAME + U_H2ODMD_RSEDLYSW_A_MUX_HSS;
DELAY_FUNCTION(1 , 0.1 , ADJ_MANFILLJ_A_NAME , U_H2ODMD_SPRNTON_AND,&U_H2ODMD_FILLDLY_DELAY,&U_H2ODMD_FILLDLY_R_TIME);
U_H2ODMD_H20_Z1_ZMINUS1 = U_H2ODMD_DELT0MULT_MULTIPLY;
U_H2ODMD_H2OATHP_B_NAME = U_H2ODMD_H2OHPCMP_A_COMPARE;
U_H2ODMD_H2OATHPPV_B_NAME = U_H2ODMD_H2OATHPZ_ZMINUS1_B;
U_H2ODMD_H2OATHPZ_ZMINUS1_B = U_H2ODMD_H2OHPCMP_A_COMPARE;
U_H2ODMD_H2OATMIN_B_NAME = U_H2ODMD_H2OMNCMP_A_COMPARE;
U_H2ODMD_H2OATMINPV_B_NAME = U_H2ODMD_H2OATMINZ_ZMINUS1_B;
U_H2ODMD_H2OATMINZ_ZMINUS1_B = U_H2ODMD_H2OMNCMP_A_COMPARE;
U_H2ODMD_H2ODMDPV_A_NAME = U_H2ODMD_H20_Z1_ZMINUS1;
U_H2ODMD_H2ODMD_NC_A_NAME = U_H2ODMD_H2ORATELIM_RATE_LIMIT;
A_COMPARE_FUNCTION(0 , U_H2ODMD_HPMINLIM_A_MAX , U_H2ODMD_STEPMULT_MULTIPLY,&U_H2ODMD_H2OHPCMP_A_COMPARE,&U_H2ODMD_H2OHPCMP_A_EQUAL);
U_H2ODMD_H2OHPMIN_ADD = 0.05 + ADJ_H2ODMDJA_A_NAME + U_ESPRNTWS_T_H2OSPJ_CURVE_2D;
A_COMPARE_FUNCTION(0 , U_H2ODMD_MINWTRLIM_A_MAX , U_H2ODMD_STEPMULT_MULTIPLY,&U_H2ODMD_H2OMNCMP_A_COMPARE,&U_H2ODMD_H2OMNCMP_A_EQUAL);
U_H2ODMD_H2OMXSW_A_SW = A_SW_FUNCTION( ADJ_HPSPRNTMXJ_A_NAME , ADJ_LPSPRNTMXJ_A_NAME , U_H2OSOV_HPH2OSOV_B_NAME );
U_H2ODMD_H2ORATELIM_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , ADJ_H2OUPRAMPJ_A_NAME , TRUE , U_H2ODMD_RMPDNABS_ABSOLUTE , U_H2ODMD_SPRINTMX_A_MIN );
U_H2ODMD_H2OSPRDMD_A_NAME = U_H2ODMD_DELT0MULT_MULTIPLY;
U_H2ODMD_HPLPSW_A_SW = A_SW_FUNCTION( U_ESPRNTWS_T_H2OSPJ_CURVE_2D , U_H2ODMD_T_H2OESJ_CURVE_2D , U_H2OSOV_HPH2OSOV_B_NAME );
U_H2ODMD_HPMINLIM_A_MAX = A_MAX_FUNCTION( ADJ_H2OMNSPRJ_A_NAME , U_H2ODMD_H2OHPMIN_ADD );
U_H2ODMD_MANMODENA_AND = IFACE_CORE_Z_MANMODE && U_H2ODMD_SPRRMP_NOT && U_H2OSOV_H2OXFRDONE_B_NAME;
U_H2ODMD_MANSW_A_SW = A_SW_FUNCTION( IFACE_CORE_Z_WATERMAN , U_H2ODMD_MANMODENA_AND , U_H2ODMD_SPRINTMIN_A_MIN );
U_H2ODMD_MINFLOW_A_MAX = A_MAX_FUNCTION( ADJ_H2OMNSPRJ_A_NAME , U_H2ODMD_ESPRJA_ADD );
U_H2ODMD_MINSUM_ADD = 0.05 + ADJ_H2ODMDJA_A_NAME + ADJ_H2OMNSPRJ_A_NAME;
U_H2ODMD_MINWTRLIM_A_MAX = A_MAX_FUNCTION( ADJ_H2OMNSPRJ_A_NAME , U_H2ODMD_MINSUM_ADD );
A_COMPARE_FUNCTION(0 , C_P3COR_PS3QA_A_NAME , U_H2ODMD_MNSPRNTSUB_SUBTRACT,&U_H2ODMD_MNSPRNTCMP_A_COMPARE,&U_H2ODMD_MNSPRNTCMP_A_EQUAL);
U_H2ODMD_MNSPRNTSUB_SUBTRACT = 30 - U_PERMISIV_PS3MNSPRNT_A_NAME;
A_MUX_HSS_FUNCTION(1 , 100 , ADJ_H2ODNRAMPJ_A_NAME , ADJ_H2OFDNRMPJ_A_NAME , ADJ_H2OFDNRMPJ_A_NAME , ADJ_H2OLORTXFJ_A_NAME , U_H2ODMD_MNSPRNTCMP_A_COMPARE , U_H2OSOV_H2OXFRDONE_B_NAME , Z_SPRALM_SPRSDALM2_B_NAME , Z_SPRALM_SPRSDALM3_B_NAME,&U_H2ODMD_RATEMUX_A_MUX_HSS,&U_H2ODMD_RATEMUX_INT_SEL);
U_H2ODMD_RMPDNABS_ABSOLUTE = ABSOLUTE_FUNCTION( U_H2ODMD_RATEMUX_A_MUX_HSS );
A_MUX_HSS_FUNCTION(1 , ADJ_H2OMNSPRJ_A_NAME , U_ESPRNTWS_T_H2OSPJ_CURVE_2D , U_H2ODMD_FILLDLY_DELAY , U_H2ODMD_SPRNTCALC_CALCULATE , U_H2ODMD_XFRDLY_DELAY,&U_H2ODMD_RSEDLYSW_A_MUX_HSS,&U_H2ODMD_RSEDLYSW_INT_SEL);
U_H2ODMD_SPRENASW_A_SW = A_SW_FUNCTION( 0 , 1 , U_ESPRINT_H2ODOWNSTP_B_NAME );
U_H2ODMD_SPRINTMIN_A_MIN = A_MIN_FUNCTION( IFACE_CORE_Z_SPRDMSEQ , U_H2ODMD_ZRAISESW_A_SW );
U_H2ODMD_SPRINTMX_A_MIN = A_MIN_FUNCTION( U_H2ODMD_H2OMXSW_A_SW , U_H2ODMD_MANSW_A_SW );
U_H2ODMD_SPRNTCALC_CALCULATE = max (ADJ_H2OMNSPRJ_A_NAME " " (U_H2ODMD_HPLPSW_A_SW -     ( (F_RHWAR_WATCHL_A_NAME +F_RHWAR_WATCHL_A_NAMEja ) *F_RHWAR_WATCHL_A_NAMEjm ) ) ) ;
U_H2ODMD_SPRNTON_AND = U_ESPRINT_OPENH2OSOV_B_NAME && U_H2OSOV_H2OXFRDONE_B_NAME;
U_H2ODMD_SPRRMP_NOT =! U_ESPRINT_SPRH2ORMP_B_NAME;
U_H2ODMD_STEPMULT_MULTIPLY = U_H2ODMD_H2ORATELIM_RATE_LIMIT * U_H2ODMD_SPRENASW_A_SW;
U_H2ODMD_T_H2OESJ_CURVE_2D = CURVE_2D_FUNCTION( 0 , 0 , 0 , 1 , 12 , 13.8 , 15.6 , 17.2 , 17.5 , 17.5 , 17.5 , 17.5 , 17.5 , 17.5 , 18 , 18.6 , 18.6 , 0 , 100 , 110 , 120 , 26.9 , 27 , 30 , 40 , -40 , 45 , 48 , 50 , 60 , 70 , 80 , 90 , C_INLETCAL_T2RTE_A_NAME );
DELAY_FUNCTION(1 , 0 , ADJ_MANFILLJ_A_NAME , U_H2OSOV_H2OXFRDONE_B_NAME,&U_H2ODMD_XFRDLY_DELAY,&U_H2ODMD_XFRDLY_R_TIME);
U_H2ODMD_ZRAISESW_A_SW = A_SW_FUNCTION( ADJ_H2OMNSPRJ_A_NAME , U_H2ODMD_MINFLOW_A_MAX , U_H2ODMD_SPRRMP_NOT );