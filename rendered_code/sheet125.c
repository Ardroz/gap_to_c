GP1_CALC_ACFMLEGADD_ADD = ADD_FUNCTION( 0 , GP1_CALC_ACFM_INR_DIVIDE , GP1_CALC_ACFM_OTR_DIVIDE , GP1_CALC_ACFM_PIL_DIVIDE );
GP1_CALC_ACFM_INR_DIVIDE = DIVIDE_FUNCTION( 0 , GP1_CALC_RHO_NG_INR_CALCULATE , CORE_ANALOG_WFGMVI );
GP1_CALC_ACFM_OTR_DIVIDE = DIVIDE_FUNCTION( 0 , GP1_CALC_RHO_NG_OTR_CALCULATE , CORE_ANALOG_WFGMVO );
GP1_CALC_ACFM_PIL_DIVIDE = DIVIDE_FUNCTION( 0 , GP1_CALC_RHO_NG_PIL_CALCULATE , CORE_ANALOG_WFGMVP );
GP1_CALC_FLOW_SEL_A_MUX_N_1 = A_MUX_N_1_FUNCTION( 0 , GP1_CALC_SELECT_FLO_I_NAME , GP1_CALC_ACFMLEGADD_ADD , GP1_CALC_SCFH_CNVT_CALCULATE , GP1_CALC_SCFM_CNVT_CALCULATE );
GP1_CALC_OUT_RANGE_A_MUX_N_1 = A_MUX_N_1_FUNCTION( 0 , GP1_CALC_SELECT_FLO_I_NAME , *10000_0 (7000_0, 10000_0) , *500000_0 (400000_0, 6000000_0) , *10000_0 (7000_0, 10000_0) );
GP1_CALC_RHO_NG_INR_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_I_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_RHO_NG_INR_ALM = ALM_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_I_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_RHO_NG_OTR_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_O_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_RHO_NG_OTR_ALM = ALM_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_O_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_RHO_NG_PIL_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_P_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_RHO_NG_PIL_ALM = ALM_FUNCTION( 0 , 0 , CORE_ANALOG_GP1ISEL , p , CORE_ANALOG_ZSEL , z , 1545_0 , r , CORE_ANALOG_TGSSEL , t , GP1_CALC_SG_P_RHO_MULTIPLY , mol , ((p*mol*144)/(z*r*(t+459_67))) );
GP1_CALC_SCFH_CNVT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_WF36ACTFLO_ADD , pph , CORE_ANALOG_SG , sg , ((pph*13_333)/sg) );
GP1_CALC_SCFH_CNVT_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_WF36ACTFLO_ADD , pph , CORE_ANALOG_SG , sg , ((pph*13_333)/sg) );
GP1_CALC_SCFM_CNVT_CALCULATE = CALCULATE_FUNCTION( 0 , 0 , GP1_CALC_WF36ACTFLO_ADD , pph , CORE_ANALOG_SG , sg , ((pph*13_333)/sg)/60 );
GP1_CALC_SCFM_CNVT_ALM = ALM_FUNCTION( 0 , 0 , GP1_CALC_WF36ACTFLO_ADD , pph , CORE_ANALOG_SG , sg , ((pph*13_333)/sg)/60 );
GP1_CALC_SELECT_FLO_I_NAME = I_NAME_FUNCTION(  , *2 (1, 3) );
GP1_CALC_SG_I_RHO_MULTIPLY = MULTIPLY_FUNCTION( 0 , 28_97 , IFACE_HDWR_SG_A_NAME );
GP1_CALC_SG_O_RHO_MULTIPLY = MULTIPLY_FUNCTION( 0 , 28_97 , IFACE_HDWR_SG_A_NAME );
GP1_CALC_SG_P_RHO_MULTIPLY = MULTIPLY_FUNCTION( 0 , 28_97 , IFACE_HDWR_SG_A_NAME );
GP1_CALC_WF36ACTFLO_ADD = ADD_FUNCTION( 0 , CORE_ANALOG_WFGMVI , CORE_ANALOG_WFGMVP , CORE_ANALOG_WFGMVO );
