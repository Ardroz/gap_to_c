double A2_A04_PI_GP1ACOMM_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0 , 0 , A2_A04_PI_PT62140A_COMM_ERR,&A2_A04_PI_GP1ACOMM_DELAY,&A2_A04_PI_GP1ACOMM_R_TIME, &A2_A04_PI_GP1ACOMM_DELAY_COUNTER);
double A2_A04_PI_GP1AENV_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62140A_ENV_FAULT,&A2_A04_PI_GP1AENV_DELAY,&A2_A04_PI_GP1AENV_R_TIME, &A2_A04_PI_GP1AENV_DELAY_COUNTER);
double A2_A04_PI_GP1AFLT_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62140A_FAULT,&A2_A04_PI_GP1AFLT_DELAY,&A2_A04_PI_GP1AFLT_R_TIME, &A2_A04_PI_GP1AFLT_DELAY_COUNTER);
LATCH1_FUNCTION(0 , 1 , GP2OA COMM ERROR (PT-62136A) , GP2OA SENSOR LOW (PT-62136A) , GP2OA SENSOR HIGH (PT-62136A) , GP2OA ENV_FAULT (PT-62136A) , GP2OA FAULT (PT-62136A) , 0 , 0 , 0 , 0 , 0 , 0 , A2_A04_PI_GP1IACOMM_DELAY , A2_A04_PI_PT62141A_LO_LATCH , A2_A04_PI_PT62141A_HI_LATCH , A2_A04_PI_GP1IAENV_DELAY , A2_A04_PI_GP1IAFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME,&A2_A04_PI_GP1IAALM_ALM_NO_1,&A2_A04_PI_GP1IAALM_ALM_NO_2,&A2_A04_PI_GP1IAALM_ALM_NO_3,&A2_A04_PI_GP1IAALM_ALM_NO_4,&A2_A04_PI_GP1IAALM_ALM_NO_5,&A2_A04_PI_GP1IAALM_FIRST_ALM,&A2_A04_PI_GP1IAALM_HORN,&A2_A04_PI_GP1IAALM_LATCH1,&A2_A04_PI_GP1IAALM_SEL_1,&A2_A04_PI_GP1IAALM_SEL_2,&A2_A04_PI_GP1IAALM_SEL_3,&A2_A04_PI_GP1IAALM_SEL_4,&A2_A04_PI_GP1IAALM_SEL_5);
double A2_A04_PI_GP1IACOMM_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0 , 0 , A2_A04_PI_PT62141A_COMM_ERR,&A2_A04_PI_GP1IACOMM_DELAY,&A2_A04_PI_GP1IACOMM_R_TIME, &A2_A04_PI_GP1IACOMM_DELAY_COUNTER);
double A2_A04_PI_GP1IAENV_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62141A_ENV_FAULT,&A2_A04_PI_GP1IAENV_DELAY,&A2_A04_PI_GP1IAENV_R_TIME, &A2_A04_PI_GP1IAENV_DELAY_COUNTER);
double A2_A04_PI_GP1IAFLT_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62141A_FAULT,&A2_A04_PI_GP1IAFLT_DELAY,&A2_A04_PI_GP1IAFLT_R_TIME, &A2_A04_PI_GP1IAFLT_DELAY_COUNTER);
LATCH1_FUNCTION(0 , 1 , GP2OA COMM ERROR (PT-62136A) , GP2OA SENSOR LOW (PT-62136A) , GP2OA SENSOR HIGH (PT-62136A) , GP2OA ENV_FAULT (PT-62136A) , GP2OA FAULT (PT-62136A) , 0 , 0 , 0 , 0 , 0 , 0 , A2_A04_PI_GP1OACOMM_DELAY , A2_A04_PI_PT62139A_LO_LATCH , A2_A04_PI_PT62139A_HI_LATCH , A2_A04_PI_GP1OAENV_DELAY , A2_A04_PI_GP1OAFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME,&A2_A04_PI_GP1OAALM_ALM_NO_1,&A2_A04_PI_GP1OAALM_ALM_NO_2,&A2_A04_PI_GP1OAALM_ALM_NO_3,&A2_A04_PI_GP1OAALM_ALM_NO_4,&A2_A04_PI_GP1OAALM_ALM_NO_5,&A2_A04_PI_GP1OAALM_FIRST_ALM,&A2_A04_PI_GP1OAALM_HORN,&A2_A04_PI_GP1OAALM_LATCH1,&A2_A04_PI_GP1OAALM_SEL_1,&A2_A04_PI_GP1OAALM_SEL_2,&A2_A04_PI_GP1OAALM_SEL_3,&A2_A04_PI_GP1OAALM_SEL_4,&A2_A04_PI_GP1OAALM_SEL_5);
double A2_A04_PI_GP1OACOMM_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0 , 0 , A2_A04_PI_PT62139A_COMM_ERR,&A2_A04_PI_GP1OACOMM_DELAY,&A2_A04_PI_GP1OACOMM_R_TIME, &A2_A04_PI_GP1OACOMM_DELAY_COUNTER);
double A2_A04_PI_GP1OAENV_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62139A_ENV_FAULT,&A2_A04_PI_GP1OAENV_DELAY,&A2_A04_PI_GP1OAENV_R_TIME, &A2_A04_PI_GP1OAENV_DELAY_COUNTER);
double A2_A04_PI_GP1OAFLT_DELAY_COUNTER;
DELAY_FUNCTION(1 , 0.03 , 0 , A2_A04_PI_PT62139A_FAULT,&A2_A04_PI_GP1OAFLT_DELAY,&A2_A04_PI_GP1OAFLT_R_TIME, &A2_A04_PI_GP1OAFLT_DELAY_COUNTER);
LATCH1_FUNCTION(0 , 1 , GP2OA COMM ERROR (PT-62136A) , GP2OA SENSOR LOW (PT-62136A) , GP2OA SENSOR HIGH (PT-62136A) , GP2OA ENV_FAULT (PT-62136A) , GP2OA FAULT (PT-62136A) , 0 , 0 , 0 , 0 , 0 , 0 , A2_A04_PI_GP1ACOMM_DELAY , A2_A04_PI_PT62140A_LO_LATCH , A2_A04_PI_PT62140A_HI_LATCH , A2_A04_PI_GP1AENV_DELAY , A2_A04_PI_GP1AFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME,&A2_A04_PI_GP1PAALM_ALM_NO_1,&A2_A04_PI_GP1PAALM_ALM_NO_2,&A2_A04_PI_GP1PAALM_ALM_NO_3,&A2_A04_PI_GP1PAALM_ALM_NO_4,&A2_A04_PI_GP1PAALM_ALM_NO_5,&A2_A04_PI_GP1PAALM_FIRST_ALM,&A2_A04_PI_GP1PAALM_HORN,&A2_A04_PI_GP1PAALM_LATCH1,&A2_A04_PI_GP1PAALM_SEL_1,&A2_A04_PI_GP1PAALM_SEL_2,&A2_A04_PI_GP1PAALM_SEL_3,&A2_A04_PI_GP1PAALM_SEL_4,&A2_A04_PI_GP1PAALM_SEL_5);
// AI_PRES_P2 
AI_PRESS_FUNCTION(1 , 1000.0 , 20 , 8.0 , 0 , ALARM_RESET_B_NAME,&A2_A04_PI_PT62139A_AI_PRESS,&A2_A04_PI_PT62139A_COMM_ERR,&A2_A04_PI_PT62139A_ENV_FAULT,&A2_A04_PI_PT62139A_FAULT,&A2_A04_PI_PT62139A_HI_LATCH,&A2_A04_PI_PT62139A_LATCH_OR,&A2_A04_PI_PT62139A_LO_LATCH);
AI_PRESS_FUNCTION(1 , 1000.0 , 20 , 8.0 , 0 , ALARM_RESET_B_NAME,&A2_A04_PI_PT62140A_AI_PRESS,&A2_A04_PI_PT62140A_COMM_ERR,&A2_A04_PI_PT62140A_ENV_FAULT,&A2_A04_PI_PT62140A_FAULT,&A2_A04_PI_PT62140A_HI_LATCH,&A2_A04_PI_PT62140A_LATCH_OR,&A2_A04_PI_PT62140A_LO_LATCH);
AI_PRESS_FUNCTION(1 , 1000.0 , 20 , 8.0 , 0 , ALARM_RESET_B_NAME,&A2_A04_PI_PT62141A_AI_PRESS,&A2_A04_PI_PT62141A_COMM_ERR,&A2_A04_PI_PT62141A_ENV_FAULT,&A2_A04_PI_PT62141A_FAULT,&A2_A04_PI_PT62141A_HI_LATCH,&A2_A04_PI_PT62141A_LATCH_OR,&A2_A04_PI_PT62141A_LO_LATCH);
