// RTC 
// PIPE_P 
// PIPE_P 
// PIPE_P 
// PIPE_P 
// UDP_P 
// UDP_P 
// UDP_P 
// UDP_P 
// UDP_P 
// UDP_P 
// UDP_P 
// UDP_P 
// SIO232PORT 
// SIO232PORT 
// TCP_P 
CPU_DAYS_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 16 , CPU_MB_VALUES_OUT_3 );
CPU_HOURS_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 2 , CPU_MB_VALUES_OUT_4 );
CPU_MB_VALUES_OUT_6 =(int)0.0;
CPU_MB_VALUES_OUT_5 =(int)0.0;
CPU_MB_VALUES_OUT_4 =(int)0.0;
CPU_MB_VALUES_OUT_3 =(int)0.0;
CPU_MB_VALUES_OUT_2 =(int)0.0;
CPU_MB_VALUES_OUT_1 =(int)0.0;
CPU_MINUTES_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 0 , CPU_MB_VALUES_OUT_5 );
CPU_MONTHS_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 4 , CPU_MB_VALUES_OUT_2 );
CPU_SECONDS_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 0 , CPU_MB_VALUES_OUT_6 );
CPU_SYNC_CLOCK_OR = OP_INTRFC_SYNC_CLOCK_B_NAME;
CPU_SYNC_INPUT_B_NAME = *TRUE;
CPU_TOD_T_TO_AN = T_TO_AN_FUNCTION( 1 , A1_A01_CPU_CLOCK_TOD );
CPU_TO_MODBUS_OUT_6 = (double)A1_A01_CPU_CLOCK_SECONDS;
CPU_TO_MODBUS_OUT_5 = (double)A1_A01_CPU_CLOCK_MINUTES;
CPU_TO_MODBUS_OUT_4 = (double)A1_A01_CPU_CLOCK_HOURS;
CPU_TO_MODBUS_OUT_3 = (double)A1_A01_CPU_CLOCK_DAYS;
CPU_TO_MODBUS_OUT_2 = (double)A1_A01_CPU_CLOCK_MONTHS;
CPU_TO_MODBUS_OUT_1 = (double)A1_A01_CPU_CLOCK_YEARS;
CPU_YEAR_I_SW = I_SW_FUNCTION( CPU_SYNC_INPUT_B_NAME , 97 , CPU_MB_VALUES_OUT_1 );
// TUNE_VAR 
// NT_CPU 
// INTERFACE 