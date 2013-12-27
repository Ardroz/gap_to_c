F_CMPBLDES_F_AVG_CALCULATE =  (F_INPUT_T3RM_A_NAME +F_INPUT_T25RM_A_NAME ) / 2;
F_CMPBLDES_F_HE27_CALCULATE = f_h3 - (F_INPUT_T3RM_A_NAME -F_CMPBLDES_F_TE27_MULTIPLY ) *F_CMPBLDES_T_CSIE_CURVES_2;
F_CMPBLDES_F_HE28_CALCULATE = f_h3 - (F_INPUT_T3RM_A_NAME -F_CMPBLDES_F_TE28_MULTIPLY ) *F_CMPBLDES_T_CSIE_CURVES_2;
F_CMPBLDES_F_PN25R3_CALCULATE = f_n25sel * 0.010176 * ( sqrt ( 518.67 /F_INPUT_T3RM_A_NAME ) ) ;
F_CMPBLDES_F_PW25_A_NAME = F_CMPBLDES_F_PW25TMP_CALCULATE;
F_CMPBLDES_F_PW25TMP_CALCULATE = f_w25 * (F_INPUT_F_H3_A_NAME -F_INPUT_F_H25_A_NAME -F_PARASITC_F_GWA27_A_NAME * (F_INPUT_F_H3_A_NAME    -F_CMPBLDES_F_HE27_CALCULATE ) -F_PARASITC_F_GWA28_A_NAME * (F_INPUT_F_H3_A_NAME -F_CMPBLDES_F_HE28_CALCULATE ) )     - (D_WB27_2_WB27QC_A_NAME *F_INPUT_F_W25_A_NAME ) * (F_INPUT_F_H3_A_NAME -F_CMPBLDES_F_HE27_CALCULATE ) ;
F_CMPBLDES_F_TE27_MULTIPLY = F_CMPBLDES_T_TE27Q_CURVES_2 * F_INPUT_T3RM_A_NAME;
F_CMPBLDES_F_TE28_MULTIPLY = F_CMPBLDES_T_TE28Q_CURVES_2 * F_INPUT_T3RM_A_NAME;
F_CMPBLDES_F_W3_CALCULATE = f_w25 - (F_PARASITC_F_GWA27_A_NAME +F_PARASITC_F_GWA28_A_NAME +F_PARASITC_F_GWA3_A_NAME +D_WB27_2_WB27QC_A_NAME ) *    f_w25;
F_CMPBLDES_F_W35_CALCULATE = f_w3 - (F_PARASITC_F_G3W42_A_NAME +F_PARASITC_F_G3W41_A_NAME +D_WFTFLB3_WB3QC_A_NAME ) *F_INPUT_F_W25_A_NAME;
F_CMPBLDES_F_W36_CALCULATE = f_w35 +IFACE_HDWR_WS4SEL / 7.18958;
F_CMPBLDES_F_WA25_CALCULATE =  (F_INPUT_F_W25_A_NAME -F_CMPBLDES_WVI25_CALCULATE ) / ( 1.0 +F_RHWAR_ZWARAM_A_NAME ) ;
F_CMPBLDES_F_WA35_CALCULATE = f_w35 / (F_CMPBLDES_F_WAR25TMP_CALCULATE + 1 ) ;
F_CMPBLDES_F_WA36_A_NAME = F_CMPBLDES_F_WA35_CALCULATE;
F_CMPBLDES_F_WACL41_A_NAME = F_CMPBLDES_F_WACL41TM_MULTIPLY;
F_CMPBLDES_F_WACL41TM_MULTIPLY = F_INPUT_F_W25_A_NAME * F_PARASITC_F_G3W41_A_NAME;
F_CMPBLDES_F_WAR25_A_NAME = F_CMPBLDES_F_WAR25TMP_CALCULATE;
F_CMPBLDES_F_WAR25TMP_CALCULATE = zwaram +F_CMPBLDES_WVI25_CALCULATE /F_CMPBLDES_F_WA25_CALCULATE;
F_CMPBLDES_F_WAR36_A_NAME = F_CMPBLDES_F_WAR36TMP_CALCULATE;
F_CMPBLDES_F_WAR36TMP_CALCULATE =  (F_CMPBLDES_F_W36_CALCULATE -F_CMPBLDES_F_WA35_CALCULATE ) /F_CMPBLDES_F_WA35_CALCULATE;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_CMPBLDES_F_AVG_CALCULATE , T_CSIE,&F_CMPBLDES_T_CSIE_CURVES_2,&F_CMPBLDES_T_CSIE_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_CMPBLDES_F_PN25R3_CALCULATE , T_TE27Q,&F_CMPBLDES_T_TE27Q_CURVES_2,&F_CMPBLDES_T_TE27Q_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_CMPBLDES_F_PN25R3_CALCULATE , T_TE28Q,&F_CMPBLDES_T_TE28Q_CURVES_2,&F_CMPBLDES_T_TE28Q_REV_OUT);
F_CMPBLDES_WVI25_CALCULATE =  (C_T25BIAS_ZWVI2_A_NAME +C_T25BIAS_ZWVI2_A_NAME5 ) / 7.18958;