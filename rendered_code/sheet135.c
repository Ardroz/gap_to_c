GROUP_01_N1N31_BI_BI_16CH = BI_16CH_FUNCTION( N1N31_BI_PDSH64017 , 0 , 0 , N1N31_BI_PDSHH64018 , 0 , 0 , N1N31_BI_PDSH6405 , 0 , 0 , N1N31_BI_PDSHH6406 , 0 , 0 , N1N31_BI_N1N31_SP05 , 0 , 0 , N1N31_BI_N1N31_SP06 , 0 , 0 , N1N31_BI_PSH6117 , 0 , 0 , N1N31_BI_ZSC64217 , 0 , 0 , N1N31_BI_N1N31_SP09 , 0 , 0 , N1N31_BI_LSH62070A , 0 , 0 , N1N31_BI_N1N31_SP11 , 0 , 0 , N1N31_BI_FSL6409 , 0 , 0 , N1N31_BI_FSL6410 , 0 , 0 , N1N31_BI_PDSH6146 , 0 , 0 , N1N31_BI_N1N31_SP15 , 0 , 0 , N1N31_BI_PDSH6148 , 0 , 0 , N1N31_BI_NODE_STAT );
N1N31_BI_FSL6409_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_FSL6409_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_FSL6410_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_FSL6410_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_LSH62070A_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_LSH62070A_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_N1N31_SP05_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_N1N31_SP05_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_N1N31_SP06_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_N1N31_SP06_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_N1N31_SP09_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_N1N31_SP09_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_N1N31_SP11_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_N1N31_SP11_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_N1N31_SP15_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_N1N31_SP15_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_NDE_FLT_SD_AND = AND_FUNCTION( N1N31_BI_NODE_FLT_OR , *TRUE );
N1N31_BI_NODE_FAULT_AND = AND_FUNCTION( N1N31_BI_NODE_FLT_OR , 0 );
N1N31_BI_NODE_FLT_OR = OR_FUNCTION( N1N31_BI_NODE_STAT_NO_MESS , N1N31_BI_NODE_STAT_ADDR_FLT , N1N31_BI_NODE_STAT_TYPE_FLT , N1N31_BI_NODE_STAT_FAULT , 0 );
N1N31_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "NO_MESS" , ALARM_RESET_B_NAME );
N1N31_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "ADDR_FLT" , ALARM_RESET_B_NAME );
N1N31_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "TYPE_FLT" , ALARM_RESET_B_NAME );
N1N31_BI_NODE_STAT_NODE_FLT = NODE_FLT_FUNCTION( "FAULT" , ALARM_RESET_B_NAME );
N1N31_BI_PDSH6146_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSH6146_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PDSH6148_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSH6148_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PDSH64017_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSH64017_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PDSH6405_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSH6405_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PDSHH64018_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSHH64018_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PDSHH6406_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PDSHH6406_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_PSH6117_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_PSH6117_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );
N1N31_BI_ZSC64217_BI_L = BI_L_FUNCTION( "BI_L" ,  );
N1N31_BI_ZSC64217_BI_L = BI_L_FUNCTION( "BI_L_NOT" ,  );