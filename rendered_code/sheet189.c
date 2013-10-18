GAS_CHROM_ANA_FAIL_B_NAME = B_NAME_FUNCTION( DATA_IO_GAS_CHROM_BR_V_1_65 );
GAS_CHROM_C6_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_1 , in , range , (in/4095)*range , *2_0 (0_0, 100000_0) );
GAS_CHROM_C6_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_1 , in , range , (in/4095)*range , *2_0 (0_0, 100000_0) );
GAS_CHROM_CALMODEACT_B_NAME = B_NAME_FUNCTION(  , 0 );
GAS_CHROM_CO2_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_10 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_CO2_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_10 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_CO2_SW_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GAS_CHROM_CO2_CALCULATE , *0_1 (0_0, 10_0) );
GAS_CHROM_ETHANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_11 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_ETHANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_11 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_GC_IDLE_B_NAME = B_NAME_FUNCTION( DATA_IO_GAS_CHROM_BR_V_1_69 );
GAS_CHROM_GRS_BTUACT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_14 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_GRS_BTUACT_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_14 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_GRS_BTUDRY_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_12 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_GRS_BTUDRY_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_12 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_GRS_BTUSAT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_13 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_GRS_BTUSAT_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_13 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_IBUTANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_3 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_IBUTANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_3 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_IPENTANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_6 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_IPENTANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_6 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_METHANE_C_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_9 , in , range , offset , ((in/4095)*range)+offset , *30_0 (0_0, 100000_0) , *70_0 (0_0, 100_0) );
GAS_CHROM_METHANE_C_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_9 , in , range , offset , ((in/4095)*range)+offset , *30_0 (0_0, 100000_0) , *70_0 (0_0, 100_0) );
GAS_CHROM_N2_SW_A_SW = A_SW_FUNCTION( TIMERS_TEST_TRUE_B_NAME , GAS_CHROM_NITROGEN_CALCULATE , *5_8 (0_0, 10_0) );
GAS_CHROM_NBUTANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_4 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_NBUTANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_4 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_NEOPENTANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_5 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_NEOPENTANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_5 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUACT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_17 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUACT_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_17 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUDRY_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_15 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUDRY_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_15 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUSAT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_16 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NET_BTUSAT_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_16 , in , range , ((in/4095)*range)+800 , *400_0 (0_0, 100000_0) );
GAS_CHROM_NITROGEN_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_8 , in , range , (in/4095)*range , *12_0 (0_0, 100000_0) );
GAS_CHROM_NITROGEN_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_8 , in , range , (in/4095)*range , *12_0 (0_0, 100000_0) );
GAS_CHROM_NPENTANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_7 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_NPENTANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_7 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_PROPANE_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_2 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_PROPANE_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_2 , in , range , (in/4095)*range , *5_0 (0_0, 100000_0) );
GAS_CHROM_RF_DEVIATE_B_NAME = B_NAME_FUNCTION( DATA_IO_GAS_CHROM_BR_V_1_20 );
GAS_CHROM_SG_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_18 , in , range , ((in/4095)*range)+_4 , *0_4 (0_0, 100000_0) );
GAS_CHROM_SG_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_18 , in , range , ((in/4095)*range)+_4 , *0_4 (0_0, 100000_0) );
GAS_CHROM_TOT_CONC_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_21 , in , range , ((in/4095)*range)+90 , *20_0 (0_0, 100000_0) );
GAS_CHROM_TOT_CONC_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_21 , in , range , ((in/4095)*range)+90 , *20_0 (0_0, 100000_0) );
GAS_CHROM_Z_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_20 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
GAS_CHROM_Z_ALM = ALM_FUNCTION( 0 , 0 , DATA_IO_GAS_CHROM_AR_V_1_20 , in , range , (in/4095)*range , *1_0 (0_0, 100000_0) );
