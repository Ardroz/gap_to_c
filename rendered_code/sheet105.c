BIO_BO_FUNCTION(B_FORCE_A1A12_BO24_B_FORCE,&A1_A12_BO2_A1A12_BO24_DISPLAY,&A1_A12_BO2_A1A12_BO24_RDBACK_FLT);
A1_A12_BO2_FLT_IO_FLT = IO_FLT_FUNCTION(  );
BIO_BO_FUNCTION(B_FORCE_SOV62114_B_FORCE,&A1_A12_BO2_SOV62114_DISPLAY,&A1_A12_BO2_SOV62114_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_SOV62115_B_FORCE,&A1_A12_BO2_SOV62115_DISPLAY,&A1_A12_BO2_SOV62115_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_SOV62116_B_FORCE,&A1_A12_BO2_SOV62116_DISPLAY,&A1_A12_BO2_SOV62116_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_A1A12_BO20_B_FORCE,&A1_A12_BO2_SOV62117_DISPLAY,&A1_A12_BO2_SOV62117_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_SOV62118_B_FORCE,&A1_A12_BO2_SOV62118_DISPLAY,&A1_A12_BO2_SOV62118_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_SOV62119_B_FORCE,&A1_A12_BO2_SOV62119_DISPLAY,&A1_A12_BO2_SOV62119_RDBACK_FLT);
BIO_BO_FUNCTION(B_FORCE_SOV62120_B_FORCE,&A1_A12_BO2_SOV62120_DISPLAY,&A1_A12_BO2_SOV62120_RDBACK_FLT);
A1_A12_DIO_BO02_FAULT = BIO_O_B2_FUNCTION( A1_A12_BO2_SOV62114 , A1_A12_BO2_SOV62115 , A1_A12_BO2_SOV62116 , A1_A12_BO2_SOV62117 , A1_A12_BO2_SOV62118 , A1_A12_BO2_SOV62119 , A1_A12_BO2_SOV62120 , A1_A12_BO2_A1A12_BO24 , A1_A12_BO2_FLT , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 );
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_08 , *FALSE,&B_FORCE_A1A12_BO20_B_FORCE,&B_FORCE_A1A12_BO20_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , *FALSE , *FALSE,&B_FORCE_A1A12_BO24_B_FORCE,&B_FORCE_A1A12_BO24_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_05 , *FALSE,&B_FORCE_SOV62114_B_FORCE,&B_FORCE_SOV62114_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_06 , *FALSE,&B_FORCE_SOV62115_B_FORCE,&B_FORCE_SOV62115_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_07 , *FALSE,&B_FORCE_SOV62116_B_FORCE,&B_FORCE_SOV62116_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_09 , *FALSE,&B_FORCE_SOV62118_B_FORCE,&B_FORCE_SOV62118_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_10 , *FALSE,&B_FORCE_SOV62119_B_FORCE,&B_FORCE_SOV62119_FRC);
B_FORCE_FUNCTION(1 , A_B_FORCE_FRC_INHIBT_NOT , A_B_FORCE_FMD_SELECT_B_NAME , CORE_DIGITAL_VLVDMDG_11 , *FALSE,&B_FORCE_SOV62120_B_FORCE,&B_FORCE_SOV62120_FRC);