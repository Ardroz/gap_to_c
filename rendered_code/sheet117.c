A2_A04_PI_FLT_IO_FLT = IO_FLT_FUNCTION(  );
LATCH1_FUNCTION( , 1 , GP2IA COMM ERROR (PT-62137A) , GP2IA SENSOR LOW (PT-62137A) , GP2IA SENSOR HIGH (PT-62137A) , GP2IA ENV_FAULT (PT-62137A) , GP2IA FAULT (PT-62137A) ,  ,  ,  ,  ,  ,  , A2_A04_PI_GP2IACOMM_DELAY , A2_A04_PI_PT62137A_LO_LATCH , A2_A04_PI_PT62137A_HI_LATCH , A2_A04_PI_GP2IAENV_DELAY , A2_A04_PI_GP2IAFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME);
A2_A04_PI_GP2IAALM_ALM_NO_1 = output1;
A2_A04_PI_GP2IAALM_ALM_NO_2 = output2;
A2_A04_PI_GP2IAALM_ALM_NO_3 = output3;
A2_A04_PI_GP2IAALM_ALM_NO_4 = output4;
A2_A04_PI_GP2IAALM_ALM_NO_5 = output5;
A2_A04_PI_GP2IAALM_FIRST_ALM = output6;
A2_A04_PI_GP2IAALM_HORN = output7;
A2_A04_PI_GP2IAALM_LATCH1 = output8;
A2_A04_PI_GP2IAALM_SEL_1 = output9;
A2_A04_PI_GP2IAALM_SEL_2 = output10;
A2_A04_PI_GP2IAALM_SEL_3 = output11;
A2_A04_PI_GP2IAALM_SEL_4 = output12;
A2_A04_PI_GP2IAALM_SEL_5 = output13;
DELAY_FUNCTION(1 ,  , A2_A04_PI_PT62137A_COMM_ERR , 0);
A2_A04_PI_GP2IACOMM_DELAY = output1;
A2_A04_PI_GP2IACOMM_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62137A_ENV_FAULT);
A2_A04_PI_GP2IAENV_DELAY = output1;
A2_A04_PI_GP2IAENV_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62137A_FAULT);
A2_A04_PI_GP2IAFLT_DELAY = output1;
A2_A04_PI_GP2IAFLT_R_TIME = output2;
LATCH1_FUNCTION( , 1 , GP2OA COMM ERROR (PT-62136A) , GP2OA SENSOR LOW (PT-62136A) , GP2OA SENSOR HIGH (PT-62136A) , GP2OA ENV_FAULT (PT-62136A) , GP2OA FAULT (PT-62136A) ,  ,  ,  ,  ,  ,  , A2_A04_PI_GP2OACOMM_DELAY , A2_A04_PI_PT62136A_LO_LATCH , A2_A04_PI_PT62136A_HI_LATCH , A2_A04_PI_GP2OAENV_DELAY , A2_A04_PI_GP2OAFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME);
A2_A04_PI_GP2OAALM_ALM_NO_1 = output1;
A2_A04_PI_GP2OAALM_ALM_NO_2 = output2;
A2_A04_PI_GP2OAALM_ALM_NO_3 = output3;
A2_A04_PI_GP2OAALM_ALM_NO_4 = output4;
A2_A04_PI_GP2OAALM_ALM_NO_5 = output5;
A2_A04_PI_GP2OAALM_FIRST_ALM = output6;
A2_A04_PI_GP2OAALM_HORN = output7;
A2_A04_PI_GP2OAALM_LATCH1 = output8;
A2_A04_PI_GP2OAALM_SEL_1 = output9;
A2_A04_PI_GP2OAALM_SEL_2 = output10;
A2_A04_PI_GP2OAALM_SEL_3 = output11;
A2_A04_PI_GP2OAALM_SEL_4 = output12;
A2_A04_PI_GP2OAALM_SEL_5 = output13;
DELAY_FUNCTION(1 ,  , A2_A04_PI_PT62136A_COMM_ERR , 0);
A2_A04_PI_GP2OACOMM_DELAY = output1;
A2_A04_PI_GP2OACOMM_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62136A_ENV_FAULT);
A2_A04_PI_GP2OAENV_DELAY = output1;
A2_A04_PI_GP2OAENV_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62136A_FAULT);
A2_A04_PI_GP2OAFLT_DELAY = output1;
A2_A04_PI_GP2OAFLT_R_TIME = output2;
LATCH1_FUNCTION( , 1 , GP2PA COMM ERROR (PT-62138A) , GP2PA SENSOR LOW (PT-62138A) , GP2PA SENSOR HIGH (PT-62138A) , GP2PA ENV_FAULT (PT-62138A) , GP2PA FAULT (PT-62138A) ,  ,  ,  ,  ,  ,  , A2_A04_PI_GP2PACOMM_DELAY , A2_A04_PI_PT62138A_LO_LATCH , A2_A04_PI_PT62138A_HI_LATCH , A2_A04_PI_GP2PAENV_DELAY , A2_A04_PI_GP2PAFLT_DELAY , TIMERS_TEST_TRUE_B_NAME , ALARM_RESET_B_NAME);
A2_A04_PI_GP2PAALM_ALM_NO_1 = output1;
A2_A04_PI_GP2PAALM_ALM_NO_2 = output2;
A2_A04_PI_GP2PAALM_ALM_NO_3 = output3;
A2_A04_PI_GP2PAALM_ALM_NO_4 = output4;
A2_A04_PI_GP2PAALM_ALM_NO_5 = output5;
A2_A04_PI_GP2PAALM_FIRST_ALM = output6;
A2_A04_PI_GP2PAALM_HORN = output7;
A2_A04_PI_GP2PAALM_LATCH1 = output8;
A2_A04_PI_GP2PAALM_SEL_1 = output9;
A2_A04_PI_GP2PAALM_SEL_2 = output10;
A2_A04_PI_GP2PAALM_SEL_3 = output11;
A2_A04_PI_GP2PAALM_SEL_4 = output12;
A2_A04_PI_GP2PAALM_SEL_5 = output13;
DELAY_FUNCTION(1 ,  , A2_A04_PI_PT62138A_COMM_ERR , 0);
A2_A04_PI_GP2PACOMM_DELAY = output1;
A2_A04_PI_GP2PACOMM_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62138A_ENV_FAULT);
A2_A04_PI_GP2PAENV_DELAY = output1;
A2_A04_PI_GP2PAENV_R_TIME = output2;
DELAY_FUNCTION(1 , 0.03 ,  , A2_A04_PI_PT62138A_FAULT);
A2_A04_PI_GP2PAFLT_DELAY = output1;
A2_A04_PI_GP2PAFLT_R_TIME = output2;
// AI_PRES_P1 
AI_PRESS_FUNCTION(1 , 800.0 , 8.0 ,  , ALARM_RESET_B_NAME , 20);
A2_A04_PI_PT62136A_AI_PRESS = output1;
A2_A04_PI_PT62136A_COMM_ERR = output2;
A2_A04_PI_PT62136A_ENV_FAULT = output3;
A2_A04_PI_PT62136A_FAULT = output4;
A2_A04_PI_PT62136A_HI_LATCH = output5;
A2_A04_PI_PT62136A_LATCH_OR = output6;
A2_A04_PI_PT62136A_LO_LATCH = output7;
AI_PRESS_FUNCTION(1 , 800.0 , 8.0 ,  , ALARM_RESET_B_NAME , 20);
A2_A04_PI_PT62137A_AI_PRESS = output1;
A2_A04_PI_PT62137A_COMM_ERR = output2;
A2_A04_PI_PT62137A_ENV_FAULT = output3;
A2_A04_PI_PT62137A_FAULT = output4;
A2_A04_PI_PT62137A_HI_LATCH = output5;
A2_A04_PI_PT62137A_LATCH_OR = output6;
A2_A04_PI_PT62137A_LO_LATCH = output7;
AI_PRESS_FUNCTION(1 , 800.0 , 8.0 ,  , ALARM_RESET_B_NAME , 20);
A2_A04_PI_PT62138A_AI_PRESS = output1;
A2_A04_PI_PT62138A_COMM_ERR = output2;
A2_A04_PI_PT62138A_ENV_FAULT = output3;
A2_A04_PI_PT62138A_FAULT = output4;
A2_A04_PI_PT62138A_HI_LATCH = output5;
A2_A04_PI_PT62138A_LATCH_OR = output6;
A2_A04_PI_PT62138A_LO_LATCH = output7;
CALC_PLUS_FUNCTION(A2_A04_PI_PT62136A_AI_PRESS , english , out , 1 , HMI_INTER_ENG_SI_B_NAME , SI , DUMMY_BO , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } , 1 , DUMMY_I , DUMMY_IO , );
HMI_INTER_PT62136A_A_OUT_1 = output1;
HMI_INTER_PT62136A_ALM = output2;
HMI_INTER_PT62136A_B_OUT_1 = output3;
HMI_INTER_PT62136A_I_OUT_1 = output4;
CALC_PLUS_FUNCTION(A2_A04_PI_PT62137A_AI_PRESS , english , out , 1 , HMI_INTER_ENG_SI_B_NAME , SI , DUMMY_BO , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } , 1 , DUMMY_I , DUMMY_IO , );
HMI_INTER_PT62137A_A_OUT_1 = output1;
HMI_INTER_PT62137A_ALM = output2;
HMI_INTER_PT62137A_B_OUT_1 = output3;
HMI_INTER_PT62137A_I_OUT_1 = output4;
CALC_PLUS_FUNCTION(A2_A04_PI_PT62138A_AI_PRESS , english , out , 1 , HMI_INTER_ENG_SI_B_NAME , SI , DUMMY_BO , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } , 1 , DUMMY_I , DUMMY_IO , );
HMI_INTER_PT62138A_A_OUT_1 = output1;
HMI_INTER_PT62138A_ALM = output2;
HMI_INTER_PT62138A_B_OUT_1 = output3;
HMI_INTER_PT62138A_I_OUT_1 = output4;
// AI_PRESS8 
