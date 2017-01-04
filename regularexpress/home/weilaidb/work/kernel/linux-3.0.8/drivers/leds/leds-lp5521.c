#define LP5521_PROGRAM_LENGTH		32
#define LP5521_MAX_LEDS			3
#define LP5521_MAX_ENGINES		3
#define LP5521_ENG_MASK_BASE		0x30
#define LP5521_ENG_STATUS_MASK		0x07
#define LP5521_CMD_LOAD			0x15
#define LP5521_CMD_RUN			0x2a
#define LP5521_CMD_DIRECT		0x3f
#define LP5521_CMD_DISABLED		0x00
#define LP5521_REG_ENABLE		0x00
#define LP5521_REG_OP_MODE		0x01
#define LP5521_REG_R_PWM		0x02
#define LP5521_REG_G_PWM		0x03
#define LP5521_REG_B_PWM		0x04
#define LP5521_REG_R_CURRENT		0x05
#define LP5521_REG_G_CURRENT		0x06
#define LP5521_REG_B_CURRENT		0x07
#define LP5521_REG_CONFIG		0x08
#define LP5521_REG_R_CHANNEL_PC		0x09
#define LP5521_REG_G_CHANNEL_PC		0x0A
#define LP5521_REG_B_CHANNEL_PC		0x0B
#define LP5521_REG_STATUS		0x0C
#define LP5521_REG_RESET		0x0D
#define LP5521_REG_GPO			0x0E
#define LP5521_REG_R_PROG_MEM		0x10
#define LP5521_REG_G_PROG_MEM		0x30
#define LP5521_REG_B_PROG_MEM		0x50
#define LP5521_PROG_MEM_BASE		LP5521_REG_R_PROG_MEM
#define LP5521_PROG_MEM_SIZE		0x20
#define LP5521_REG_LED_CURRENT_BASE	LP5521_REG_R_CURRENT
#define LP5521_REG_LED_PWM_BASE		LP5521_REG_R_PWM
#define LP5521_MASTER_ENABLE		0x40
#define LP5521_LOGARITHMIC_PWM		0x80
#define LP5521_EXEC_RUN			0x2A
#define LP5521_PWM_HF			0x40
#define LP5521_PWRSAVE_EN		0x20
#define LP5521_CP_MODE_OFF		0
#define LP5521_CP_MODE_BYPASS		8
#define LP5521_CP_MODE_1X5		0x10
#define LP5521_CP_MODE_AUTO		0x18
#define LP5521_R_TO_BATT		4
#define LP5521_CLK_SRC_EXT		0
#define LP5521_CLK_INT			1
#define LP5521_CLK_AUTO			2
#define LP5521_EXT_CLK_USED		0x08
struct lp5521_engine ;
struct lp5521_led ;
struct lp5521_chip ;
static inline struct lp5521_led *cdev_to_led(struct led_classdev *cdev)
static inline struct lp5521_chip *engine_to_lp5521(struct lp5521_engine *engine)
static inline struct lp5521_chip *led_to_lp5521(struct lp5521_led *led)
static void lp5521_led_brightness_work(struct work_struct *work);
static inline int lp5521_write(struct i2c_client *client, u8 reg, u8 value)
static int lp5521_read(struct i2c_client *client, u8 reg, u8 *buf)
static int lp5521_set_engine_mode(struct lp5521_engine *engine, u8 mode)
static int lp5521_load_program(struct lp5521_engine *eng, const u8 *pattern)
static int lp5521_set_led_current(struct lp5521_chip *chip, int led, u8 curr)
static void lp5521_init_engine(struct lp5521_chip *chip)
static int lp5521_configure(struct i2c_client *client)
static int lp5521_run_selftest(struct lp5521_chip *chip, char *buf)
static void lp5521_set_brightness(struct led_classdev *cdev,
enum led_brightness brightness)
static void lp5521_led_brightness_work(struct work_struct *work)
static int lp5521_detect(struct i2c_client *client)
static int lp5521_set_mode(struct lp5521_engine *engine, u8 mode)
static int lp5521_do_store_load(struct lp5521_engine *engine,
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
static ssize_t lp5521_selftest(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(led_current, S_IRUGO | S_IWUSR, show_current, store_current);
static DEVICE_ATTR(max_current, S_IRUGO , show_max_current, NULL);
static struct attribute *lp5521_led_attributes[] = ;
static struct attribute_group lp5521_led_attribute_group = ;
static DEVICE_ATTR(engine1_mode, S_IRUGO | S_IWUSR,
show_engine1_mode, store_engine1_mode);
static DEVICE_ATTR(engine2_mode, S_IRUGO | S_IWUSR,
show_engine2_mode, store_engine2_mode);
static DEVICE_ATTR(engine3_mode, S_IRUGO | S_IWUSR,
show_engine3_mode, store_engine3_mode);
static DEVICE_ATTR(engine1_load, S_IWUSR, NULL, store_engine1_load);
static DEVICE_ATTR(engine2_load, S_IWUSR, NULL, store_engine2_load);
static DEVICE_ATTR(engine3_load, S_IWUSR, NULL, store_engine3_load);
static DEVICE_ATTR(selftest, S_IRUGO, lp5521_selftest, NULL);
static struct attribute *lp5521_attributes[] = ;
static const struct attribute_group lp5521_group = ;
static int lp5521_register_sysfs(struct i2c_client *client)
static void lp5521_unregister_sysfs(struct i2c_client *client)
static int __devinit lp5521_init_led(struct lp5521_led *led,
struct i2c_client *client,
int chan, struct lp5521_platform_data *pdata)
static int __devinit lp5521_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lp5521_remove(struct i2c_client *client)
static const struct i2c_device_id lp5521_id[] = ;
MODULE_DEVICE_TABLE(i2c, lp5521_id);
static struct i2c_driver lp5521_driver = ;
static int __init lp5521_init(void)
static void __exit lp5521_exit(void)
module_init(lp5521_init);
module_exit(lp5521_exit);
MODULE_AUTHOR("Mathias Nyman, Yuri Zaporozhets, Samu Onkalo");
MODULE_DESCRIPTION("LP5521 LED engine");
MODULE_LICENSE("GPL v2");
