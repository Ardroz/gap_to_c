F_PARAAVG_WF36DMDRTS_A_NAME = F_PARAAVG_WF36RTSTMP_CALCULATE;
F_PARAAVG_WF36DMDS_A_NAME = F_PARAAVG_WF36SAMP_A_OUT_7;
F_PARAAVG_WF36RTSTMP_CALCULATE =  (R_WF36DMD_WF36DMD_A_NAME +F_PARAAVG_WF36SAMP_A_OUT_1 -F_PARAAVG_WF36SAMP_A_OUT_2 -F_PARAAVG_WF36SAMP_A_OUT_3 ) /     ( 4.0 * 0.960 ) ;
if ( F_PARAAVG_WF36SAMP_A_OUT_7 == TRUE ) {   F_PARAAVG_WF36SAMP_B_OUT_1 = F_PARAAVG_WF36SAMP_A_OUT_4;   F_PARAAVG_WF36SAMP_A_OUT_7 = F_PARAAVG_WF36SAMP_A_OUT_3;   F_PARAAVG_WF36SAMP_A_OUT_6 = F_PARAAVG_WF36SAMP_A_OUT_2;   F_PARAAVG_WF36SAMP_A_OUT_5 = F_PARAAVG_WF36SAMP_A_OUT_1;   F_PARAAVG_WF36SAMP_A_OUT_4 = F_PARAAVG_SAMPTRIG_B_NAME;   F_PARAAVG_WF36SAMP_A_OUT_3 = R_WF36DMD_WF36DMD_A_NAME;   F_PARAAVG_WF36SAMP_I_OUT_1 = ( F_PARAAVG_WF36SAMP_A_OUT_3 + F_PARAAVG_WF36SAMP_A_OUT_4 + F_PARAAVG_WF36SAMP_A_OUT_5 +    F_PARAAVG_WF36SAMP_A_OUT_6 + F_PARAAVG_WF36SAMP_A_OUT_7 + F_PARAAVG_WF36SAMP_B_OUT_1 ) / 6;}   else{   F_PARAAVG_WF36SAMP_B_OUT_1 = F_PARAAVG_WF36SAMP_A_OUT_5;   F_PARAAVG_WF36SAMP_A_OUT_7 = F_PARAAVG_WF36SAMP_A_OUT_4;   F_PARAAVG_WF36SAMP_A_OUT_6 = F_PARAAVG_WF36SAMP_A_OUT_3;   F_PARAAVG_WF36SAMP_A_OUT_5 = F_PARAAVG_WF36SAMP_A_OUT_2;   F_PARAAVG_WF36SAMP_A_OUT_4 = F_PARAAVG_WF36SAMP_A_OUT_1;   F_PARAAVG_WF36SAMP_A_OUT_3 = F_PARAAVG_SAMPTRIG_B_NAME;   F_PARAAVG_WF36SAMP_I_OUT_1 = F_PARAAVG_WF36SAMP_A_OUT_6;};
F_PARAAVG_WFNOZINRFF_A_NAME = F_PARAAVG_WFNZINRTMP_CALCULATE;
F_PARAAVG_WFNOZOTRFF_A_NAME = F_PARAAVG_WFNZOTRTMP_CALCULATE;
F_PARAAVG_WFNOZPILFF_A_NAME = F_PARAAVG_WFNZPILTMP_CALCULATE;
F_PARAAVG_WFNZINRTMP_CALCULATE = wfirefs / max ( 1.0 " "F_PARAAVG_WFINRS_A_NAME ) ;
F_PARAAVG_WFNZOTRTMP_CALCULATE = wfotrefs / max ( 1.0 " "F_PARAAVG_WFOTRS_A_NAME ) ;
F_PARAAVG_WFNZPILTMP_CALCULATE = wfprefs / max ( 1.0 " "F_PARAAVG_WFPILS_A_NAME ) ;