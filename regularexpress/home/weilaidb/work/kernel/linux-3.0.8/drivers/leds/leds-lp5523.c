#define LP5523_REG_ENABLE		0x00
#define LP5523_REG_OP_MODE		0x01
#define LP5523_REG_RATIOMETRIC_MSB	0x02
#define LP5523_REG_RATIOMETRIC_LSB	0x03
#define LP5523_REG_ENABLE_LEDS_MSB	0x04
#define LP5523_REG_ENABLE_LEDS_LSB	0x05
#define LP5523_REG_LED_CNTRL_BASE	0x06
#define LP5523_REG_LED_PWM_BASE		0x16
#define LP5523_REG_LED_CURRENT_BASE	0x26
#define LP5523_REG_CONFIG		0x36
#define LP5523_REG_CHANNEL1_PC		0x37
#define LP5523_REG_CHANNEL2_PC		0x38
#define LP5523_REG_CHANNEL3_PC		0x39
#define LP5523_REG_STATUS		0x3a
#define LP5523_REG_GPO			0x3b
#define LP5523_REG_VARIABLE		0x3c
#define LP5523_REG_RESET		0x3d
#define LP5523_REG_TEMP_CTRL		0x3e
#define LP5523_REG_TEMP_READ		0x3f
#define LP5523_REG_TEMP_WRITE		0x40
#define LP5523_REG_LED_TEST_CTRL	0x41
#define LP5523_REG_LED_TEST_ADC		0x42
#define LP5523_REG_ENG1_VARIABLE	0x45
#define LP5523_REG_ENG2_VARIABLE	0x46
#define LP5523_REG_ENG3_VARIABLE	0x47
#define LP5523_REG_MASTER_FADER1	0x48
#define LP5523_REG_MASTER_FADER2	0x49
#define LP5523_REG_MASTER_FADER3	0x4a
#define LP5523_REG_CH1_PROG_START	0x4c
#define LP5523_REG_CH2_PROG_START	0x4d
#define LP5523_REG_CH3_PROG_START	0x4e
#define LP5523_REG_PROG_PAGE_SEL	0x4f
#define LP5523_REG_PROG_MEM		0x50
#define LP5523_CMD_LOAD			0x15
#define LP5523_CMD_RUN			0x2a
#define LP5523_CMD_DISABLED		0x00
#define LP5523_ENABLE			0x40
#define LP5523_AUTO_INC			0x40
#define LP5523_PWR_SAVE			0x20
#define LP5523_PWM_PWR_SAVE		0x04
#define LP5523_CP_1			0x08
#define LP5523_CP_1_5			0x10
#define LP5523_CP_AUTO			0x18
#define LP5523_INT_CLK			0x01
#define LP5523_AUTO_CLK			0x02
#define LP5523_EN_LEDTEST		0x80
#define LP5523_LEDTEST_DONE		0x80
#define LP5523_DEFAULT_CURRENT		50
#define LP5523_PROGRAM_LENGTH		32
#define LP5523_PROGRAM_PAGES		6
#define LP5523_ADC_SHORTCIRC_LIM	80
#define LP5523_LEDS			9
#define LP5523_ENGINES			3
#define LP5523_ENG_MASK_BASE		0x30
#define LP5523_ENG_STATUS_MASK          0x07
#define LP5523_IRQ_FLAGS                IRQF_TRIGGER_FALLING
#define LP5523_EXT_CLK_USED		0x08
#define LED_ACTIVE(mux, led)		(!!(mux & (0x0001 << led)))
#define SHIFT_MASK(id)			(((id) - 1) * 2)
struct lp5523_engine ;
struct lp5523_led ;
struct lp5523_chip ;
static inline struct lp5523_led *cdev_to_led(struct led_classdev *cdev)
static inline struct lp5523_chip *engine_to_lp5523(struct lp5523_engine *engine)
static inline struct lp5523_chip *led_to_lp5523(struct lp5523_led *led)
static int lp5523_set_mode(struct lp5523_engine *engine, u8 mode);
static int lp5523_set_engine_mode(struct lp5523_engine *engine, u8 mode);
static int lp5523_load_program(struct lp5523_engine *engine, u8 *pattern);
static void lp5523_led_brightness_work(struct work_struct *work);
static int lp5523_write(struct i2c_client *client, u8 reg, u8 value)
static int lp5523_read(struct i2c_client *client, u8 reg, u8 *buf)
static int lp5523_detect(struct i2c_client *client)
static int lp5523_configure(struct i2c_client *client)
static int lp5523_set_engine_mode(struct lp5523_engine *engine, u8 mode)
static int lp5523_load_mux(struct lp5523_engine *engine, u16 mux)
static int lp5523_load_program(struct lp5523_engine *engine, u8 *pattern)
static int lp5523_run_program(struct lp5523_engine *engine)
static int lp5523_mux_parse(const char *buf, u16 *mux, size_t len)
static void lp5523_mux_to_array(u16 led_mux, char *array)
static ssize_t show_engine_leds(struct device *dev,
struct device_attribute *attr,
char *buf, int nr)
#define show_leds(nr)							\
static ssize_t show_engine##nr##_leds(struct device *dev,		\
struct device_attribute *attr,		\
char *buf)					\
show_leds(1)
show_leds(2)
show_leds(3)
static ssize_t store_engine_leds(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len, int nr)
#define store_leds(nr)						\
static ssize_t store_engine##nr##_leds(struct device *dev,	\
struct device_attribute *attr,	\
const char *buf, size_t len)	\
store_leds(1)
store_leds(2)
store_leds(3)
static ssize_t lp5523_selftest(struct device *dev,
struct device_attribute *attr,
char *buf)
static void lp5523_set_brightness(struct led_classdev *cdev,
enum led_brightness brightness)
static void lp5523_led_brightness_work(struct work_struct *work)
static int lp5523_do_store_load(struct lp5523_engine *engine,
const char *buf, size_t len)
static ssize_t store_engine_load(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len, int nr)
#define store_load(nr)							\
static ssize_t store_engine##nr##_load(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t len)	\
store_load(1)
store_load(2)
store_load(3)
static ssize_t show_engine_mode(struct device *dev,
struct device_attribute *attr,
char *buf, int nr)
#define show_mode(nr)							\
static ssize_t show_engine##nr##_mode(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)				\
show_mode(1)
show_mode(2)
show_mode(3)
static ssize_t store_engine_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len, int nr)
#define store_mode(nr)							\
static ssize_t store_engine##nr##_mode(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t len)	\
store_mode(1)
store_mode(2)
store_mode(3)
static ssize_t show_max_current(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_current(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_current(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(led_current, S_IRUGO | S_IWUSR, show_current, store_current);
static DEVICE_ATTR(max_current, S_IRUGO , show_max_current, NULL);
static struct attribute *lp5523_led_attributes[] = ;
static struct attribute_group lp5523_led_attribute_group = ;
static DEVICE_ATTR(engine1_mode, S_IRUGO | S_IWUSR,
show_engine1_mode, store_engine1_mode);
static DEVICE_ATTR(engine2_mode, S_IRUGO | S_IWUSR,
show_engine2_mode, store_engine2_mode);
static DEVICE_ATTR(engine3_mode, S_IRUGO | S_IWUSR,
show_engine3_mode, store_engine3_mode);
static DEVICE_ATTR(engine1_leds, S_IRUGO | S_IWUSR,
show_engine1_leds, store_engine1_leds);
static DEVICE_ATTR(engine2_leds, S_IRUGO | S_IWUSR,
show_engine2_leds, store_engine2_leds);
static DEVICE_ATTR(engine3_leds, S_IRUGO | S_IWUSR,
show_engine3_leds, store_engine3_leds);
static DEVICE_ATTR(engine1_load, S_IWUSR, NULL, store_engine1_load);
static DEVICE_ATTR(engine2_load, S_IWUSR, NULL, store_engine2_load);
static DEVICE_ATTR(engine3_load, S_IWUSR, NULL, store_engine3_load);
static DEVICE_ATTR(selftest, S_IRUGO, lp5523_selftest, NULL);
static struct attribute *lp5523_attributes[] = ;
static const struct attribute_group lp5523_group = ;
static int lp5523_register_sysfs(struct i2c_client *client)
static void lp5523_unregister_sysfs(struct i2c_client *client)
static int lp5523_set_mode(struct lp5523_engine *engine, u8 mode)
static int __init lp5523_init_engine(struct lp5523_engine *engine, int id)
static int __devinit lp5523_init_led(struct lp5523_led *led, struct device *dev,
int chan, struct lp5523_platform_data *pdata)
static struct i2c_driver lp5523_driver;
static int __devinit lp5523_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lp5523_remove(struct i2c_client *client)
static const struct i2c_device_id lp5523_id[] = ;
MODULE_DEVICE_TABLE(i2c, lp5523_id);
static struct i2c_driver lp5523_driver = ;
static int __init lp5523_init(void)
static void __exit lp5523_exit(void)
module_init(lp5523_init);
module_exit(lp5523_exit);
MODULE_AUTHOR("Mathias Nyman <mathias.nyman@nokia.com>");
MODULE_DESCRIPTION("LP5523 LED engine");
MODULE_LICENSE("GPL");
