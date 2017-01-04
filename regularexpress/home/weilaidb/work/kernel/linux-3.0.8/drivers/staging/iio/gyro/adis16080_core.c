#define ADIS16080_DIN_GYRO   (0 << 10)
#define ADIS16080_DIN_TEMP   (1 << 10)
#define ADIS16080_DIN_AIN1   (2 << 10)
#define ADIS16080_DIN_AIN2   (3 << 10)
#define ADIS16080_DIN_WRITE  (1 << 15)
struct adis16080_state ;
static int adis16080_spi_write(struct device *dev,
u16 val)
static int adis16080_spi_read(struct device *dev,
u16 *val)
static ssize_t adis16080_read(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_GYRO_Z(adis16080_read, ADIS16080_DIN_GYRO);
static IIO_DEVICE_ATTR(temp_raw, S_IRUGO, adis16080_read, NULL,
ADIS16080_DIN_TEMP);
static IIO_DEV_ATTR_IN_RAW(0, adis16080_read, ADIS16080_DIN_AIN1);
static IIO_DEV_ATTR_IN_RAW(1, adis16080_read, ADIS16080_DIN_AIN2);
static struct attribute *adis16080_attributes[] = ;
static const struct attribute_group adis16080_attribute_group = ;
static const struct iio_info adis16080_info = ;
static int __devinit adis16080_probe(struct spi_device *spi)
static int adis16080_remove(struct spi_device *spi)
static struct spi_driver adis16080_driver = ;
static __init int adis16080_init(void)
module_init(adis16080_init);
static __exit void adis16080_exit(void)
module_exit(adis16080_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16080/100 Yaw Rate Gyroscope Driver");
MODULE_LICENSE("GPL v2");
