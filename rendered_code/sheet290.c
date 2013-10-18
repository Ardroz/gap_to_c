SPRINT_ALARM_LATCH1 = LATCH1_FUNCTION( 0 , SPRINT_RESET_B_NAME , SPRINT_OVRIDE_OR_OR , SPRINT_ACKN_B_NAME , 0 , SPRINT_PDSH62233H_B_NAME , PT6733 HI ALARM , SPRNT_ALM11 , SPRINT_PSL62227L_B_NAME , PT6727 LO ALARM , SPRNT_ALM13 , SPRINT_FT62270H_B_NAME , FT62270 FLOW ALARM , SPRNT_ALM17 , SPRINT_FT62231H_B_NAME , 0 , 0 );
SPRINT_DEMIN_SD_B_NAME = B_NAME_FUNCTION(  , 0 );
SPRINT_HMI_SPRTSD_B_MUX_S_N = B_MUX_S_N_FUNCTION( 0 , SPRINT_SD_LATCH_FIRST_ALM , TRUE , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
SPRINT_IO_FLT_ALM_LATCH1 = LATCH1_FUNCTION( 0 , ALARM_RESET_B_NAME , SPRINT_SPRNT_DSBL_NOT , ALARM_ACKN_B_NAME , 0 , SPRINT_FT62231FLT_B_NAME , FT6731 FLD SNSR , 0 , SPRINT_PT62239FLT_B_NAME , PT6739 FLD SNSR , 0 , SPRINT_PT62241FLT_B_NAME , PT6741 FLD SNSR , 0 , SPRINT_TE62235FLT_B_NAME , TE6735 FLD SNSR , 0 , SPRINT_TE62243FLT_B_NAME , TE36743 FLD SNSR , 0 , SPRINT_PT62269FLT_B_NAME , 0 , 0 , SPRINT_PT62250FLT_B_NAME , PT6769 FLD SNSR , 0 , SPRINT_FT62270FLT_B_NAME , FT6770 FLD SNSR , 0 , SPRINT_PT62234FLT_B_NAME , PT6234 FLD SNSR , 0 , FALSE , PT6727 FLD SNSR , 0 , FALSE , PT6733 FLD SNSR , 0 );
SPRINT_NOT_OK_NOT = NOT_FUNCTION( SPRINT_PSL_OK_B_NAME );
SPRINT_NOT_SD_NOT = NOT_FUNCTION( SPRINT_SD_OR_OR );
SPRINT_OVRIDE_OR_OR = OR_FUNCTION( SPRINT_SPRNT_DSBL_NOT , SPRINT_SPRT_OVRD_NOR );
SPRINT_PSL_MASK_AND = AND_FUNCTION( SPRINT_NOT_OK_NOT , SPRINT_PSL_SKIP_NOR );
SPRINT_PSL_SKIP_NOR = NOR_FUNCTION( SPRINT_SPRT_READY_SFC_STEP , SPRINT_LP_ON_1_SFC_STEP , SPRINT_LP_OFF_3_SFC_STEP , SPRINT_LP_OFF_5_SFC_STEP , SPRINT_HP_ON_1_SFC_STEP , SPRINT_HP_OFF_2_SFC_STEP , SPRINT_OFF_1_SFC_STEP , SPRINT_OFF_2_SFC_STEP , SPRINT_OFF_3_SFC_STEP , SPRINT_MASK_PURGE_AND , SPRINT_NOTREADY_SFC_STEP );
SPRINT_SDLATCHLP_ZMINUS1_B = ZMINUS1_B_FUNCTION( SPRINT_SD_OR_OR );
SPRINT_SD_3_LATCH1 = LATCH1_FUNCTION( 0 , CORE_DIGITAL_RESET , CORE_DIGITAL_ACKN , 0 , SPRINT_PSL_MASK_AND , SPRINT FORWARDING PRESSURE OK , SPRTSD3_01 , 0 );
SPRINT_SD_LATCH_LATCH1 = LATCH1_FUNCTION( 0 , SPRINT_RESET_B_NAME , SPRINT_OVRIDE_OR_OR , SPRINT_ACKN_B_NAME , 0 , CORE_ALM_SPRT1_ALMSPRT02 , ALM_SPRT1 #002 , NSD REF NOT AT MAX , CORE_ALM_SPRT1_ALMSPRT03 , ALM_SPRT1 #003 , SPRINT AIR MANFOLD LOW , CORE_ALM_SPRT1_ALMSPRT04 , ALM_SPRT1 #004 , ESPRINT AIR MANIFOLD LOW , CORE_ALM_SPRT1_ALMSPRT05 , ALM_SPRT1 #005 , NOT AT ZERO BLEED , CORE_ALM_SPRT1_ALMSPRT06 , ALM_SPRT1 #006 , T2 NOT OK TO SPRINT , CORE_ALM_SPRT1_ALMSPRT07 , ALM_SPRT1 #007 , H2O DMD TO FDBK ERROR , CORE_ALM_SPRT1_ALMSPRT08 , ALM_SPRT1 #008 , HP SPRINT WATER MANIFOLD LEAK , CORE_ALM_SPRT1_ALMSPRT09 , ALM_SPRT1 #009 , LP SPRINT WATER MANIFOLD LEAK , CORE_ALM_SPRT1_ALMSPRT10 , ALM_SPRT1 #010 , SPRINT WATER FLOW METER FAILED , CORE_ALM_SPRT1_ALMSPRT11 , ALM_SPRT1 #011 , HP SPRINT WATER MANIFOLD SENSOR FAILED , CORE_ALM_SPRT1_ALMSPRT12 , ALM_SPRT1 #012 , LP SPRINT WATER MANIFOLD SENSOR FAILED , CORE_ALM_SPRT1_ALMSPRT13 , ALM_SPRT1 #013 , HP SPRINT AIR MANIFOLD SENSOR FAILED , CORE_ALM_SPRT1_ALMSPRT14 , ALM_SPRT1 #014 , LP SPRINT AIR MANIFOLD SENSOR FAILED , CORE_ALM_SPRT1_ALMSPRT15 , ALM_SPRT1 #015 , ALARM_SPRT SPARE , CORE_ALM_SPRT1_ALMSPRT16 , ALM_SPRT1 #016 , ALARM_SPRT SPARE , CORE_ALM_SPRT1_ALMSPRT17 , ALM_SPRT1 #017 , ALARM_SPRT SPARE , CORE_ALM_SPRT1_ALMSPRT18 , ALM_SPRT1 #018 , ALARM_SPRT1 SPARE , CORE_ALM_SPRT1_ALMSPRT19 , ALM_SPRT1 #019 , ALARM_SPRT1 SPARE , CORE_ALM_SPRT1_ALMSPRT20 , ALM_SPRT1 #020 , ALARM_SPRT1 SPARE , CORE_ALM_SPRT2_ALMSPRT02 , ALM_SPRT2 #002 , LIQUID DEMAND SELECTED FAST SPRINT SD , CORE_ALM_SPRT2_ALMSPRT03 , ALM_SPRT2 #003 , PS3 NOT OK FAST SPRINT SD , CORE_ALM_SPRT2_ALMSPRT04 , ALM_SPRT2 #004 , ALARM_SPRT2 SPARE , CORE_ALM_SPRT2_ALMSPRT05 , ALM_SPRT2 #005 , ALARM_SPRT2 SPARE , FALSE , spare , 0 , CORE_ALM_SPRT3_ALMSPRT02 , ALM_SPRT3 #002 , NOT IN ABC MODE INSTANT SPRINT SD , CORE_ALM_SPRT3_ALMSPRT03 , ALM_SPRT3 #003 , ALARM_SPRT3 SPARE , CORE_ALM_SPRT3_ALMSPRT04 , ALM_SPRT3 #004 , ALARM_SPRT3 SPARE , CORE_ALM_SPRT3_ALMSPRT05 , ALM_SPRT3 #005 , ALARM_SPRT3 SPARE , FALSE , spare , 0 , SPRINT_PSL62227LL_B_NAME , PSL62227 - LO LO SPRINT SD , 0 , SPRINT_TE62243_HH_B_NAME , TE6223 - HI HI SPRINT SD , 0 , SPRINT_GPM6LT25_B_NAME , PT62237 GT 6 FT62270 LT 25 SPRINT SD , 0 , SPRINT_GPM10LT50_B_NAME , PT62237 GT 10 FT62270 LT 50 SPRINT SD , 0 , SPRINT_FT62270HH_B_NAME , FT62270 - HI HI FLOW SPRNT SD , 0 , 0 , 0 , 0 );
SPRINT_SD_OR_OR = OR_FUNCTION( SPRINT_DEMIN_SD_B_NAME , SPRINT_SD_LATCH_LATCH1 );
SPRINT_SPRNT_CNFG_B_NAME = B_NAME_FUNCTION( FALSE );
SPRINT_SPRNT_DSBL_NOT = NOT_FUNCTION( SPRINT_SPRNT_CNFG_B_NAME );
SPRINT_SPRT_OVRD_NOR = NOR_FUNCTION( SPRINT_LP_ON_2_SFC_STEP , SPRINT_LP_ON_3_SFC_STEP , SPRINT_HP_2_LP_1_SFC_STEP , SPRINT_HP_2_LP_2_SFC_STEP , SPRINT_HP_2_LP_3_SFC_STEP , SPRINT_HP_ON_2_SFC_STEP , SPRINT_HP_ON_3_SFC_STEP , SPRINT_LP_2_HP_1_SFC_STEP , SPRINT_LP_2_HP_2_SFC_STEP , SPRINT_LP_2_HP_3_SFC_STEP , SPRINT_LP_2_HP_4_SFC_STEP , SPRINT_LP_2_HP_5_SFC_STEP );
