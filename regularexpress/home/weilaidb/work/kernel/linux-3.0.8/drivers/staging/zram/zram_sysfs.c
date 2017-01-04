static u64 zram_stat64_read(struct zram *zram, u64 *v)
static struct zram *dev_to_zram(struct device *dev)
static ssize_t disksize_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disksize_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t initstate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t reset_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t num_reads_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t num_writes_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t invalid_io_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t notify_free_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t zero_pages_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t orig_data_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t compr_data_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t mem_used_total_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(disksize, S_IRUGO | S_IWUSR,
disksize_show, disksize_store);
static DEVICE_ATTR(initstate, S_IRUGO, initstate_show, NULL);
static DEVICE_ATTR(reset, S_IWUSR, NULL, reset_store);
static DEVICE_ATTR(num_reads, S_IRUGO, num_reads_show, NULL);
static DEVICE_ATTR(num_writes, S_IRUGO, num_writes_show, NULL);
static DEVICE_ATTR(invalid_io, S_IRUGO, invalid_io_show, NULL);
static DEVICE_ATTR(notify_free, S_IRUGO, notify_free_show, NULL);
static DEVICE_ATTR(zero_pages, S_IRUGO, zero_pages_show, NULL);
static DEVICE_ATTR(orig_data_size, S_IRUGO, orig_data_size_show, NULL);
static DEVICE_ATTR(compr_data_size, S_IRUGO, compr_data_size_show, NULL);
static DEVICE_ATTR(mem_used_total, S_IRUGO, mem_used_total_show, NULL);
static struct attribute *zram_disk_attrs[] = ;
struct attribute_group zram_disk_attr_group = ;
