#define TSL258X_MAX_DEVICE_REGS		32
#define	TSL258X_REG_MAX		8
#define TSL258X_CNTRL			0x00
#define TSL258X_ALS_TIME		0X01
#define TSL258X_INTERRUPT		0x02
#define TSL258X_GAIN			0x07
#define TSL258X_REVID			0x11
#define TSL258X_CHIPID			0x12
#define TSL258X_ALS_CHAN0LO		0x14
#define TSL258X_ALS_CHAN0HI		0x15
#define TSL258X_ALS_CHAN1LO		0x16
#define TSL258X_ALS_CHAN1HI		0x17
#define TSL258X_TMR_LO			0x18
#define TSL258X_TMR_HI			0x19
#define TSL258X_CMD_REG			0x80
#define TSL258X_CMD_SPL_FN		0x60
#define TSL258X_CMD_ALS_INT_CLR	0X01
#define TSL258X_CNTL_ADC_ENBL	0x02
#define TSL258X_CNTL_PWR_ON		0x01
#define TSL258X_STA_ADC_VALID	0x01
#define TSL258X_STA_ADC_INTR	0x10
#define	TSL258X_LUX_CALC_OVER_FLOW		65535
enum  TSL258X_CHIP_WORKING_STATUS;
struct taos_als_info ;
struct taos_settings ;
struct tsl2583_chip ;
static const u8 taos_config[8] = ;
struct taos_lux ;
struct taos_lux taos_device_lux[11] = ;
struct gainadj ;
static const struct gainadj gainadj[] = ;
static void taos_defaults(struct tsl2583_chip *chip)
static int
taos_i2c_read(struct i2c_client *client, u8 reg, u8 *val, unsigned int len)
static int taos_get_lux(struct i2c_client *client)
int taos_als_calibrate(struct i2c_client *client)
static int taos_chip_on(struct i2c_client *client)
static int taos_chip_off(struct i2c_client *client)
static ssize_t taos_device_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_power_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_power_state_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_gain_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_gain_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_gain_available_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_als_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_als_time_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_als_time_available_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_als_trim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_als_trim_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_als_cal_target_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_als_cal_target_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_lux_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t taos_do_calibrate(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t taos_luxtable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taos_luxtable_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static DEVICE_ATTR(name, S_IRUGO, taos_device_id, NULL);
static DEVICE_ATTR(power_state, S_IRUGO | S_IWUSR,
taos_power_state_show, taos_power_state_store);
static DEVICE_ATTR(illuminance0_calibscale, S_IRUGO | S_IWUSR,
taos_gain_show, taos_gain_store);
static DEVICE_ATTR(illuminance0_calibscale_available, S_IRUGO,
taos_gain_available_show, NULL);
static DEVICE_ATTR(illuminance0_integration_time, S_IRUGO | S_IWUSR,
taos_als_time_show, taos_als_time_store);
static DEVICE_ATTR(illuminance0_integration_time_available, S_IRUGO,
taos_als_time_available_show, NULL);
static DEVICE_ATTR(illuminance0_calibbias, S_IRUGO | S_IWUSR,
taos_als_trim_show, taos_als_trim_store);
static DEVICE_ATTR(illuminance0_input_target, S_IRUGO | S_IWUSR,
taos_als_cal_target_show, taos_als_cal_target_store);
static DEVICE_ATTR(illuminance0_input, S_IRUGO, taos_lux_show, NULL);
static DEVICE_ATTR(illuminance0_calibrate, S_IWUSR, NULL, taos_do_calibrate);
static DEVICE_ATTR(illuminance0_lux_table, S_IRUGO | S_IWUSR,
taos_luxtable_show, taos_luxtable_store);
static struct attribute *sysfs_attrs_ctrl[] = ;
static struct attribute_group tsl2583_attribute_group = ;
static int taos_tsl258x_device(unsigned char *bufp)
static const struct iio_info tsl2583_info = ;
static int __devinit taos_probe(struct i2c_client *clientp,
const struct i2c_device_id *idp)
static int taos_suspend(struct i2c_client *client, pm_message_t state)
static int taos_resume(struct i2c_client *client)
static int __devexit taos_remove(struct i2c_client *client)
static struct i2c_device_id taos_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, taos_idtable);
static struct i2c_driver taos_driver = ;
static int __init taos_init(void)
static void __exit taos_exit(void)
module_init(taos_init);
module_exit(taos_exit);
MODULE_AUTHOR("J. August Brenner<jbrenner@taosinc.com>");
MODULE_DESCRIPTION("TAOS tsl2583 ambient light sensor driver");
MODULE_LICENSE("GPL");
