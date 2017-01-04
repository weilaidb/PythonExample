#define ADIS16130_CON         0x0
#define ADIS16130_CON_RD      (1 << 6)
#define ADIS16130_IOP         0x1
#define ADIS16130_IOP_ALL_RDY (1 << 3)
#define ADIS16130_IOP_SYNC    (1 << 0)
#define ADIS16130_RATEDATA    0x8
#define ADIS16130_TEMPDATA    0xA
#define ADIS16130_RATECS      0x28
#define ADIS16130_RATECS_EN   (1 << 3)
#define ADIS16130_TEMPCS      0x2A
#define ADIS16130_TEMPCS_EN   (1 << 3)
#define ADIS16130_RATECONV    0x30
#define ADIS16130_TEMPCONV    0x32
#define ADIS16130_MODE        0x38
#define ADIS16130_MODE_24BIT  (1 << 1)
struct adis16130_state ;
static int adis16130_spi_write(struct device *dev, u8 reg_addr,
u8 val)
static int adis16130_spi_read(struct device *dev, u8 reg_addr,
u32 *val)
static ssize_t adis16130_val_read(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16130_bitsmode_read(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16130_bitsmode_write(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(temp_raw, S_IRUGO, adis16130_val_read, NULL,
ADIS16130_TEMPDATA);
static IIO_DEV_ATTR_GYRO_Z(adis16130_val_read, ADIS16130_RATEDATA);
static IIO_DEVICE_ATTR(gyro_z_type, S_IWUSR | S_IRUGO, adis16130_bitsmode_read,
adis16130_bitsmode_write,
ADIS16130_MODE);
static IIO_CONST_ATTR(gyro_z_type_available, "s16 s24");
static struct attribute *adis16130_attributes[] = ;
static const struct attribute_group adis16130_attribute_group = ;
static const struct iio_info adis16130_info = ;
static int __devinit adis16130_probe(struct spi_device *spi)
static int adis16130_remove(struct spi_device *spi)
static struct spi_driver adis16130_driver = ;
static __init int adis16130_init(void)
module_init(adis16130_init);
static __exit void adis16130_exit(void)
module_exit(adis16130_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16130 High Precision Angular Rate");
MODULE_LICENSE("GPL v2");
