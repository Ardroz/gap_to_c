O_CDP_ABS_CALCULATE = fabs (O_CDP_CDPVLVDMD_A_NAME -IFACE_HDWR_CDPSEL ) ;
O_CDP_CDPA_A_NAME = IFACE_HDWR_CDPA;
O_CDP_CDPAALM_B_NAME = IFACE_HDWR_CDPAALM;
O_CDP_CDPB_A_NAME = IFACE_HDWR_CDPB;
O_CDP_CDPBALM_B_NAME = IFACE_HDWR_CDPBALM;
O_CDP_CDPFBDFALM_B_NAME = O_CDP_DF_ALM_DELAY;
O_CDP_CDPFBFLSI_B_NAME = O_CDP_FDBKFAIL_AND;
O_CDP_CDPPOSALM_B_NAME = O_CDP_POSDELY_DELAY;
O_CDP_CDPPOSSI_B_NAME = O_CDP_HIPOSDELAY_DELAY;
O_CDP_CDPSEL_A_NAME = IFACE_HDWR_CDPSEL;
DELAY_FUNCTION(1 , 0 , 1 , O_CDP_HIDIFF_AND,&O_CDP_DF_ALM_DELAY,&O_CDP_DF_ALM_R_TIME);
O_CDP_FDBKABS_CALCULATE = fabs (IFACE_HDWR_CDPA -IFACE_HDWR_CDPB ) ;
O_CDP_FDBKFAIL_AND = IFACE_HDWR_CDPAALM && IFACE_HDWR_CDPBALM && O_VLVCAL_N_CALMODE_B_NAME;
A_COMPARE_FUNCTION(0 , 6 , O_CDP_FDBKABS_CALCULATE,&O_CDP_FDBK_DIFF_A_COMPARE,&O_CDP_FDBK_DIFF_A_EQUAL);
O_CDP_FDBK_OK_NOR =! IFACE_HDWR_CDPAALM || IFACE_HDWR_CDPBALM;
O_CDP_HIDIFF_AND = C_N25B_N25GT4600_B_NAME && O_CDP_FDBK_DIFF_A_COMPARE && O_CDP_FDBK_OK_NOR;
DELAY_FUNCTION(1 , 0 , 1 , O_CDP_HIPOSENA_AND,&O_CDP_HIPOSDELAY_DELAY,&O_CDP_HIPOSDELAY_R_TIME);
O_CDP_HIPOSENA_AND = C_N25B_N25GT4600_B_NAME && O_CDP_HIPOSERR_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && O_VLVCAL_N_STAGING_B_NAME;
A_COMPARE_FUNCTION(0 , 10 , O_CDP_ABS_CALCULATE,&O_CDP_HIPOSERR_A_COMPARE,&O_CDP_HIPOSERR_A_EQUAL);
DELAY_FUNCTION(1 , 0 , 5 , O_CDP_POSENA_AND,&O_CDP_POSDELY_DELAY,&O_CDP_POSDELY_R_TIME);
O_CDP_POSENA_AND = C_N25B_N25DTLT150_B_NAME && C_N25B_N25GT4600_B_NAME && O_CDP_POSERR_A_COMPARE && O_VLVCAL_N_CALMODE_B_NAME && O_VLVCAL_N_STAGING_B_NAME;
A_COMPARE_FUNCTION(0 , 6 , O_CDP_ABS_CALCULATE,&O_CDP_POSERR_A_COMPARE,&O_CDP_POSERR_A_EQUAL);
