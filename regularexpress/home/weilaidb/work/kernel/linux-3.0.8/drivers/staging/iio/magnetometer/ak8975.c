#define AK8975_REG_WIA			0x00
#define AK8975_DEVICE_ID		0x48
#define AK8975_REG_INFO			0x01
#define AK8975_REG_ST1			0x02
#define AK8975_REG_ST1_DRDY_SHIFT	0
#define AK8975_REG_ST1_DRDY_MASK	(1 << AK8975_REG_ST1_DRDY_SHIFT)
#define AK8975_REG_HXL			0x03
#define AK8975_REG_HXH			0x04
#define AK8975_REG_HYL			0x05
#define AK8975_REG_HYH			0x06
#define AK8975_REG_HZL			0x07
#define AK8975_REG_HZH			0x08
#define AK8975_REG_ST2			0x09
#define AK8975_REG_ST2_DERR_SHIFT	2
#define AK8975_REG_ST2_DERR_MASK	(1 << AK8975_REG_ST2_DERR_SHIFT)
#define AK8975_REG_ST2_HOFL_SHIFT	3
#define AK8975_REG_ST2_HOFL_MASK	(1 << AK8975_REG_ST2_HOFL_SHIFT)
#define AK8975_REG_CNTL			0x0A
#define AK8975_REG_CNTL_MODE_SHIFT	0
#define AK8975_REG_CNTL_MODE_MASK	(0xF << AK8975_REG_CNTL_MODE_SHIFT)
#define AK8975_REG_CNTL_MODE_POWER_DOWN	0
#define AK8975_REG_CNTL_MODE_ONCE	1
#define AK8975_REG_CNTL_MODE_SELF_TEST	8
#define AK8975_REG_CNTL_MODE_FUSE_ROM	0xF
#define AK8975_REG_RSVC			0x0B
#define AK8975_REG_ASTC			0x0C
#define AK8975_REG_TS1			0x0D
#define AK8975_REG_TS2			0x0E
#define AK8975_REG_I2CDIS		0x0F
#define AK8975_REG_ASAX			0x10
#define AK8975_REG_ASAY			0x11
#define AK8975_REG_ASAZ			0x12
#define AK8975_MAX_REGS			AK8975_REG_ASAZ
#define AK8975_MAX_CONVERSION_TIMEOUT	500
#define AK8975_CONVERSION_DONE_POLL_TIME 10
struct ak8975_data ;
static int ak8975_write_data(struct i2c_client *client,
u8 reg, u8 val, u8 mask, u8 shift)
static int ak8975_read_data(struct i2c_client *client,
u8 reg, u8 length, u8 *buffer)
static int ak8975_setup(struct i2c_client *client)
static ssize_t show_mode(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t store_mode(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_scale(struct device *dev, struct device_attribute *devattr,
char *buf)
static int wait_conversion_complete_gpio(struct ak8975_data *data)
static int wait_conversion_complete_polled(struct ak8975_data *data)
static ssize_t show_raw(struct device *dev, struct device_attribute *devattr,
char *buf)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR, show_mode, store_mode, 0);
static IIO_DEV_ATTR_MAGN_X_SCALE(S_IRUGO, show_scale, NULL, 0);
static IIO_DEV_ATTR_MAGN_Y_SCALE(S_IRUGO, show_scale, NULL, 1);
static IIO_DEV_ATTR_MAGN_Z_SCALE(S_IRUGO, show_scale, NULL, 2);
static IIO_DEV_ATTR_MAGN_X(show_raw, AK8975_REG_HXL);
static IIO_DEV_ATTR_MAGN_Y(show_raw, AK8975_REG_HYL);
static IIO_DEV_ATTR_MAGN_Z(show_raw, AK8975_REG_HZL);
static struct attribute *ak8975_attr[] = ;
static struct attribute_group ak8975_attr_group = ;
static const struct iio_info ak8975_info = ;
static int ak8975_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ak8975_remove(struct i2c_client *client)
static const struct i2c_device_id ak8975_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak8975_id);
static struct i2c_driver ak8975_driver = ;
static int __init ak8975_init(void)
static void __exit ak8975_exit(void)
module_init(ak8975_init);
module_exit(ak8975_exit);
MODULE_AUTHOR("Laxman Dewangan <ldewangan@nvidia.com>");
MODULE_DESCRIPTION("AK8975 magnetometer driver");
MODULE_LICENSE("GPL");
