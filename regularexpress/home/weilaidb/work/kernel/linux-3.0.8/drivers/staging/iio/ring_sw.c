struct iio_sw_ring_buffer ;
#define iio_to_sw_ring(r) container_of(r, struct iio_sw_ring_buffer, buf)
static inline int __iio_allocate_sw_ring_buffer(struct iio_sw_ring_buffer *ring,
int bytes_per_datum, int length)
static inline void __iio_init_sw_ring_buffer(struct iio_sw_ring_buffer *ring)
static inline void __iio_free_sw_ring_buffer(struct iio_sw_ring_buffer *ring)
static void iio_mark_sw_rb_in_use(struct iio_ring_buffer *r)
static void iio_unmark_sw_rb_in_use(struct iio_ring_buffer *r)
static int iio_store_to_sw_ring(struct iio_sw_ring_buffer *ring,
unsigned char *data, s64 timestamp)
static int iio_read_first_n_sw_rb(struct iio_ring_buffer *r,
size_t n, char __user *buf)
static int iio_store_to_sw_rb(struct iio_ring_buffer *r,
u8 *data,
s64 timestamp)
static int iio_read_last_from_sw_ring(struct iio_sw_ring_buffer *ring,
unsigned char *data)
static int iio_read_last_from_sw_rb(struct iio_ring_buffer *r,
unsigned char *data)
static int iio_request_update_sw_rb(struct iio_ring_buffer *r)
static int iio_get_bytes_per_datum_sw_rb(struct iio_ring_buffer *r)
static int iio_set_bytes_per_datum_sw_rb(struct iio_ring_buffer *r, size_t bpd)
static int iio_get_length_sw_rb(struct iio_ring_buffer *r)
static int iio_set_length_sw_rb(struct iio_ring_buffer *r, int length)
static int iio_mark_update_needed_sw_rb(struct iio_ring_buffer *r)
static void iio_sw_rb_release(struct device *dev)
static IIO_RING_ENABLE_ATTR;
static IIO_RING_BYTES_PER_DATUM_ATTR;
static IIO_RING_LENGTH_ATTR;
static struct attribute *iio_ring_attributes[] = ;
static struct attribute_group iio_ring_attribute_group = ;
static const struct attribute_group *iio_ring_attribute_groups[] = ;
static struct device_type iio_sw_ring_type = ;
struct iio_ring_buffer *iio_sw_rb_allocate(struct iio_dev *indio_dev)
EXPORT_SYMBOL(iio_sw_rb_allocate);
void iio_sw_rb_free(struct iio_ring_buffer *r)
EXPORT_SYMBOL(iio_sw_rb_free);
const struct iio_ring_access_funcs ring_sw_access_funcs = ;
EXPORT_SYMBOL(ring_sw_access_funcs);
MODULE_DESCRIPTION("Industrialio I/O software ring buffer");
MODULE_LICENSE("GPL");
