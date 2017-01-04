int ad7606_reset(struct ad7606_state *st)
static int ad7606_scan_direct(struct iio_dev *indio_dev, unsigned ch)
static int ad7606_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static ssize_t ad7606_show_range(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7606_store_range(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static IIO_DEVICE_ATTR(range, S_IRUGO | S_IWUSR, \
ad7606_show_range, ad7606_store_range, 0);
static IIO_CONST_ATTR(range_available, "5000 10000");
static ssize_t ad7606_show_oversampling_ratio(struct device *dev,
struct device_attribute *attr, char *buf)
static int ad7606_oversampling_get_index(unsigned val)
static ssize_t ad7606_store_oversampling_ratio(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static IIO_DEVICE_ATTR(oversampling_ratio, S_IRUGO | S_IWUSR,
ad7606_show_oversampling_ratio,
ad7606_store_oversampling_ratio, 0);
static IIO_CONST_ATTR(oversampling_ratio_available, "0 2 4 8 16 32 64");
static struct attribute *ad7606_attributes[] = ;
static mode_t ad7606_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int n)
static const struct attribute_group ad7606_attribute_group = ;
static struct iio_chan_spec ad7606_8_channels[] = ;
static struct iio_chan_spec ad7606_6_channels[] = ;
static struct iio_chan_spec ad7606_4_channels[] = ;
static const struct ad7606_chip_info ad7606_chip_info_tbl[] = ;
static int ad7606_request_gpios(struct ad7606_state *st)
static void ad7606_free_gpios(struct ad7606_state *st)
static irqreturn_t ad7606_interrupt(int irq, void *dev_id)
;
static const struct iio_info ad7606_info = ;
struct iio_dev *ad7606_probe(struct device *dev, int irq,
void __iomem *base_address,
unsigned id,
const struct ad7606_bus_ops *bops)
int ad7606_remove(struct iio_dev *indio_dev)
void ad7606_suspend(struct iio_dev *indio_dev)
void ad7606_resume(struct iio_dev *indio_dev)
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7606 ADC");
MODULE_LICENSE("GPL v2");
