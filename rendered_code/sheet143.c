BI_16CH_FUNCTION(N2N32_BI_N2N32_SP01 , N2N32_BI_N2N32_SP10 , N2N32_BI_N2N32_SP11 , N2N32_BI_PDSH6015 , N2N32_BI_N2N32_SP13 , N2N32_BI_PDSL6407 , N2N32_BI_N2N32_SP15 , N2N32_BI_N2N32_SP16 , N2N32_BI_N2N32_SP02 , N2N32_BI_N2N32_SP03 , N2N32_BI_PSL6050 , N2N32_BI_PSLL6051 , N2N32_BI_LSL6001 , N2N32_BI_TSL6020 , N2N32_BI_PSH6016 , N2N32_BI_PSL6017 , N2N32_BI_NODE_STAT , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0);
BI_L_FUNCTION(,&N2N32_BI_LSL6001_BI_L,&N2N32_BI_LSL6001_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP01_BI_L,&N2N32_BI_N2N32_SP01_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP02_BI_L,&N2N32_BI_N2N32_SP02_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP03_BI_L,&N2N32_BI_N2N32_SP03_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP10_BI_L,&N2N32_BI_N2N32_SP10_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP11_BI_L,&N2N32_BI_N2N32_SP11_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP13_BI_L,&N2N32_BI_N2N32_SP13_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP15_BI_L,&N2N32_BI_N2N32_SP15_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_N2N32_SP16_BI_L,&N2N32_BI_N2N32_SP16_BI_L_NOT);
N2N32_BI_NDE_FLT_SD_AND = N2N32_BI_NODE_FLT_OR;
N2N32_BI_NODE_FAULT_AND = N2N32_BI_NODE_FLT_OR;
N2N32_BI_NODE_FLT_OR = N2N32_BI_NODE_STAT_NO_MESS || N2N32_BI_NODE_STAT_ADDR_FLT || N2N32_BI_NODE_STAT_TYPE_FLT || N2N32_BI_NODE_STAT_FAULT;
// NODE_FLT 
BI_L_FUNCTION(,&N2N32_BI_PDSH6015_BI_L,&N2N32_BI_PDSH6015_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_PDSL6407_BI_L,&N2N32_BI_PDSL6407_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_PSH6016_BI_L,&N2N32_BI_PSH6016_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_PSL6017_BI_L,&N2N32_BI_PSL6017_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_PSL6050_BI_L,&N2N32_BI_PSL6050_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_PSLL6051_BI_L,&N2N32_BI_PSLL6051_BI_L_NOT);
BI_L_FUNCTION(,&N2N32_BI_TSL6020_BI_L,&N2N32_BI_TSL6020_BI_L_NOT);