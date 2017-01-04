#if defined(CONFIG_INPUT_DM355EVM) || defined(CONFIG_INPUT_DM355EVM_MODULE)
#define msp_has_keyboard()	true
#define msp_has_keyboard()	false
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
#define msp_has_leds()		true
#define msp_has_leds()		false
#if defined(CONFIG_RTC_DRV_DM355EVM) || defined(CONFIG_RTC_DRV_DM355EVM_MODULE)
#define msp_has_rtc()		true
#define msp_has_rtc()		false
#if defined(CONFIG_VIDEO_TVP514X) || defined(CONFIG_VIDEO_TVP514X_MODULE)
#define msp_has_tvp()		true
#define msp_has_tvp()		false
static struct i2c_client *msp430;
int dm355evm_msp_write(u8 value, u8 reg)
EXPORT_SYMBOL(dm355evm_msp_write);
int dm355evm_msp_read(u8 reg)
EXPORT_SYMBOL(dm355evm_msp_read);
#define MSP_GPIO(bit,reg)	((DM355EVM_MSP_ ## reg) << 3 | (bit))
static const u8 msp_gpios[] = ;
#define MSP_GPIO_REG(offset)	(msp_gpios[(offset)] >> 3)
#define MSP_GPIO_MASK(offset)	BIT(msp_gpios[(offset)] & 0x07)
static int msp_gpio_in(struct gpio_chip *chip, unsigned offset)
static u8 msp_led_cache;
static int msp_gpio_get(struct gpio_chip *chip, unsigned offset)
static int msp_gpio_out(struct gpio_chip *chip, unsigned offset, int value)
static void msp_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static struct gpio_chip dm355evm_msp_gpio = ;
static struct device *add_child(struct i2c_client *client, const char *name,
void *pdata, unsigned pdata_len,
bool can_wakeup, int irq)
static int add_children(struct i2c_client *client)
static void dm355evm_command(unsigned command)
static void dm355evm_power_off(void)
static int dm355evm_msp_remove(struct i2c_client *client)
static int
dm355evm_msp_probe(struct i2c_client *client, const struct i2c_device_id *id)
static const struct i2c_device_id dm355evm_msp_ids[] = ;
MODULE_DEVICE_TABLE(i2c, dm355evm_msp_ids);
static struct i2c_driver dm355evm_msp_driver = ;
static int __init dm355evm_msp_init(void)
subsys_initcall(dm355evm_msp_init);
static void __exit dm355evm_msp_exit(void)
module_exit(dm355evm_msp_exit);
MODULE_DESCRIPTION("Interface to MSP430 firmware on DM355EVM");
MODULE_LICENSE("GPL");
