SPRINT_BACK_TO_LP_OR = OR_FUNCTION( SPRINT_LP_OFF_2_TRAN_2 , SPRINT_LP_OFF_3_TRAN_2 , SPRINT_LP_OFF_4_TRAN_2 , SPRINT_LP_OFF_5_TRAN_2 , SPRINT_HP_OFF_2_TRAN_2 , SPRINT_OFF_1_TRAN_2 , SPRINT_OFF_2_TRAN_2 , SPRINT_OFF_3_TRAN_2 , SPRINT_OFF_4_TRAN_2 );
SPRINT_C_LPSPRTEN_B_NAME = B_NAME_FUNCTION( IFACE_SPRINT_C_LPSPRTEN );
SPRINT_H2OXFRDONE_B_NAME = B_NAME_FUNCTION( IFACE_SPRINT_H2OXFRDONE );
SPRINT_HP_2_LP_1_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_STRT_ESPRT_OR , SPRINT_TRANSOFF_AND , SPRINT_N_LPSPRTEN_NOT , SPRINT_H2OXFRDONE_B_NAME );
SPRINT_HP_2_LP_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_HP_2_LP_1_TRAN_3 , SPRINT_TRANSOFF_AND , SPRINT_N_LPSPRTEN_NOT , SPRINT_DLY_HPHLD_DELAY );
SPRINT_HP_2_LP_3_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_HP_2_LP_2_TRAN_3 , SPRINT_TRANSOFF_AND , SPRINT_N_LPSPRTEN_NOT , SPRINT_DRAINHP_TM_DELAY );
SPRINT_LP_ON_1_SFC_STEP = SFC_STEP_FUNCTION( SPRINT_SPRT_READY_TRAN_5 , SPRINT_TRANSOFF_AND , SPRINT_PSL_OK_B_NAME , 0 , 0 , SPRINT_SPRT_READY_TRAN_3 , SPRINT_BACK_TO_LP_OR );
SPRINT_LP_ON_2_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_ON_1_TRAN_2 , SPRINT_HP_ON_2_TRAN_2 , SPRINT_TRANSOFF_AND , SPRINT_N_LPSPRTEN_NOT , SPRINT_FILL_DN_OR );
SPRINT_LP_ON_3_SFC_STEP = SFC_STEP_FUNCTION( 0 , 0 , SPRINT_LP_ON_2_TRAN_3 , SPRINT_HP_2_LP_3_TRAN_3 , SPRINT_TRANSOFF_AND , SPRINT_N_LPSPRTEN_NOT );
SPRINT_N_LPSPRTEN_NOT = NOT_FUNCTION( SPRINT_C_LPSPRTEN_B_NAME );
SPRINT_PSL_OK_B_NAME = B_NAME_FUNCTION(  , *TRUE );
SPRINT_SEL_SPRAY_AND = AND_FUNCTION( SPRINT_C_LPSPRTEN_B_NAME , SPRINT_SPRINTENBL_B_NAME );
SPRINT_SEL_SPRINT_AND = AND_FUNCTION( SPRINT_N_LPSPRTEN_NOT , SPRINT_SPRINTENBL_B_NAME , SPRINT_HP_SPRNTOK_B_NAME );
SPRINT_SPRT_READY_SFC_STEP = SFC_STEP_FUNCTION( 0 , "INACTIVE" , SPRINT_NOTREADY_TRAN_1 , SPRINT_TRANSOFF_AND , SPRINT_SEL_SPRINT_AND , SPRINT_SEL_SPRAY_AND , SPRINT_SIM_SPRT_AND , SPRINT_SIM_SPRAY_AND );
SPRINT_STRT_ESPRT_OR = OR_FUNCTION( SPRINT_LP_2_HP_1_TRAN_2 , SPRINT_LP_2_HP_2_TRAN_2 , SPRINT_LP_2_HP_3_TRAN_2 , SPRINT_LP_2_HP_4_TRAN_2 , SPRINT_LP_2_HP_5_TRAN_2 , SPRINT_HP_ON_3_TRAN_2 , SPRINT_LP_OFF_1_TRAN_2 , SPRINT_HP_OFF_1_TRAN_2 );
SPRINT_TNK_VACSW_B_NAME = B_NAME_FUNCTION(  , 0 );
SPRINT_TRANSOFF_AND = AND_FUNCTION( SPRINT_TRANS_OFF_OR , SPRINT_NOTTEST_NOT );
SPRINT_TRANS_OFF_OR = OR_FUNCTION( SPRINT_SDLATCHLP_ZMINUS1_B , CORE_DIGITAL_FUELOFF , SPRINT_SPRT_OFF_NOT , SPRINT_OFF_MASK_AND , SPRINT_TNK_VACSW_B_NAME , CORE_ALM_SPRT1_SPRSDALM1 , CORE_ALM_SPRT2_SPRSDALM2 , CORE_ALM_SPRT3_SPRSDALM3 );
