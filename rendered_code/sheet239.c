GLUB_BRNTMPLTCH_LATCH = LATCH_FUNCTION(1,ALARM_RESET_B_NAME,GLUB_TEMP_CHCK_SFC_STEP,GLUB_BRNTMPLTCH_LATCH);
GLUB_TE6021_A_NAME = N2N4_RTD_TE6021_AI_RTD_L;
GLUB_TE6021HALM_B_NAME = GLUB_TE6021LOG_B_OUT_1;
GLUB_TE6021LALM_B_NAME = GLUB_TE6021LO_AND;
GLUB_TE6021LO_AND = GLUB_TE6021NOT_NOT && GLUB_BRNTMPLTCH_LATCH;
if (GLUB_TE6021_A_NAME > 197.0 && TRUE)   { GLUB_TE6021LOG_B_OUT_1 = true; }   else   { GLUB_TE6021LOG_B_OUT_1 = false; }   if (GLUB_TE6021_A_NAME > 203.0 && TRUE)   { GLUB_TE6021LOG_B_OUT_2 = true; }   else   { GLUB_TE6021LOG_B_OUT_2 = false; }   if (GLUB_TE6021_A_NAME > 68 && TRUE)   { GLUB_TE6021LOG_B_OUT_3 = true; }   else   { GLUB_TE6021LOG_B_OUT_3 = false; };
GLUB_TE6021NOT_NOT =! GLUB_TE6021LOG_B_OUT_3;
GLUB_TE6021PERM_B_NAME = GLUB_TE6021LOG_B_OUT_3;
GLUB_TE6021SD_B_NAME = GLUB_TE6021LOG_B_OUT_2;
GLUB_TE6023_A_NAME = N2N4_RTD_TE6023_AI_RTD_L;
GLUB_TE6023ALM_B_NAME = GLUB_TE6023LOG_B_OUT_1;
GLUB_TE6023LALM_B_NAME = GLUB_TE6023LO_AND;
GLUB_TE6023LO_AND = GLUB_TE6023NOT_NOT && GLUB_BRNTMPLTCH_LATCH;
if (GLUB_TE6023_A_NAME > 197.0 && TRUE)   { GLUB_TE6023LOG_B_OUT_1 = true; }   else   { GLUB_TE6023LOG_B_OUT_1 = false; }   if (GLUB_TE6023_A_NAME > 203.0 && TRUE)   { GLUB_TE6023LOG_B_OUT_2 = true; }   else   { GLUB_TE6023LOG_B_OUT_2 = false; }   if (GLUB_TE6023_A_NAME > 68 && TRUE)   { GLUB_TE6023LOG_B_OUT_3 = true; }   else   { GLUB_TE6023LOG_B_OUT_3 = false; };
GLUB_TE6023NOT_NOT =! GLUB_TE6023LOG_B_OUT_3;
GLUB_TE6023PERM_B_NAME = GLUB_TE6023LOG_B_OUT_3;
GLUB_TE6023SD_B_NAME = GLUB_TE6023LOG_B_OUT_2;