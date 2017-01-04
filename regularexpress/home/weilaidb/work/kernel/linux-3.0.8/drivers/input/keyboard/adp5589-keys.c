#define OSC_EN		(1 << 7)
#define CORE_CLK(x)	(((x) & 0x3) << 5)
#define LCK_TRK_LOGIC	(1 << 4)
#define LCK_TRK_GPI	(1 << 3)
#define INT_CFG		(1 << 1)
#define RST_CFG		(1 << 0)
#define LOGIC2_IEN	(1 << 5)
#define LOGIC1_IEN	(1 << 4)
#define LOCK_IEN	(1 << 3)
#define OVRFLOW_IEN	(1 << 2)
#define GPI_IEN		(1 << 1)
#define EVENT_IEN	(1 << 0)
#define LOGIC2_INT	(1 << 5)
#define LOGIC1_INT	(1 << 4)
#define LOCK_INT	(1 << 3)
#define OVRFLOW_INT	(1 << 2)
#define GPI_INT		(1 << 1)
#define EVENT_INT	(1 << 0)
#define LOGIC2_STAT	(1 << 7)
#define LOGIC1_STAT	(1 << 6)
#define LOCK_STAT	(1 << 5)
#define KEC		0xF
#define C4_EXTEND_CFG	(1 << 6)
#define R4_EXTEND_CFG	(1 << 5)
#define LOCK_EN		(1 << 0)
#define PTIME_MASK	0x3
#define LTIME_MASK	0x3
#define KEY_EV_PRESSED		(1 << 7)
#define KEY_EV_MASK		(0x7F)
#define KEYP_MAX_EVENT		16
#define MAXGPIO			19
#define ADP_BANK(offs)		((offs) >> 3)
#define ADP_BIT(offs)		(1u << ((offs) & 0x7))
struct adp5589_kpad ;
static int adp5589_read(struct i2c_client *client, u8 reg)
static int adp5589_write(struct i2c_client *client, u8 reg, u8 val)
static int adp5589_gpio_get_value(struct gpio_chip *chip, unsigned off)
static void adp5589_gpio_set_value(struct gpio_chip *chip,
unsigned off, int val)
static int adp5589_gpio_direction_input(struct gpio_chip *chip, unsigned off)
static int adp5589_gpio_direction_output(struct gpio_chip *chip,
unsigned off, int val)
static int __devinit adp5589_build_gpiomap(struct adp5589_kpad *kpad,
const struct adp5589_kpad_platform_data *pdata)
static int __devinit adp5589_gpio_add(struct adp5589_kpad *kpad)
static void __devexit adp5589_gpio_remove(struct adp5589_kpad *kpad)
static inline int adp5589_gpio_add(struct adp5589_kpad *kpad)
static inline void adp5589_gpio_remove(struct adp5589_kpad *kpad)
static void adp5589_report_switches(struct adp5589_kpad *kpad,
int key, int key_val)
static void adp5589_report_events(struct adp5589_kpad *kpad, int ev_cnt)
static irqreturn_t adp5589_irq(int irq, void *handle)
static int __devinit adp5589_get_evcode(struct adp5589_kpad *kpad, unsigned short key)
static int __devinit adp5589_setup(struct adp5589_kpad *kpad)
static void __devinit adp5589_report_switch_state(struct adp5589_kpad *kpad)
static int __devinit adp5589_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp5589_remove(struct i2c_client *client)
static int adp5589_suspend(struct device *dev)
static int adp5589_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(adp5589_dev_pm_ops, adp5589_suspend, adp5589_resume);
static const struct i2c_device_id adp5589_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp5589_id);
static struct i2c_driver adp5589_driver = ;
static int __init adp5589_init(void)
module_init(adp5589_init);
static void __exit adp5589_exit(void)
module_exit(adp5589_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP5589 Keypad driver");
