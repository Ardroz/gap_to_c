A1_A01_CPU_KBASESW_&A1_A01_CPU_KBASESW_A_SW = A_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , GAS_CHROM_SG_CALCULATE , 1.298 );
IFACE_HDWR_HW_OR_485_B_NAME = *FALSE;
IFACE_HDWR_KBASE_A_NAME = A1_A01_CPU_KBASESW_A_SW;
IFACE_HDWR_KBASEVST_B_NAME = IFACE_HDWR_KBASEVSTSW_B_SW;
IFACE_HDWR_KBASEVSTSW_&IFACE_HDWR_KBASEVSTSW_B_SW = B_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , FALSE , GAS_CHROM_LINK_DELAY_DELAY );
IFACE_HDWR_LHV_A_NAME = IFACE_HDWR_LHVCALC_CALCULATE;
IFACE_HDWR_LHVCALC_CALCULATE =  (IFACE_HDWR_LHVSW_A_SW /CORE_ANALOG_SGSEL )  /0.076488;
IFACE_HDWR_LHVSW_&IFACE_HDWR_LHVSW_A_SW = A_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , A1_A06_AIO_AE62326_AI_COMBO , GAS_CHROM_NET_BTUDRY_CALCULATE );
IFACE_HDWR_LHVVST_B_NAME = IFACE_HDWR_LHVVST_SW_B_SW;
IFACE_HDWR_LHVVST_SW_&IFACE_HDWR_LHVVST_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , A1_A06_AIO_AE62326_LATCH_OR , GAS_CHROM_LINK_DELAY_DELAY );
IFACE_HDWR_MOLCO2_A_NAME = IFACE_HDWR_MOLCO2SW_A_SW;
IFACE_HDWR_MOLCO2SW_&IFACE_HDWR_MOLCO2SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , GAS_CHROM_SG_CALCULATE , 1 );
IFACE_HDWR_MOLCO2VST_B_NAME = IFACE_HDWR_MOLCO2VSTS_B_SW;
IFACE_HDWR_MOLCO2VSTS_&IFACE_HDWR_MOLCO2VSTS_B_SW = B_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , FALSE , GAS_CHROM_LINK_DELAY_DELAY );
IFACE_HDWR_MOLN2_A_NAME = IFACE_HDWR_MOLN2SW_A_SW;
IFACE_HDWR_MOLN2SW_&IFACE_HDWR_MOLN2SW_A_SW = A_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , GAS_CHROM_SG_CALCULATE , 0.5 );
IFACE_HDWR_MOLN2VST_B_NAME = IFACE_HDWR_MOLN2VSTSW_B_SW;
IFACE_HDWR_MOLN2VSTSW_&IFACE_HDWR_MOLN2VSTSW_B_SW = B_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , FALSE , GAS_CHROM_LINK_DELAY_DELAY );
IFACE_HDWR_SG_A_NAME = IFACE_HDWR_SGASSW_A_SW;
IFACE_HDWR_SGASSW_&IFACE_HDWR_SGASSW_A_SW = A_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , A1_A07_AIO_AE62325_AI_COMBO , GAS_CHROM_SG_CALCULATE );
IFACE_HDWR_SGVST_B_NAME = IFACE_HDWR_SGVST_SW_B_SW;
IFACE_HDWR_SGVST_SW_&IFACE_HDWR_SGVST_SW_B_SW = B_SW_FUNCTION( IFACE_HDWR_HW_OR_485_B_NAME , A1_A07_AIO_AE62325_LATCH_OR , GAS_CHROM_LINK_DELAY_DELAY );
