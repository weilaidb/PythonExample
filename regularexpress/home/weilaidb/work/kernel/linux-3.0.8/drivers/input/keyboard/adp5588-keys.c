#define KEY_EV_PRESSED		(1 << 7)
#define KEY_EV_MASK		(0x7F)
#define KP_SEL(x)		(0xFFFF >> (16 - x))
#define KEYP_MAX_EVENT		10
#define WA_DELAYED_READOUT_REVID(rev)		((rev) < 4)
struct adp5588_kpad ;
static int adp5588_read(struct i2c_client *client, u8 reg)
static int adp5588_write(struct i2c_client *client, u8 reg, u8 val)
static int adp5588_gpio_get_value(struct gpio_chip *chip, unsigned off)
static void adp5588_gpio_set_value(struct gpio_chip *chip,
unsigned off, int val)
static int adp5588_gpio_direction_input(struct gpio_chip *chip, unsigned off)
static int adp5588_gpio_direction_output(struct gpio_chip *chip,
unsigned off, int val)
static int __devinit adp5588_build_gpiomap(struct adp5588_kpad *kpad,
const struct adp5588_kpad_platform_data *pdata)
static int __devinit adp5588_gpio_add(struct adp5588_kpad *kpad)
static void __devexit adp5588_gpio_remove(struct adp5588_kpad *kpad)
static inline int adp5588_gpio_add(struct adp5588_kpad *kpad)
static inline void adp5588_gpio_remove(struct adp5588_kpad *kpad)
static void adp5588_report_events(struct adp5588_kpad *kpad, int ev_cnt)
static void adp5588_work(struct work_struct *work)
static irqreturn_t adp5588_irq(int irq, void *handle)
static int __devinit adp5588_setup(struct i2c_client *client)
static void __devinit adp5588_report_switch_state(struct adp5588_kpad *kpad)
static int __devinit adp5588_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp5588_remove(struct i2c_client *client)
static int adp5588_suspend(struct device *dev)
static int adp5588_resume(struct device *dev)
static const struct dev_pm_ops adp5588_dev_pm_ops = ;
static const struct i2c_device_id adp5588_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp5588_id);
static struct i2c_driver adp5588_driver = ;
static int __init adp5588_init(void)
module_init(adp5588_init);
static void __exit adp5588_exit(void)
module_exit(adp5588_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP5588/87 Keypad driver");
MODULE_ALIAS("platform:adp5588-keys");
