GEN_AMPS_N_A_NAME = GEN_SW_05_A_SW;
GEN_AMPS_N_CAL_A_NAME = GEN_SW_04_A_SW;
GEN_CALC_04_CALCULATE = (GEN_PMS_MOD_AR_V_1_7*65536)+GEN_PMS_MOD_AR_V_1_8;
GEN_CALC_05_CALCULATE = (GEN_PMS_MOD_AR_V_1_9*65536)+GEN_PMS_MOD_AR_V_1_10;
GEN_CALC_06_CALCULATE = (GEN_PMS_MOD_AR_V_1_11*65536)+GEN_PMS_MOD_AR_V_1_12;
GEN_CALC_07_CALCULATE = (GEN_PMS_MOD_AR_V_1_13*65536)+GEN_PMS_MOD_AR_V_1_14;
GEN_CALC_08_CALCULATE = (GEN_PMS_MOD_AR_V_1_15*65536)+GEN_PMS_MOD_AR_V_1_16;
GEN_CALC_09_CALCULATE = (GEN_PMS_MOD_AR_V_1_17*65536)+GEN_PMS_MOD_AR_V_1_18;
GEN_CALC_10_CALCULATE = (GEN_PMS_MOD_AR_V_1_19*65536)+GEN_PMS_MOD_AR_V_1_20;
GEN_CALC_11_CALCULATE = (GEN_PMS_MOD_AR_V_1_21*65536)+GEN_PMS_MOD_AR_V_1_22;
GEN_CALC_12_CALCULATE = (GEN_PMS_MOD_AR_V_1_23*65536)+GEN_PMS_MOD_AR_V_1_24;
GEN_SCALESW09_A_SW = A_SW_FUNCTION( GEN_SCALE_09_CALCULATE , GEN_VA_A_DIV_DIVIDE , *TRUE );
GEN_SCALESW10_A_SW = A_SW_FUNCTION( GEN_SCALE_10_CALCULATE , GEN_VA_B_DIV_DIVIDE , *TRUE );
GEN_SCALESW11_A_SW = A_SW_FUNCTION( GEN_SCALE_11_CALCULATE , GEN_VA_C_DIV_DIVIDE , *TRUE );
GEN_SCALE_04_CALCULATE = (GEN_CALC_04_CALCULATE/65536)*600;
GEN_SCALE_05_CALCULATE = (GEN_CALC_05_CALCULATE/65536)*600;
GEN_SCALE_06_CALCULATE = (GEN_CALC_06_CALCULATE/65536)*120/undefined;
GEN_SCALE_07_CALCULATE = (GEN_CALC_07_CALCULATE/65536)*120/undefined;
GEN_SCALE_08_CALCULATE = (GEN_CALC_08_CALCULATE/65536)*120/undefined;
GEN_SCALE_09_CALCULATE = (GEN_CALC_09_CALCULATE/65536)*undefined;
GEN_SCALE_10_CALCULATE = (GEN_CALC_10_CALCULATE/65536)*undefined;
GEN_SCALE_11_CALCULATE = (GEN_CALC_11_CALCULATE/65536)*undefined;
GEN_SCALE_12_CALCULATE = (GEN_CALC_12_CALCULATE/65536)*undefined;
GEN_SW_04_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_04_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_SW_05_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_05_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_SW_06_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_06_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_SW_07_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_07_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_SW_08_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_08_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_SW_09_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALESW09_A_SW , *1.0 (0.0, 20000.0) );
GEN_SW_10_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALESW10_A_SW , *1.0 (0.0, 20000.0) );
GEN_SW_11_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALESW11_A_SW , *1.0 (0.0, 20000.0) );
GEN_SW_12_A_SW = A_SW_FUNCTION( GEN_GEN_METER_B_NAME , GEN_SCALE_12_CALCULATE , *1.0 (0.0, 20000.0) );
GEN_VA_A_A_NAME = GEN_SW_09_A_SW;
GEN_VA_A_DIV_DIVIDE = GEN_WATTS_A_A_NAME / GEN_PF_T_A_NAME;
GEN_VA_B_A_NAME = GEN_SW_10_A_SW;
GEN_VA_B_DIV_DIVIDE = GEN_WATTS_B_A_NAME / GEN_PF_T_A_NAME;
GEN_VA_C_A_NAME = GEN_SW_11_A_SW;
GEN_VA_C_DIV_DIVIDE = GEN_WATTS_C_A_NAME / GEN_PF_T_A_NAME;
GEN_VA_T_A_NAME = GEN_SW_12_A_SW;
GEN_VOLT_AB_A_NAME = GEN_SW_06_A_SW;
GEN_VOLT_BC_A_NAME = GEN_SW_07_A_SW;
GEN_VOLT_CA_A_NAME = GEN_SW_08_A_SW;
