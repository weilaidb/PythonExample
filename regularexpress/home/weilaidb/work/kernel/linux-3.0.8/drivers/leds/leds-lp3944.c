#define LP3944_REG_INPUT1     0x00
#define LP3944_REG_REGISTER1  0x01
#define LP3944_REG_PSC0       0x02
#define LP3944_REG_PWM0       0x03
#define LP3944_REG_PSC1       0x04
#define LP3944_REG_PWM1       0x05
#define LP3944_REG_LS0        0x06
#define LP3944_REG_LS1        0x07
#define LP3944_REG_REGISTER8  0x08
#define LP3944_REG_REGISTER9  0x09
#define LP3944_DIM0 0
#define LP3944_DIM1 1
#define LP3944_PERIOD_MIN 0
#define LP3944_PERIOD_MAX 1600
#define LP3944_DUTY_CYCLE_MIN 0
#define LP3944_DUTY_CYCLE_MAX 100
#define ldev_to_led(c)       container_of(c, struct lp3944_led_data, ldev)
struct lp3944_led_data ;
struct lp3944_data ;
static int lp3944_reg_read(struct i2c_client *client, u8 reg, u8 *value)
static int lp3944_reg_write(struct i2c_client *client, u8 reg, u8 value)
static int lp3944_dim_set_period(struct i2c_client *client, u8 dim, u16 period)
static int lp3944_dim_set_dutycycle(struct i2c_client *client, u8 dim,
u8 duty_cycle)
static int lp3944_led_set(struct lp3944_led_data *led, u8 status)
static int lp3944_led_set_blink(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void lp3944_led_set_brightness(struct led_classdev *led_cdev,
enum led_brightness brightness)
static void lp3944_led_work(struct work_struct *work)
static int lp3944_configure(struct i2c_client *client,
struct lp3944_data *data,
struct lp3944_platform_data *pdata)
static int __devinit lp3944_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit lp3944_remove(struct i2c_client *client)
static const struct i2c_device_id lp3944_id[] = ;
MODULE_DEVICE_TABLE(i2c, lp3944_id);
static struct i2c_driver lp3944_driver = ;
static int __init lp3944_module_init(void)
static void __exit lp3944_module_exit(void)
module_init(lp3944_module_init);
module_exit(lp3944_module_exit);
MODULE_AUTHOR("Antonio Ospite <ospite@studenti.unina.it>");
MODULE_DESCRIPTION("LP3944 Fun Light Chip");
MODULE_LICENSE("GPL");
