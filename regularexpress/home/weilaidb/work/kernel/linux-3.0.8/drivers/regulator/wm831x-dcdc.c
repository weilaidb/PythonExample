#define WM831X_BUCKV_MAX_SELECTOR 0x68
#define WM831X_BUCKP_MAX_SELECTOR 0x66
#define WM831X_DCDC_MODE_FAST    0
#define WM831X_DCDC_MODE_NORMAL  1
#define WM831X_DCDC_MODE_IDLE    2
#define WM831X_DCDC_MODE_STANDBY 3
#define WM831X_DCDC_MAX_NAME 6
#define WM831X_DCDC_CONTROL_1     0
#define WM831X_DCDC_CONTROL_2     1
#define WM831X_DCDC_ON_CONFIG     2
#define WM831X_DCDC_SLEEP_CONTROL 3
#define WM831X_DCDC_DVS_CONTROL   4
struct wm831x_dcdc ;
static int wm831x_dcdc_is_enabled(struct regulator_dev *rdev)
static int wm831x_dcdc_enable(struct regulator_dev *rdev)
static int wm831x_dcdc_disable(struct regulator_dev *rdev)
static unsigned int wm831x_dcdc_get_mode(struct regulator_dev *rdev)
static int wm831x_dcdc_set_mode_int(struct wm831x *wm831x, int reg,
unsigned int mode)
static int wm831x_dcdc_set_mode(struct regulator_dev *rdev, unsigned int mode)
static int wm831x_dcdc_set_suspend_mode(struct regulator_dev *rdev,
unsigned int mode)
static int wm831x_dcdc_get_status(struct regulator_dev *rdev)
static irqreturn_t wm831x_dcdc_uv_irq(int irq, void *data)
static irqreturn_t wm831x_dcdc_oc_irq(int irq, void *data)
static int wm831x_buckv_list_voltage(struct regulator_dev *rdev,
unsigned selector)
static int wm831x_buckv_select_min_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV)
static int wm831x_buckv_select_max_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV)
static int wm831x_buckv_set_dvs(struct regulator_dev *rdev, int state)
static int wm831x_buckv_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int wm831x_buckv_set_suspend_voltage(struct regulator_dev *rdev,
int uV)
static int wm831x_buckv_get_voltage_sel(struct regulator_dev *rdev)
static u16 wm831x_dcdc_ilim[] = ;
static int wm831x_buckv_set_current_limit(struct regulator_dev *rdev,
int min_uA, int max_uA)
static int wm831x_buckv_get_current_limit(struct regulator_dev *rdev)
static struct regulator_ops wm831x_buckv_ops = ;
static __devinit void wm831x_buckv_dvs_init(struct wm831x_dcdc *dcdc,
struct wm831x_buckv_pdata *pdata)
static __devinit int wm831x_buckv_probe(struct platform_device *pdev)
static __devexit int wm831x_buckv_remove(struct platform_device *pdev)
static struct platform_driver wm831x_buckv_driver = ;
static int wm831x_buckp_list_voltage(struct regulator_dev *rdev,
unsigned selector)
static int wm831x_buckp_set_voltage_int(struct regulator_dev *rdev, int reg,
int min_uV, int max_uV, int *selector)
static int wm831x_buckp_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV,
unsigned *selector)
static int wm831x_buckp_set_suspend_voltage(struct regulator_dev *rdev,
int uV)
static int wm831x_buckp_get_voltage_sel(struct regulator_dev *rdev)
static struct regulator_ops wm831x_buckp_ops = ;
static __devinit int wm831x_buckp_probe(struct platform_device *pdev)
static __devexit int wm831x_buckp_remove(struct platform_device *pdev)
static struct platform_driver wm831x_buckp_driver = ;
static int wm831x_boostp_get_status(struct regulator_dev *rdev)
static struct regulator_ops wm831x_boostp_ops = ;
static __devinit int wm831x_boostp_probe(struct platform_device *pdev)
static __devexit int wm831x_boostp_remove(struct platform_device *pdev)
static struct platform_driver wm831x_boostp_driver = ;
#define WM831X_EPE_BASE 6
static struct regulator_ops wm831x_epe_ops = ;
static __devinit int wm831x_epe_probe(struct platform_device *pdev)
static __devexit int wm831x_epe_remove(struct platform_device *pdev)
static struct platform_driver wm831x_epe_driver = ;
static int __init wm831x_dcdc_init(void)
subsys_initcall(wm831x_dcdc_init);
static void __exit wm831x_dcdc_exit(void)
module_exit(wm831x_dcdc_exit);
MODULE_AUTHOR("Mark Brown");
MODULE_DESCRIPTION("WM831x DC-DC convertor driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-buckv");
MODULE_ALIAS("platform:wm831x-buckp");
