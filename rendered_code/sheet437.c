D_VBVSCH_GENNOIGVSW_A_SW = A_SW_FUNCTION( D_VBVSCH_SWMWEQ3_EQ , D_VBVSCH_T_VBPMX_CURVES_3 , D_VBVSCH_VBVSK12MIN_A_MIN );
D_VBVSCH_MECHVBVMIN_A_MAX = A_MAX_FUNCTION( D_VBVSCH_T_VBLLMN_CURVES_2 , D_VBVSCH_T_VBMLN_CURVES_3 );
D_VBVSCH_NOIGVMAX_A_MAX = A_MAX_FUNCTION( D_VBVSCH_T_VBLLMX_CURVES_2 , D_VBVSCH_T_VBMLX_CURVES_3 );
D_VBVSCH_SPRNTSW_A_SW = A_SW_FUNCTION( D_VBVSCH_VBPMN_CURVES_3 , D_VBVSCHES_T_VPMNES_CURVES_3 , Q_CLBCFG_SPRSWACTIV_B_NAME );
I_COMPARE_FUNCTION(3 , ADJ_SWMWJ_I_NAME,&D_VBVSCH_SWMWEQ3_EQ,&D_VBVSCH_SWMWEQ3_GT,&D_VBVSCH_SWMWEQ3_LT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , T_VBLLMN,&D_VBVSCH_T_VBLLMN_CURVES_2,&D_VBVSCH_T_VBLLMN_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , T_VBLLMX,&D_VBVSCH_T_VBLLMX_CURVES_2,&D_VBVSCH_T_VBLLMX_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , C_NSDC_NSDR2_A_NAME , T_VBMLN,&D_VBVSCH_T_VBMLN_CURVES_3,&D_VBVSCH_T_VBMLN_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , C_NSDC_NSDR2_A_NAME , T_VBMLX,&D_VBVSCH_T_VBMLX_CURVES_3,&D_VBVSCH_T_VBMLX_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_INLETCAL_T2RTE_A_NAME , C_N25B_N25R2_A_NAME , T_VBPMX,&D_VBVSCH_T_VBPMX_CURVES_3,&D_VBVSCH_T_VBPMX_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , C_NSDC_NSDR2_A_NAME , T_VBULMN,&D_VBVSCH_T_VBULMN_CURVES_3,&D_VBVSCH_T_VBULMN_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_N25B_N25R2_A_NAME , C_NSDC_NSDR2_A_NAME , T_VBULMX,&D_VBVSCH_T_VBULMX_CURVES_3,&D_VBVSCH_T_VBULMX_REV_OUT);
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_INLETCAL_T2RTE_A_NAME , C_N25B_N25R2_A_NAME , T_VBPMN,&D_VBVSCH_VBPMN_CURVES_3,&D_VBVSCH_VBPMN_REV_OUT);
D_VBVSCH_VBVMAX_A_NAME = D_VBVSCH_VBVMAXADD_ADD;
D_VBVSCH_VBVMAXADD_ADD = ADJ_VBVMAXJA_A_NAME + D_VBVSCH_GENNOIGVSW_A_SW;
D_VBVSCH_VBVMECHUL_A_MIN = A_MIN_FUNCTION( D_VBVSCH_MECHVBVMIN_A_MAX , D_VBVSCH_T_VBULMN_CURVES_3 );
D_VBVSCH_VBVMIN_A_NAME = D_VBVSCH_VBVMINADD_ADD;
D_VBVSCH_VBVMINADD_ADD = ADJ_VBVMINJA_A_NAME + D_VBVSCH_VBVMINTMP_A_SW;
D_VBVSCH_VBVMINTMP_A_SW = A_SW_FUNCTION( D_VBVSCH_SPRNTSW_A_SW , D_VBVSCH_SWMWEQ3_EQ , D_VBVSCH_VBVMECHUL_A_MIN );
D_VBVSCH_VBVSK12MIN_A_MIN = A_MIN_FUNCTION( D_VBVSCH_NOIGVMAX_A_MAX , D_VBVSCH_T_VBULMX_CURVES_3 );
CURVES_3_FUNCTION(1 , 0 , 5418-2587A_GE , C_INLETCAL_T2RTE_A_NAME , C_N25B_N25R2_A_NAME , T_VPMNES,&D_VBVSCHES_T_VPMNES_CURVES_3,&D_VBVSCHES_T_VPMNES_REV_OUT);