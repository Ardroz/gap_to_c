A1_A04_MPU_FLT_IO_FLT = IO_FLT_FUNCTION(  );
A1_A04_MPU_N25_MAX_A_MAX = A_MAX_FUNCTION( A1_A04_MPU_SE6800_MONITOR , A1_A04_MPU_SE6801_MONITOR );
A1_A04_MPU_NSD_MAX_A_MAX = A_MAX_FUNCTION( A1_A04_MPU_SE6812_MONITOR , A1_A04_MPU_SE6813_MONITOR );
AI_MPU_FUNCTION(0 , 1 , 0 , TRUE , "10000" , 11500.0 , 0.7491 , 0 , -10.0 , 0 , SHUTDOWN_SD_RESET_B_NAME , 0,&A1_A04_MPU_SE6800_AI_MPU,&A1_A04_MPU_SE6800_DERIV,&A1_A04_MPU_SE6800_FAULT,&A1_A04_MPU_SE6800_HI_LATCH,&A1_A04_MPU_SE6800_LATCH_OR,&A1_A04_MPU_SE6800_LO_LATCH,&A1_A04_MPU_SE6800_MIN_SPEED,&A1_A04_MPU_SE6800_MONITOR);
AI_MPU_FUNCTION(0 , 1 , 0 , TRUE , "10000" , 11500.0 , 0.7491 , 0 , -10.0 , 0 , SHUTDOWN_SD_RESET_B_NAME , 0,&A1_A04_MPU_SE6801_AI_MPU,&A1_A04_MPU_SE6801_DERIV,&A1_A04_MPU_SE6801_FAULT,&A1_A04_MPU_SE6801_HI_LATCH,&A1_A04_MPU_SE6801_LATCH_OR,&A1_A04_MPU_SE6801_LO_LATCH,&A1_A04_MPU_SE6801_MIN_SPEED,&A1_A04_MPU_SE6801_MONITOR);
AI_MPU_FUNCTION(0 , 1 , 100.0 , TRUE , "5000" , 4800.0 , 0.8 , 0 , -10.0 , 0 , SHUTDOWN_SD_RESET_B_NAME , 0,&A1_A04_MPU_SE6812_AI_MPU,&A1_A04_MPU_SE6812_DERIV,&A1_A04_MPU_SE6812_FAULT,&A1_A04_MPU_SE6812_HI_LATCH,&A1_A04_MPU_SE6812_LATCH_OR,&A1_A04_MPU_SE6812_LO_LATCH,&A1_A04_MPU_SE6812_MIN_SPEED,&A1_A04_MPU_SE6812_MONITOR);
AI_MPU_FUNCTION(0 , 1 , 100.0 , TRUE , "5000" , 4800.0 , 0.8 , 0 , -10.0 , 0 , SHUTDOWN_SD_RESET_B_NAME , 0,&A1_A04_MPU_SE6813_AI_MPU,&A1_A04_MPU_SE6813_DERIV,&A1_A04_MPU_SE6813_FAULT,&A1_A04_MPU_SE6813_HI_LATCH,&A1_A04_MPU_SE6813_LATCH_OR,&A1_A04_MPU_SE6813_LO_LATCH,&A1_A04_MPU_SE6813_MIN_SPEED,&A1_A04_MPU_SE6813_MONITOR);
HMI_INTER_N25SEL_A_NAME = A1_A04_MPU_N25_MAX_A_MAX;
HMI_INTER_NSDSEL_A_NAME = A1_A04_MPU_NSD_MAX_A_MAX;
HMI_INTER_SE6800_A_NAME = A1_A04_MPU_SE6800_MONITOR;
HMI_INTER_SE6801_A_NAME = A1_A04_MPU_SE6801_MONITOR;
HMI_INTER_SE6812_A_NAME = A1_A04_MPU_SE6812_MONITOR;
HMI_INTER_SE6813_A_NAME = A1_A04_MPU_SE6813_MONITOR;
AI_MPU_4_FUNCTION(A1_A04_MPU_SE6800 , A1_A04_MPU_SE6812 , A1_A04_MPU_SE6801 , A1_A04_MPU_SE6813 , A1_A04_MPU_FLT , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0);