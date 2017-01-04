#define LED_CTL(rgb2en, rgb1en) ((rgb2en) << 4 | ((rgb1en) << 0))
#define BD2802_LED_OFFSET		0xa
#define BD2802_COLOR_OFFSET		0x3
#define BD2802_REG_CLKSETUP 		0x00
#define BD2802_REG_CONTROL 		0x01
#define BD2802_REG_HOURSETUP		0x02
#define BD2802_REG_CURRENT1SETUP	0x03
#define BD2802_REG_CURRENT2SETUP	0x04
#define BD2802_REG_WAVEPATTERN		0x05
#define BD2802_CURRENT_032		0x10
#define BD2802_CURRENT_000		0x00
#define BD2802_PATTERN_FULL		0x07
#define BD2802_PATTERN_HALF		0x03
enum led_ids ;
enum led_colors ;
enum led_bits ;
struct led_state ;
struct bd2802_led ;
static inline int bd2802_is_rgb_off(struct bd2802_led *led, enum led_ids id,
enum led_colors color)
static inline int bd2802_is_led_off(struct bd2802_led *led, enum led_ids id)
static inline int bd2802_is_all_off(struct bd2802_led *led)
static inline u8 bd2802_get_base_offset(enum led_ids id, enum led_colors color)
static inline u8 bd2802_get_reg_addr(enum led_ids id, enum led_colors color,
u8 reg_offset)
static int bd2802_write_byte(struct i2c_client *client, u8 reg, u8 val)
static void bd2802_update_state(struct bd2802_led *led, enum led_ids id,
enum led_colors color, enum led_bits led_bit)
static void bd2802_configure(struct bd2802_led *led)
static void bd2802_reset_cancel(struct bd2802_led *led)
static void bd2802_enable(struct bd2802_led *led, enum led_ids id)
static void bd2802_set_on(struct bd2802_led *led, enum led_ids id,
enum led_colors color)
static void bd2802_set_blink(struct bd2802_led *led, enum led_ids id,
enum led_colors color)
static void bd2802_turn_on(struct bd2802_led *led, enum led_ids id,
enum led_colors color, enum led_bits led_bit)
static void bd2802_turn_off(struct bd2802_led *led, enum led_ids id,
enum led_colors color)
#define BD2802_SET_REGISTER(reg_addr, reg_name)				\
static ssize_t bd2802_store_reg##reg_addr(struct device *dev,		\
struct device_attribute *attr, const char *buf, size_t count)	\
\
static struct device_attribute bd2802_reg##reg_addr##_attr = ;
BD2802_SET_REGISTER(0x00, "0x00");
BD2802_SET_REGISTER(0x01, "0x01");
BD2802_SET_REGISTER(0x02, "0x02");
BD2802_SET_REGISTER(0x03, "0x03");
BD2802_SET_REGISTER(0x04, "0x04");
BD2802_SET_REGISTER(0x05, "0x05");
BD2802_SET_REGISTER(0x06, "0x06");
BD2802_SET_REGISTER(0x07, "0x07");
BD2802_SET_REGISTER(0x08, "0x08");
BD2802_SET_REGISTER(0x09, "0x09");
BD2802_SET_REGISTER(0x0a, "0x0a");
BD2802_SET_REGISTER(0x0b, "0x0b");
BD2802_SET_REGISTER(0x0c, "0x0c");
BD2802_SET_REGISTER(0x0d, "0x0d");
BD2802_SET_REGISTER(0x0e, "0x0e");
BD2802_SET_REGISTER(0x0f, "0x0f");
BD2802_SET_REGISTER(0x10, "0x10");
BD2802_SET_REGISTER(0x11, "0x11");
BD2802_SET_REGISTER(0x12, "0x12");
BD2802_SET_REGISTER(0x13, "0x13");
BD2802_SET_REGISTER(0x14, "0x14");
BD2802_SET_REGISTER(0x15, "0x15");
static struct device_attribute *bd2802_addr_attributes[] = ;
static void bd2802_enable_adv_conf(struct bd2802_led *led)
static void bd2802_disable_adv_conf(struct bd2802_led *led)
static ssize_t bd2802_show_adv_conf(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bd2802_store_adv_conf(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct device_attribute bd2802_adv_conf_attr = ;
#define BD2802_CONTROL_ATTR(attr_name, name_str)			\
static ssize_t bd2802_show_##attr_name(struct device *dev,		\
struct device_attribute *attr, char *buf)			\
\
static ssize_t bd2802_store_##attr_name(struct device *dev,		\
struct device_attribute *attr, const char *buf, size_t count)	\
\
static struct device_attribute bd2802_##attr_name##_attr = ;
BD2802_CONTROL_ATTR(wave_pattern, "wave_pattern");
BD2802_CONTROL_ATTR(rgb_current, "rgb_current");
static struct device_attribute *bd2802_attributes[] = ;
static void bd2802_led_work(struct work_struct *work)
#define BD2802_CONTROL_RGBS(name, id, clr)				\
static void bd2802_set_##name##_brightness(struct led_classdev *led_cdev,\
enum led_brightness value)	\
\
static int bd2802_set_##name##_blink(struct led_classdev *led_cdev,	\
unsigned long *delay_on, unsigned long *delay_off)	\
BD2802_CONTROL_RGBS(led1r, LED1, RED);
BD2802_CONTROL_RGBS(led1g, LED1, GREEN);
BD2802_CONTROL_RGBS(led1b, LED1, BLUE);
BD2802_CONTROL_RGBS(led2r, LED2, RED);
BD2802_CONTROL_RGBS(led2g, LED2, GREEN);
BD2802_CONTROL_RGBS(led2b, LED2, BLUE);
static int bd2802_register_led_classdev(struct bd2802_led *led)
static void bd2802_unregister_led_classdev(struct bd2802_led *led)
static int __devinit bd2802_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __exit bd2802_remove(struct i2c_client *client)
static void bd2802_restore_state(struct bd2802_led *led)
static int bd2802_suspend(struct device *dev)
static int bd2802_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(bd2802_pm, bd2802_suspend, bd2802_resume);
#define BD2802_PM (&bd2802_pm)
#define BD2802_PM NULL
static const struct i2c_device_id bd2802_id[] = ;
MODULE_DEVICE_TABLE(i2c, bd2802_id);
static struct i2c_driver bd2802_i2c_driver = ;
static int __init bd2802_init(void)
module_init(bd2802_init);
static void __exit bd2802_exit(void)
module_exit(bd2802_exit);
MODULE_AUTHOR("Kim Kyuwon <q1.kim@samsung.com>");
MODULE_DESCRIPTION("BD2802 LED driver");
MODULE_LICENSE("GPL v2");
