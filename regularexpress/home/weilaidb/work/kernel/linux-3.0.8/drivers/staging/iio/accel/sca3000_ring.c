static int sca3000_read_data(struct sca3000_state *st,
uint8_t reg_address_high,
u8 **rx_p,
int len)
static int sca3000_read_first_n_hw_rb(struct iio_ring_buffer *r,
size_t count, char __user *buf)
static int sca3000_ring_get_length(struct iio_ring_buffer *r)
static int sca3000_ring_get_bytes_per_datum(struct iio_ring_buffer *r)
static void sca3000_ring_release(struct device *dev)
static IIO_RING_ENABLE_ATTR;
static IIO_RING_BYTES_PER_DATUM_ATTR;
static IIO_RING_LENGTH_ATTR;
static ssize_t sca3000_query_ring_int(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sca3000_set_ring_int(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(50_percent, S_IRUGO | S_IWUSR,
sca3000_query_ring_int,
sca3000_set_ring_int,
SCA3000_INT_MASK_RING_HALF);
static IIO_DEVICE_ATTR(75_percent, S_IRUGO | S_IWUSR,
sca3000_query_ring_int,
sca3000_set_ring_int,
SCA3000_INT_MASK_RING_THREE_QUARTER);
static ssize_t sca3000_show_ring_bpse(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sca3000_store_ring_bpse(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t sca3000_show_buffer_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(accel_scale,
S_IRUGO,
sca3000_show_buffer_scale,
NULL,
0);
static struct attribute *sca3000_ring_attributes[] = ;
static struct attribute_group sca3000_ring_attr = ;
static const struct attribute_group *sca3000_ring_attr_groups[] = ;
static struct device_type sca3000_ring_type = ;
static struct iio_ring_buffer *sca3000_rb_allocate(struct iio_dev *indio_dev)
static inline void sca3000_rb_free(struct iio_ring_buffer *r)
static const struct iio_ring_access_funcs sca3000_ring_access_funcs = ;
int sca3000_configure_ring(struct iio_dev *indio_dev)
void sca3000_unconfigure_ring(struct iio_dev *indio_dev)
static inline
int __sca3000_hw_ring_state_set(struct iio_dev *indio_dev, bool state)
static int sca3000_hw_ring_preenable(struct iio_dev *indio_dev)
static int sca3000_hw_ring_postdisable(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops sca3000_ring_setup_ops = ;
void sca3000_register_ring_funcs(struct iio_dev *indio_dev)
void sca3000_ring_int_process(u8 val, struct iio_ring_buffer *ring)
