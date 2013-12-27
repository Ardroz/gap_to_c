DELAY_FUNCTION(1 , SPEED_SW_PWR_UPRST1_A_SW , 0 , SPEED_SW_N25LT300_NOT,&SPEED_SW_COASTDOWN_DELAY,&SPEED_SW_COASTDOWN_R_TIME);
DELAY_FUNCTION(1 , SPEED_SW_PWR_UPRST3_A_SW , 0 , SPEED_SW_N25LT100_NOT,&SPEED_SW_GGCSTTONPT_DELAY,&SPEED_SW_GGCSTTONPT_R_TIME);
A_COMPARE_FUNCTION(0 , HMI_INTER_N25SEL_A_NAME , 100,&SPEED_SW_N25GT100_A_COMPARE,&SPEED_SW_N25GT100_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 1000.0,&SPEED_SW_N25GT1000_A_COMPARE,&SPEED_SW_N25GT1000_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 1200.0,&SPEED_SW_N25GT1200_A_COMPARE,&SPEED_SW_N25GT1200_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 1700.0,&SPEED_SW_N25GT1700_A_COMPARE,&SPEED_SW_N25GT1700_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 2600,&SPEED_SW_N25GT2500_A_COMPARE,&SPEED_SW_N25GT2500_A_EQUAL);
A_COMPARE_FUNCTION(0 , HMI_INTER_N25SEL_A_NAME , 300,&SPEED_SW_N25GT300_A_COMPARE,&SPEED_SW_N25GT300_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 3000.0,&SPEED_SW_N25GT3000_A_COMPARE,&SPEED_SW_N25GT3000_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 4500.0,&SPEED_SW_N25GT4500_A_COMPARE,&SPEED_SW_N25GT4500_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 4600.0,&SPEED_SW_N25GT4600_A_COMPARE,&SPEED_SW_N25GT4600_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 4950.0,&SPEED_SW_N25GT4950_A_COMPARE,&SPEED_SW_N25GT4950_A_EQUAL);
A_COMPARE_FUNCTION(-1000.0 , CORE_ANALOG_N25SEL , 6800,&SPEED_SW_N25GT6800_A_COMPARE,&SPEED_SW_N25GT6800_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N25SEL , 8000.0,&SPEED_SW_N25GT8000_A_COMPARE,&SPEED_SW_N25GT8000_A_EQUAL);
A_COMPARE_FUNCTION(0.0 , CORE_ANALOG_N25R , 8300,&SPEED_SW_N25GT8300_A_COMPARE,&SPEED_SW_N25GT8300_A_EQUAL);
SPEED_SW_N25LT100_NOT =! SPEED_SW_N25GT100_A_COMPARE;
SPEED_SW_N25LT1000_NOT =! SPEED_SW_N25GT1000_A_COMPARE;
SPEED_SW_N25LT1200_NOT =! SPEED_SW_N25GT1200_A_COMPARE;
SPEED_SW_N25LT1700_NOT =! SPEED_SW_N25GT1700_A_COMPARE;
SPEED_SW_N25LT2500_NOT =! SPEED_SW_N25GT2500_A_COMPARE;
SPEED_SW_N25LT300_NOT =! SPEED_SW_N25GT300_A_COMPARE;
SPEED_SW_N25LT3000_NOT =! SPEED_SW_N25GT3000_A_COMPARE;
SPEED_SW_N25LT4500_NOT =! SPEED_SW_N25GT4500_A_COMPARE;
SPEED_SW_N25LT4600_NOT =! SPEED_SW_N25GT4600_A_COMPARE;
SPEED_SW_N25LT4950_NOT =! SPEED_SW_N25GT4950_A_COMPARE;
SPEED_SW_N25LT6800_NOT =! SPEED_SW_N25GT6800_A_COMPARE;
SPEED_SW_N25LT8000_NOT =! SPEED_SW_N25GT8000_A_COMPARE;
SPEED_SW_N25LT8300_NOT =! SPEED_SW_N25GT8300_A_COMPARE;
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 1000,&SPEED_SW_NSDGT1000_A_COMPARE,&SPEED_SW_NSDGT1000_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 1800,&SPEED_SW_NSDGT1800_A_COMPARE,&SPEED_SW_NSDGT1800_A_EQUAL);
A_COMPARE_FUNCTION(0.0 , HMI_INTER_NSDSEL_A_NAME , 200,&SPEED_SW_NSDGT200_A_COMPARE,&SPEED_SW_NSDGT200_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 2880.0,&SPEED_SW_NSDGT2880_A_COMPARE,&SPEED_SW_NSDGT2880_A_EQUAL);
A_COMPARE_FUNCTION(0 , HMI_INTER_NSDSEL_A_NAME , 300,&SPEED_SW_NSDGT300_A_COMPARE,&SPEED_SW_NSDGT300_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 3000.0,&SPEED_SW_NSDGT3000_A_COMPARE,&SPEED_SW_NSDGT3000_A_EQUAL);
A_COMPARE_FUNCTION(0 , CORE_ANALOG_N2ROTOR , 3420.0,&SPEED_SW_NSDGT3420_A_COMPARE,&SPEED_SW_NSDGT3420_A_EQUAL);
A_COMPARE_FUNCTION(0 , HMI_INTER_NSDSEL_A_NAME , 350,&SPEED_SW_NSDGT350_A_COMPARE,&SPEED_SW_NSDGT350_A_EQUAL);
A_COMPARE_FUNCTION(-100.0 , CORE_ANALOG_N2ROTOR , 3590,&SPEED_SW_NSDGT3590_A_COMPARE,&SPEED_SW_NSDGT3590_A_EQUAL);
SPEED_SW_NSDLT1000_NOT =! SPEED_SW_NSDGT1000_A_COMPARE;
SPEED_SW_NSDLT1800_NOT =! SPEED_SW_NSDGT1800_A_COMPARE;
SPEED_SW_NSDLT200_NOT =! SPEED_SW_NSDGT200_A_COMPARE;
SPEED_SW_NSDLT2880_NOT =! SPEED_SW_NSDGT2880_A_COMPARE;
SPEED_SW_NSDLT300_NOT =! SPEED_SW_NSDGT300_A_COMPARE;
SPEED_SW_NSDLT3000_NOT =! SPEED_SW_NSDGT3000_A_COMPARE;
SPEED_SW_NSDLT3420_NOT =! SPEED_SW_NSDGT3420_A_COMPARE;
SPEED_SW_NSDLT350_NOT =! SPEED_SW_NSDGT350_A_COMPARE;
SPEED_SW_NSDLT3590_NOT =! SPEED_SW_NSDGT3590_A_COMPARE;
SPEED_SW_PWR_UPRST1_A_SW = A_SW_FUNCTION( CORE_DIGITAL_PWR_UP , 0.0 , 0.0 );
SPEED_SW_PWR_UPRST3_A_SW = A_SW_FUNCTION( CORE_DIGITAL_PWR_UP , 60 , 0.0 );
SPEED_SW_ZERO_AND = SPEED_SW_NSDLT200_NOT && N3N39_BI_ZERO_SPD_BI_L;
SPEED_SW_ZERO_ALM_AND = N3N39_BI_ZERO_SPD_BI_L && SPEED_SW_NSDGT200_A_COMPARE;