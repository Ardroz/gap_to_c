I_COMPARE_FUNCTION(5 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_CORE_SDNX_EQ,&FIRST_OUT_CORE_SDNX_GT,&FIRST_OUT_CORE_SDNX_LT);
I_COMPARE_FUNCTION(3 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_CORE_SDX_EQ,&FIRST_OUT_CORE_SDX_GT,&FIRST_OUT_CORE_SDX_LT);
FIRST_OUT_COR_DM_B_NAME = FIRST_OUT_COR_DMX_EQ;
I_COMPARE_FUNCTION(1 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_COR_DMX_EQ,&FIRST_OUT_COR_DMX_GT,&FIRST_OUT_COR_DMX_LT);
FIRST_OUT_COR_SD_B_NAME = FIRST_OUT_CORE_SDX_EQ;
FIRST_OUT_COR_SDN_B_NAME = FIRST_OUT_CORE_SDNX_EQ;
FIRST_OUT_COR_SI_B_NAME = FIRST_OUT_COR_SIX_EQ;
I_COMPARE_FUNCTION(6 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_COR_SIX_EQ,&FIRST_OUT_COR_SIX_GT,&FIRST_OUT_COR_SIX_LT);
FIRST_OUT_EVTOFFSET_ADD = 1.1 + FIRST_OUT_FIRSTEVNTA_OUT_1;
FIRST_OUT_FIRSTEVENT_A_NAME = FIRST_OUT_FIRSTEVTMP_OUT_1;
FIRST_OUT_FIRSTEVNTA_OUT_1 = (double)FIRST_OUT_FIRST_LTCH_FIRST_ALM;
FIRST_OUT_FIRSTEVNTI_OUT_1 =(int)FIRST_OUT_EVTOFFSET_ADD;
FIRST_OUT_FIRSTEVTMP_OUT_1 = (double)FIRST_OUT_FIRST_LTCH_FIRST_ALM;
switch(Z_STEPIDLE_SI_FMS_1_A_NAME) { 
  case 1:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = 0;
  break;
  case 2:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = FIRST_OUT_FIRSTEVNTI_OUT_1;
  break;
  case 3:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_DECELMIN_DM_CORE_1_A_NAME;
  break;
  case 4:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_DECELMIN_DM_FMS_1_A_NAME;
  break;
  case 5:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_SHUTDOWN_SD_CORE_1_A_NAME;
  break;
  case 6:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_SHUTDOWN_SD_FMS_1_A_NAME;
  break;
  case 7:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_SHUTDOWN_SDN_CORE_1_A_NAME;
  break;
  case 8:
    FIRST_OUT_FIRSTOTMP_A_MUX_N_1 = Z_STEPIDLE_SI_CORE_1_A_NAME;
  break;
}
FIRST_OUT_FIRSTOUT_A_NAME = FIRST_OUT_FIRSTOTMP_A_MUX_N_1;
LATCH1_FUNCTION(0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , *FALSE , RESET_ACKN_B_NAME , RESET_RESET_B_NAME , Z_DECELMIN_DM_CORE_LATCH1 , Z_DECELMIN_DM_FMS_LATCH1 , Z_SHUTDOWN_SD_CORE_LATCH1 , Z_SHUTDOWN_SD_FMS_LATCH1 , Z_SHUTDOWN_SDN_CORE_LATCH1 , Z_STEPIDLE_SI_CORE_LATCH1 , Z_STEPIDLE_SI_FMS_LATCH1,&FIRST_OUT_FIRST_LTCH_ALM_NO_1,&FIRST_OUT_FIRST_LTCH_ALM_NO_2,&FIRST_OUT_FIRST_LTCH_ALM_NO_3,&FIRST_OUT_FIRST_LTCH_ALM_NO_4,&FIRST_OUT_FIRST_LTCH_ALM_NO_5,&FIRST_OUT_FIRST_LTCH_ALM_NO_6,&FIRST_OUT_FIRST_LTCH_ALM_NO_7,&FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_FIRST_LTCH_HORN,&FIRST_OUT_FIRST_LTCH_LATCH1,&FIRST_OUT_FIRST_LTCH_SEL_1,&FIRST_OUT_FIRST_LTCH_SEL_2,&FIRST_OUT_FIRST_LTCH_SEL_3,&FIRST_OUT_FIRST_LTCH_SEL_4,&FIRST_OUT_FIRST_LTCH_SEL_5,&FIRST_OUT_FIRST_LTCH_SEL_6,&FIRST_OUT_FIRST_LTCH_SEL_7);
FIRST_OUT_FMS_DM_B_NAME = FIRST_OUT_FMS_DMX_EQ;
I_COMPARE_FUNCTION(2 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_FMS_DMX_EQ,&FIRST_OUT_FMS_DMX_GT,&FIRST_OUT_FMS_DMX_LT);
FIRST_OUT_FMS_SD_B_NAME = FIRST_OUT_FMS_SDX_EQ;
I_COMPARE_FUNCTION(4 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_FMS_SDX_EQ,&FIRST_OUT_FMS_SDX_GT,&FIRST_OUT_FMS_SDX_LT);
FIRST_OUT_FMS_SI_B_NAME = FIRST_OUT_FMS_SIX_EQ;
I_COMPARE_FUNCTION(7 , FIRST_OUT_FIRST_LTCH_FIRST_ALM,&FIRST_OUT_FMS_SIX_EQ,&FIRST_OUT_FMS_SIX_GT,&FIRST_OUT_FMS_SIX_LT);
