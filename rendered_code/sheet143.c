GROUP_02_N2N32_BI_BI_16CH = BI_16CH_FUNCTION( N2N32_BI_N2N32_SP01 , 0 , 0 , N2N32_BI_N2N32_SP02 , 0 , 0 , N2N32_BI_N2N32_SP03 , 0 , 0 , N2N32_BI_PSL6050 , 0 , 0 , N2N32_BI_PSLL6051 , 0 , 0 , N2N32_BI_LSL6001 , 0 , 0 , N2N32_BI_TSL6020 , 0 , 0 , N2N32_BI_PSH6016 , 0 , 0 , N2N32_BI_PSL6017 , 0 , 0 , N2N32_BI_N2N32_SP10 , 0 , 0 , N2N32_BI_N2N32_SP11 , 0 , 0 , N2N32_BI_PDSH6015 , 0 , 0 , N2N32_BI_N2N32_SP13 , 0 , 0 , N2N32_BI_PDSL6407 , 0 , 0 , N2N32_BI_N2N32_SP15 , 0 , 0 , N2N32_BI_N2N32_SP16 , 0 , 0 , N2N32_BI_NODE_STAT );
N2N32_BI_LSL6001_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_LSL6001_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP01_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP01_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP02_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP02_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP03_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP03_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP10_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP10_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP11_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP11_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP13_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP13_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP15_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP15_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_N2N32_SP16_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_N2N32_SP16_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_NDE_FLT_SD_AND = AND_FUNCTION( N2N32_BI_NODE_FLT_OR , *TRUE );
N2N32_BI_NODE_FAULT_AND = AND_FUNCTION( N2N32_BI_NODE_FLT_OR , 0 );
N2N32_BI_NODE_FLT_OR = OR_FUNCTION( N2N32_BI_NODE_STAT_NO_MESS , N2N32_BI_NODE_STAT_ADDR_FLT , N2N32_BI_NODE_STAT_TYPE_FLT , N2N32_BI_NODE_STAT_FAULT , 0 );
N2N32_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "NO_MESS" , ALARM_RESET_B_NAME );
N2N32_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "ADDR_FLT" , ALARM_RESET_B_NAME );
N2N32_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "TYPE_FLT" , ALARM_RESET_B_NAME );
N2N32_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "FAULT" , ALARM_RESET_B_NAME );
N2N32_BI_PDSH6015_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PDSH6015_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_PDSL6407_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PDSL6407_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_PSH6016_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PSH6016_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_PSL6017_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PSL6017_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_PSL6050_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PSL6050_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_PSLL6051_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_PSLL6051_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N2N32_BI_TSL6020_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N2N32_BI_TSL6020_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
