if(SFC_STEP_ATCORE_TRAN_3 || SFC_STEP_STRT_AGAIN_OR) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_ACCTOSYNC_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_ACCTOSYNC_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_ACCTOSYNC_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( SHUTDOWN_CDLO_B_NAME) {
		SFC_STEP_ACCTOSYNC_TRAN_4 = SHUTDOWN_CDLO_B_NAME;
	} else if( SPEED_SW_NSDGT3590_A_COMPARE) {
		SFC_STEP_ACCTOSYNC_TRAN_5 = SPEED_SW_NSDGT3590_A_COMPARE;
	} else 
		SFC_STEP_ACCTOSYNC_SFC_STEP= 1
} else {
  SFC_STEP_ACCTOSYNC_ACTIVETIME= 0; 
  SFC_STEP_ACCTOSYNC_SFC_STEP= 0; 
  SFC_STEP_ACCTOSYNC_TRAN_1= 0; 
  SFC_STEP_ACCTOSYNC_TRAN_2= 0; 
  SFC_STEP_ACCTOSYNC_TRAN_3= 0; 
  SFC_STEP_ACCTOSYNC_TRAN_4= 0; 
  SFC_STEP_ACCTOSYNC_TRAN_5 = 0; 
}
SFC_STEP_ACVER_JACK_AND = GLUB_AC60VERLTC_LATCH_R && GLUB_JCKPMP_ON_AND;
if(SFC_STEP_HI_SPDSEL3_TRAN_3) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_ATCORE_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SFC_STEP_SD_EXCPTNM_OR) {
		SFC_STEP_ATCORE_TRAN_2 = SFC_STEP_SD_EXCPTNM_OR;
	} else if( SFC_STEP_CORE_1250_AND) {
		SFC_STEP_ATCORE_TRAN_3 = SFC_STEP_CORE_1250_AND;
	} else 
		SFC_STEP_ATCORE_SFC_STEP= 1
} else {
  SFC_STEP_ATCORE_ACTIVETIME= 0; 
  SFC_STEP_ATCORE_SFC_STEP= 0; 
  SFC_STEP_ATCORE_TRAN_1= 0; 
  SFC_STEP_ATCORE_TRAN_2= 0; 
  SFC_STEP_ATCORE_TRAN_3 = 0; 
}
SFC_STEP_CORE_1250_AND = SPEED_SW_NSDGT1250_A_COMPARE && SHUTDOWN_COREREACHD_LATCH && TLO_TLUB_GT90_NOR;
SFC_STEP_ENBLWTRMW_A_NAME = 2;
if(SFC_STEP_WARMUP_TRAN_5 || SFC_STEP_UNITONLINE_TRAN_6 || SFC_STEP_WATER_INJ_TRAN_7 || SFC_STEP_READY2SYNC_TRAN_5) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_FSNL_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_FSNL_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_FSNL_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( SHUTDOWN_CDLO_B_NAME) {
		SFC_STEP_FSNL_TRAN_4 = SHUTDOWN_CDLO_B_NAME;
	} else if( GENERATOR_GEN_BKRCLS_B_NAME) {
		SFC_STEP_FSNL_TRAN_5 = GENERATOR_GEN_BKRCLS_B_NAME;
	} else if( XN25_REF_XN25MAXPOS_B_NAME) {
		SFC_STEP_FSNL_TRAN_6 = XN25_REF_XN25MAXPOS_B_NAME;
	} else 
		SFC_STEP_FSNL_SFC_STEP= 1
} else {
  SFC_STEP_FSNL_ACTIVETIME= 0; 
  SFC_STEP_FSNL_SFC_STEP= 0; 
  SFC_STEP_FSNL_TRAN_1= 0; 
  SFC_STEP_FSNL_TRAN_2= 0; 
  SFC_STEP_FSNL_TRAN_3= 0; 
  SFC_STEP_FSNL_TRAN_4= 0; 
  SFC_STEP_FSNL_TRAN_5= 0; 
  SFC_STEP_FSNL_TRAN_6 = 0; 
}
if(SFC_STEP_HI_SPDSEL2_TRAN_2) { 
	if( SFC_STEP_STPMOTOR_OR) {
		SFC_STEP_FUELOFF_TRAN_1 = SFC_STEP_STPMOTOR_OR;
	} else if( FUEL_SYS_CHOPFUEL_B_NAME) {
		SFC_STEP_FUELOFF_TRAN_2 = FUEL_SYS_CHOPFUEL_B_NAME;
	} else 
		SFC_STEP_FUELOFF_SFC_STEP= 1
} else {
  SFC_STEP_FUELOFF_ACTIVETIME= 0; 
  SFC_STEP_FUELOFF_SFC_STEP= 0; 
  SFC_STEP_FUELOFF_TRAN_1= 0; 
  SFC_STEP_FUELOFF_TRAN_2 = 0; 
}
if(SFC_STEP_VENT_TRAN_3) { 
	if( SHUTDOWN_ANY_SD_B_NAME) {
		SFC_STEP_GLUB_TRAN_1 = SHUTDOWN_ANY_SD_B_NAME;
	} else if( GLUB_ABORT_SFC_STEP) {
		SFC_STEP_GLUB_TRAN_2 = GLUB_ABORT_SFC_STEP;
	} else if( SFC_STEP_ACVER_JACK_AND) {
		SFC_STEP_GLUB_TRAN_3 = SFC_STEP_ACVER_JACK_AND;
	} else 
		SFC_STEP_GLUB_SFC_STEP= 1
} else {
  SFC_STEP_GLUB_ACTIVETIME= 0; 
  SFC_STEP_GLUB_SFC_STEP= 0; 
  SFC_STEP_GLUB_TRAN_1= 0; 
  SFC_STEP_GLUB_TRAN_2= 0; 
  SFC_STEP_GLUB_TRAN_3 = 0; 
}
SFC_STEP_HISPDPURGE_OR = SFC_STEP_HI_SPDSEL1_SFC_STEP || SFC_STEP_NGGGT1700_SFC_STEP || SFC_STEP_TURB_PRG_SFC_STEP;
if(SFC_STEP_HYD_STRT_TRAN_2) { 
	if( SHUTDOWN_ANY_SD_B_NAME) {
		SFC_STEP_HI_SPDSEL1_TRAN_1 = SHUTDOWN_ANY_SD_B_NAME;
	} else if( HYD_STRT_SOV1619RMP_P_LIM_4) {
		SFC_STEP_HI_SPDSEL1_TRAN_2 = HYD_STRT_SOV1619RMP_P_LIM_4;
	} else 
		SFC_STEP_HI_SPDSEL1_SFC_STEP= 1
} else {
  SFC_STEP_HI_SPDSEL1_ACTIVETIME= 0; 
  SFC_STEP_HI_SPDSEL1_SFC_STEP= 0; 
  SFC_STEP_HI_SPDSEL1_TRAN_1= 0; 
  SFC_STEP_HI_SPDSEL1_TRAN_2 = 0; 
}
if(SFC_STEP_TURB_PRG_TRAN_2 || SFC_STEP_MOTOR_6_TRAN_3) { 
	if( SFC_STEP_STPMOTOR_OR) {
		SFC_STEP_HI_SPDSEL2_TRAN_1 = SFC_STEP_STPMOTOR_OR;
	} else if( SFC_STEP_SD_EXCPTNM_OR) {
		SFC_STEP_HI_SPDSEL2_TRAN_2 = SFC_STEP_SD_EXCPTNM_OR;
	} else if( CORE_DIGITAL_LITEOFF) {
		SFC_STEP_HI_SPDSEL2_TRAN_3 = CORE_DIGITAL_LITEOFF;
	} else 
		SFC_STEP_HI_SPDSEL2_SFC_STEP= 1
} else {
  SFC_STEP_HI_SPDSEL2_ACTIVETIME= 0; 
  SFC_STEP_HI_SPDSEL2_SFC_STEP= 0; 
  SFC_STEP_HI_SPDSEL2_TRAN_1= 0; 
  SFC_STEP_HI_SPDSEL2_TRAN_2= 0; 
  SFC_STEP_HI_SPDSEL2_TRAN_3 = 0; 
}
if(SFC_STEP_HI_SPDSEL2_TRAN_3) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_HI_SPDSEL3_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SFC_STEP_SD_EXCPTNM_OR) {
		SFC_STEP_HI_SPDSEL3_TRAN_2 = SFC_STEP_SD_EXCPTNM_OR;
	} else if( SPEED_SW_N25GT4600_A_COMPARE) {
		SFC_STEP_HI_SPDSEL3_TRAN_3 = SPEED_SW_N25GT4600_A_COMPARE;
	} else 
		SFC_STEP_HI_SPDSEL3_SFC_STEP= 1
} else {
  SFC_STEP_HI_SPDSEL3_ACTIVETIME= 0; 
  SFC_STEP_HI_SPDSEL3_SFC_STEP= 0; 
  SFC_STEP_HI_SPDSEL3_TRAN_1= 0; 
  SFC_STEP_HI_SPDSEL3_TRAN_2= 0; 
  SFC_STEP_HI_SPDSEL3_TRAN_3 = 0; 
}
if(SFC_STEP_GLUB_TRAN_3) { 
	if( SFC_STEP_SD_STPCNK1_OR) {
		SFC_STEP_HYD_STRT_TRAN_1 = SFC_STEP_SD_STPCNK1_OR;
	} else if( HYD_STRT_PUMPONDLY_DELAY) {
		SFC_STEP_HYD_STRT_TRAN_2 = HYD_STRT_PUMPONDLY_DELAY;
	} else 
		SFC_STEP_HYD_STRT_SFC_STEP= 1
} else {
  SFC_STEP_HYD_STRT_ACTIVETIME= 0; 
  SFC_STEP_HYD_STRT_SFC_STEP= 0; 
  SFC_STEP_HYD_STRT_TRAN_1= 0; 
  SFC_STEP_HYD_STRT_TRAN_2 = 0; 
}
SFC_STEP_MASK_WI_AND = FALSE && SFC_TIMER_WARMUP_DN_B_NAME && SFC_STEP_MW_ENBWTR_A_COMPARE;
A_COMPARE_FUNCTION(-0.5 , CORE_ANALOG_MWSEL , SFC_STEP_ENBLWTRMW_A_NAME,&SFC_STEP_MW_ENBWTR_A_COMPARE,&SFC_STEP_MW_ENBWTR_A_EQUAL);
if(SFC_STEP_HI_SPDSEL1_TRAN_2) { 
	if( SHUTDOWN_ANY_SD_B_NAME) {
		SFC_STEP_NGGGT1700_TRAN_1 = SHUTDOWN_ANY_SD_B_NAME;
	} else if( SPEED_SW_N25GT1700_A_COMPARE) {
		SFC_STEP_NGGGT1700_TRAN_2 = SPEED_SW_N25GT1700_A_COMPARE;
	} else 
		SFC_STEP_NGGGT1700_SFC_STEP= 1
} else {
  SFC_STEP_NGGGT1700_ACTIVETIME= 0; 
  SFC_STEP_NGGGT1700_SFC_STEP= 0; 
  SFC_STEP_NGGGT1700_TRAN_1= 0; 
  SFC_STEP_NGGGT1700_TRAN_2 = 0; 
}
if(SFC_STEP_FSNL_TRAN_6) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_READY2SYNC_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_READY2SYNC_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_READY2SYNC_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( SHUTDOWN_CDLO_B_NAME) {
		SFC_STEP_READY2SYNC_TRAN_4 = SHUTDOWN_CDLO_B_NAME;
	} else if( FALSE) {
		SFC_STEP_READY2SYNC_TRAN_5 = FALSE;
	} else if( GENERATOR_GEN_BKRCLS_B_NAME) {
		SFC_STEP_READY2SYNC_TRAN_6 = GENERATOR_GEN_BKRCLS_B_NAME;
	} else 
		SFC_STEP_READY2SYNC_SFC_STEP= 1
} else {
  SFC_STEP_READY2SYNC_ACTIVETIME= 0; 
  SFC_STEP_READY2SYNC_SFC_STEP= 0; 
  SFC_STEP_READY2SYNC_TRAN_1= 0; 
  SFC_STEP_READY2SYNC_TRAN_2= 0; 
  SFC_STEP_READY2SYNC_TRAN_3= 0; 
  SFC_STEP_READY2SYNC_TRAN_4= 0; 
  SFC_STEP_READY2SYNC_TRAN_5= 0; 
  SFC_STEP_READY2SYNC_TRAN_6 = 0; 
}
SFC_STEP_SD_MTR_OR_OR = SFC_STEP_FUELOFF_SFC_STEP || SFC_STEP_ES_2_SFC_STEP;
SFC_STEP_SD_STPCNK1_OR = HYD_STRT_CNK_SEQPRM_B_NAME || SHUTDOWN_ANY_SD_B_NAME;
SFC_STEP_STRTR_SPD_LATCH = LATCH_FUNCTION(1,HYD_STRT_SOV1619RMP_P_LIM_1,SFC_STEP_SD_MTR_OR_OR,SFC_STEP_STRTR_SPD_LATCH);
if(SFC_STEP_NGGGT1700_TRAN_2) { 
	if( SHUTDOWN_ANY_SD_B_NAME) {
		SFC_STEP_TURB_PRG_TRAN_1 = SHUTDOWN_ANY_SD_B_NAME;
	} else if( FUEL_SYS_PRGDN_LATCH) {
		SFC_STEP_TURB_PRG_TRAN_2 = FUEL_SYS_PRGDN_LATCH;
	} else 
		SFC_STEP_TURB_PRG_SFC_STEP= 1
} else {
  SFC_STEP_TURB_PRG_ACTIVETIME= 0; 
  SFC_STEP_TURB_PRG_SFC_STEP= 0; 
  SFC_STEP_TURB_PRG_TRAN_1= 0; 
  SFC_STEP_TURB_PRG_TRAN_2 = 0; 
}
if(SFC_STEP_READY2SYNC_TRAN_6 || SFC_STEP_NORM_1_TRAN_4 || SFC_STEP_FSNL_TRAN_5 || SFC_STEP_WATER_INJ_TRAN_6) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( GENERATOR_NS_DROOP_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_4 = GENERATOR_NS_DROOP_B_NAME;
	} else if( GENERATOR_NS_ISOCH_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_5 = GENERATOR_NS_ISOCH_B_NAME;
	} else if( GENERATOR_GEN_BKROPN_B_NAME) {
		SFC_STEP_UNITONLINE_TRAN_6 = GENERATOR_GEN_BKROPN_B_NAME;
	} else if( SFC_STEP_MASK_WI_AND) {
		SFC_STEP_UNITONLINE_TRAN_7 = SFC_STEP_MASK_WI_AND;
	} else 
		SFC_STEP_UNITONLINE_SFC_STEP= 1
} else {
  SFC_STEP_UNITONLINE_ACTIVETIME= 0; 
  SFC_STEP_UNITONLINE_SFC_STEP= 0; 
  SFC_STEP_UNITONLINE_TRAN_1= 0; 
  SFC_STEP_UNITONLINE_TRAN_2= 0; 
  SFC_STEP_UNITONLINE_TRAN_3= 0; 
  SFC_STEP_UNITONLINE_TRAN_4= 0; 
  SFC_STEP_UNITONLINE_TRAN_5= 0; 
  SFC_STEP_UNITONLINE_TRAN_6= 0; 
  SFC_STEP_UNITONLINE_TRAN_7 = 0; 
}
if(SFC_STEP_SFC_S_INIT_TRAN_1) { 
	if( SHUTDOWN_ANY_SD_B_NAME) {
		SFC_STEP_VENT_TRAN_1 = SHUTDOWN_ANY_SD_B_NAME;
	} else if( VENT_PRG_FAIL_B_NAME) {
		SFC_STEP_VENT_TRAN_2 = VENT_PRG_FAIL_B_NAME;
	} else if( VENT_PRG_DN_B_NAME) {
		SFC_STEP_VENT_TRAN_3 = VENT_PRG_DN_B_NAME;
	} else 
		SFC_STEP_VENT_SFC_STEP= 1
} else {
  SFC_STEP_VENT_ACTIVETIME= 0; 
  SFC_STEP_VENT_SFC_STEP= 0; 
  SFC_STEP_VENT_TRAN_1= 0; 
  SFC_STEP_VENT_TRAN_2= 0; 
  SFC_STEP_VENT_TRAN_3 = 0; 
}
if(SFC_STEP_ACCTOSYNC_TRAN_5) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_WARMUP_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_WARMUP_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_WARMUP_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( SHUTDOWN_CDLO_B_NAME) {
		SFC_STEP_WARMUP_TRAN_4 = SHUTDOWN_CDLO_B_NAME;
	} else if( SFC_TIMER_SYNC_RDY_B_NAME) {
		SFC_STEP_WARMUP_TRAN_5 = SFC_TIMER_SYNC_RDY_B_NAME;
	} else 
		SFC_STEP_WARMUP_SFC_STEP= 1
} else {
  SFC_STEP_WARMUP_ACTIVETIME= 0; 
  SFC_STEP_WARMUP_SFC_STEP= 0; 
  SFC_STEP_WARMUP_TRAN_1= 0; 
  SFC_STEP_WARMUP_TRAN_2= 0; 
  SFC_STEP_WARMUP_TRAN_3= 0; 
  SFC_STEP_WARMUP_TRAN_4= 0; 
  SFC_STEP_WARMUP_TRAN_5 = 0; 
}
if(SFC_STEP_UNITONLINE_TRAN_7) { 
	if( SHUTDOWN_SDN_CORE_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_1 = SHUTDOWN_SDN_CORE_B_NAME;
	} else if( SHUTDOWN_SD_CORE_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_2 = SHUTDOWN_SD_CORE_B_NAME;
	} else if( SHUTDOWN_STEPIDLE_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_3 = SHUTDOWN_STEPIDLE_B_NAME;
	} else if( GENERATOR_NS_DROOP_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_4 = GENERATOR_NS_DROOP_B_NAME;
	} else if( GENERATOR_NS_ISOCH_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_5 = GENERATOR_NS_ISOCH_B_NAME;
	} else if( TRUE) {
		SFC_STEP_WATER_INJ_TRAN_6 = TRUE;
	} else if( GENERATOR_GEN_BKROPN_B_NAME) {
		SFC_STEP_WATER_INJ_TRAN_7 = GENERATOR_GEN_BKROPN_B_NAME;
	} else 
		SFC_STEP_WATER_INJ_SFC_STEP= 1
} else {
  SFC_STEP_WATER_INJ_ACTIVETIME= 0; 
  SFC_STEP_WATER_INJ_SFC_STEP= 0; 
  SFC_STEP_WATER_INJ_TRAN_1= 0; 
  SFC_STEP_WATER_INJ_TRAN_2= 0; 
  SFC_STEP_WATER_INJ_TRAN_3= 0; 
  SFC_STEP_WATER_INJ_TRAN_4= 0; 
  SFC_STEP_WATER_INJ_TRAN_5= 0; 
  SFC_STEP_WATER_INJ_TRAN_6= 0; 
  SFC_STEP_WATER_INJ_TRAN_7 = 0; 
}
