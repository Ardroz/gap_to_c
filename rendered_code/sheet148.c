GROUP_03_N3N41_BI_BI_16CH = BI_16CH_FUNCTION( N3N41_BI_FGASMONFL , 0 , 0 , N3N41_BI_T_LEL_AL , 0 , 0 , N3N41_BI_G_LEL_AL , 0 , 0 , N3N41_BI_PSHH6348 , 0 , 0 , N3N41_BI_DC_NOTAUTO , 0 , 0 , N3N41_BI_BATCHRDCFL , 0 , 0 , N3N41_BI_BATCHRACFL , 0 , 0 , N3N41_BI_LOBATTVOLT , 0 , 0 , N3N41_BI_BATGNDFLT , 0 , 0 , N3N41_BI_LOBAT_125V , 0 , 0 , N3N41_BI_LOC_START , 0 , 0 , N3N41_BI_LOC_STOP , 0 , 0 , N3N41_BI_N3N41_SP13 , 0 , 0 , N3N41_BI_N3N41_SP14 , 0 , 0 , N3N41_BI_HYD_ST_AUX , 0 , 0 , N3N41_BI_MCC_P_LOSS , 0 , 0 , N3N41_BI_NODE_STAT );
N3N41_BI_BATCHRACFL_BI_L = BI_L_FUNCTION(  );
N3N41_BI_BATCHRACFL_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_BATCHRDCFL_BI_L = BI_L_FUNCTION(  );
N3N41_BI_BATCHRDCFL_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_BATGNDFLT_BI_L = BI_L_FUNCTION(  );
N3N41_BI_BATGNDFLT_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_DC_NOTAUTO_BI_L = BI_L_FUNCTION(  );
N3N41_BI_DC_NOTAUTO_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_FGASMONFL_BI_L = BI_L_FUNCTION(  );
N3N41_BI_FGASMONFL_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_G_LEL_AL_BI_L = BI_L_FUNCTION(  );
N3N41_BI_G_LEL_AL_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_HYD_ST_AUX_BI_L = BI_L_FUNCTION(  );
N3N41_BI_HYD_ST_AUX_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_LOBATTVOLT_BI_L = BI_L_FUNCTION(  );
N3N41_BI_LOBATTVOLT_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_LOBAT_125V_BI_L = BI_L_FUNCTION(  );
N3N41_BI_LOBAT_125V_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_LOC_START_BI_L = BI_L_FUNCTION(  );
N3N41_BI_LOC_START_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_LOC_STOP_BI_L = BI_L_FUNCTION(  );
N3N41_BI_LOC_STOP_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_MCC_P_LOSS_BI_L = BI_L_FUNCTION(  );
N3N41_BI_MCC_P_LOSS_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_N3N41_SP13_BI_L = BI_L_FUNCTION(  );
N3N41_BI_N3N41_SP13_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_N3N41_SP14_BI_L = BI_L_FUNCTION(  );
N3N41_BI_N3N41_SP14_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_NDE_FLT_SD_AND = AND_FUNCTION( N3N41_BI_NODE_FLT_OR , *TRUE );
N3N41_BI_NODE_FAULT_AND = AND_FUNCTION( N3N41_BI_NODE_FLT_OR , 0 );
N3N41_BI_NODE_FLT_OR = OR_FUNCTION( N3N41_BI_NODE_STAT_NO_MESS , N3N41_BI_NODE_STAT_ADDR_FLT , N3N41_BI_NODE_STAT_TYPE_FLT , N3N41_BI_NODE_STAT_FAULT , 0 );
N3N41_BI_NODE_STAT_NO_MESS = NO_MESS_FUNCTION( ALARM_RESET_B_NAME );
N3N41_BI_NODE_STAT_ADDR_FLT = ADDR_FLT_FUNCTION( ALARM_RESET_B_NAME );
N3N41_BI_NODE_STAT_TYPE_FLT = TYPE_FLT_FUNCTION( ALARM_RESET_B_NAME );
N3N41_BI_NODE_STAT_FAULT = FAULT_FUNCTION( ALARM_RESET_B_NAME );
N3N41_BI_PSHH6348_BI_L = BI_L_FUNCTION(  );
N3N41_BI_PSHH6348_BI_L_NOT = BI_L_NOT_FUNCTION(  );
N3N41_BI_T_LEL_AL_BI_L = BI_L_FUNCTION(  );
