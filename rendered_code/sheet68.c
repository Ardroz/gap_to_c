AO_COMBO_FUNCTION(1 , 1 , N3N18_AI_EAX_AI_420_L , 0 , 0 , 0 , 0 , 0 , 35.0 , 0.0,&A1_A06_AIO_EAM_AO_FAULT,&A1_A06_AIO_EAM_DISPLAY,&A1_A06_AIO_EAM_FAULT,&A1_A06_AIO_EAM_READBACK);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_EMDVR1OUT_A_FORCE , 0 , 0 , 0 , 0 , 0 , 100.0 , 0.0,&A1_A06_AIO_EMDVR1OUT_AO_FAULT,&A1_A06_AIO_EMDVR1OUT_DISPLAY,&A1_A06_AIO_EMDVR1OUT_FAULT,&A1_A06_AIO_EMDVR1OUT_READBACK);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_EMDVR2OUT_A_FORCE , 0 , 0 , 0 , 0 , 0 , 100.0 , 0.0,&A1_A06_AIO_EMDVR2OUT_AO_FAULT,&A1_A06_AIO_EMDVR2OUT_DISPLAY,&A1_A06_AIO_EMDVR2OUT_FAULT,&A1_A06_AIO_EMDVR2OUT_READBACK);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_EMDVR3OUT_A_FORCE , 0 , 0 , 0 , 0 , 0 , 100.0 , 0.0,&A1_A06_AIO_EMDVR3OUT_AO_FAULT,&A1_A06_AIO_EMDVR3OUT_DISPLAY,&A1_A06_AIO_EMDVR3OUT_FAULT,&A1_A06_AIO_EMDVR3OUT_READBACK);
AO_COMBO_FUNCTION(1 , 1 , N3N18_AI_EVX_AI_420_L , 0 , 0 , 0 , 0 , 0 , 200 , 0,&A1_A06_AIO_EVM_AO_FAULT,&A1_A06_AIO_EVM_DISPLAY,&A1_A06_AIO_EVM_FAULT,&A1_A06_AIO_EVM_READBACK);
A1_A06_AIO_FLT_IO_FLT = IO_FLT_FUNCTION(  );
BO_FORCE_FUNCTION(1 , B_FORCE_BFORCEINH_NOT , B_FORCE_FME_B_NAME , HYD_STRT_SD_420MA_NOT , *FALSE,&A1_A06_AIO_SDSTRT_OVR_BO_FORCE,&A1_A06_AIO_SDSTRT_OVR_FRC);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_SOV1619_AO_FORCE , 0 , 0 , 0 , 0 , A1_A06_AIO_SDSTRT_OVR_BO_FORCE , 100.0 , 0.0,&A1_A06_AIO_SOV1619_AO_FAULT,&A1_A06_AIO_SOV1619_DISPLAY,&A1_A06_AIO_SOV1619_FAULT,&A1_A06_AIO_SOV1619_READBACK);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_T1_A_FORCE , 0 , 0 , 0 , 0 , 0 , 120.0 , -40.0,&A1_A06_AIO_T1_AO_FAULT,&A1_A06_AIO_T1_DISPLAY,&A1_A06_AIO_T1_FAULT,&A1_A06_AIO_T1_READBACK);
AO_COMBO_FUNCTION(1 , 1 , A_FORCE_T2_AVG_A_FORCE , 0 , 0 , 0 , 0 , 0 , 120.0 , -40.0,&A1_A06_AIO_T2_AVG_AO_FAULT,&A1_A06_AIO_T2_AVG_DISPLAY,&A1_A06_AIO_T2_AVG_FAULT,&A1_A06_AIO_T2_AVG_READBACK);
A_FORCE_A1_A06_AIO_OR = A_FORCE_T2_AVG_FRC || A_FORCE_T1_FRC || A_FORCE_EMDVR1OUT_FRC || A_FORCE_EMDVR2OUT_FRC || A_FORCE_EMDVR3OUT_FRC || A_FORCE_SOV1619_FRC;
A_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_ANALOG_GMVPDMD , 0,&A_FORCE_EMDVR1OUT_A_FORCE,&A_FORCE_EMDVR1OUT_FRC);
A_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_ANALOG_GMVIDMD , 0,&A_FORCE_EMDVR2OUT_A_FORCE,&A_FORCE_EMDVR2OUT_FRC);
A_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_ANALOG_GMVODMD , 0,&A_FORCE_EMDVR3OUT_A_FORCE,&A_FORCE_EMDVR3OUT_FRC);
AO_FORCE_FUNCTION(1 , B_FORCE_BFORCEINH_NOT , B_FORCE_FME_B_NAME , HYD_STRT_SOV1619_A_NAME , 0 , 0,&A_FORCE_SOV1619_AO_FORCE,&A_FORCE_SOV1619_FRC);
A_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , VENT_AIR_AVG_C_A_NAME , 0,&A_FORCE_T1_A_FORCE,&A_FORCE_T1_FRC);
A_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_ANALOG_T2SEL , 0,&A_FORCE_T2_AVG_A_FORCE,&A_FORCE_T2_AVG_FRC);