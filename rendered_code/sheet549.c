O_GMVP_GMVPDMD_A_NAME = O_GMVP_GMVPDMDTMP_A_MUX_HSS;
A_MUX_HSS_FUNCTION(1 , IFACE_CORE_GMVPCALVAL , O_GMVP_GMV_LSS_LSS_BUS , O_VLVCAL_CALMODE_B_NAME,&O_GMVP_GMVPDMDTMP_A_MUX_HSS,&O_GMVP_GMVPDMDTMP_INT_SEL);
O_GMVP_GMVPMA_A_NAME = IFACE_HDWR_GMVPMA;
O_GMVP_GMVPSEL_A_NAME = IFACE_HDWR_GMVPSEL;
O_GMVP_GMVPVLVSD_B_NAME = O_GMVP_GMVPVSDTMP_ZMINUS1_B;
O_GMVP_GMVPVSDTMP_ZMINUS1_B = O_GMVP_ZERO_CMD_AND;
O_GMVP_GMVP_EN_A_SW = A_SW_FUNCTION( 0 , 101 , E_SEQUENCG_FUELON_B_NAME );
O_GMVP_GMVP_MIN_A_SW = A_SW_FUNCTION( 0 , 1 , E_SEQUENCG_FUELON_B_NAME );
O_GMVP_GMVP_PID_PID_2 = PID_2_FUNCTION( 1 , 5 , 0 , 0 , 0 , 40000 , FALSE , FALSE , O_GMVP_GMV_LSS_LSS_BUS , O_GMVP_GMV_LSS_SEL_2 , O_GMVP_KI_FMVP_A_NAME , O_GMVP_KP_GMVP_CALCULATE , O_GMVP_WFGMVP_A_NAME , V_VDCOMPG_WFPLTDMDGS_A_NAME );
LSS_BUS_FUNCTION(1 , 101 , O_GMVP_GMVP_EN_A_SW , O_GMVP_GMVP_MIN_A_SW , O_GMVP_GMVP_PID_PID_2,&O_GMVP_GMV_LSS_HI_LIM_I,&O_GMVP_GMV_LSS_LO_LIM_I,&O_GMVP_GMV_LSS_LSS_BUS,&O_GMVP_GMV_LSS_SEL_1,&O_GMVP_GMV_LSS_SEL_2);
O_GMVP_GP1P_LIM_A_LIMITER = A_LIMITER_FUNCTION( 1 , 550 , 800 , I_GP1P_GP1PSEL_A_NAME );
O_GMVP_KI_FMVP_A_NAME = 24;
O_GMVP_KP_GMVP_CALCULATE =  ( 2.1 - ( 0.002 *O_GMVP_U_LAG ) ) *O_GMVP_KP_P_BASE_A_NAME;
O_GMVP_KP_P_BASE_A_NAME = 0.0035;
O_GMVP_N_CALMODE_NOT =! O_VLVCAL_CALMODE_B_NAME;
LAG_FUNCTION(1 , 5 , O_GMVP_GP1P_LIM_A_LIMITER,&O_GMVP_U_DERIV,&O_GMVP_U_LAG);
O_GMVP_ZERO_CMD_AND = O_GMVP_N_CALMODE_NOT && Z_SHUTDOWN_SHUTDOWN_B_NAME;
