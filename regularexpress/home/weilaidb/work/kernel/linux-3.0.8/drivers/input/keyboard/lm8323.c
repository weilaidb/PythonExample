#define LM8323_CMD_READ_ID		0x80
#define LM8323_CMD_WRITE_CFG		0x81
#define LM8323_CMD_READ_INT		0x82
#define LM8323_CMD_RESET		0x83
#define LM8323_CMD_WRITE_PORT_SEL	0x85
#define LM8323_CMD_WRITE_PORT_STATE	0x86
#define LM8323_CMD_READ_PORT_SEL	0x87
#define LM8323_CMD_READ_PORT_STATE	0x88
#define LM8323_CMD_READ_FIFO		0x89
#define LM8323_CMD_RPT_READ_FIFO	0x8a
#define LM8323_CMD_SET_ACTIVE		0x8b
#define LM8323_CMD_READ_ERR		0x8c
#define LM8323_CMD_READ_ROTATOR		0x8e
#define LM8323_CMD_SET_DEBOUNCE		0x8f
#define LM8323_CMD_SET_KEY_SIZE		0x90
#define LM8323_CMD_READ_KEY_SIZE	0x91
#define LM8323_CMD_READ_CFG		0x92
#define LM8323_CMD_WRITE_CLOCK		0x93
#define LM8323_CMD_READ_CLOCK		0x94
#define LM8323_CMD_PWM_WRITE		0x95
#define LM8323_CMD_START_PWM		0x96
#define LM8323_CMD_STOP_PWM		0x97
#define INT_KEYPAD			0x01
#define INT_ROTATOR			0x02
#define INT_ERROR			0x08
#define INT_NOINIT			0x10
#define INT_PWM1			0x20
#define INT_PWM2			0x40
#define INT_PWM3			0x80
#define ERR_BADPAR			0x01
#define ERR_CMDUNK			0x02
#define ERR_KEYOVR			0x04
#define ERR_FIFOOVER			0x40
#define CFG_MUX1SEL			0x01
#define CFG_MUX1EN			0x02
#define CFG_MUX2SEL			0x04
#define CFG_MUX2EN			0x08
#define CFG_PSIZE			0x20
#define CFG_ROTEN			0x40
#define CLK_RCPWM_INTERNAL		0x00
#define CLK_RCPWM_EXTERNAL		0x03
#define CLK_SLOWCLKEN			0x08
#define CLK_SLOWCLKOUT			0x40
#define LM8323_I2C_ADDR00		(0x84 >> 1)
#define LM8323_I2C_ADDR01		(0x86 >> 1)
#define LM8323_I2C_ADDR10		(0x88 >> 1)
#define LM8323_I2C_ADDR11		(0x8A >> 1)
#define LM8323_FIFO_LEN			15
#define PWM_SET(v)			(0x4000 | ((v) & 0xff))
#define PWM_GOTOSTART			0x0000
#define PWM_END(reset)			(0xc000 | (!!(reset) << 11))
#define PWM_RAMP(s, t, n, u)		((!!(s) << 14) | ((t) & 0x3f) << 8 | \
((n) & 0x7f) | ((u) ? 0 : 0x80))
#define PWM_LOOP(cnt, pos)		(0xa000 | (((cnt) & 0x3f) << 7) | \
((pos) & 0x3f))
#define PWM_WAIT_TRIG(chans)		(0xe000 | (((chans) & 0x7) << 6))
#define PWM_SEND_TRIG(chans)		(0xe000 | ((chans) & 0x7))
struct lm8323_pwm ;
struct lm8323_chip ;
#define client_to_lm8323(c)	container_of(c, struct lm8323_chip, client)
#define dev_to_lm8323(d)	container_of(d, struct lm8323_chip, client->dev)
#define work_to_lm8323(w)	container_of(w, struct lm8323_chip, work)
#define cdev_to_pwm(c)		container_of(c, struct lm8323_pwm, cdev)
#define work_to_pwm(w)		container_of(w, struct lm8323_pwm, work)
#define LM8323_MAX_DATA 8
static int lm8323_write(struct lm8323_chip *lm, int len, ...)
static int lm8323_read(struct lm8323_chip *lm, u8 cmd, u8 *buf, int len)
static void lm8323_set_active_time(struct lm8323_chip *lm, int time)
static inline u8 lm8323_whichkey(u8 event)
static inline int lm8323_ispress(u8 event)
static void process_keys(struct lm8323_chip *lm)
static void lm8323_process_error(struct lm8323_chip *lm)
static void lm8323_reset(struct lm8323_chip *lm)
static int lm8323_configure(struct lm8323_chip *lm)
static void pwm_done(struct lm8323_pwm *pwm)
static void lm8323_work(struct work_struct *work)
static irqreturn_t lm8323_irq(int irq, void *data)
static int lm8323_read_id(struct lm8323_chip *lm, u8 *buf)
static void lm8323_write_pwm_one(struct lm8323_pwm *pwm, int pos, u16 cmd)
static void lm8323_write_pwm(struct lm8323_pwm *pwm, int kill,
int len, const u16 *cmds)
static void lm8323_pwm_work(struct work_struct *work)
static void lm8323_pwm_set_brightness(struct led_classdev *led_cdev,
enum led_brightness brightness)
static ssize_t lm8323_pwm_show_time(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lm8323_pwm_store_time(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static DEVICE_ATTR(time, 0644, lm8323_pwm_show_time, lm8323_pwm_store_time);
static int init_pwm(struct lm8323_chip *lm, int id, struct device *dev,
const char *name)
static struct i2c_driver lm8323_i2c_driver;
static ssize_t lm8323_show_disable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lm8323_set_disable(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(disable_kp, 0644, lm8323_show_disable, lm8323_set_disable);
static int __devinit lm8323_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit lm8323_remove(struct i2c_client *client)
static int lm8323_suspend(struct device *dev)
static int lm8323_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(lm8323_pm_ops, lm8323_suspend, lm8323_resume);
static const struct i2c_device_id lm8323_id[] = ;
static struct i2c_driver lm8323_i2c_driver = ;
MODULE_DEVICE_TABLE(i2c, lm8323_id);
static int __init lm8323_init(void)
module_init(lm8323_init);
static void __exit lm8323_exit(void)
module_exit(lm8323_exit);
MODULE_AUTHOR("Timo O. Karjalainen <timo.o.karjalainen@nokia.com>");
MODULE_AUTHOR("Daniel Stone");
MODULE_AUTHOR("Felipe Balbi <felipe.balbi@nokia.com>");
MODULE_DESCRIPTION("LM8323 keypad driver");
MODULE_LICENSE("GPL");
