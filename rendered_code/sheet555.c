O_GMVO_FUELOFFOTR_B_NAME = O_GMVO_FUELOFOTMP_NOT;
O_GMVO_FUELOFOTMP_NOT =! O_GMVO_FUELONOTMP_AND;
O_GMVO_FUELONOTMP_AND = E_SEQUENCG_FUELON_B_NAME && O_GMVO_OTRRINGEN_A_COMPARE;
O_GMVO_FUELONOTR_B_NAME = O_GMVO_FUELONOTMP_AND;
O_GMVO_GMVODMD_A_NAME = O_GMVO_GMVODMDTMP_A_MUX_HSS;
A_MUX_HSS_FUNCTION(1 , IFACE_CORE_GMVOCALVAL , O_GMVO_GMV_LSS_LSS_BUS , O_VLVCAL_CALMODE_B_NAME,&O_GMVO_GMVODMDTMP_A_MUX_HSS,&O_GMVO_GMVODMDTMP_INT_SEL);
O_GMVO_GMVOMA_A_NAME = IFACE_HDWR_GMVOMA;
O_GMVO_GMVOSEL_A_NAME = IFACE_HDWR_GMVOSEL;
O_GMVO_GMVOVLVSD_B_NAME = O_GMVO_GMVOVSDTMP_ZMINUS1_B;
O_GMVO_GMVOVSDTMP_ZMINUS1_B = O_GMVO_ZERO_CMD_AND;
O_GMVO_GMVO_EN_A_SW = A_SW_FUNCTION( 0 , 101 , O_GMVO_FUELONOTMP_AND );
O_GMVO_GMVO_MIN_A_SW = A_SW_FUNCTION( 0 , 1 , O_GMVO_FUELONOTMP_AND );
O_GMVO_GMVO_PID_PID_2 = PID_2_FUNCTION( 1 , 5 , 0 , 0 , 0 , 40000 , FALSE , FALSE , O_GMVO_GMV_LSS_LSS_BUS , O_GMVO_GMV_LSS_SEL_2 , O_GMVO_KI_GMVO_A_NAME , O_GMVO_KP_GMVO_CALCULATE , O_GMVO_WFGMVO_A_NAME , V_VDCOMOG_WFOTRDMDGS_A_NAME );
LSS_BUS_FUNCTION(1 , 101 , O_GMVO_GMVO_EN_A_SW , O_GMVO_GMVO_MIN_A_SW , O_GMVO_GMVO_PID_PID_2,&O_GMVO_GMV_LSS_HI_LIM_I,&O_GMVO_GMV_LSS_LO_LIM_I,&O_GMVO_GMV_LSS_LSS_BUS,&O_GMVO_GMV_LSS_SEL_1,&O_GMVO_GMV_LSS_SEL_2);
O_GMVO_GP1O_LIM_A_LIMITER = A_LIMITER_FUNCTION( 1 , 550 , 800 , I_GP1O_GP1OSEL_A_NAME );
O_GMVO_KI_GMVO_A_NAME = 22.5;
O_GMVO_KP_GMVO_CALCULATE =  ( 2.1 - ( 0.002 *O_GMVO_U_LAG ) ) *O_GMVO_KP_O_MULTIPLY;
O_GMVO_KP_O_MULTIPLY = O_GMVO_KP_O_BASE_A_NAME * O_GMVO_KP_O_CRV_CURVE_2D;
O_GMVO_KP_O_BASE_A_NAME = 0.01;
O_GMVO_KP_O_CRV_CURVE_2D = CURVE_2D_FUNCTION( 1 , 0 , 0.4 , 0.5 , 0.6 , 1 , 1 , 18000 , 3500 , 725 , 7250 , V_VDCOMOG_WFOTRDMDGS_A_NAME );
O_GMVO_N_CALMODE_NOT =! O_VLVCAL_CALMODE_B_NAME;
A_COMPARE_FUNCTION(0 , 0.9 , S_STGVLVG_OTRDMDGS_A_NAME,&O_GMVO_OTRRINGEN_A_COMPARE,&O_GMVO_OTRRINGEN_A_EQUAL);
LAG_FUNCTION(1 , 5 , O_GMVO_GP1O_LIM_A_LIMITER,&O_GMVO_U_DERIV,&O_GMVO_U_LAG);
O_GMVO_ZERO_CMD_AND = O_GMVO_N_CALMODE_NOT && Z_SHUTDOWN_SHUTDOWN_B_NAME;