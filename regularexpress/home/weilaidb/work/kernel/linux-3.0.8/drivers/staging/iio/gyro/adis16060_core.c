#define ADIS16060_GYRO		0x20
#define ADIS16060_TEMP_OUT	0x10
#define ADIS16060_AIN2		0x80
#define ADIS16060_AIN1		0x40
struct adis16060_state ;
static struct adis16060_state *adis16060_st;
static int adis16060_spi_write(struct device *dev,
u8 val)
static int adis16060_spi_read(struct device *dev,
u16 *val)
static ssize_t adis16060_read(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_GYRO_Z(adis16060_read, ADIS16060_GYRO);
static IIO_DEVICE_ATTR(temp_raw, S_IRUGO, adis16060_read, NULL,
ADIS16060_TEMP_OUT);
static IIO_CONST_ATTR_TEMP_SCALE("34");
static IIO_CONST_ATTR_TEMP_OFFSET("-7461.117");
static IIO_DEV_ATTR_IN_RAW(0, adis16060_read, ADIS16060_AIN1);
static IIO_DEV_ATTR_IN_RAW(1, adis16060_read, ADIS16060_AIN2);
static IIO_CONST_ATTR(name, "adis16060");
static struct attribute *adis16060_attributes[] = ;
static const struct attribute_group adis16060_attribute_group = ;
static const struct iio_info adis16060_info = ;
static int __devinit adis16060_r_probe(struct spi_device *spi)
static int adis16060_r_remove(struct spi_device *spi)
static int __devinit adis16060_w_probe(struct spi_device *spi)
static int adis16060_w_remove(struct spi_device *spi)
static struct spi_driver adis16060_r_driver = ;
static struct spi_driver adis16060_w_driver = ;
static __init int adis16060_init(void)
module_init(adis16060_init);
static __exit void adis16060_exit(void)
module_exit(adis16060_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16060 Yaw Rate Gyroscope Driver");
MODULE_LICENSE("GPL v2");
