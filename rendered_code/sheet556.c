O_GMVO_FMVOLOSTMP_AND = IFACE_HDWR_GMVOAALM && IFACE_HDWR_GMVOBALM;
DELAY_FUNCTION(0.5 , 1 , 0 , E_SEQUENCG_FUELON_B_NAME,&O_GMVO_GAS_ON_DLY_DELAY,&O_GMVO_GAS_ON_DLY_R_TIME);
O_GMVO_GMVOA_A_NAME = IFACE_HDWR_GMVOA;
O_GMVO_GMVOAALM_B_NAME = IFACE_HDWR_GMVOAALM;
O_GMVO_GMVOB_A_NAME = IFACE_HDWR_GMVOB;
O_GMVO_GMVOBALM_B_NAME = IFACE_HDWR_GMVOBALM;
O_GMVO_GMVOCOMSD_B_NAME = IFACE_HDWR_GMVOCOMFLT;
O_GMVO_GMVODFALM_B_NAME = IFACE_HDWR_GMVODFALM;
O_GMVO_GMVODFSD_B_NAME = IFACE_HDWR_GMVODFSD;
O_GMVO_GMVOLOSSSD_B_NAME = O_GMVO_FMVOLOSTMP_AND;
O_GMVO_GMVOPOSALM_B_NAME = O_GMVO_GMVOPSAENA_AND;
O_GMVO_GMVOPOSSD_B_NAME = O_GMVO_GMVOPSSENA_AND;
O_GMVO_GMVOPSAENA_AND = IFACE_HDWR_GMVOPOSALM && O_GMVO_GAS_ON_DLY_DELAY;
O_GMVO_GMVOPSSENA_AND = IFACE_HDWR_GMVOPOSSD && O_GMVO_GAS_ON_DLY_DELAY;
O_GMVO_GMVOTMSD_B_NAME = O_GMVO_GMVOTMTMP_B_ALARM;
B_ALARM_FUNCTION(1 , 0 , 0 , IFACE_HDWR_GMVODRFLT , O_GMVO_GMV_OVRD_DELAY , RESET_RESET_B_NAME,&O_GMVO_GMVOTMTMP_B_ALARM,&O_GMVO_GMVOTMTMP_HORN,&O_GMVO_GMVOTMTMP_LIGHT);
DELAY_FUNCTION(1 , 0 , 1 , E_SEQUENCG_FUELOFF_B_NAME,&O_GMVO_GMV_OVRD_DELAY,&O_GMVO_GMV_OVRD_R_TIME);
O_GMVO_WFERRABS_ABSOLUTE = ABSOLUTE_FUNCTION( O_GMVO_WFOCMP_SUBTRACT );
A_COMPARE_FUNCTION(0 , O_GMVO_WFERRABS_ABSOLUTE , O_GMVO_WFERRSTPT_MULTIPLY,&O_GMVO_WFERRCMP_A_COMPARE,&O_GMVO_WFERRCMP_A_EQUAL);
O_GMVO_WFERRSTPT_MULTIPLY = 1 * V_VDCOMOG_WFOTRDMDGS_A_NAME;
O_GMVO_WFOCMP_SUBTRACT = O_GMVO_WFGMVO_A_NAME - V_VDCOMOG_WFOTRDMDGS_A_NAME;
O_GMVO_WFOERRSD_B_NAME = O_GMVO_WFOERRTMP_B_ALARM;
B_ALARM_FUNCTION(1 , 10 , 0 , O_GMVO_FUELOFFOTR_B_NAME , O_GMVO_WFERRCMP_A_COMPARE , RESET_RESET_B_NAME,&O_GMVO_WFOERRTMP_B_ALARM,&O_GMVO_WFOERRTMP_HORN,&O_GMVO_WFOERRTMP_LIGHT);