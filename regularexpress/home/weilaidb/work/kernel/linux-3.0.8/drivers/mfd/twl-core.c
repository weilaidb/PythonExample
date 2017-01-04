#if defined(CONFIG_ARCH_OMAP2) || defined(CONFIG_ARCH_OMAP3)
#define DRIVER_NAME			"twl"
#if defined(CONFIG_KEYBOARD_TWL4030) || defined(CONFIG_KEYBOARD_TWL4030_MODULE)
#define twl_has_keypad()	true
#define twl_has_keypad()	false
#if defined(CONFIG_GPIO_TWL4030) || defined(CONFIG_GPIO_TWL4030_MODULE)
#define twl_has_gpio()	true
#define twl_has_gpio()	false
#if defined(CONFIG_REGULATOR_TWL4030) \
|| defined(CONFIG_REGULATOR_TWL4030_MODULE)
#define twl_has_regulator()	true
#define twl_has_regulator()	false
#if defined(CONFIG_TWL4030_MADC) || defined(CONFIG_TWL4030_MADC_MODULE)
#define twl_has_madc()	true
#define twl_has_madc()	false
#define twl_has_power()        true
#define twl_has_power()        false
#if defined(CONFIG_RTC_DRV_TWL4030) || defined(CONFIG_RTC_DRV_TWL4030_MODULE)
#define twl_has_rtc()	true
#define twl_has_rtc()	false
#if defined(CONFIG_TWL4030_USB) || defined(CONFIG_TWL4030_USB_MODULE) ||\
defined(CONFIG_TWL6030_USB) || defined(CONFIG_TWL6030_USB_MODULE)
#define twl_has_usb()	true
#define twl_has_usb()	false
#if defined(CONFIG_TWL4030_WATCHDOG) || \
defined(CONFIG_TWL4030_WATCHDOG_MODULE)
#define twl_has_watchdog()        true
#define twl_has_watchdog()        false
#if defined(CONFIG_TWL4030_CODEC) || defined(CONFIG_TWL4030_CODEC_MODULE) ||\
defined(CONFIG_SND_SOC_TWL6040) || defined(CONFIG_SND_SOC_TWL6040_MODULE)
#define twl_has_codec()	true
#define twl_has_codec()	false
#if defined(CONFIG_CHARGER_TWL4030) || defined(CONFIG_CHARGER_TWL4030_MODULE)
#define twl_has_bci()	true
#define twl_has_bci()	false
#define TWL4030_MODULE_LAST		TWL4030_MODULE_SECURED_REG
#define TWL_NUM_SLAVES		4
#if defined(CONFIG_INPUT_TWL4030_PWRBUTTON) \
|| defined(CONFIG_INPUT_TWL4030_PWRBUTTON_MODULE)
#define twl_has_pwrbutton()	true
#define twl_has_pwrbutton()	false
#define SUB_CHIP_ID0 0
#define SUB_CHIP_ID1 1
#define SUB_CHIP_ID2 2
#define SUB_CHIP_ID3 3
#define TWL_MODULE_LAST TWL4030_MODULE_LAST
#define TWL4030_BASEADD_USB		0x0000
#define TWL4030_BASEADD_AUDIO_VOICE	0x0000
#define TWL4030_BASEADD_GPIO		0x0098
#define TWL4030_BASEADD_INTBR		0x0085
#define TWL4030_BASEADD_PIH		0x0080
#define TWL4030_BASEADD_TEST		0x004C
#define TWL4030_BASEADD_INTERRUPTS	0x00B9
#define TWL4030_BASEADD_LED		0x00EE
#define TWL4030_BASEADD_MADC		0x0000
#define TWL4030_BASEADD_MAIN_CHARGE	0x0074
#define TWL4030_BASEADD_PRECHARGE	0x00AA
#define TWL4030_BASEADD_PWM0		0x00F8
#define TWL4030_BASEADD_PWM1		0x00FB
#define TWL4030_BASEADD_PWMA		0x00EF
#define TWL4030_BASEADD_PWMB		0x00F1
#define TWL4030_BASEADD_KEYPAD		0x00D2
#define TWL5031_BASEADD_ACCESSORY	0x0074
#define TWL5031_BASEADD_INTERRUPTS	0x00B9
#define TWL4030_BASEADD_BACKUP		0x0014
#define TWL4030_BASEADD_INT		0x002E
#define TWL4030_BASEADD_PM_MASTER	0x0036
#define TWL4030_BASEADD_PM_RECEIVER	0x005B
#define TWL4030_BASEADD_RTC		0x001C
#define TWL4030_BASEADD_SECURED_REG	0x0000
#define TWL6030_BASEADD_RTC		0x0000
#define TWL6030_BASEADD_MEM		0x0017
#define TWL6030_BASEADD_PM_MASTER	0x001F
#define TWL6030_BASEADD_PM_SLAVE_MISC	0x0030
#define TWL6030_BASEADD_PM_MISC		0x00E2
#define TWL6030_BASEADD_PM_PUPD		0x00F0
#define TWL6030_BASEADD_USB		0x0000
#define TWL6030_BASEADD_GPADC_CTRL	0x002E
#define TWL6030_BASEADD_AUX		0x0090
#define TWL6030_BASEADD_PWM		0x00BA
#define TWL6030_BASEADD_GASGAUGE	0x00C0
#define TWL6030_BASEADD_PIH		0x00D0
#define TWL6030_BASEADD_CHARGER		0x00E0
#define TWL6025_BASEADD_CHARGER		0x00DA
#define TWL6030_BASEADD_DIEID		0x00C0
#define TWL6030_BASEADD_AUDIO		0x0000
#define TWL6030_BASEADD_RSV		0x0000
#define TWL6030_BASEADD_ZERO		0x0000
#define R_CFG_BOOT			0x05
#define HFCLK_FREQ_19p2_MHZ		(1 << 0)
#define HFCLK_FREQ_26_MHZ		(2 << 0)
#define HFCLK_FREQ_38p4_MHZ		(3 << 0)
#define HIGH_PERF_SQ			(1 << 3)
#define CK32K_LOWPWR_EN			(1 << 7)
#define TWL4030_VAUX2		BIT(0)
#define TPS_SUBSET		BIT(1)
#define TWL5031			BIT(2)
#define TWL6030_CLASS		BIT(3)
static bool inuse;
static u32 twl_idcode;
static unsigned int twl_id;
unsigned int twl_rev(void)
EXPORT_SYMBOL(twl_rev);
struct twl_client ;
static struct twl_client twl_modules[TWL_NUM_SLAVES];
struct twl_mapping ;
static struct twl_mapping *twl_map;
static struct twl_mapping twl4030_map[TWL4030_MODULE_LAST + 1] = ;
static struct twl_mapping twl6030_map[] = ;
int twl_i2c_write(u8 mod_no, u8 *value, u8 reg, unsigned num_bytes)
EXPORT_SYMBOL(twl_i2c_write);
int twl_i2c_read(u8 mod_no, u8 *value, u8 reg, unsigned num_bytes)
EXPORT_SYMBOL(twl_i2c_read);
int twl_i2c_write_u8(u8 mod_no, u8 value, u8 reg)
EXPORT_SYMBOL(twl_i2c_write_u8);
int twl_i2c_read_u8(u8 mod_no, u8 *value, u8 reg)
EXPORT_SYMBOL(twl_i2c_read_u8);
static int twl_read_idcode_register(void)
int twl_get_type(void)
EXPORT_SYMBOL_GPL(twl_get_type);
int twl_get_version(void)
EXPORT_SYMBOL_GPL(twl_get_version);
static struct device *
add_numbered_child(unsigned chip, const char *name, int num,
void *pdata, unsigned pdata_len,
bool can_wakeup, int irq0, int irq1)
static inline struct device *add_child(unsigned chip, const char *name,
void *pdata, unsigned pdata_len,
bool can_wakeup, int irq0, int irq1)
static struct device *
add_regulator_linked(int num, struct regulator_init_data *pdata,
struct regulator_consumer_supply *consumers,
unsigned num_consumers, unsigned long features)
static struct device *
add_regulator(int num, struct regulator_init_data *pdata,
unsigned long features)
static int
add_children(struct twl4030_platform_data *pdata, unsigned long features)
static inline int __init protect_pm_master(void)
static inline int __init unprotect_pm_master(void)
static void clocks_init(struct device *dev,
struct twl4030_clock_init_data *clock)
int twl4030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
int twl4030_exit_irq(void);
int twl4030_init_chip_irq(const char *chip);
int twl6030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
int twl6030_exit_irq(void);
static int twl_remove(struct i2c_client *client)
static int __devinit
twl_probe(struct i2c_client *client, const struct i2c_device_id *id)
static const struct i2c_device_id twl_ids[] = ;
MODULE_DEVICE_TABLE(i2c, twl_ids);
static struct i2c_driver twl_driver = ;
static int __init twl_init(void)
subsys_initcall(twl_init);
static void __exit twl_exit(void)
module_exit(twl_exit);
MODULE_AUTHOR("Texas Instruments, Inc.");
MODULE_DESCRIPTION("I2C Core interface for TWL");
MODULE_LICENSE("GPL");
