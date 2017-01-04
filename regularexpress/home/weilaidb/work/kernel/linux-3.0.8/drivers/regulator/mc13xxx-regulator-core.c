static int mc13xxx_regulator_enable(struct regulator_dev *rdev)
static int mc13xxx_regulator_disable(struct regulator_dev *rdev)
static int mc13xxx_regulator_is_enabled(struct regulator_dev *rdev)
int mc13xxx_regulator_list_voltage(struct regulator_dev *rdev,
unsigned selector)
EXPORT_SYMBOL_GPL(mc13xxx_regulator_list_voltage);
int mc13xxx_get_best_voltage_index(struct regulator_dev *rdev,
int min_uV, int max_uV)
EXPORT_SYMBOL_GPL(mc13xxx_get_best_voltage_index);
static int mc13xxx_regulator_set_voltage(struct regulator_dev *rdev, int min_uV,
int max_uV, unsigned *selector)
static int mc13xxx_regulator_get_voltage(struct regulator_dev *rdev)
struct regulator_ops mc13xxx_regulator_ops = ;
EXPORT_SYMBOL_GPL(mc13xxx_regulator_ops);
int mc13xxx_fixed_regulator_set_voltage(struct regulator_dev *rdev, int min_uV,
int max_uV, unsigned *selector)
EXPORT_SYMBOL_GPL(mc13xxx_fixed_regulator_set_voltage);
int mc13xxx_fixed_regulator_get_voltage(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(mc13xxx_fixed_regulator_get_voltage);
struct regulator_ops mc13xxx_fixed_regulator_ops = ;
EXPORT_SYMBOL_GPL(mc13xxx_fixed_regulator_ops);
int mc13xxx_sw_regulator_is_enabled(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(mc13xxx_sw_regulator_is_enabled);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Yong Shen <yong.shen@linaro.org>");
MODULE_DESCRIPTION("Regulator Driver for Freescale MC13xxx PMIC");
MODULE_ALIAS("mc13xxx-regulator-core");
