static int adxrs450_spi_read_reg_16(struct device *dev,
u8 reg_address,
u16 *val)
static int adxrs450_spi_write_reg_16(struct device *dev,
u8 reg_address,
u16 val)
static int adxrs450_spi_sensor_data(struct device *dev, s16 *val)
static int adxrs450_spi_initial(struct adxrs450_state *st,
u32 *val, char chk)
static ssize_t adxrs450_read_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adxrs450_read_quad(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adxrs450_write_dnc(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adxrs450_read_sensor_data(struct device *dev,
struct device_attribute *attr,
char *buf)
static int adxrs450_initial_setup(struct adxrs450_state *st)
static IIO_DEV_ATTR_GYRO_Z(adxrs450_read_sensor_data, 0);
static IIO_DEV_ATTR_TEMP_RAW(adxrs450_read_temp);
static IIO_DEV_ATTR_GYRO_Z_QUADRATURE_CORRECTION(adxrs450_read_quad, 0);
static IIO_DEV_ATTR_GYRO_Z_CALIBBIAS(S_IWUSR,
NULL, adxrs450_write_dnc, 0);
static IIO_CONST_ATTR(name, "adxrs450");
static struct attribute *adxrs450_attributes[] = ;
static const struct attribute_group adxrs450_attribute_group = ;
static const struct iio_info adxrs450_info = ;
static int __devinit adxrs450_probe(struct spi_device *spi)
static int adxrs450_remove(struct spi_device *spi)
static struct spi_driver adxrs450_driver = ;
static __init int adxrs450_init(void)
module_init(adxrs450_init);
static __exit void adxrs450_exit(void)
module_exit(adxrs450_exit);
MODULE_AUTHOR("Cliff Cai <cliff.cai@xxxxxxxxxx>");
MODULE_DESCRIPTION("Analog Devices ADXRS450 Gyroscope SPI driver");
MODULE_LICENSE("GPL v2");
