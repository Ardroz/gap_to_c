BI_16CH_FUNCTION(N3N40_BI_ENBL_MW , N3N40_BI_VIB_SUM_AL , N3N40_BI_VIB_SUM_SD , N3N40_BI_VIB_SYSMAL , N3N40_BI_VIB_GB_SD , N3N40_BI_LOC_ESTOP , N3N40_BI_REM_ESTOP , N3N40_BI_LOC_REM , N3N40_BI_CUST_PERM , N3N40_BI_RESET , N3N40_BI_CUST_86T , N3N40_BI_NET_CLOCK , N3N40_BI_REM_START , N3N40_BI_REM_STOP , N3N40_BI_ACKN , N3N40_BI_MW_UTIL , N3N40_BI_NODE_STAT , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0);
BI_L_FUNCTION(,&N3N40_BI_ACKN_BI_L,&N3N40_BI_ACKN_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_CUST_86T_BI_L,&N3N40_BI_CUST_86T_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_CUST_PERM_BI_L,&N3N40_BI_CUST_PERM_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_ENBL_MW_BI_L,&N3N40_BI_ENBL_MW_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_LOC_ESTOP_BI_L,&N3N40_BI_LOC_ESTOP_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_LOC_REM_BI_L,&N3N40_BI_LOC_REM_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_MW_UTIL_BI_L,&N3N40_BI_MW_UTIL_BI_L_NOT);
N3N40_BI_NDE_FLT_SD_AND = N3N40_BI_NODE_FLT_OR;
BI_L_FUNCTION(,&N3N40_BI_NET_CLOCK_BI_L,&N3N40_BI_NET_CLOCK_BI_L_NOT);
N3N40_BI_NODE_FAULT_AND = N3N40_BI_NODE_FLT_OR;
N3N40_BI_NODE_FLT_OR = N3N40_BI_NODE_STAT_NO_MESS || N3N40_BI_NODE_STAT_ADDR_FLT || N3N40_BI_NODE_STAT_TYPE_FLT || N3N40_BI_NODE_STAT_FAULT;
// NODE_FLT 
BI_L_FUNCTION(,&N3N40_BI_REM_ESTOP_BI_L,&N3N40_BI_REM_ESTOP_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_REM_START_BI_L,&N3N40_BI_REM_START_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_REM_STOP_BI_L,&N3N40_BI_REM_STOP_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_RESET_BI_L,&N3N40_BI_RESET_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_VIB_GB_SD_BI_L,&N3N40_BI_VIB_GB_SD_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_VIB_SUM_AL_BI_L,&N3N40_BI_VIB_SUM_AL_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_VIB_SUM_SD_BI_L,&N3N40_BI_VIB_SUM_SD_BI_L_NOT);
BI_L_FUNCTION(,&N3N40_BI_VIB_SYSMAL_BI_L,&N3N40_BI_VIB_SYSMAL_BI_L_NOT);