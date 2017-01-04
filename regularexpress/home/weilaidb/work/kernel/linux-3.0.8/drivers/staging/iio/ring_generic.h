#define _IIO_RING_GENERIC_H_
struct iio_ring_buffer;
struct iio_ring_access_funcs ;
struct iio_ring_setup_ops ;
struct iio_ring_buffer ;
void iio_ring_buffer_init(struct iio_ring_buffer *ring,
struct iio_dev *dev_info);
static inline void __iio_update_ring_buffer(struct iio_ring_buffer *ring,
int bytes_per_datum, int length)
#define IIO_MAX_SCAN_LENGTH 31
static inline u32 iio_scan_mask_match(u32 *av_masks, u32 mask)
static inline int iio_scan_mask_query(struct iio_ring_buffer *ring, int bit)
;
static inline int iio_scan_mask_set(struct iio_ring_buffer *ring, int bit)
;
static inline void iio_put_ring_buffer(struct iio_ring_buffer *ring)
;
#define to_iio_ring_buffer(d)				\
container_of(d, struct iio_ring_buffer, dev)
int iio_ring_buffer_register_ex(struct iio_ring_buffer *ring, int id,
const struct iio_chan_spec *channels,
int num_channels);
void iio_ring_access_release(struct device *dev);
void iio_ring_buffer_unregister(struct iio_ring_buffer *ring);
ssize_t iio_read_ring_length(struct device *dev,
struct device_attribute *attr,
char *buf);
ssize_t iio_write_ring_length(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len);
ssize_t iio_read_ring_bytes_per_datum(struct device *dev,
struct device_attribute *attr,
char *buf);
ssize_t iio_store_ring_enable(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len);
ssize_t iio_show_ring_enable(struct device *dev,
struct device_attribute *attr,
char *buf);
#define IIO_RING_LENGTH_ATTR DEVICE_ATTR(length, S_IRUGO | S_IWUSR,	\
iio_read_ring_length,		\
iio_write_ring_length)
#define IIO_RING_BYTES_PER_DATUM_ATTR DEVICE_ATTR(bytes_per_datum, S_IRUGO | S_IWUSR,	\
iio_read_ring_bytes_per_datum, NULL)
#define IIO_RING_ENABLE_ATTR DEVICE_ATTR(enable, S_IRUGO | S_IWUSR, \
iio_show_ring_enable,		\
iio_store_ring_enable)
int iio_sw_ring_preenable(struct iio_dev *indio_dev);
static inline int iio_ring_buffer_register_ex(struct iio_ring_buffer *ring,
int id,
struct iio_chan_spec *channels,
int num_channels)
static inline void iio_ring_buffer_unregister(struct iio_ring_buffer *ring)
;
