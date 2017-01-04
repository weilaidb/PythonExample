#define iio_to_kfifo(r) container_of(r, struct iio_kfifo, ring)
static inline int __iio_allocate_kfifo(struct iio_kfifo *buf,
int bytes_per_datum, int length)
static int iio_request_update_kfifo(struct iio_ring_buffer *r)
static void iio_mark_kfifo_in_use(struct iio_ring_buffer *r)
static void iio_unmark_kfifo_in_use(struct iio_ring_buffer *r)
static int iio_get_length_kfifo(struct iio_ring_buffer *r)
static inline void __iio_init_kfifo(struct iio_kfifo *kf)
static IIO_RING_ENABLE_ATTR;
static IIO_RING_BYTES_PER_DATUM_ATTR;
static IIO_RING_LENGTH_ATTR;
static struct attribute *iio_kfifo_attributes[] = ;
static struct attribute_group iio_kfifo_attribute_group = ;
static const struct attribute_group *iio_kfifo_attribute_groups[] = ;
static void iio_kfifo_release(struct device *dev)
static struct device_type iio_kfifo_type = ;
struct iio_ring_buffer *iio_kfifo_allocate(struct iio_dev *indio_dev)
EXPORT_SYMBOL(iio_kfifo_allocate);
static int iio_get_bytes_per_datum_kfifo(struct iio_ring_buffer *r)
static int iio_set_bytes_per_datum_kfifo(struct iio_ring_buffer *r, size_t bpd)
static int iio_mark_update_needed_kfifo(struct iio_ring_buffer *r)
static int iio_set_length_kfifo(struct iio_ring_buffer *r, int length)
void iio_kfifo_free(struct iio_ring_buffer *r)
EXPORT_SYMBOL(iio_kfifo_free);
static int iio_store_to_kfifo(struct iio_ring_buffer *r,
u8 *data,
s64 timestamp)
static int iio_read_first_n_kfifo(struct iio_ring_buffer *r,
size_t n, char __user *buf)
const struct iio_ring_access_funcs kfifo_access_funcs = ;
EXPORT_SYMBOL(kfifo_access_funcs);
MODULE_LICENSE("GPL");
