#define MAX1111_TX_BUF_SIZE	1
#define MAX1111_RX_BUF_SIZE	2
#define MAX1111_CTRL_PD0      (1u << 0)
#define MAX1111_CTRL_PD1      (1u << 1)
#define MAX1111_CTRL_SGL      (1u << 2)
#define MAX1111_CTRL_UNI      (1u << 3)
#define MAX1111_CTRL_SEL_SH   (5)
#define MAX1111_CTRL_STR      (1u << 7)
struct max1111_data ;
static int max1111_read(struct device *dev, int channel)
static struct max1111_data *the_max1111;
int max1111_read_channel(int channel)
EXPORT_SYMBOL(max1111_read_channel);
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_adc(struct device *dev,
struct device_attribute *attr, char *buf)
#define MAX1111_ADC_ATTR(_id)		\
SENSOR_DEVICE_ATTR(adc##_id##_in, S_IRUGO, show_adc, NULL, _id)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static MAX1111_ADC_ATTR(0);
static MAX1111_ADC_ATTR(1);
static MAX1111_ADC_ATTR(2);
static MAX1111_ADC_ATTR(3);
static struct attribute *max1111_attributes[] = ;
static const struct attribute_group max1111_attr_group = ;
static int setup_transfer(struct max1111_data *data)
static int __devinit max1111_probe(struct spi_device *spi)
static int __devexit max1111_remove(struct spi_device *spi)
static struct spi_driver max1111_driver = ;
static int __init max1111_init(void)
module_init(max1111_init);
static void __exit max1111_exit(void)
module_exit(max1111_exit);
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>");
MODULE_DESCRIPTION("MAX1111 ADC Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:max1111");
