#define CMD_READ	0x00
#define CMD_SET		0xff
#define DIAG_NORMAL	0x03
#define DIAG_OVERLOAD	0x02
#define DIAG_OPEN	0x01
#define DIAG_SHORTGND	0x00
struct tle62x0_state ;
static int to_gpio_num(struct device_attribute *attr);
static inline int tle62x0_write(struct tle62x0_state *st)
static inline int tle62x0_read(struct tle62x0_state *st)
static unsigned char *decode_fault(unsigned int fault_code)
static ssize_t tle62x0_status_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(status_show, S_IRUGO, tle62x0_status_show, NULL);
static ssize_t tle62x0_gpio_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tle62x0_gpio_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(gpio1, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio2, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio3, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio4, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio5, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio6, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio7, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio8, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio9, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio10, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio11, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio12, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio13, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio14, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio15, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static DEVICE_ATTR(gpio16, S_IWUSR|S_IRUGO,
tle62x0_gpio_show, tle62x0_gpio_store);
static struct device_attribute *gpio_attrs[] = ;
static int to_gpio_num(struct device_attribute *attr)
static int __devinit tle62x0_probe(struct spi_device *spi)
static int __devexit tle62x0_remove(struct spi_device *spi)
static struct spi_driver tle62x0_driver = ;
static __init int tle62x0_init(void)
static __exit void tle62x0_exit(void)
module_init(tle62x0_init);
module_exit(tle62x0_exit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("TLE62x0 SPI driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:tle62x0");
