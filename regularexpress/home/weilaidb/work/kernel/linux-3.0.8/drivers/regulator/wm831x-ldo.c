#define WM831X_LDO_MAX_NAME 6
#define WM831X_LDO_CONTROL       0
#define WM831X_LDO_ON_CONTROL    1
#define WM831X_LDO_SLEEP_CONTROL 2
#define WM831X_ALIVE_LDO_ON_CONTROL    0
#define WM831X_ALIVE_LDO_SLEEP_CONTROL 1
struct wm831x_ldo ;
static int wm831x_ldo_is_enabled(struct regulator_dev *rdev)
static int wm831x_ldo_enable(struct regulator_dev *rdev)
static int wm831x_ldo_disable(struct regulator_dev *rdev)
static irqreturn_t wm831x_ldo_uv_irq(int irq, void *data)
#define WM831X_GP_LDO_SELECTOR_LOW 0xe
#define WM831X_GP_LDO_MAX_SELECTOR 0x1f
static int wm831x_gp_ldo_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int wm831x_gp_ldo_set_voltage_int(struct regulator_dev *rdev, int reg,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_gp_ldo_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_gp_ldo_set_suspend_voltage(struct regulator_dev *rdev,
int uV)
static int wm831x_gp_ldo_get_voltage_sel(struct regulator_dev *rdev)
static unsigned int wm831x_gp_ldo_get_mode(struct regulator_dev *rdev)
static int wm831x_gp_ldo_set_mode(struct regulator_dev *rdev,
unsigned int mode)
static int wm831x_gp_ldo_get_status(struct regulator_dev *rdev)
static unsigned int wm831x_gp_ldo_get_optimum_mode(struct regulator_dev *rdev,
int input_uV,
int output_uV, int load_uA)
static struct regulator_ops wm831x_gp_ldo_ops = ;
static __devinit int wm831x_gp_ldo_probe(struct platform_device *pdev)
static __devexit int wm831x_gp_ldo_remove(struct platform_device *pdev)
static struct platform_driver wm831x_gp_ldo_driver = ;
#define WM831X_ALDO_SELECTOR_LOW 0xc
#define WM831X_ALDO_MAX_SELECTOR 0x1f
static int wm831x_aldo_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int wm831x_aldo_set_voltage_int(struct regulator_dev *rdev, int reg,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_aldo_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int wm831x_aldo_set_suspend_voltage(struct regulator_dev *rdev,
int uV)
static int wm831x_aldo_get_voltage_sel(struct regulator_dev *rdev)
static unsigned int wm831x_aldo_get_mode(struct regulator_dev *rdev)
static int wm831x_aldo_set_mode(struct regulator_dev *rdev,
unsigned int mode)
static int wm831x_aldo_get_status(struct regulator_dev *rdev)
static struct regulator_ops wm831x_aldo_ops = ;
static __devinit int wm831x_aldo_probe(struct platform_device *pdev)
static __devexit int wm831x_aldo_remove(struct platform_device *pdev)
static struct platform_driver wm831x_aldo_driver = ;
#define WM831X_ALIVE_LDO_MAX_SELECTOR 0xf
static int wm831x_alive_ldo_list_voltage(struct regulator_dev *rdev,
unsigned int selector)
static int wm831x_alive_ldo_set_voltage_int(struct regulator_dev *rdev,
int reg,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_alive_ldo_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_alive_ldo_set_suspend_voltage(struct regulator_dev *rdev,
int uV)
static int wm831x_alive_ldo_get_voltage_sel(struct regulator_dev *rdev)
static int wm831x_alive_ldo_get_status(struct regulator_dev *rdev)
static struct regulator_ops wm831x_alive_ldo_ops = ;
static __devinit int wm831x_alive_ldo_probe(struct platform_device *pdev)
static __devexit int wm831x_alive_ldo_remove(struct platform_device *pdev)
static struct platform_driver wm831x_alive_ldo_driver = ;
static int __init wm831x_ldo_init(void)
subsys_initcall(wm831x_ldo_init);
static void __exit wm831x_ldo_exit(void)
module_exit(wm831x_ldo_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM831x LDO driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-ldo");
MODULE_ALIAS("platform:wm831x-aldo");
MODULE_ALIAS("platform:wm831x-aliveldo");
