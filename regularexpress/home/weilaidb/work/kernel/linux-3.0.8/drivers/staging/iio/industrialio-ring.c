static int iio_ring_open(struct inode *inode, struct file *filp)
static int iio_ring_release(struct inode *inode, struct file *filp)
static ssize_t iio_ring_read_first_n_outer(struct file *filp, char __user *buf,
size_t n, loff_t *f_ps)
static unsigned int iio_ring_poll(struct file *filp,
struct poll_table_struct *wait)
static const struct file_operations iio_ring_fileops = ;
void iio_ring_access_release(struct device *dev)
EXPORT_SYMBOL(iio_ring_access_release);
static inline int
__iio_request_ring_buffer_chrdev(struct iio_ring_buffer *buf,
struct module *owner,
int id)
static void __iio_free_ring_buffer_chrdev(struct iio_ring_buffer *buf)
void iio_ring_buffer_init(struct iio_ring_buffer *ring,
struct iio_dev *dev_info)
EXPORT_SYMBOL(iio_ring_buffer_init);
static ssize_t iio_show_scan_index(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_show_fixed_type(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_scan_el_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static int iio_scan_mask_clear(struct iio_ring_buffer *ring, int bit)
static ssize_t iio_scan_el_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t iio_scan_el_ts_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_scan_el_ts_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int iio_ring_add_channel_sysfs(struct iio_ring_buffer *ring,
const struct iio_chan_spec *chan)
static void iio_ring_remove_and_free_scan_dev_attr(struct iio_ring_buffer *ring,
struct iio_dev_attr *p)
static struct attribute *iio_scan_el_dummy_attrs[] = ;
static struct attribute_group iio_scan_el_dummy_group = ;
static void __iio_ring_attr_cleanup(struct iio_ring_buffer *ring)
int iio_ring_buffer_register_ex(struct iio_ring_buffer *ring, int id,
const struct iio_chan_spec *channels,
int num_channels)
EXPORT_SYMBOL(iio_ring_buffer_register_ex);
void iio_ring_buffer_unregister(struct iio_ring_buffer *ring)
EXPORT_SYMBOL(iio_ring_buffer_unregister);
ssize_t iio_read_ring_length(struct device *dev,
struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL(iio_read_ring_length);
ssize_t iio_write_ring_length(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
EXPORT_SYMBOL(iio_write_ring_length);
ssize_t iio_read_ring_bytes_per_datum(struct device *dev,
struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL(iio_read_ring_bytes_per_datum);
ssize_t iio_store_ring_enable(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
EXPORT_SYMBOL(iio_store_ring_enable);
ssize_t iio_show_ring_enable(struct device *dev,
struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL(iio_show_ring_enable);
int iio_sw_ring_preenable(struct iio_dev *indio_dev)
EXPORT_SYMBOL(iio_sw_ring_preenable);
