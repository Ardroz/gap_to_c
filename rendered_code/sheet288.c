SPRINT_CNTL_SW_I_SW = I_SW_FUNCTION( SPRINT_MASK_SEL_AND , 2 , 1 );
SPRINT_CNTRL_OUT_A_MUX_N_1 = A_MUX_N_1_FUNCTION ( 1,0,SPRINT_MIN_BUS_A_MIN,0,0,0,SPRINT_CNTL_SW_I_SW);
SPRINT_DEC_OR_OR = SPRINT_MAN_DECR_B_NAME;
SPRINT_DOWN_OR_OR = SPRINT_DOWN_OS_ONE_SHOT || SPRINT_NOTREADY_SFC_STEP;
ONE_SHOT_FUNCTION(1 , 10 ,  , SPRINT_RAMP_DOWN_P_LIM_1,&SPRINT_DOWN_OS_ONE_SHOT,&SPRINT_DOWN_OS_R_TIME);
SPRINT_FAST_R_DN_CALCULATE =  fabs (undefined /  (undefined /IFACE_SPRINT_RMPDNABS )  )  *undefined;
SPRINT_FCV62230_A_NAME = SPRINT_CNTRL_OUT_A_MUX_N_1;
SPRINT_FLOW_LIM_A_MIN = A_MIN_FUNCTION( SPRINT_H2ODMD_A_NAME , SPRINT_MAXFLOW_SW_A_SW );
LAG_2_FUNCTION(1 , IFACE_SPRINT_SPRH2OSEL , 1,&SPRINT_FT62231LAG_DERIV,&SPRINT_FT62231LAG_LAG_2);
SPRINT_FUEL_DEACT_B_NAME = FUEL_SYS_FUEL_OFF_B_NAME;
SPRINT_H20DMD_Z_ZMINUS1 = IFACE_SPRINT_H2ODMD_NC;
SPRINT_H2ODMD_A_NAME = IFACE_CORE_H2ODMD_A_NAME;
SPRINT_H2ODMDSW_A_SW = A_SW_FUNCTION( SPRINT_ALLOWTEST_AND , SPRINT_FLOW_LIM_A_MIN , 4 );
SPRINT_INC_OR_OR = SPRINT_MAN_INCR_B_NAME;
SPRINT_LOWER_AND_AND = IFACE_CORE_Z_MANMODE_B_NAME && SPRINT_DEC_OR_OR;
SPRINT_MAN_DECR_B_NAME = HMI_BO_BW_V_125_B_NAME;
SPRINT_MAN_INCR_B_NAME = HMI_BO_BW_V_126_B_NAME;
RAMP_FUNCTION(1 , 0.5 , SPRINT_NOTMANUAL_NOT , SPRINT_LOWER_AND_AND , SPRINT_RAISE_AND_AND , SPRINT_H20DMD_Z_ZMINUS1 , 0.0 , 20 , IFACE_CORE_Z_MANMODE_B_NAME , SPRINT_NOTMANUAL_NOT , 0.5 , 20.0 , 0.0 ,  , ,&SPRINT_MAN_RAMP_MOVING_DN,&SPRINT_MAN_RAMP_MOVING_UP,&SPRINT_MAN_RAMP_P_LIM_1,&SPRINT_MAN_RAMP_P_LIM_2,&SPRINT_MAN_RAMP_P_LIM_3,&SPRINT_MAN_RAMP_POS_SEL,&SPRINT_MAN_RAMP_RAMP,&SPRINT_MAN_RAMP_REV_RAMP);
SPRINT_MAN_STRK_B_NAME = *FALSE;
SPRINT_MASK_SEL_AND = SFC_STEP_OUTOFOP_SFC_STEP && SPRINT_MAN_STRK_B_NAME;
SPRINT_MAXFLOW_SW_A_SW = A_SW_FUNCTION( SPRINT_HP_ON_3_SFC_STEP , 20.0 , 8.0 );
SPRINT_MINFLOW_A_MAX = A_MAX_FUNCTION( SPRINT_MINFLOW_SW_A_SW , SPRINT_FT62231LAG_LAG_2 );
SPRINT_MINFLOW_SW_A_SW = A_SW_FUNCTION( SPRINT_ACT_OR_INI_NOR , 5 , 2 );
SPRINT_MIN_BUS_A_MIN = A_MIN_FUNCTION( SPRINT_PID_DB_PID_DB , SPRINT_RAMP_DOWN_RAMP );
SPRINT_NOTMANUAL_NOT =! IFACE_CORE_Z_MANMODE_B_NAME;
SPRINT_OFF_Z_ZMINUS1_B = SPRINT_TRANSOFF_AND;
SPRINT_PID_DB_PID_DB = PID_DB_FUNCTION( 1 , 0.5 , SPRINT_FCV62230_A_NAME ,  , 0.375 ,  , 30 , 0.0 , SPRINT_MINFLOW_A_MAX , 0.97 , *FALSE , FALSE , 0.01 , SPRINT_H2ODMDSW_A_SW , 30 );
SPRINT_RAISE_AND_AND = IFACE_CORE_Z_MANMODE_B_NAME && SPRINT_INC_OR_OR;
RAMP_FUNCTION(1 , 5 , SPRINT_OFF_Z_ZMINUS1_B , TRUE , 0.0 , SPRINT_PID_DB_PID_DB , CORE_ALM_SPRT3_SPRSDALM3 , CORE_ALM_SPRT2_SPRSDALM2 , SPRINT_FUEL_DEACT_B_NAME , SPRINT_TRANSOFF_AND , 100000.0 , SPRINT_FAST_R_DN_CALCULATE , SPRINT_FAST_R_DN_CALCULATE , SPRINT_SLOW_R_DN_CALCULATE , 0.0 ,  , ,&SPRINT_RAMP_DOWN_MOVING_DN,&SPRINT_RAMP_DOWN_MOVING_UP,&SPRINT_RAMP_DOWN_P_LIM_1,&SPRINT_RAMP_DOWN_P_LIM_2,&SPRINT_RAMP_DOWN_POS_SEL,&SPRINT_RAMP_DOWN_RAMP,&SPRINT_RAMP_DOWN_REV_RAMP);
SPRINT_SLOW_R_DN_CALCULATE =  fabs (undefined /  (undefined /IFACE_SPRINT_RMPDNABS )  )  *undefined;
SPRINT_SPRT_DOWN_B_NAME = SPRINT_DOWN_OR_OR;