#define __BOARD_MOP500_REGULATORS_H
extern struct ab8500_regulator_reg_init
ab8500_regulator_reg_init[AB8500_NUM_REGULATOR_REGISTERS];
extern struct regulator_init_data ab8500_regulators[AB8500_NUM_REGULATORS];
extern struct regulator_init_data tps61052_regulator;