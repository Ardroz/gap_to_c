F_PARASITC_F_D28W42A_MULTIPLY = 0.00161 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_G27W0_MULTIPLY = 0.00367516 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_G27W42_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G27W42_CURVES_2;
F_PARASITC_F_G27W48_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G27W48_CURVES_2;
F_PARASITC_F_G27W5_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G27W5_CURVES_2;
F_PARASITC_F_G28W42_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G28W42_CURVES_2;
F_PARASITC_F_G28W42A_ADD = F_PARASITC_F_D28W42A_MULTIPLY + F_PARASITC_F_G28W42_MULTIPLY;
F_PARASITC_F_G28W5_MULTIPLY = 0.0128234 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_G3RW42_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G3RW42_CURVES_2;
F_PARASITC_F_G3RW49_MULTIPLY = F_PARASITC_F_SGWDUM_A_NAME * F_PARASITC_T_G3RW49_CURVES_2;
F_PARASITC_F_G3RW5_MULTIPLY = 0.0033711 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_G3W41_A_NAME = F_PARASITC_F_G3W41TMP_MULTIPLY;
F_PARASITC_F_G3W41TMP_MULTIPLY = 0.192404 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_G3W42_A_NAME = F_PARASITC_F_G3W42TMP_MULTIPLY;
F_PARASITC_F_G3W42TMP_MULTIPLY = 0.089235 * F_PARASITC_F_SGWDUM_A_NAME;
F_PARASITC_F_GWA27_A_NAME = F_PARASITC_F_GWA27TMP_ADD;
F_PARASITC_F_GWA27TMP_ADD = F_PARASITC_F_G27W0_MULTIPLY + F_PARASITC_F_G27W42_MULTIPLY + F_PARASITC_F_G27W48_MULTIPLY + F_PARASITC_F_G27W5_MULTIPLY;
F_PARASITC_F_GWA28_A_NAME = F_PARASITC_F_GWA28TMP_ADD;
F_PARASITC_F_GWA28TMP_ADD = F_PARASITC_F_G28W42A_ADD + F_PARASITC_F_G28W5_MULTIPLY;
F_PARASITC_F_GWA3_A_NAME = F_PARASITC_F_GWA3TMP_ADD;
F_PARASITC_F_GWA3TMP_ADD = F_PARASITC_F_G3RW42_MULTIPLY + F_PARASITC_F_G3RW49_MULTIPLY + F_PARASITC_F_G3RW5_MULTIPLY;
F_PARASITC_F_SGWDUM_A_NAME = F_TFYTFHES_F_W36Q25G_A_NAME;
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G27W42,&F_PARASITC_T_G27W42_CURVES_2,&F_PARASITC_T_G27W42_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G27W48,&F_PARASITC_T_G27W48_CURVES_2,&F_PARASITC_T_G27W48_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G27W5,&F_PARASITC_T_G27W5_CURVES_2,&F_PARASITC_T_G27W5_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G28W42,&F_PARASITC_T_G28W42_CURVES_2,&F_PARASITC_T_G28W42_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G3RW42,&F_PARASITC_T_G3RW42_CURVES_2,&F_PARASITC_T_G3RW42_REV_OUT);
CURVES_2_FUNCTION(1 , 0 , 0 , 0 , 5418-2587A_GE , F_TFYTFHES_F_W25R_A_NAME , T_G3RW49,&F_PARASITC_T_G3RW49_CURVES_2,&F_PARASITC_T_G3RW49_REV_OUT);
