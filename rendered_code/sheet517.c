A_TRIMWHOB_ABC_ALRMB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_1;
A_TRIMWHOB_FIRSTPASSB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_6;
A_TRIMWHOB_RESETINRB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_5;
A_TRIMWHOB_RESETOTRB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_4;
A_TRIMWHOB_TRIMWHOB_B_OUT_5 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_4 = false;   if ( ADJ_BLABL13LSW_B_NAME ) {A_TRIMWHOB_TRIMWHOB_I_OUT_1 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_6 = true;A_TRIMWHOB_TRIMWHOB_B_OUT_1 = false;   A_TRIMWHOB_TRIMWHOB_B_OUT_2 = true;}   else{if ( ADJ_BLABL15LSW_B_NAME || ( ADJ_BLABAL7LSW_B_NAME == 0 )     || ( ADJ_BLABAL7SW_B_NAME == 0 ) || ADJ_TBLOWLMTJ_A_NAME ) {   A_TRIMWHOB_TRIMWHOB_B_OUT_1 = false;}   else{if ( A_ABALINC_ABAL_PULSE_B_NAME ) {   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = true;A_TRIMWHOB_TRIMWHOB_B_OUT_6 = true;   if ( S_BRNSTATG_STAGING_B_NAME ! = 0.00 ) {   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = false;}}   else{if ( A_ABALBCK_ABALBCKOUT_B_NAME ) {   if ( E_SEQUENCG_XFERDMD_A_NAME ) {if ( A_TRIMWHOB_TRIMWHOB_B_OUT_2 ) {   if ( S_STGVLVG_OTRDMDGS_A_NAME > 0.5 ) {   if ( ADJ_BLABAL15SW_B_NAME == 15 ) {A_TRIMWHOB_TRIMWHOB_I_OUT_1 = ADJ_BLABAL13SW_B_NAME;}   else{if ( ( ADJ_BLABAL15SW_B_NAME == 13 ) && S_BRNDMDG_BRNDMD_I_NAME )    {A_TRIMWHOB_TRIMWHOB_I_OUT_1 = A_ABALTST_T_BLOWOUT_B_NAME;}   else{A_TRIMWHOB_TRIMWHOB_I_OUT_1 = A_ABALSCAL_RESETABAL_B_NAME;}}}else{   if ( ADJ_BLABAL15SW_B_NAME == 15 ) {A_TRIMWHOB_TRIMWHOB_I_OUT_1 = A_ABALOTR_TABALO_A_NAME;}   else{if ( ( ADJ_BLABAL15SW_B_NAME == 13 ) && S_BRNDMDG_BRNDMD_I_NAME )    {A_TRIMWHOB_TRIMWHOB_I_OUT_1 = A_ABALINR_TABALI_A_NAME;}   else{A_TRIMWHOB_TRIMWHOB_I_OUT_1 = A_ABALTST_T_ACOUSTIC_B_NAME;}}}   if ( A_TRIMWHOB_TRIMWHOB_I_OUT_1 ) {   if ( S_COLDAB9C_T2SW13_B_NAME >= S_STGVLVG_INRDMDGS_A_NAME ) {   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_6 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_2 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_5 = true;}   else{A_TRIMWHOB_TRIMWHOB_I_OUT_1 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_6 = false;}}   else{if ( S_BRNSTATG_STAGING_B_NAME >= S_STGVLVG_INRDMDGS_A_NAME ) {   A_TRIMWHOB_TRIMWHOB_B_OUT_6 = false;A_TRIMWHOB_TRIMWHOB_I_OUT_1 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_2 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_4 = true;}   else{A_TRIMWHOB_TRIMWHOB_B_OUT_6 = true;   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = false;}}}   else{if ( A_TRIMWHOB_TRIMWHOB_I_OUT_1 ) {   if ( S_COLDAB9C_T2SW13_B_NAME >= S_STGVLVG_INRDMDGS_A_NAME ) {   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_5 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_1 = true;}   else{A_TRIMWHOB_TRIMWHOB_I_OUT_1 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_6 = false;}}   else{if ( A_TRIMWHOB_TRIMWHOB_B_OUT_6 ) {   if ( S_BRNSTATG_STAGING_B_NAME >= S_STGVLVG_INRDMDGS_A_NAME ) {   A_TRIMWHOB_TRIMWHOB_B_OUT_6 = false;A_TRIMWHOB_TRIMWHOB_B_OUT_4 = true;   A_TRIMWHOB_TRIMWHOB_B_OUT_1 = true;}   else{A_TRIMWHOB_TRIMWHOB_B_OUT_6 = true;   A_TRIMWHOB_TRIMWHOB_I_OUT_1 = false;}}}}}}}}};
A_TRIMWHOB_TRYINRB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_3;
A_TRIMWHOB_TRYOTRB_B_NAME = A_TRIMWHOB_TRIMWHOB_B_OUT_2;