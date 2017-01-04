static const struct i2c_device_id g760a_id[] = ;
MODULE_DEVICE_TABLE(i2c, g760a_id);
enum g760a_regs ;
#define G760A_REG_FAN_STA_RPM_OFF 0x1
#define G760A_REG_FAN_STA_RPM_LOW 0x2
#define G760A_UPDATE_INTERVAL (HZ)
struct g760a_data ;
#define G760A_DEFAULT_CLK 32768
#define G760A_DEFAULT_FAN_DIV 2
#define PWM_FROM_CNT(cnt)	(0xff-(cnt))
#define PWM_TO_CNT(pwm)		(0xff-(pwm))
static inline unsigned int rpm_from_cnt(u8 val, u32 clk, u16 div)
static int g760a_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int g760a_remove(struct i2c_client *client);
static struct i2c_driver g760a_driver = ;
static int g760a_read_value(struct i2c_client *client, enum g760a_regs reg)
static int g760a_write_value(struct i2c_client *client, enum g760a_regs reg,
u16 value)
static struct g760a_data *g760a_update_client(struct device *dev)
static ssize_t show_fan(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_fan_alarm(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t get_pwm(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, get_pwm, set_pwm);
static DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL);
static DEVICE_ATTR(fan1_alarm, S_IRUGO, show_fan_alarm, NULL);
static struct attribute *g760a_attributes[] = ;
static const struct attribute_group g760a_group = ;
static int g760a_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int g760a_remove(struct i2c_client *client)
static int __init g760a_init(void)
static void __exit g760a_exit(void)
MODULE_AUTHOR("Herbert Valerio Riedel <hvr@gnu.org>");
MODULE_DESCRIPTION("GMT G760A driver");
MODULE_LICENSE("GPL");
module_init(g760a_init);
module_exit(g760a_exit);
