#define WM831X_ISINK_MAX_NAME 7
struct wm831x_isink ;
static int wm831x_isink_enable(struct regulator_dev *rdev)
static int wm831x_isink_disable(struct regulator_dev *rdev)
static int wm831x_isink_is_enabled(struct regulator_dev *rdev)
static int wm831x_isink_set_current(struct regulator_dev *rdev,
int min_uA, int max_uA)
static int wm831x_isink_get_current(struct regulator_dev *rdev)
static struct regulator_ops wm831x_isink_ops = ;
static irqreturn_t wm831x_isink_irq(int irq, void *data)
static __devinit int wm831x_isink_probe(struct platform_device *pdev)
static __devexit int wm831x_isink_remove(struct platform_device *pdev)
static struct platform_driver wm831x_isink_driver = ;
static int __init wm831x_isink_init(void)
subsys_initcall(wm831x_isink_init);
static void __exit wm831x_isink_exit(void)
module_exit(wm831x_isink_exit);
MODULE_AUTHOR("Mark Brown");
MODULE_DESCRIPTION("WM831x current sink driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-isink");
