#define	DRIVER_NAME "tmp102"
#define	TMP102_TEMP_REG			0x00
#define	TMP102_CONF_REG			0x01
#define		TMP102_CONF_SD		0x0100
#define		TMP102_CONF_TM		0x0200
#define		TMP102_CONF_POL		0x0400
#define		TMP102_CONF_F0		0x0800
#define		TMP102_CONF_F1		0x1000
#define		TMP102_CONF_R0		0x2000
#define		TMP102_CONF_R1		0x4000
#define		TMP102_CONF_OS		0x8000
#define		TMP102_CONF_EM		0x0010
#define		TMP102_CONF_AL		0x0020
#define		TMP102_CONF_CR0		0x0040
#define		TMP102_CONF_CR1		0x0080
#define	TMP102_TLOW_REG			0x02
#define	TMP102_THIGH_REG		0x03
struct tmp102 ;
static inline int tmp102_read_reg(struct i2c_client *client, u8 reg)
static inline int tmp102_write_reg(struct i2c_client *client, u8 reg, u16 val)
static inline int tmp102_reg_to_mC(s16 val)
static inline u16 tmp102_mC_to_reg(int val)
static const u8 tmp102_reg[] = ;
static struct tmp102 *tmp102_update_device(struct i2c_client *client)
static ssize_t tmp102_show_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t tmp102_set_temp(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, tmp102_show_temp, NULL , 0);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IWUSR | S_IRUGO, tmp102_show_temp,
tmp102_set_temp, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, tmp102_show_temp,
tmp102_set_temp, 2);
static struct attribute *tmp102_attributes[] = ;
static const struct attribute_group tmp102_attr_group = ;
#define TMP102_CONFIG  (TMP102_CONF_TM | TMP102_CONF_EM | TMP102_CONF_CR1)
#define TMP102_CONFIG_RD_ONLY (TMP102_CONF_R0 | TMP102_CONF_R1 | TMP102_CONF_AL)
static int __devinit tmp102_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tmp102_remove(struct i2c_client *client)
static int tmp102_suspend(struct device *dev)
static int tmp102_resume(struct device *dev)
static const struct dev_pm_ops tmp102_dev_pm_ops = ;
#define TMP102_DEV_PM_OPS (&tmp102_dev_pm_ops)
#define	TMP102_DEV_PM_OPS NULL
static const struct i2c_device_id tmp102_id[] = ;
MODULE_DEVICE_TABLE(i2c, tmp102_id);
static struct i2c_driver tmp102_driver = ;
static int __init tmp102_init(void)
module_init(tmp102_init);
static void __exit tmp102_exit(void)
module_exit(tmp102_exit);
MODULE_AUTHOR("Steven King <sfking@fdwdc.com>");
MODULE_DESCRIPTION("Texas Instruments TMP102 temperature sensor driver");
MODULE_LICENSE("GPL");
