FUEL_SYS_BRNDMD_I_NAME = CORE.ANALOG.BRNDMD;
I_COMPARE_FUNCTION(FUEL_SYS_BRNDMD_I_NAME , 0);
FUEL_SYS_BRNDMDGT0_EQ = output1;
FUEL_SYS_BRNDMDGT0_LT = output2;
FUEL_SYS_BRNDMDGT0_GT = output3;
I_COMPARE_FUNCTION(FUEL_SYS_BRNDMD_I_NAME , 5);
FUEL_SYS_BRNDMDGT5_EQ = output1;
FUEL_SYS_BRNDMDGT5_LT = output2;
FUEL_SYS_BRNDMDGT5_GT = output3;
I_COMPARE_FUNCTION(FUEL_SYS_BRNDMD_I_NAME , 10);
FUEL_SYS_BRNDMDLT10_EQ = output1;
FUEL_SYS_BRNDMDLT10_LT = output2;
FUEL_SYS_BRNDMDLT10_GT = output3;
FUEL_SYS_BRNDMDMSK1_AND = FUEL_SYS_BRNDMDGT5_GT && FUEL_SYS_LITEOFF_B_NAME;
FUEL_SYS_BRNDMDMSK2_AND = FUEL_SYS_BRNDMDGT0_GT && FUEL_SYS_BRNDMDLT10_LT;
FUEL_SYS_FLAME_A_B_NAME = B_NAME_FUNCTION( FUEL_SYS_LITEOFF_O_OR );
FUEL_SYS_FLAME_B_B_NAME = B_NAME_FUNCTION( FUEL_SYS_LITEOFF_B_NAME );
FUEL_SYS_FLAME_C_B_NAME = B_NAME_FUNCTION( FUEL_SYS_LITEOFF_I_AND );
FUEL_SYS_IGNITION_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_IGNITION );
FUEL_SYS_IGN_LITE_AND = FUEL_SYS_LITEOFF_B_NAME && FUEL_SYS_IGNITION_B_NAME;
FUEL_SYS_LITEOFF_B_NAME = B_NAME_FUNCTION( CORE_DIGITAL_LITEOFF );
FUEL_SYS_LITEOFFIOR_OR = FUEL_SYS_BRNDMDMSK2_AND || FUEL_SYS_BRNDMDLT10_GT;
FUEL_SYS_LITEOFF_I_AND = FUEL_SYS_LITEOFF_B_NAME && FUEL_SYS_LITEOFFIOR_OR;
FUEL_SYS_LITEOFF_O_OR = FUEL_SYS_BRNDMDMSK1_AND || FUEL_SYS_IGN_LITE_AND;
