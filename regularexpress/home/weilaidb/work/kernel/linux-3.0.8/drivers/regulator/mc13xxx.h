#define __LINUX_REGULATOR_MC13XXX_H
struct mc13xxx_regulator ;
struct mc13xxx_regulator_priv ;
extern int mc13xxx_sw_regulator(struct regulator_dev *rdev);
extern int mc13xxx_sw_regulator_is_enabled(struct regulator_dev *rdev);
extern int mc13xxx_get_best_voltage_index(struct regulator_dev *rdev,
int min_uV, int max_uV);
extern int mc13xxx_regulator_list_voltage(struct regulator_dev *rdev,
unsigned selector);
extern int mc13xxx_fixed_regulator_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector);
extern int mc13xxx_fixed_regulator_get_voltage(struct regulator_dev *rdev);
extern struct regulator_ops mc13xxx_regulator_ops;
extern struct regulator_ops mc13xxx_fixed_regulator_ops;
#define MC13xxx_DEFINE(prefix, _name, _reg, _vsel_reg, _voltages, _ops)	\
[prefix ## _name] =
#define MC13xxx_FIXED_DEFINE(prefix, _name, _reg, _voltages, _ops)	\
[prefix ## _name] =
#define MC13xxx_GPO_DEFINE(prefix, _name, _reg,  _voltages, _ops)	\
[prefix ## _name] =
#define MC13xxx_DEFINE_SW(_name, _reg, _vsel_reg, _voltages, ops)	\
MC13xxx_DEFINE(SW, _name, _reg, _vsel_reg, _voltages, ops)
#define MC13xxx_DEFINE_REGU(_name, _reg, _vsel_reg, _voltages, ops)	\
MC13xxx_DEFINE(REGU, _name, _reg, _vsel_reg, _voltages, ops)
