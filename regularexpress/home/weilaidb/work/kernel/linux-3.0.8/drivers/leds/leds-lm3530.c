#define LM3530_LED_DEV "lcd-backlight"
#define LM3530_NAME "lm3530-led"
#define LM3530_GEN_CONFIG		0x10
#define LM3530_ALS_CONFIG		0x20
#define LM3530_BRT_RAMP_RATE		0x30
#define LM3530_ALS_ZONE_REG		0x40
#define LM3530_ALS_IMP_SELECT		0x41
#define LM3530_BRT_CTRL_REG		0xA0
#define LM3530_ALS_ZB0_REG		0x60
#define LM3530_ALS_ZB1_REG		0x61
#define LM3530_ALS_ZB2_REG		0x62
#define LM3530_ALS_ZB3_REG		0x63
#define LM3530_ALS_Z0T_REG		0x70
#define LM3530_ALS_Z1T_REG		0x71
#define LM3530_ALS_Z2T_REG		0x72
#define LM3530_ALS_Z3T_REG		0x73
#define LM3530_ALS_Z4T_REG		0x74
#define LM3530_REG_MAX			15
#define LM3530_EN_I2C_SHIFT		(0)
#define LM3530_RAMP_LAW_SHIFT		(1)
#define LM3530_MAX_CURR_SHIFT		(2)
#define LM3530_EN_PWM_SHIFT		(5)
#define LM3530_PWM_POL_SHIFT		(6)
#define LM3530_EN_PWM_SIMPLE_SHIFT	(7)
#define LM3530_ENABLE_I2C		(1 << LM3530_EN_I2C_SHIFT)
#define LM3530_ENABLE_PWM		(1 << LM3530_EN_PWM_SHIFT)
#define LM3530_POL_LOW			(1 << LM3530_PWM_POL_SHIFT)
#define LM3530_ENABLE_PWM_SIMPLE	(1 << LM3530_EN_PWM_SIMPLE_SHIFT)
#define LM3530_ALS_AVG_TIME_SHIFT	(0)
#define LM3530_EN_ALS_SHIFT		(3)
#define LM3530_ALS_SEL_SHIFT		(5)
#define LM3530_ENABLE_ALS		(3 << LM3530_EN_ALS_SHIFT)
#define LM3530_BRT_RAMP_FALL_SHIFT	(0)
#define LM3530_BRT_RAMP_RISE_SHIFT	(3)
#define LM3530_ALS1_IMP_SHIFT		(0)
#define LM3530_ALS2_IMP_SHIFT		(4)
#define LM3530_DEF_ZB_0			(0x33)
#define LM3530_DEF_ZB_1			(0x66)
#define LM3530_DEF_ZB_2			(0x99)
#define LM3530_DEF_ZB_3			(0xCC)
#define LM3530_DEF_ZT_0			(0x19)
#define LM3530_DEF_ZT_1			(0x33)
#define LM3530_DEF_ZT_2			(0x4C)
#define LM3530_DEF_ZT_3			(0x66)
#define LM3530_DEF_ZT_4			(0x7F)
struct lm3530_mode_map ;
static struct lm3530_mode_map mode_map[] = ;
struct lm3530_data ;
static const u8 lm3530_reg[LM3530_REG_MAX] = ;
static int lm3530_get_mode_from_str(const char *str)
static int lm3530_init_registers(struct lm3530_data *drvdata)
static void lm3530_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brt_val)
static ssize_t lm3530_mode_set(struct device *dev, struct device_attribute
*attr, const char *buf, size_t size)
static DEVICE_ATTR(mode, 0644, NULL, lm3530_mode_set);
static int __devinit lm3530_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit lm3530_remove(struct i2c_client *client)
static const struct i2c_device_id lm3530_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm3530_id);
static struct i2c_driver lm3530_i2c_driver = ;
static int __init lm3530_init(void)
static void __exit lm3530_exit(void)
module_init(lm3530_init);
module_exit(lm3530_exit);
MODULE_DESCRIPTION("Back Light driver for LM3530");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Shreshtha Kumar SAHU <shreshthakumar.sahu@stericsson.com>");
