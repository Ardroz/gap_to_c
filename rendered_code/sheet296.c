TOTALIZER_BELMTHHI_A_NAME = TOTALIZER_INTSPLIT2_A_OUT_1;
TOTALIZER_BELMTHLO_A_NAME = TOTALIZER_INTSPLIT2_A_OUT_2;
TOTALIZER_FT62231HI_A_NAME = TOTALIZER_INTSPLIT1_A_OUT_1;
TOTALIZER_FT62231LO_A_NAME = TOTALIZER_INTSPLIT1_A_OUT_2;
if ( HMI_INTER_ENG_SI_B_NAME )   { TOTALIZER_INTRSTGFLW_A_OUT_1 = ( SPRINT_SEL_TOT_3_A_SW * 3.785411784); }   else   { TOTALIZER_INTRSTGFLW_A_OUT_1 = SPRINT_SEL_TOT_3_A_SW; };
TOTALIZER_INTRSTGHI_A_NAME = TOTALIZER_INTSPLIT3_A_OUT_1;
TOTALIZER_INTRSTGLO_A_NAME = TOTALIZER_INTSPLIT3_A_OUT_2;
/* CNT01 19Mar1998 */   "   TOTALIZER_INTSPLIT1_A_OUT_1 = (long) TOTALIZER_SPRNTFLOW_A_OUT_1 / rdTOTALIZER_SPRNTFLOW_A_OUT_1;   TOTALIZER_INTSPLIT1_A_OUT_2 = (long) TOTALIZER_SPRNTFLOW_A_OUT_1 % rdTOTALIZER_SPRNTFLOW_A_OUT_1;   ";
/* CNT01 19Mar1998 */   "   TOTALIZER_INTSPLIT2_A_OUT_1 = (long) TOTALIZER_SPRYFLOW_A_OUT_1 / rdTOTALIZER_SPRYFLOW_A_OUT_1;   TOTALIZER_INTSPLIT2_A_OUT_2 = (long) TOTALIZER_SPRYFLOW_A_OUT_1 % rdTOTALIZER_SPRYFLOW_A_OUT_1;   ";
/* CNT01 19Mar1998 */   "   TOTALIZER_INTSPLIT3_A_OUT_1 = (long) TOTALIZER_INTRSTGFLW_A_OUT_1 / rdTOTALIZER_INTRSTGFLW_A_OUT_1;   TOTALIZER_INTSPLIT3_A_OUT_2 = (long) TOTALIZER_INTRSTGFLW_A_OUT_1 % rdTOTALIZER_INTRSTGFLW_A_OUT_1;   ";
if ( HMI_INTER_ENG_SI_B_NAME )   { TOTALIZER_SPRNTFLOW_A_OUT_1 = ( SPRINT_SEL_TOT_1_A_SW * 3.785411784); }   else   { TOTALIZER_SPRNTFLOW_A_OUT_1 = SPRINT_SEL_TOT_1_A_SW; };
if ( HMI_INTER_ENG_SI_B_NAME )   { TOTALIZER_SPRYFLOW_A_OUT_1 = ( SPRINT_SEL_TOT_2_A_SW * 3.785411784); }   else   { TOTALIZER_SPRYFLOW_A_OUT_1 = SPRINT_SEL_TOT_2_A_SW; };