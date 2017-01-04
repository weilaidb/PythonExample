#define RX8025_REG_SEC		0x00
#define RX8025_REG_MIN		0x01
#define RX8025_REG_HOUR		0x02
#define RX8025_REG_WDAY		0x03
#define RX8025_REG_MDAY		0x04
#define RX8025_REG_MONTH	0x05
#define RX8025_REG_YEAR		0x06
#define RX8025_REG_DIGOFF	0x07
#define RX8025_REG_ALWMIN	0x08
#define RX8025_REG_ALWHOUR	0x09
#define RX8025_REG_ALWWDAY	0x0a
#define RX8025_REG_ALDMIN	0x0b
#define RX8025_REG_ALDHOUR	0x0c
#define RX8025_REG_CTRL1	0x0e
#define RX8025_REG_CTRL2	0x0f
#define RX8025_BIT_CTRL1_CT	(7 << 0)
#define RX8025_BIT_CTRL1_CT_1HZ	4
#define RX8025_BIT_CTRL1_TEST	(1 << 3)
#define RX8025_BIT_CTRL1_1224	(1 << 5)
#define RX8025_BIT_CTRL1_DALE	(1 << 6)
#define RX8025_BIT_CTRL1_WALE	(1 << 7)
#define RX8025_BIT_CTRL2_DAFG	(1 << 0)
#define RX8025_BIT_CTRL2_WAFG	(1 << 1)
#define RX8025_BIT_CTRL2_CTFG	(1 << 2)
#define RX8025_BIT_CTRL2_PON	(1 << 4)
#define RX8025_BIT_CTRL2_XST	(1 << 5)
#define RX8025_BIT_CTRL2_VDET	(1 << 6)
#define RX8025_ADJ_RESOLUTION	3050
#define RX8025_ADJ_DATA_MAX	62
#define RX8025_ADJ_DATA_MIN	-62
static const struct i2c_device_id rx8025_id[] = ;
MODULE_DEVICE_TABLE(i2c, rx8025_id);
struct rx8025_data ;
static int rx8025_read_reg(struct i2c_client *client, int number, u8 *value)
static int rx8025_read_regs(struct i2c_client *client,
int number, u8 length, u8 *values)
static int rx8025_write_reg(struct i2c_client *client, int number, u8 value)
static int rx8025_write_regs(struct i2c_client *client,
int number, u8 length, u8 *values)
static irqreturn_t rx8025_irq(int irq, void *dev_id)
static void rx8025_work(struct work_struct *work)
static int rx8025_get_time(struct device *dev, struct rtc_time *dt)
static int rx8025_set_time(struct device *dev, struct rtc_time *dt)
static int rx8025_init_client(struct i2c_client *client, int *need_reset)
static int rx8025_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static int rx8025_set_alarm(struct device *dev, struct rtc_wkalrm *t)
static int rx8025_alarm_irq_enable(struct device *dev, unsigned int enabled)
static struct rtc_class_ops rx8025_rtc_ops = ;
static int rx8025_get_clock_adjust(struct device *dev, int *adj)
static int rx8025_set_clock_adjust(struct device *dev, int adj)
static ssize_t rx8025_sysfs_show_clock_adjust(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rx8025_sysfs_store_clock_adjust(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(clock_adjust_ppb, S_IRUGO | S_IWUSR,
rx8025_sysfs_show_clock_adjust,
rx8025_sysfs_store_clock_adjust);
static int rx8025_sysfs_register(struct device *dev)
static void rx8025_sysfs_unregister(struct device *dev)
static int __devinit rx8025_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit rx8025_remove(struct i2c_client *client)
static struct i2c_driver rx8025_driver = ;
static int __init rx8025_init(void)
static void __exit rx8025_exit(void)
MODULE_AUTHOR("Wolfgang Grandegger <wg@grandegger.com>");
MODULE_DESCRIPTION("RX-8025 SA/NB RTC driver");
MODULE_LICENSE("GPL");
module_init(rx8025_init);
module_exit(rx8025_exit);
