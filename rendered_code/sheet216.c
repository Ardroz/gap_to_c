SFC_STEP_WW_NOTSOAK_NOT = NOT_FUNCTION( SFC_STEP_WWCRANK_11_SFC_STEP );
SFC_STEP_WW_TMRMSK_AND = AND_FUNCTION( SFC_STEP_WWCRANK_10_SFC_STEP , SFC_STEP_WW_NOTSOAK_NOT );
WTR_WASH_FAILDLY2_DELAY = DELAY_FUNCTION( 0 , WTR_WASH_WW_TIMEACT_B_NAME , 0 , *1800_0 (300_0, 3600_0) );
WTR_WASH_LS6543_B_NAME = B_NAME_FUNCTION( N1N34_BI_LS6543_BI_L );
WTR_WASH_LS6543ALM_B_NAME = B_NAME_FUNCTION( WTR_WASH_LS6543_MSK_AND );
WTR_WASH_LS6543NT_NOT = NOT_FUNCTION( WTR_WASH_LS6543_B_NAME );
WTR_WASH_LS6543_MSK_AND = AND_FUNCTION( WTR_WASH_WWACTIVOR_OR , WTR_WASH_LS6543NT_NOT );
WTR_WASH_MOT6535_B_NAME = B_NAME_FUNCTION( WTR_WASH_MOT6535AND_AND );
WTR_WASH_MOT6535AND_AND = AND_FUNCTION( WTR_WASH_SOV6535_OR_OR , WTR_WASH_MTR_PRMDLY_DELAY );
WTR_WASH_MTR_PRMDLY_DELAY = DELAY_FUNCTION( 0 , WTR_WASH_NOTSOV6540_NOT , WTR_WASH_PRGDLY_ADD_ADD , 0 );
WTR_WASH_NOTSOV6540_NOT = NOT_FUNCTION( WTR_WASH_SOV6540_OR_OR );
WTR_WASH_NOT_DONE1_NOT = NOT_FUNCTION( WTR_WASH_WW_DONE1_B_NAME );
WTR_WASH_OFFLNPRGE_B_NAME = B_NAME_FUNCTION( SFC_STEP_WWCRANK_11_SFC_STEP );
WTR_WASH_PRGCNVT_A_TO_T = A_TO_T_FUNCTION( WTR_WASH_WSHPRGTMR_OUT_1 );
WTR_WASH_PRGDLYTM_A_NAME = A_NAME_FUNCTION(  , *5_0 (0_0, 15_0) );
WTR_WASH_PRGDLY_ADD_ADD = ADD_FUNCTION( 0 , WTR_WASH_PRGDLYTM_A_NAME , 1_0 );
WTR_WASH_PRGTOHMS_T_TO_HMS = T_TO_HMS_FUNCTION( 0 , WTR_WASH_PRGCNVT_A_TO_T );
WTR_WASH_PRG_NEGDLY_DELAY = DELAY_FUNCTION( 0 , WTR_WASH_SOV6540_OR_OR , 0 , WTR_WASH_PRGDLYTM_A_NAME );
WTR_WASH_PRG_TIMER_A_NAME = A_NAME_FUNCTION(  , *60_0 (0_0, 6000_0) );
WTR_WASH_PR_TMR_MIN_A_NAME = A_NAME_FUNCTION( WTR_WASH_PRGTOHMS_MIN );
WTR_WASH_PR_TMR_SEC_A_NAME = A_NAME_FUNCTION( WTR_WASH_PRGTOHMS_SEC );
WTR_WASH_PURGE_DONE_B_NAME = B_NAME_FUNCTION( WTR_WASH_WW_PRGTMR_DELAY );
WTR_WASH_PURGE_OR_OR = OR_FUNCTION( SFC_STEP_WWCRANK_10_TRAN_1 , WTR_WASH_OFFLNPRGE_B_NAME );
WTR_WASH_PURGE_OS_ONE_SHOT = ONE_SHOT_FUNCTION( 0 , WTR_WASH_PURGE_OR_OR , WTR_WASH_PRG_TIMER_A_NAME , SFC_STEP_WWCRANK_1_SFC_STEP );
WTR_WASH_SOAK_DONE_B_NAME = B_NAME_FUNCTION( WTR_WASH_WW_SKTIMER_DELAY );
WTR_WASH_SOV6504_B_NAME = B_NAME_FUNCTION( WTR_WASH_SOV6504_OR_OR );
WTR_WASH_SOV6504AND_AND = AND_FUNCTION( WTR_WASH_NOT_DONE1_NOT , SFC_STEP_WWCRANK_10_SFC_STEP , WTR_WASH_SPEED_OK_NOR );
WTR_WASH_SOV6504_OR_OR = OR_FUNCTION( WTR_WASH_SOV6504AND_AND , WTR_WASH_PRG_NEGDLY_DELAY );
WTR_WASH_SOV6535_OR_OR = OR_FUNCTION( ONLINE_WW_SOV6516_B_NAME , WTR_WASH_SOV6504AND_AND );
WTR_WASH_SOV6540_B_NAME = B_NAME_FUNCTION( WTR_WASH_SOV6540_OR_OR );
WTR_WASH_SOV6540_OR_OR = OR_FUNCTION( WTR_WASH_PURGE_OS_ONE_SHOT , ONLINE_WW_PURGE_OS_ONE_SHOT );
WTR_WASH_SPEED_OK_NOR = NOR_FUNCTION( SFC_STEP_WWN25LT2K_B_NAME , SFC_STEP_WWNSDLT200_B_NAME );
WTR_WASH_STRT_SKTMR_B_NAME = B_NAME_FUNCTION( SFC_STEP_WWCRANK_11_SFC_STEP );
WTR_WASH_TIMER_SW_A_SW = A_SW_FUNCTION( ONLINE_WW_ONLINE01_SFC_STEP , WTR_WASH_WSH_TIMER_OUT_1 , ONLINE_WW_I_TO_A_OUT_1 );
WTR_WASH_WSHPRGTMR_I_TO_AN = I_TO_AN_FUNCTION( 0 , WTR_WASH_WW_PRGTMR_R_TIME );
WTR_WASH_WSH_TIMER_I_TO_AN = I_TO_AN_FUNCTION( 0 , WTR_WASH_WW_TIMER_R_TIME );
WTR_WASH_WWACTIVOR_OR = OR_FUNCTION( SFC_STEP_WWCRANK_10_SFC_STEP , ONLINE_WW_ONLINE01_SFC_STEP );
WTR_WASH_WW_DONE1_B_NAME = B_NAME_FUNCTION( WTR_WASH_WW_DONE1OR_OR );
WTR_WASH_WW_DONE1OR_OR = OR_FUNCTION( WTR_WASH_LS6543_MSK_AND , WTR_WASH_WW_TIMER_DELAY );
WTR_WASH_WW_PRGTMR_DELAY = DELAY_FUNCTION( 0 , WTR_WASH_PURGE_OS_ONE_SHOT , WTR_WASH_PRG_TIMER_A_NAME , 0 );
WTR_WASH_WW_SKTIMER_DELAY = DELAY_FUNCTION( 0 , WTR_WASH_STRT_SKTMR_B_NAME , 0 , *600_0 (0_0, 6000_0) );
WTR_WASH_WW_TIME_A_NAME = A_NAME_FUNCTION(  , *600_0 (0_0, 6000_0) );
WTR_WASH_WW_TIMEACT_B_NAME = B_NAME_FUNCTION( WTR_WASH_WW_ACTIVE_B_NAME );
WTR_WASH_WW_TIMER_DELAY = DELAY_FUNCTION( 0 , SFC_STEP_WW_TMRMSK_AND , WTR_WASH_WW_TIME_A_NAME , 0 );
WTR_WASH_WW_TM_DONE_B_NAME = B_NAME_FUNCTION( WTR_WASH_FAILDLY2_DELAY );
