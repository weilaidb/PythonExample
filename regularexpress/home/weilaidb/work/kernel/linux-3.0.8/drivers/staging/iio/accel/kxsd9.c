#define KXSD9_REG_X		0x00
#define KXSD9_REG_Y		0x02
#define KXSD9_REG_Z		0x04
#define KXSD9_REG_AUX		0x06
#define KXSD9_REG_RESET		0x0a
#define KXSD9_REG_CTRL_C	0x0c
#define KXSD9_FS_8		0x00
#define KXSD9_FS_6		0x01
#define KXSD9_FS_4		0x02
#define KXSD9_FS_2		0x03
#define KXSD9_FS_MASK		0x03
#define KXSD9_REG_CTRL_B	0x0d
#define KXSD9_REG_CTRL_A	0x0e
#define KXSD9_READ(a) (0x80 | (a))
#define KXSD9_WRITE(a) (a)
#define KXSD9_SCALE_2G "0.011978"
#define KXSD9_SCALE_4G "0.023927"
#define KXSD9_SCALE_6G "0.035934"
#define KXSD9_SCALE_8G "0.047853"
#define KXSD9_STATE_RX_SIZE 2
#define KXSD9_STATE_TX_SIZE 4
struct kxsd9_state ;
static ssize_t kxsd9_read_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t kxsd9_write_scale(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t kxsd9_read_accel(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_ACCEL_X(kxsd9_read_accel, KXSD9_REG_X);
static IIO_DEV_ATTR_ACCEL_Y(kxsd9_read_accel, KXSD9_REG_Y);
static IIO_DEV_ATTR_ACCEL_Z(kxsd9_read_accel, KXSD9_REG_Z);
static IIO_DEV_ATTR_IN_RAW(0, kxsd9_read_accel, KXSD9_REG_AUX);
static IIO_DEVICE_ATTR(accel_scale,
S_IRUGO | S_IWUSR,
kxsd9_read_scale,
kxsd9_write_scale,
0);
static IIO_CONST_ATTR(accel_scale_available,
KXSD9_SCALE_2G " "
KXSD9_SCALE_4G " "
KXSD9_SCALE_6G " "
KXSD9_SCALE_8G);
static struct attribute *kxsd9_attributes[] = ;
static const struct attribute_group kxsd9_attribute_group = ;
static int __devinit kxsd9_power_up(struct spi_device *spi)
;
static const struct iio_info kxsd9_info = ;
static int __devinit kxsd9_probe(struct spi_device *spi)
static int __devexit kxsd9_remove(struct spi_device *spi)
static struct spi_driver kxsd9_driver = ;
static __init int kxsd9_spi_init(void)
module_init(kxsd9_spi_init);
static __exit void kxsd9_spi_exit(void)
module_exit(kxsd9_spi_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("Kionix KXSD9 SPI driver");
MODULE_LICENSE("GPL v2");
