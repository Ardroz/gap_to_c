I_LHV_FLTANDGAS_AND = I_LHV_LHVLTCH2_LATCH && I_LHV_XFERCMP_A_COMPARE;
I_LHV_LHV_A_NAME = IFACE_HDWR_LHV;
I_LHV_LHVALM_B_NAME = I_LHV_FLTANDGAS_AND;
I_LHV_LHVAMLENA_AND = I_LHV_N_CALENA_NOT && IFACE_HDWR_LHVVST;
I_LHV_LHVCALHLD_A_SW = A_SW_FUNCTION( I_LHV_LHVCALHLD_A_SW , IFACE_CORE_Z_EQUIPCAL , IFACE_HDWR_LHV );
I_LHV_LHVFAIL1_OR = I_LHV_LHVAMLENA_AND || I_LHV_RNGANDNCAL_AND;
I_LHV_LHVLTCH2_LATCH = LATCH_FUNCTION(1,I_LHV_LHVFAIL1_OR,RESET_RESET_B_NAME,I_LHV_LHVLTCH2_LATCH);
I_LHV_LHVRTEINIT_NOT =! RESET_PWR_UP_B_NAME;
I_LHV_LHVRTPV1_RATE_LIMIT = RATE_LIMIT_FUNCTION( 1 , ADJ_LHVRATEJ_A_NAME , ADJ_LHVRATEJ_A_NAME , I_LHV_LHV_SW1_A_SW , I_LHV_LHVRTEINIT_NOT );
I_LHV_LHVSELGS_A_NAME = I_LHV_LHVRTPV1_RATE_LIMIT;
I_LHV_LHVSHFT2_OR = I_LHV_LHVSHIFT2_HI_LIM_I || I_LHV_LHVSHIFT2_LO_LIM_I;
HSS_BUS_FUNCTION(1 , ADJ_LHVMAXJ_A_NAME , ADJ_LHVMINJ_A_NAME , I_LHV_LHVCALHLD_A_SW , I_LHV_LHVCALHLD_A_SW,&I_LHV_LHVSHIFT2_HI_LIM_I,&I_LHV_LHVSHIFT2_HSS_BUS,&I_LHV_LHVSHIFT2_LO_LIM_I,&I_LHV_LHVSHIFT2_SEL_1,&I_LHV_LHVSHIFT2_SEL_2);
I_LHV_LHVVSTALM_B_NAME = I_LHV_LHVAMLENA_AND;
I_LHV_LHV_SW1_A_SW = A_SW_FUNCTION( ADJ_LHVMANGSJ_A_NAME , I_LHV_LHVCALHLD_A_SW , I_LHV_MANFLTOR_OR );
I_LHV_MANFLTOR_OR = ADJ_LHVMANSW_B_NAME || I_LHV_FLTANDGAS_AND;
I_LHV_N_CALENA_NOT =! IFACE_CORE_Z_EQUIPCAL;
I_LHV_RNGANDNCAL_AND = I_LHV_LHVSHFT2_OR && I_LHV_N_CALENA_NOT;
A_COMPARE_FUNCTION(0 , 0.5 , E_SEQUENCG_XFERDMD_A_NAME,&I_LHV_XFERCMP_A_COMPARE,&I_LHV_XFERCMP_A_EQUAL);