#define TS_NAME			"wm97xx"
#define WM_CORE_VERSION		"1.00"
#define DEFAULT_PRESSURE	0xb0c0
static int abs_x[3] = ;
module_param_array(abs_x, int, NULL, 0);
MODULE_PARM_DESC(abs_x, "Touchscreen absolute X min, max, fuzz");
static int abs_y[3] = ;
module_param_array(abs_y, int, NULL, 0);
MODULE_PARM_DESC(abs_y, "Touchscreen absolute Y min, max, fuzz");
static int abs_p[3] = ;
module_param_array(abs_p, int, NULL, 0);
MODULE_PARM_DESC(abs_p, "Touchscreen absolute Pressure min, max, fuzz");
int wm97xx_reg_read(struct wm97xx *wm, u16 reg)
EXPORT_SYMBOL_GPL(wm97xx_reg_read);
void wm97xx_reg_write(struct wm97xx *wm, u16 reg, u16 val)
EXPORT_SYMBOL_GPL(wm97xx_reg_write);
int wm97xx_read_aux_adc(struct wm97xx *wm, u16 adcsel)
EXPORT_SYMBOL_GPL(wm97xx_read_aux_adc);
enum wm97xx_gpio_status wm97xx_get_gpio(struct wm97xx *wm, u32 gpio)
EXPORT_SYMBOL_GPL(wm97xx_get_gpio);
void wm97xx_set_gpio(struct wm97xx *wm, u32 gpio,
enum wm97xx_gpio_status status)
EXPORT_SYMBOL_GPL(wm97xx_set_gpio);
void wm97xx_config_gpio(struct wm97xx *wm, u32 gpio, enum wm97xx_gpio_dir dir,
enum wm97xx_gpio_pol pol, enum wm97xx_gpio_sticky sticky,
enum wm97xx_gpio_wake wake)
EXPORT_SYMBOL_GPL(wm97xx_config_gpio);
void wm97xx_set_suspend_mode(struct wm97xx *wm, u16 mode)
EXPORT_SYMBOL_GPL(wm97xx_set_suspend_mode);
static void wm97xx_pen_irq_worker(struct work_struct *work)
static irqreturn_t wm97xx_pen_interrupt(int irq, void *dev_id)
static int wm97xx_init_pen_irq(struct wm97xx *wm)
static int wm97xx_read_samples(struct wm97xx *wm)
static void wm97xx_ts_reader(struct work_struct *work)
static int wm97xx_ts_input_open(struct input_dev *idev)
static void wm97xx_ts_input_close(struct input_dev *idev)
static int wm97xx_probe(struct device *dev)
static int wm97xx_remove(struct device *dev)
static int wm97xx_suspend(struct device *dev, pm_message_t state)
static int wm97xx_resume(struct device *dev)
#define wm97xx_suspend		NULL
#define wm97xx_resume		NULL
int wm97xx_register_mach_ops(struct wm97xx *wm,
struct wm97xx_mach_ops *mach_ops)
EXPORT_SYMBOL_GPL(wm97xx_register_mach_ops);
void wm97xx_unregister_mach_ops(struct wm97xx *wm)
EXPORT_SYMBOL_GPL(wm97xx_unregister_mach_ops);
static struct device_driver wm97xx_driver = ;
static int __init wm97xx_init(void)
static void __exit wm97xx_exit(void)
module_init(wm97xx_init);
module_exit(wm97xx_exit);
MODULE_AUTHOR("Liam Girdwood <lrg@slimlogic.co.uk>");
MODULE_DESCRIPTION("WM97xx Core - Touch Screen / AUX ADC / GPIO Driver");
MODULE_LICENSE("GPL");
