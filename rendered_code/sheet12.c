CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , COND_MON_HI_T48_DWB_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_HI_T48_DWB_ALM = output1;
HMI_INTER_HI_T48_DWB_A_OUT_1 = output2;
HMI_INTER_HI_T48_DWB_I_OUT_1 = output3;
HMI_INTER_HI_T48_DWB_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_P0SEL , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_P0SEL_ALM = output1;
HMI_INTER_P0SEL_A_OUT_1 = output2;
HMI_INTER_P0SEL_I_OUT_1 = output3;
HMI_INTER_P0SEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_P48SEL , english , 1 , DUMMY_I);
HMI_INTER_P48SEL_ALM = output1;
HMI_INTER_P48SEL_A_OUT_1 = output2;
HMI_INTER_P48SEL_I_OUT_1 = output3;
HMI_INTER_P48SEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , FUEL_SYS_PT6227SW_A_SW , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_PGSSEL_ALM = output1;
HMI_INTER_PGSSEL_A_OUT_1 = output2;
HMI_INTER_PGSSEL_I_OUT_1 = output3;
HMI_INTER_PGSSEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , COND_MON_PKPDF_BC_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_PKPDF_BC_ALM = output1;
HMI_INTER_PKPDF_BC_A_OUT_1 = output2;
HMI_INTER_PKPDF_BC_I_OUT_1 = output3;
HMI_INTER_PKPDF_BC_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , COND_MON_PKPDF_OTHR_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_PKPDF_OTHR_ALM = output1;
HMI_INTER_PKPDF_OTHR_A_OUT_1 = output2;
HMI_INTER_PKPDF_OTHR_I_OUT_1 = output3;
HMI_INTER_PKPDF_OTHR_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , COND_MON_PKT48_BC2A_A_NAME , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_PKT48_BC2A_ALM = output1;
HMI_INTER_PKT48_BC2A_A_OUT_1 = output2;
HMI_INTER_PKT48_BC2A_I_OUT_1 = output3;
HMI_INTER_PKT48_BC2A_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , 0_0 , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_PLQSEL_ALM = output1;
HMI_INTER_PLQSEL_A_OUT_1 = output2;
HMI_INTER_PLQSEL_I_OUT_1 = output3;
HMI_INTER_PLQSEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_PS3EST , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_PS3EST_ALM = output1;
HMI_INTER_PS3EST_A_OUT_1 = output2;
HMI_INTER_PS3EST_I_OUT_1 = output3;
HMI_INTER_PS3EST_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_PTBDMD , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_PTBDMD_ALM = output1;
HMI_INTER_PTBDMD_A_OUT_1 = output2;
HMI_INTER_PTBDMD_I_OUT_1 = output3;
HMI_INTER_PTBDMD_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_PTBSEL , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; });
HMI_INTER_PTBSEL_ALM = output1;
HMI_INTER_PTBSEL_A_OUT_1 = output2;
HMI_INTER_PTBSEL_I_OUT_1 = output3;
HMI_INTER_PTBSEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*6_894757293 ); } , else , { out = english; } , 0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_PX36SEL , english , 1);
HMI_INTER_PX36SEL_ALM = output1;
HMI_INTER_PX36SEL_A_OUT_1 = output2;
HMI_INTER_PX36SEL_I_OUT_1 = output3;
HMI_INTER_PX36SEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , VENT_STATOR_TMP_TC_MON , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_STATOR_F2C_ALM = output1;
HMI_INTER_STATOR_F2C_A_OUT_1 = output2;
HMI_INTER_STATOR_F2C_I_OUT_1 = output3;
HMI_INTER_STATOR_F2C_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_T3ASEL , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_T3ASEL_ALM = output1;
HMI_INTER_T3ASEL_A_OUT_1 = output2;
HMI_INTER_T3ASEL_I_OUT_1 = output3;
HMI_INTER_T3ASEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_T3BSEL , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english - 32 ) * 5/9; } , else , { out = english; });
HMI_INTER_T3BSEL_ALM = output1;
HMI_INTER_T3BSEL_A_OUT_1 = output2;
HMI_INTER_T3BSEL_I_OUT_1 = output3;
HMI_INTER_T3BSEL_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_WFGMVI , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*0_45359237 ); } , else , { out = english; });
HMI_INTER_WFGMVI_ALM = output1;
HMI_INTER_WFGMVI_A_OUT_1 = output2;
HMI_INTER_WFGMVI_I_OUT_1 = output3;
HMI_INTER_WFGMVI_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_WFGMVO , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*0_45359237 ); } , else , { out = english; });
HMI_INTER_WFGMVO_ALM = output1;
HMI_INTER_WFGMVO_A_OUT_1 = output2;
HMI_INTER_WFGMVO_I_OUT_1 = output3;
HMI_INTER_WFGMVO_B_OUT_1 = output4;
CALC_PLUS_FUNCTION(0 , 0 , out , DUMMY_IO , DUMMY_BO , CORE_ANALOG_WFGMVP , english , 1 , DUMMY_I , HMI_INTER_ENG_SI_B_NAME , SI , if ( SI ) , { out = ( english*0_45359237 ); } , else , { out = english; });
HMI_INTER_WFGMVP_ALM = output1;
HMI_INTER_WFGMVP_A_OUT_1 = output2;
HMI_INTER_WFGMVP_I_OUT_1 = output3;
HMI_INTER_WFGMVP_B_OUT_1 = output4;
