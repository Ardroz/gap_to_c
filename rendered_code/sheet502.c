B_BDGAMXES_B_CS41_A_NAME = B_BDGAMXES_B_CS41TMP_CALCULATE;
B_BDGAMXES_B_CS41TMP_CALCULATE = b_cstng +B_BDGAMXES_B_DFARNG_CURVES_2 *B_BDHPTPES_B_FAR41_A_NAME +    b_dwarng *F_CMPBLDES_F_WAR36_A_NAME;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , B_BDHPTPES_B_T41_A_NAME , T_CSTNG,&B_BDGAMXES_B_CSTNG_CURVES_2,&B_BDGAMXES_B_CSTNG_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , B_BDHPTPES_B_T41_A_NAME , T_DFARNG,&B_BDGAMXES_B_DFARNG_CURVES_2,&B_BDGAMXES_B_DFARNG_REV_OUT);
B_BDGAMXES_B_DUMA_CALCULATE =  (B_BDGAMXES_B_GAM41TMP_CALCULATE - 1.3662 ) / (B_BDGAMXES_B_GAM41TMP_CALCULATE + 1.3662 ) ;
B_BDGAMXES_B_DUMB_CALCULATE =  (B_BDGAMXES_B_RG_CALCULATE - 0.06853 ) / (B_BDGAMXES_B_RG_CALCULATE + 0.06853 ) ;
B_BDGAMXES_B_GAM41_A_NAME = B_BDGAMXES_B_GAM41TMP_CALCULATE;
B_BDGAMXES_B_GAM41TMP_CALCULATE = b_cs41 / (B_BDGAMXES_B_CS41TMP_CALCULATE -B_BDGAMXES_B_RG_CALCULATE ) ;
B_BDGAMXES_B_RG_CALCULATE =  ( 0.06855592 +B_BDHPTPES_B_FAR41_A_NAME * 0.1125255 +F_CMPBLDES_F_WAR36_A_NAME;
B_BDGAMXES_B_SNGC41_A_NAME = B_BDGAMXES_B_SNGC41TP_CALCULATE;
B_BDGAMXES_B_SNGC41TP_CALCULATE = 1.0 / ( 1.0 + 0.20 *B_BDGAMXES_B_DUMA_CALCULATE +B_BDGAMXES_B_DUMB_CALCULATE ) ;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , B_BDHPTPES_B_T41_A_NAME , T_DWARNG,&B_BDGAMXES_T_DWARNG_CURVES_2,&B_BDGAMXES_T_DWARNG_REV_OUT);
