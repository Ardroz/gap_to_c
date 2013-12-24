XN25_REF_N1_SI_RST_AND = XN25_REF_SI_NOT_NOT && XN25_REF_NGGREFMIN_B_NAME;
XN25_REF_N25REFSEL_B_NAME = FALSE;
XN25_REF_NGGDECMECH_AND = XN25_REF_SWMW_3_LT && XN25_REF_STOP_OR;
XN25_REF_REGULATOR_OUT_1 =(int)CORE_ANALOG_REGULATOR;
I_COMPARE_FUNCTION(XN25_REF_REGULATOR_OUT_1 , 1,&XN25_REF_REG_1_EQ,&XN25_REF_REG_1_GT,&XN25_REF_REG_1_LT);
XN25_REF_SI_NOT_NOT =! SHUTDOWN_DOSTEPIDLE_B_NAME;
XN25_REF_STEP_ENA_LATCH = LATCH_FUNCTION(1,XN25_REF_N1_SI_RST_AND,XN25_REF_XN25STEPEN_ONE_SHOT,XN25_REF_STEP_ENA_LATCH);
XN25_REF_STOP_OR = SHUTDOWN_CDLO_B_NAME || SHUTDOWN_DECELMIN_B_NAME;
I_COMPARE_FUNCTION(IFACE_CNFG_SWMW_I_NAME , 3,&XN25_REF_SWMW_3_EQ,&XN25_REF_SWMW_3_GT,&XN25_REF_SWMW_3_LT);
XN25_REF_XN25DECEN_OR = XN25_REF_XN25DECPWR_B_FUNCTION || XN25_REF_NGGDECMECH_AND;
XN25_REF_XN25DECPWR_B_FUNCTION = XN25_REF_SWMW_3_EQ &&FALSE &&!IFACE_CORE_Z_SWGRID_B_NAME;
XN25_REF_XN25F_SEL_OR = XN25_REF_STEP_ENA_LATCH || XN25_REF_XN25_NGG_AND;
XN25_REF_XN25LWR_OR_OR = XN25_REF_STEP_ENA_LATCH || XN25_REF_XN25DECEN_OR || XN25_REF_XN25LWR_B_NAME || XN25_REF_HOLD_IDLE_B_NAME || XN25_REF_XN25REFRST_B_NAME;
XN25_REF_XN25MAXPOS_B_NAME = XN25_REF_XN25_WGC_P_LIM_3;
XN25_REF_XN25MINPOS_B_NAME = XN25_REF_XN25_WGC_P_LIM_2;
A_MUX_HSS_FUNCTION(1 , XN25_REF_XN25_NRATE_A_NAME , XN25_REF_XN25_FRATE_A_NAME , XN25_REF_XN25DMRATE_A_NAME , XN25_REF_XN25SIRATE_A_NAME , XN25_REF_XN25_FAST_B_NAME , XN25_REF_XN25DECEN_OR , XN25_REF_XN25F_SEL_OR,&XN25_REF_XN25RATE_A_MUX_HSS,&XN25_REF_XN25RATE_INT_SEL);
XN25_REF_XN25REF_A_NAME = XN25_REF_XN25_WGC_RAMP;
XN25_REF_XN25REFMVG_OR = XN25_REF_XN25_WGC_MOVING_UP || XN25_REF_XN25_WGC_MOVING_DN;
XN25_REF_XN25REFRST_B_NAME = SHUTDOWN_CHOP_FUEL_B_NAME;
XN25_REF_XN25REFX_A_MAX = A_MAX_FUNCTION( 4000 , CORE_ANALOG_N25FLOORJ );
  bool XN25_REF_XN25STEPEN_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.0 , 0 , SHUTDOWN_DOSTEPIDLE_B_NAME,&XN25_REF_XN25STEPEN_ONE_SHOT,&XN25_REF_XN25STEPEN_R_TIME,&XN25_REF_XN25STEPEN_LAST_TRIGGER);
XN25_REF_XN25_NGG_AND = XN25_REF_REG_1_EQ && XN25_REF_XNSDCMP_A_COMPARE && XN25_REF_XN25_AUTO_B_NAME && XN25_REF_XN25RSE_B_NAME;
RAMP_FUNCTION(1 , 50 , XN25_REF_N25REFSEL_B_NAME , XN25_REF_XN25LWR_OR_OR , XN25_REF_XN25RSE_B_NAME , XN25_REF_XN25REFX_A_MAX , CORE_ANALOG_N25FLOORJ , 10711.0 , XN25_REF_N25REFSEL_B_NAME , XN25_REF_XN25REFRST_B_NAME , TRUE , 9_000E+020 , 9_000E+020 , XN25_REF_XN25RATE_A_MUX_HSS , 6050.0 , 1.0 , 0,&XN25_REF_XN25_WGC_MOVING_DN,&XN25_REF_XN25_WGC_MOVING_UP,&XN25_REF_XN25_WGC_P_LIM_1,&XN25_REF_XN25_WGC_P_LIM_2,&XN25_REF_XN25_WGC_P_LIM_3,&XN25_REF_XN25_WGC_POS_SEL,&XN25_REF_XN25_WGC_RAMP,&XN25_REF_XN25_WGC_REV_RAMP);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 3550,&XN25_REF_XNSDCMP_A_COMPARE,&XN25_REF_XNSDCMP_A_EQUAL);
