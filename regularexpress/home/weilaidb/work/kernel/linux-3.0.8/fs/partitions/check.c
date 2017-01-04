extern void md_autodetect_dev(dev_t dev);
int warn_no_part = 1;
static int (*check_part[])(struct parsed_partitions *) = ;
char *disk_name(struct gendisk *hd, int partno, char *buf)
const char *bdevname(struct block_device *bdev, char *buf)
EXPORT_SYMBOL(bdevname);
const char *__bdevname(dev_t dev, char *buffer)
EXPORT_SYMBOL(__bdevname);
static struct parsed_partitions *
check_partition(struct gendisk *hd, struct block_device *bdev)
static ssize_t part_partition_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t part_start_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_ro_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_alignment_offset_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_discard_alignment_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_stat_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_inflight_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_fail_show(struct device *dev,
struct device_attribute *attr, char *buf)
ssize_t part_fail_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(partition, S_IRUGO, part_partition_show, NULL);
static DEVICE_ATTR(start, S_IRUGO, part_start_show, NULL);
static DEVICE_ATTR(size, S_IRUGO, part_size_show, NULL);
static DEVICE_ATTR(ro, S_IRUGO, part_ro_show, NULL);
static DEVICE_ATTR(alignment_offset, S_IRUGO, part_alignment_offset_show, NULL);
static DEVICE_ATTR(discard_alignment, S_IRUGO, part_discard_alignment_show,
NULL);
static DEVICE_ATTR(stat, S_IRUGO, part_stat_show, NULL);
static DEVICE_ATTR(inflight, S_IRUGO, part_inflight_show, NULL);
static struct device_attribute dev_attr_fail =
__ATTR(make-it-fail, S_IRUGO|S_IWUSR, part_fail_show, part_fail_store);
static struct attribute *part_attrs[] = ;
static struct attribute_group part_attr_group = ;
static const struct attribute_group *part_attr_groups[] = ;
static void part_release(struct device *dev)
struct device_type part_type = ;
static void delete_partition_rcu_cb(struct rcu_head *head)
void __delete_partition(struct hd_struct *part)
void delete_partition(struct gendisk *disk, int partno)
static ssize_t whole_disk_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(whole_disk, S_IRUSR | S_IRGRP | S_IROTH,
whole_disk_show, NULL);
struct hd_struct *add_partition(struct gendisk *disk, int partno,
sector_t start, sector_t len, int flags,
struct partition_meta_info *info)
static bool disk_unlock_native_capacity(struct gendisk *disk)
int rescan_partitions(struct gendisk *disk, struct block_device *bdev)
unsigned char *read_dev_sector(struct block_device *bdev, sector_t n, Sector *p)
EXPORT_SYMBOL(read_dev_sector);
