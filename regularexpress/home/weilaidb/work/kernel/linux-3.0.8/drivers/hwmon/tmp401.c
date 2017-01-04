static const unsigned short normal_i2c[] = ;
enum chips ;
#define TMP401_STATUS				0x02
#define TMP401_CONFIG_READ			0x03
#define TMP401_CONFIG_WRITE			0x09
#define TMP401_CONVERSION_RATE_READ		0x04
#define TMP401_CONVERSION_RATE_WRITE		0x0A
#define TMP401_TEMP_CRIT_HYST			0x21
#define TMP401_CONSECUTIVE_ALERT		0x22
#define TMP401_MANUFACTURER_ID_REG		0xFE
#define TMP401_DEVICE_ID_REG			0xFF
#define TMP411_N_FACTOR_REG			0x18
static const u8 TMP401_TEMP_MSB[2]			= ;
static const u8 TMP401_TEMP_LSB[2]			= ;
static const u8 TMP401_TEMP_LOW_LIMIT_MSB_READ[2]	= ;
static const u8 TMP401_TEMP_LOW_LIMIT_MSB_WRITE[2]	= ;
static const u8 TMP401_TEMP_LOW_LIMIT_LSB[2]		= ;
static const u8 TMP401_TEMP_HIGH_LIMIT_MSB_READ[2]	= ;
static const u8 TMP401_TEMP_HIGH_LIMIT_MSB_WRITE[2]	= ;
static const u8 TMP401_TEMP_HIGH_LIMIT_LSB[2]		= ;
static const u8 TMP401_TEMP_CRIT_LIMIT[2]		= ;
static const u8 TMP411_TEMP_LOWEST_MSB[2]		= ;
static const u8 TMP411_TEMP_LOWEST_LSB[2]		= ;
static const u8 TMP411_TEMP_HIGHEST_MSB[2]		= ;
static const u8 TMP411_TEMP_HIGHEST_LSB[2]		= ;
#define TMP401_CONFIG_RANGE		0x04
#define TMP401_CONFIG_SHUTDOWN		0x40
#define TMP401_STATUS_LOCAL_CRIT		0x01
#define TMP401_STATUS_REMOTE_CRIT		0x02
#define TMP401_STATUS_REMOTE_OPEN		0x04
#define TMP401_STATUS_REMOTE_LOW		0x08
#define TMP401_STATUS_REMOTE_HIGH		0x10
#define TMP401_STATUS_LOCAL_LOW		0x20
#define TMP401_STATUS_LOCAL_HIGH		0x40
#define TMP401_MANUFACTURER_ID			0x55
#define TMP401_DEVICE_ID			0x11
#define TMP411_DEVICE_ID			0x12
static const struct i2c_device_id tmp401_id[] = ;
MODULE_DEVICE_TABLE(i2c, tmp401_id);
struct tmp401_data ;
static int tmp401_register_to_temp(u16 reg, u8 config)
static u16 tmp401_temp_to_register(long temp, u8 config)
static int tmp401_crit_register_to_temp(u8 reg, u8 config)
static u8 tmp401_crit_temp_to_register(long temp, u8 config)
static struct tmp401_data *tmp401_update_device_reg16(
struct i2c_client *client, struct tmp401_data *data)
static struct tmp401_data *tmp401_update_device(struct device *dev)
static ssize_t show_temp_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_min(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_crit(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_crit_hyst(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_lowest(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_highest(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_status(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t store_temp_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t store_temp_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t store_temp_crit(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t store_temp_crit_hyst(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t reset_temp_history(struct device *dev,
struct device_attribute	*devattr, const char *buf, size_t count)
static struct sensor_device_attribute tmp401_attr[] = ;
static struct sensor_device_attribute tmp411_attr[] = ;
static void tmp401_init_client(struct i2c_client *client)
static int tmp401_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int tmp401_remove(struct i2c_client *client)
static int tmp401_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_driver tmp401_driver = ;
static int __init tmp401_init(void)
static void __exit tmp401_exit(void)
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_DESCRIPTION("Texas Instruments TMP401 temperature sensor driver");
MODULE_LICENSE("GPL");
module_init(tmp401_init);
module_exit(tmp401_exit);
