#define WM8350_DCDC_MAX_VSEL 0x66
static const int isink_cur[] = ;
static int get_isink_val(int min_uA, int max_uA, u16 *setting)
static inline int wm8350_ldo_val_to_mvolts(unsigned int val)
static inline unsigned int wm8350_ldo_mvolts_to_val(int mV)
static inline int wm8350_dcdc_val_to_mvolts(unsigned int val)
static inline unsigned int wm8350_dcdc_mvolts_to_val(int mV)
static int wm8350_isink_set_current(struct regulator_dev *rdev, int min_uA,
int max_uA)
static int wm8350_isink_get_current(struct regulator_dev *rdev)
static int wm8350_isink_enable(struct regulator_dev *rdev)
static int wm8350_isink_disable(struct regulator_dev *rdev)
static int wm8350_isink_is_enabled(struct regulator_dev *rdev)
static int wm8350_isink_enable_time(struct regulator_dev *rdev)
int wm8350_isink_set_flash(struct wm8350 *wm8350, int isink, u16 mode,
u16 trigger, u16 duration, u16 on_ramp, u16 off_ramp,
u16 drive)
EXPORT_SYMBOL_GPL(wm8350_isink_set_flash);
static int wm8350_dcdc_set_voltage(struct regulator_dev *rdev, int min_uV,
int max_uV, unsigned *selector)
static int wm8350_dcdc_get_voltage_sel(struct regulator_dev *rdev)
static int wm8350_dcdc_list_voltage(struct regulator_dev *rdev,
unsigned selector)
static int wm8350_dcdc_set_suspend_voltage(struct regulator_dev *rdev, int uV)
static int wm8350_dcdc_set_suspend_enable(struct regulator_dev *rdev)
static int wm8350_dcdc_set_suspend_disable(struct regulator_dev *rdev)
static int wm8350_dcdc25_set_suspend_enable(struct regulator_dev *rdev)
static int wm8350_dcdc25_set_suspend_disable(struct regulator_dev *rdev)
static int wm8350_dcdc_set_suspend_mode(struct regulator_dev *rdev,
unsigned int mode)
static int wm8350_ldo_set_suspend_voltage(struct regulator_dev *rdev, int uV)
static int wm8350_ldo_set_suspend_enable(struct regulator_dev *rdev)
static int wm8350_ldo_set_suspend_disable(struct regulator_dev *rdev)
static int wm8350_ldo_set_voltage(struct regulator_dev *rdev, int min_uV,
int max_uV, unsigned *selector)
static int wm8350_ldo_get_voltage_sel(struct regulator_dev *rdev)
static int wm8350_ldo_list_voltage(struct regulator_dev *rdev,
unsigned selector)
int wm8350_dcdc_set_slot(struct wm8350 *wm8350, int dcdc, u16 start,
u16 stop, u16 fault)
EXPORT_SYMBOL_GPL(wm8350_dcdc_set_slot);
int wm8350_ldo_set_slot(struct wm8350 *wm8350, int ldo, u16 start, u16 stop)
EXPORT_SYMBOL_GPL(wm8350_ldo_set_slot);
int wm8350_dcdc25_set_mode(struct wm8350 *wm8350, int dcdc, u16 mode,
u16 ilim, u16 ramp, u16 feedback)
EXPORT_SYMBOL_GPL(wm8350_dcdc25_set_mode);
static int wm8350_dcdc_enable(struct regulator_dev *rdev)
static int wm8350_dcdc_disable(struct regulator_dev *rdev)
static int wm8350_ldo_enable(struct regulator_dev *rdev)
static int wm8350_ldo_disable(struct regulator_dev *rdev)
static int force_continuous_enable(struct wm8350 *wm8350, int dcdc, int enable)
static int wm8350_dcdc_set_mode(struct regulator_dev *rdev, unsigned int mode)
static unsigned int wm8350_dcdc_get_mode(struct regulator_dev *rdev)
static unsigned int wm8350_ldo_get_mode(struct regulator_dev *rdev)
struct wm8350_dcdc_efficiency ;
static const struct wm8350_dcdc_efficiency dcdc1_6_efficiency[] = ;
static const struct wm8350_dcdc_efficiency dcdc3_4_efficiency[] = ;
static unsigned int get_mode(int uA, const struct wm8350_dcdc_efficiency *eff)
static unsigned int wm8350_dcdc_get_optimum_mode(struct regulator_dev *rdev,
int input_uV, int output_uV,
int output_uA)
static int wm8350_dcdc_is_enabled(struct regulator_dev *rdev)
static int wm8350_ldo_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops wm8350_dcdc_ops = ;
static struct regulator_ops wm8350_dcdc2_5_ops = ;
static struct regulator_ops wm8350_ldo_ops = ;
static struct regulator_ops wm8350_isink_ops = ;
static struct regulator_desc wm8350_reg[NUM_WM8350_REGULATORS] = ;
static irqreturn_t pmic_uv_handler(int irq, void *data)
static int wm8350_regulator_probe(struct platform_device *pdev)
static int wm8350_regulator_remove(struct platform_device *pdev)
int wm8350_register_regulator(struct wm8350 *wm8350, int reg,
struct regulator_init_data *initdata)
EXPORT_SYMBOL_GPL(wm8350_register_regulator);
int wm8350_register_led(struct wm8350 *wm8350, int lednum, int dcdc, int isink,
struct wm8350_led_platform_data *pdata)
EXPORT_SYMBOL_GPL(wm8350_register_led);
static struct platform_driver wm8350_regulator_driver = ;
static int __init wm8350_regulator_init(void)
subsys_initcall(wm8350_regulator_init);
static void __exit wm8350_regulator_exit(void)
module_exit(wm8350_regulator_exit);
MODULE_AUTHOR("Liam Girdwood");
MODULE_DESCRIPTION("WM8350 voltage and current regulator driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-regulator");
