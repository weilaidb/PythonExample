#define BMP085_I2C_ADDRESS		0x77
#define BMP085_CHIP_ID			0x55
#define BMP085_CALIBRATION_DATA_START	0xAA
#define BMP085_CALIBRATION_DATA_LENGTH	11
#define BMP085_CHIP_ID_REG		0xD0
#define BMP085_VERSION_REG		0xD1
#define BMP085_CTRL_REG			0xF4
#define BMP085_TEMP_MEASUREMENT		0x2E
#define BMP085_PRESSURE_MEASUREMENT	0x34
#define BMP085_CONVERSION_REGISTER_MSB	0xF6
#define BMP085_CONVERSION_REGISTER_LSB	0xF7
#define BMP085_CONVERSION_REGISTER_XLSB	0xF8
#define BMP085_TEMP_CONVERSION_TIME	5
#define BMP085_CLIENT_NAME		"bmp085"
static const unsigned short normal_i2c[] = ;
struct bmp085_calibration_data ;
struct bmp085_data ;
static s32 bmp085_read_calibration_data(struct i2c_client *client)
static s32 bmp085_update_raw_temperature(struct bmp085_data *data)
static s32 bmp085_update_raw_pressure(struct bmp085_data *data)
static s32 bmp085_get_temperature(struct bmp085_data *data, int *temperature)
static s32 bmp085_get_pressure(struct bmp085_data *data, int *pressure)
static void bmp085_set_oversampling(struct bmp085_data *data,
unsigned char oversampling)
static unsigned char bmp085_get_oversampling(struct bmp085_data *data)
static ssize_t set_oversampling(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_oversampling(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(oversampling, S_IWUSR | S_IRUGO,
show_oversampling, set_oversampling);
static ssize_t show_temperature(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temp0_input, S_IRUGO, show_temperature, NULL);
static ssize_t show_pressure(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(pressure0_input, S_IRUGO, show_pressure, NULL);
static struct attribute *bmp085_attributes[] = ;
static const struct attribute_group bmp085_attr_group = ;
static int bmp085_detect(struct i2c_client *client, struct i2c_board_info *info)
static int bmp085_init_client(struct i2c_client *client)
static int __devinit bmp085_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit bmp085_remove(struct i2c_client *client)
static const struct i2c_device_id bmp085_id[] = ;
MODULE_DEVICE_TABLE(i2c, bmp085_id);
static struct i2c_driver bmp085_driver = ;
static int __init bmp085_init(void)
static void __exit bmp085_exit(void)
MODULE_AUTHOR("Christoph Mair <christoph.mair@gmail.com");
MODULE_DESCRIPTION("BMP085 driver");
MODULE_LICENSE("GPL");
module_init(bmp085_init);
module_exit(bmp085_exit);
