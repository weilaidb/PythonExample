#define HMC5843_I2C_ADDRESS			0x1E
#define HMC5843_CONFIG_REG_A			0x00
#define HMC5843_CONFIG_REG_B			0x01
#define HMC5843_MODE_REG			0x02
#define HMC5843_DATA_OUT_X_MSB_REG		0x03
#define HMC5843_DATA_OUT_X_LSB_REG		0x04
#define HMC5843_DATA_OUT_Y_MSB_REG		0x05
#define HMC5843_DATA_OUT_Y_LSB_REG		0x06
#define HMC5843_DATA_OUT_Z_MSB_REG		0x07
#define HMC5843_DATA_OUT_Z_LSB_REG		0x08
#define HMC5843_STATUS_REG			0x09
#define HMC5843_ID_REG_A			0x0A
#define HMC5843_ID_REG_B			0x0B
#define HMC5843_ID_REG_C			0x0C
#define HMC5843_ID_REG_LENGTH			0x03
#define HMC5843_ID_STRING			"H43"
#define RANGE_GAIN_OFFSET			0x05
#define	RANGE_0_7				0x00
#define	RANGE_1_0				0x01
#define	RANGE_1_5				0x02
#define	RANGE_2_0				0x03
#define	RANGE_3_2				0x04
#define	RANGE_3_8				0x05
#define	RANGE_4_5				0x06
#define	RANGE_6_5				0x07
#define	DATA_READY  				0x01
#define	DATA_OUTPUT_LOCK  			0x02
#define	VOLTAGE_REGULATOR_ENABLED  		0x04
#define	MODE_CONVERSION_CONTINUOUS		0x00
#define	MODE_CONVERSION_SINGLE			0x01
#define	MODE_IDLE				0x02
#define	MODE_SLEEP				0x03
#define RATE_OFFSET				0x02
#define RATE_BITMASK				0x1C
#define	RATE_5					0x00
#define	RATE_10					0x01
#define	RATE_20					0x02
#define	RATE_50					0x03
#define	RATE_100				0x04
#define	RATE_200				0x05
#define	RATE_500				0x06
#define	RATE_NOT_USED				0x07
#define	CONF_NORMAL  				0x00
#define	CONF_POSITIVE_BIAS			0x01
#define	CONF_NEGATIVE_BIAS			0x02
#define	CONF_NOT_USED				0x03
#define	MEAS_CONF_MASK				0x03
static const char *regval_to_scale[] = ;
static const int regval_to_input_field_mg[] = ;
static const char *regval_to_samp_freq[] = ;
static const unsigned short normal_i2c[] = ;
struct hmc5843_data ;
static void hmc5843_init_client(struct i2c_client *client);
static s32 hmc5843_configure(struct i2c_client *client,
u8 operating_mode)
static ssize_t hmc5843_read_measurement(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_MAGN_X(hmc5843_read_measurement,
HMC5843_DATA_OUT_X_MSB_REG);
static IIO_DEV_ATTR_MAGN_Y(hmc5843_read_measurement,
HMC5843_DATA_OUT_Y_MSB_REG);
static IIO_DEV_ATTR_MAGN_Z(hmc5843_read_measurement,
HMC5843_DATA_OUT_Z_MSB_REG);
static ssize_t hmc5843_show_operating_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hmc5843_set_operating_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static IIO_DEVICE_ATTR(operating_mode,
S_IWUSR | S_IRUGO,
hmc5843_show_operating_mode,
hmc5843_set_operating_mode,
HMC5843_MODE_REG);
static s32 hmc5843_set_meas_conf(struct i2c_client *client,
u8 meas_conf)
static ssize_t hmc5843_show_measurement_configuration(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hmc5843_set_measurement_configuration(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static IIO_DEVICE_ATTR(meas_conf,
S_IWUSR | S_IRUGO,
hmc5843_show_measurement_configuration,
hmc5843_set_measurement_configuration,
0);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("0.5 1 2 5 10 20 50");
static s32 hmc5843_set_rate(struct i2c_client *client,
u8 rate)
static ssize_t set_sampling_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_sampling_frequency(struct device *dev,
struct device_attribute *attr, char *buf)
static IIO_DEVICE_ATTR(sampling_frequency,
S_IWUSR | S_IRUGO,
show_sampling_frequency,
set_sampling_frequency,
HMC5843_CONFIG_REG_A);
static ssize_t show_range(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_range(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static IIO_DEVICE_ATTR(magn_range,
S_IWUSR | S_IRUGO,
show_range,
set_range,
HMC5843_CONFIG_REG_B);
static ssize_t show_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(magn_scale,
S_IRUGO,
show_scale,
NULL , 0);
static struct attribute *hmc5843_attributes[] = ;
static const struct attribute_group hmc5843_group = ;
static int hmc5843_detect(struct i2c_client *client,
struct i2c_board_info *info)
static void hmc5843_init_client(struct i2c_client *client)
static const struct iio_info hmc5843_info = ;
static int hmc5843_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int hmc5843_remove(struct i2c_client *client)
static int hmc5843_suspend(struct i2c_client *client, pm_message_t mesg)
static int hmc5843_resume(struct i2c_client *client)
static const struct i2c_device_id hmc5843_id[] = ;
static struct i2c_driver hmc5843_driver = ;
static int __init hmc5843_init(void)
static void __exit hmc5843_exit(void)
MODULE_AUTHOR("Shubhrajyoti Datta <shubhrajyoti@ti.com");
MODULE_DESCRIPTION("HMC5843 driver");
MODULE_LICENSE("GPL");
module_init(hmc5843_init);
module_exit(hmc5843_exit);
