OP_INTRFC_ENGSI_H_B_NAME = FALSE;
OP_INTRFC_ENGSI_MB_B_NAME = DATA_IO_DCS_BW_V_12;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = OP_INTRFC_ENGSI_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_12;
  break;
  case 3:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_12;
  break;
  case 4:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = OP_INTRFC_ENGSI_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_ENG_SI_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_ENG_SI_SEL_B_NAME = OP_INTRFC_ENG_SI_MX_B_MUX_N_1;
OP_INTRFC_FAST_STRT_B_NAME = OP_INTRFC_FSTSTRT_MX_B_MUX_N_1;
OP_INTRFC_FRQDROOPMB_B_NAME = DATA_IO_DCS_BW_V_13;
OP_INTRFC_FRQDROOP_H_B_NAME = FALSE;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = OP_INTRFC_FRQDROOP_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_13;
  break;
  case 3:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_13;
  break;
  case 4:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = OP_INTRFC_FRQDROOPMB_B_NAME;
  break;
  case 6:
    OP_INTRFC_FRQDRP_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_FRQ_DRP_B_NAME = OP_INTRFC_FRQDRP_MX_B_MUX_N_1;
OP_INTRFC_FSTART_H_B_NAME = FALSE;
OP_INTRFC_FSTART_MB_B_NAME = DATA_IO_DCS_BW_V_14;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = OP_INTRFC_FSTART_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_14;
  break;
  case 3:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_14;
  break;
  case 4:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = OP_INTRFC_FSTART_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_FSTSTRT_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_HISPDCNKMB_B_NAME = DATA_IO_DCS_BW_V_15;
OP_INTRFC_HISPDCNK_H_B_NAME = FALSE;
OP_INTRFC_HISPD_CRNK_B_NAME = OP_INTRFC_HSPDCRK_MX_B_MUX_N_1;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = OP_INTRFC_HISPDCNK_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_15;
  break;
  case 3:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_15;
  break;
  case 4:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = OP_INTRFC_HISPDCNKMB_B_NAME;
  break;
  case 6:
    OP_INTRFC_HSPDCRK_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_LOSPDCNKMB_B_NAME = DATA_IO_DCS_BW_V_18;
OP_INTRFC_LOSPDCNK_H_B_NAME = FALSE;
OP_INTRFC_LO_SPDCRNK_B_NAME = OP_INTRFC_LSPDCRK_MX_B_MUX_N_1;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = OP_INTRFC_LOSPDCNK_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_18;
  break;
  case 3:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_18;
  break;
  case 4:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = OP_INTRFC_LOSPDCNKMB_B_NAME;
  break;
  case 6:
    OP_INTRFC_LSPDCRK_MX_B_MUX_N_1 = *FALSE;
  break;
}
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = OP_INTRFC_LWRVLTS_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_19;
  break;
  case 3:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_19;
  break;
  case 4:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = OP_INTRFC_LWRVLTS_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_LVOLT_MX_B_MUX_N_1 = *FALSE;
  break;
}
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = *FALSE;
  break;
  case 2:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_20;
  break;
  case 3:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_20;
  break;
  case 4:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = OP_INTRFC_MW_L_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_LWRMW_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_LWRVLTS_H_B_NAME = *FALSE;
OP_INTRFC_LWRVLTS_MB_B_NAME = DATA_IO_DCS_BW_V_19;
OP_INTRFC_LWR_VLTS_B_NAME = OP_INTRFC_LVOLT_MX_B_MUX_N_1;
OP_INTRFC_L_N25R_H_B_NAME = FALSE;
OP_INTRFC_L_N25R_MB_B_NAME = DATA_IO_DCS_BW_V_16;
OP_INTRFC_MW_LOWER_B_NAME = OP_INTRFC_LWRMW_MX_B_MUX_N_1;
OP_INTRFC_MW_L_H_B_NAME = N3N42_BI_XNSD_LOWER_BI_L;
OP_INTRFC_MW_L_MB_B_NAME = DATA_IO_DCS_BW_V_20;
OP_INTRFC_MW_RAISE_B_NAME = OP_INTRFC_RSEMW_MX_B_MUX_N_1;
OP_INTRFC_MW_R_H_B_NAME = N3N42_BI_XNSD_RAISE_BI_L;
OP_INTRFC_MW_R_MB_B_NAME = DATA_IO_DCS_BW_V_21;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = OP_INTRFC_L_N25R_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_16;
  break;
  case 3:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_16;
  break;
  case 4:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = OP_INTRFC_L_N25R_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_N25LWR_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_OFFRUN_H_B_NAME = FALSE;
OP_INTRFC_OFFRUN_MB_B_NAME = DATA_IO_DCS_BW_V_17;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = OP_INTRFC_OFFRUN_H_B_NAME;
  break;
  case 2:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_17;
  break;
  case 3:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_17;
  break;
  case 4:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = OP_INTRFC_OFFRUN_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_OFFRUN_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_OFF_RUN_B_NAME = OP_INTRFC_OFFRUN_MX_B_MUX_N_1;
switch(CNTRL_MODE_SELECT_I_NAME) { 
  case 1:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = *FALSE;
  break;
  case 2:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = DATA_IO_LL2_BW_V_21;
  break;
  case 3:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = DATA_IO_RL2_BW_V_21;
  break;
  case 4:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = *FALSE;
  break;
  case 5:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = OP_INTRFC_MW_R_MB_B_NAME;
  break;
  case 6:
    OP_INTRFC_RSEMW_MX_B_MUX_N_1 = *FALSE;
  break;
}
OP_INTRFC_XN25LWR_B_NAME = OP_INTRFC_N25LWR_MX_B_MUX_N_1;
