  bool MAPPING_LWR2_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEDN2Z_ZMINUS1_B , HMI_BO_BW_V_117_B_NAME,&MAPPING_LWR2_OS_ONE_SHOT,&MAPPING_LWR2_OS_R_TIME,&MAPPING_LWR2_OS_LAST_TRIGGER);
  bool MAPPING_LWR3_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEDN3Z_ZMINUS1_B , HMI_BO_BW_V_119_B_NAME,&MAPPING_LWR3_OS_ONE_SHOT,&MAPPING_LWR3_OS_R_TIME,&MAPPING_LWR3_OS_LAST_TRIGGER);
MAPPING_NOMOVEDN1Z_ZMINUS1_B = MAPPING_NOMOVE_DN1_OR;
MAPPING_NOMOVEDN2Z_ZMINUS1_B = MAPPING_NOMOVE_DN2_OR;
MAPPING_NOMOVEDN3Z_ZMINUS1_B = MAPPING_NOMOVE_DN3_OR;
MAPPING_NOMOVEUP1Z_ZMINUS1_B = MAPPING_NOMOVE_UP1_OR;
MAPPING_NOMOVEUP2Z_ZMINUS1_B = MAPPING_NOMOVE_UP2_OR;
MAPPING_NOMOVEUP3Z_ZMINUS1_B = MAPPING_NOMOVE_UP3_OR;
MAPPING_NOMOVE_DN1_OR = MAPPING_TFLDMD_HSS_LO_LIM_I || LOC_REM_NOTMAP_NOT;
MAPPING_NOMOVE_DN2_OR = MAPPING_TFLMAX_HSS_LO_LIM_I || LOC_REM_NOTMAP_NOT;
MAPPING_NOMOVE_DN3_OR = MAPPING_TFLMIN_HSS_LO_LIM_I || LOC_REM_NOTMAP_NOT;
MAPPING_NOMOVE_UP1_OR = MAPPING_TFLDMD_HSS_HI_LIM_I || LOC_REM_NOTMAP_NOT;
MAPPING_NOMOVE_UP2_OR = MAPPING_TFLMAX_HSS_HI_LIM_I || LOC_REM_NOTMAP_NOT;
MAPPING_NOMOVE_UP3_OR = MAPPING_TFLMIN_HSS_HI_LIM_I || LOC_REM_NOTMAP_NOT;
  bool MAPPING_NOMVDN_OS1_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLDMD_HSS_LO_LIM_I,&MAPPING_NOMVDN_OS1_ONE_SHOT,&MAPPING_NOMVDN_OS1_R_TIME,&MAPPING_NOMVDN_OS1_LAST_TRIGGER);
  bool MAPPING_NOMVDN_OS2_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLMAX_HSS_LO_LIM_I,&MAPPING_NOMVDN_OS2_ONE_SHOT,&MAPPING_NOMVDN_OS2_R_TIME,&MAPPING_NOMVDN_OS2_LAST_TRIGGER);
  bool MAPPING_NOMVDN_OS3_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLMIN_HSS_LO_LIM_I,&MAPPING_NOMVDN_OS3_ONE_SHOT,&MAPPING_NOMVDN_OS3_R_TIME,&MAPPING_NOMVDN_OS3_LAST_TRIGGER);
  bool MAPPING_NOMVUP_OS1_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLDMD_HSS_HI_LIM_I,&MAPPING_NOMVUP_OS1_ONE_SHOT,&MAPPING_NOMVUP_OS1_R_TIME,&MAPPING_NOMVUP_OS1_LAST_TRIGGER);
  bool MAPPING_NOMVUP_OS2_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLMAX_HSS_HI_LIM_I,&MAPPING_NOMVUP_OS2_ONE_SHOT,&MAPPING_NOMVUP_OS2_R_TIME,&MAPPING_NOMVUP_OS2_LAST_TRIGGER);
  bool MAPPING_NOMVUP_OS3_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 1.5 , 0 , MAPPING_TFLMIN_HSS_HI_LIM_I,&MAPPING_NOMVUP_OS3_ONE_SHOT,&MAPPING_NOMVUP_OS3_R_TIME,&MAPPING_NOMVUP_OS3_LAST_TRIGGER);
  bool MAPPING_RSE2_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEUP2Z_ZMINUS1_B , HMI_BO_BW_V_116_B_NAME,&MAPPING_RSE2_OS_ONE_SHOT,&MAPPING_RSE2_OS_R_TIME,&MAPPING_RSE2_OS_LAST_TRIGGER);
  bool MAPPING_RSE3_OS_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEUP3Z_ZMINUS1_B , HMI_BO_BW_V_118_B_NAME,&MAPPING_RSE3_OS_ONE_SHOT,&MAPPING_RSE3_OS_R_TIME,&MAPPING_RSE3_OS_LAST_TRIGGER);
  bool MAPPING_TFLDMDDN_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEDN1Z_ZMINUS1_B , HMI_BO_BW_V_115_B_NAME,&MAPPING_TFLDMDDN_ONE_SHOT,&MAPPING_TFLDMDDN_R_TIME,&MAPPING_TFLDMDDN_LAST_TRIGGER);
MAPPING_TFLDMDDNSW_A_SW = A_SW_FUNCTION( MAPPING_TFLDMDDN_ONE_SHOT , 0.0 , MAPPING_MINUS_NEGATE );
MAPPING_TFLDMDJFBS_A_NAME = MAPPING_TFLDMD_HSS_HSS_BUS;
MAPPING_TFLDMDJ_Z_ZMINUS1 = CORE_ANALOG_TFLDMD;
A_MUX_HSS_FUNCTION(1 , MAPPING_TFLDMD_ADD_ADD , -500.0 , 500.0 , MAPPING_SMALLNEGS_OUT_1 , MAPPING_TFLDMDJ_Z_ZMINUS1 , MAPPING_NOMVDN_OS1_ONE_SHOT , MAPPING_NOMVUP_OS1_ONE_SHOT , MAPPING_WRITE1LTCH_LATCH , LOC_REM_NOTMAP_NOT,&MAPPING_TFLDMDLMIT_A_MUX_HSS,&MAPPING_TFLDMDLMIT_INT_SEL);
  bool MAPPING_TFLDMDUP_LAST_TRIGGER;
ONE_SHOT_FUNCTION(1 , 0.08 , MAPPING_NOMOVEUP1Z_ZMINUS1_B , HMI_BO_BW_V_114_B_NAME,&MAPPING_TFLDMDUP_ONE_SHOT,&MAPPING_TFLDMDUP_R_TIME,&MAPPING_TFLDMDUP_LAST_TRIGGER);
MAPPING_TFLDMDUPSW_A_SW = A_SW_FUNCTION( MAPPING_TFLDMDUP_ONE_SHOT , 0.0 , MAPPING_PLUS_A_NAME );
MAPPING_TFLDMD_ADD_ADD = MAPPING_TFLDMDUPSW_A_SW + MAPPING_TFLDMDDNSW_A_SW + MAPPING_TFLDMD_Z_ZMINUS1;
HSS_BUS_FUNCTION(1 , 500.0 , MAPPING_TFLDMD_ADD_ADD , MAPPING_TFLDMD_ADD_ADD , -500.0,&MAPPING_TFLDMD_HSS_HI_LIM_I,&MAPPING_TFLDMD_HSS_HSS_BUS,&MAPPING_TFLDMD_HSS_LO_LIM_I,&MAPPING_TFLDMD_HSS_SEL_1,&MAPPING_TFLDMD_HSS_SEL_2);
MAPPING_TFLDMD_INT_OUT_1 =(int)MAPPING_TFLDMD_Z_ZMINUS1;
MAPPING_TFLDMD_Z_ZMINUS1 = MAPPING_TFLDMDLMIT_A_MUX_HSS;
MAPPING_TFLMAXDNSW_A_SW = A_SW_FUNCTION( MAPPING_LWR2_OS_ONE_SHOT , 0.0 , MAPPING_MINUS_NEGATE );
MAPPING_TFLMAXJFBS_A_NAME = MAPPING_TFLMAX_HSS_HSS_BUS;
MAPPING_TFLMAXJ_Z_ZMINUS1 = CORE_ANALOG_TFLMAX;
A_MUX_HSS_FUNCTION(1 , MAPPING_TFLMAX_ADD_ADD , -500.0 , 500.0 , MAPPING_SMALLNEGS_OUT_2 , MAPPING_TFLMAXJ_Z_ZMINUS1 , MAPPING_NOMVDN_OS2_ONE_SHOT , MAPPING_NOMVUP_OS2_ONE_SHOT , MAPPING_WRITE2LTCH_LATCH , LOC_REM_NOTMAP_NOT,&MAPPING_TFLMAXLMIT_A_MUX_HSS,&MAPPING_TFLMAXLMIT_INT_SEL);
MAPPING_TFLMAXUPSW_A_SW = A_SW_FUNCTION( MAPPING_RSE2_OS_ONE_SHOT , 0.0 , MAPPING_PLUS_A_NAME );
MAPPING_TFLMAX_ADD_ADD = MAPPING_TFLMAXUPSW_A_SW + MAPPING_TFLMAXDNSW_A_SW + MAPPING_TFLMAX_Z_ZMINUS1;
HSS_BUS_FUNCTION(1 , 500.0 , MAPPING_TFLMAX_ADD_ADD , MAPPING_TFLMAX_ADD_ADD , -500.0,&MAPPING_TFLMAX_HSS_HI_LIM_I,&MAPPING_TFLMAX_HSS_HSS_BUS,&MAPPING_TFLMAX_HSS_LO_LIM_I,&MAPPING_TFLMAX_HSS_SEL_1,&MAPPING_TFLMAX_HSS_SEL_2);
MAPPING_TFLMAX_INT_OUT_1 =(int)MAPPING_TFLMAX_Z_ZMINUS1;
MAPPING_TFLMAX_Z_ZMINUS1 = MAPPING_TFLMAXLMIT_A_MUX_HSS;
MAPPING_TFLMINDNSW_A_SW = A_SW_FUNCTION( MAPPING_LWR3_OS_ONE_SHOT , 0.0 , MAPPING_MINUS_NEGATE );
MAPPING_TFLMINJFBS_A_NAME = MAPPING_TFLMIN_HSS_HSS_BUS;
MAPPING_TFLMINJ_Z_ZMINUS1 = CORE_ANALOG_TFLMIN;
A_MUX_HSS_FUNCTION(1 , MAPPING_TFLMIN_ADD_ADD , -500.0 , 500.0 , MAPPING_SMALLNEGS_OUT_3 , MAPPING_TFLMINJ_Z_ZMINUS1 , MAPPING_NOMVDN_OS3_ONE_SHOT , MAPPING_NOMVUP_OS3_ONE_SHOT , MAPPING_WRITE3LTCH_LATCH , LOC_REM_NOTMAP_NOT,&MAPPING_TFLMINLMIT_A_MUX_HSS,&MAPPING_TFLMINLMIT_INT_SEL);
MAPPING_TFLMINUPSW_A_SW = A_SW_FUNCTION( MAPPING_RSE3_OS_ONE_SHOT , 0.0 , MAPPING_PLUS_A_NAME );
MAPPING_TFLMIN_ADD_ADD = MAPPING_TFLMINUPSW_A_SW + MAPPING_TFLMINDNSW_A_SW + MAPPING_TFLMIN_Z_ZMINUS1;
HSS_BUS_FUNCTION(1 , 500.0 , MAPPING_TFLMIN_ADD_ADD , MAPPING_TFLMIN_ADD_ADD , -500.0,&MAPPING_TFLMIN_HSS_HI_LIM_I,&MAPPING_TFLMIN_HSS_HSS_BUS,&MAPPING_TFLMIN_HSS_LO_LIM_I,&MAPPING_TFLMIN_HSS_SEL_1,&MAPPING_TFLMIN_HSS_SEL_2);
MAPPING_TFLMIN_INT_OUT_1 =(int)MAPPING_TFLMIN_Z_ZMINUS1;
MAPPING_TFLMIN_Z_ZMINUS1 = MAPPING_TFLMINLMIT_A_MUX_HSS;
MAPPING_WRITE1LTCH_LATCH = LATCH_FUNCTION(1,MAPPING_WRITE1RST_EQ,MAPPING_WRITE_1_OR_OR,MAPPING_WRITE1LTCH_LATCH);
I_COMPARE_FUNCTION(MAPPING_TFLDMD_INT_OUT_1 , MAPPING_AW_1_SW_I_SW,&MAPPING_WRITE1RST_EQ,&MAPPING_WRITE1RST_GT,&MAPPING_WRITE1RST_LT);
MAPPING_WRITE2LTCH_LATCH = LATCH_FUNCTION(1,MAPPING_WRITE2RST_EQ,MAPPING_WRITE_2_OR_OR,MAPPING_WRITE2LTCH_LATCH);
I_COMPARE_FUNCTION(MAPPING_TFLMAX_INT_OUT_1 , MAPPING_AW_2_SW_I_SW,&MAPPING_WRITE2RST_EQ,&MAPPING_WRITE2RST_GT,&MAPPING_WRITE2RST_LT);
MAPPING_WRITE3LTCH_LATCH = LATCH_FUNCTION(1,MAPPING_WRITE3RST_EQ,MAPPING_WRITE_3_OR_OR,MAPPING_WRITE3LTCH_LATCH);
I_COMPARE_FUNCTION(MAPPING_TFLMIN_INT_OUT_1 , MAPPING_AW_3_SW_I_SW,&MAPPING_WRITE3RST_EQ,&MAPPING_WRITE3RST_GT,&MAPPING_WRITE3RST_LT);
