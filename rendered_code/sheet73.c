B_FORCE_BFORCEINH_NOT =! *FALSE;
B_FORCE_FME_B_NAME = *FALSE;
B_FORCE_FORCES_OFF_B_NAME = B_FORCE_PERM_AND_AND;
B_FORCE_FRC1A12OFF_NOR =! B_FORCE_SOV6249_FRC || B_FORCE_SOV6212_FRC || B_FORCE_SOV6563_FRC || B_FORCE_SOV6562_FRC || B_FORCE_SOV62110_FRC || B_FORCE_SOV62111_FRC || B_FORCE_SOV62112_FRC || B_FORCE_SOV62113_FRC || B_FORCE_SOV62118_FRC || B_FORCE_SOV62119_FRC || B_FORCE_SOV62120_FRC || B_FORCE_SOV6208_FRC || B_FORCE_A1A12_BO20_FRC || B_FORCE_SOV62114_FRC || B_FORCE_SOV62115_FRC || B_FORCE_SOV62116_FRC || B_FORCE_A1A12_BO24_FRC || B_FORCE_SOV62405_FRC || B_FORCE_SOV62369_FRC || B_FORCE_SOV64083_FRC || B_FORCE_SOV64084_FRC || B_FORCE_A1A12_BO07_FRC || B_FORCE_A1A12_BO08_FRC || B_FORCE_CRITPATHSD_FRC;
B_FORCE_FRC1A81OFF_NOR =! B_FORCE_SUM_SD_FRC || B_FORCE_SOV64217_FRC || B_FORCE_EMDRVR1RST_FRC || B_FORCE_EMDRVR2RST_FRC || B_FORCE_EMDRVR3RST_FRC || B_FORCE_HORN_FRC || B_FORCE_K85_FRC || B_FORCE_A1A08_BO16_FRC || B_FORCE_HP_INHIBIT_FRC || B_FORCE_LP_INHIBIT_FRC || B_FORCE_SAR_82_FRC || B_FORCE_K230B_FRC || B_FORCE_K115_FRC || B_FORCE_K80_FRC || B_FORCE_K83_FRC || B_FORCE_A15_FRC || B_FORCE_A1A08_BO24_FRC || B_FORCE_A1A08_BO49_FRC || B_FORCE_K10_FRC || B_FORCE_K194_FRC || B_FORCE_RSE_VOLTS_FRC || B_FORCE_LWR_VOLTS_FRC || B_FORCE_SOV6560_FRC || B_FORCE_VAR_SHED_FRC || B_FORCE_SNYC_ENBL_FRC || B_FORCE_ANTIICING_FRC || B_FORCE_SOV6204_FRC || B_FORCE_SOV6185_FRC || B_FORCE_SOV6561_FRC || B_FORCE_A1A08_BO07_FRC || B_FORCE_A1A08_BO08_FRC || B_FORCE_A1A08_BO09_FRC;
B_FORCE_FRC1A82OFF_NOR =! B_FORCE_HE6005_FRC || B_FORCE_HE1610_FRC || B_FORCE_MOT6135_FRC || B_FORCE_HE6104_FRC || B_FORCE_HE6043_FRC || B_FORCE_HE6888_9_FRC || B_FORCE_HE6892_3_FRC || B_FORCE_A1A08_BO48_FRC || B_FORCE_A1A08_BO25_FRC || B_FORCE_MOT6416_FRC || B_FORCE_MOT6075B_FRC || B_FORCE_MOT6413_FRC || B_FORCE_MOT6085B_FRC || B_FORCE_MOT64027_FRC || B_FORCE_MOT6418_FRC || B_FORCE_SOV6516_FRC || B_FORCE_SOV6504_FRC || B_FORCE_SOV6540_FRC || B_FORCE_MOT6031_FRC || B_FORCE_MOT6899_FRC || B_FORCE_A1A08_BO60_FRC || B_FORCE_A1A08_BO61_FRC || B_FORCE_MOT6033_FRC || B_FORCE_MOT68326B_FRC || B_FORCE_MOT68326A_FRC || B_FORCE_MOT6092_FRC || B_FORCE_MOT6085A_FRC || B_FORCE_HE64050_FRC || B_FORCE_MOT6417_FRC || B_FORCE_MOT1615_FRC || B_FORCE_MOT6535_FRC || B_FORCE_HE6536_FRC;
B_FORCE_PERM_AND_AND = B_FORCE_FRC1A81OFF_NOR && B_FORCE_FRC1A82OFF_NOR && B_FORCE_FRC1A12OFF_NOR;
BO_64C_FUNCTION(A1_A08_DO_SUM_SD , A1_A08_DO_SOV64217 , A1_A08_DO_EMDRVR1RST , A1_A08_DO_EMDRVR2RST , A1_A08_DO_EMDRVR3RST , A1_A08_DO_HORN , A1_A08_DO_K85 , A1_A08_DO_A1A08_BO16 , A1_A08_DO_HP_INHIBIT , A1_A08_DO_LP_INHIBIT , A1_A08_DO_SAR_82 , A1_A08_DO_K230B , A1_A08_DO_K115 , A1_A08_DO_K80 , A1_A08_DO_K83 , A1_A08_DO_A15 , A1_A08_DO_A1A08_BO24 , A1_A08_DO_A1A08_BO25 , A1_A08_DO_K10 , A1_A08_DO_K194 , A1_A08_DO_RSE_VOLTS , A1_A08_DO_LWR_VOLTS , A1_A08_DO_SOV6560 , A1_A08_DO_VAR_SHED , A1_A08_DO_SNYC_ENBL , A1_A08_DO_ANTIICING , A1_A08_DO_HE6005 , A1_A08_DO_MOT6413 , A1_A08_DO_MOT6033 , A1_A08_DO_MOT6085A , A1_A08_DO_HE64050 , A1_A08_DO_MOT6417 , A1_A08_DO_MOT1615 , A1_A08_DO_SOV6204 , A1_A08_DO_MOT6535 , A1_A08_DO_HE6536 , A1_A08_DO_HE1610 , A1_A08_DO_MOT6135 , A1_A08_DO_HE6104 , A1_A08_DO_HE6043 , A1_A08_DO_HE6888_9 , A1_A08_DO_HE6892_3 , A1_A08_DO_A1A08_BO48 , A1_A08_DO_A1A08_BO49 , A1_A08_DO_SOV6185 , A1_A08_DO_MOT6416 , A1_A08_DO_MOT6075B , A1_A08_DO_MOT6085B , A1_A08_DO_MOT64027 , A1_A08_DO_MOT6418 , A1_A08_DO_SOV6516 , A1_A08_DO_SOV6504 , A1_A08_DO_SOV6540 , A1_A08_DO_MOT6031 , A1_A08_DO_MOT6899 , A1_A08_DO_SOV6561 , A1_A08_DO_A1A08_BO60 , A1_A08_DO_A1A08_BO61 , A1_A08_DO_MOT68326B , A1_A08_DO_MOT68326A , A1_A08_DO_MOT6092 , A1_A08_DO_A1A08_BO07 , A1_A08_DO_A1A08_BO08 , A1_A08_DO_A1A08_BO09 , A1_A08_DO_FLT , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0);
