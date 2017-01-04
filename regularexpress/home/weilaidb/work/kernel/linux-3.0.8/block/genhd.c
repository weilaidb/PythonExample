static DEFINE_MUTEX(block_class_lock);
struct kobject *block_depr;
#define MAX_EXT_DEVT		(1 << MINORBITS)
static DEFINE_MUTEX(ext_devt_mutex);
static DEFINE_IDR(ext_devt_idr);
static struct device_type disk_type;
static void disk_add_events(struct gendisk *disk);
static void disk_del_events(struct gendisk *disk);
static void disk_release_events(struct gendisk *disk);
struct hd_struct *disk_get_part(struct gendisk *disk, int partno)
EXPORT_SYMBOL_GPL(disk_get_part);
void disk_part_iter_init(struct disk_part_iter *piter, struct gendisk *disk,
unsigned int flags)
EXPORT_SYMBOL_GPL(disk_part_iter_init);
struct hd_struct *disk_part_iter_next(struct disk_part_iter *piter)
EXPORT_SYMBOL_GPL(disk_part_iter_next);
void disk_part_iter_exit(struct disk_part_iter *piter)
EXPORT_SYMBOL_GPL(disk_part_iter_exit);
static inline int sector_in_part(struct hd_struct *part, sector_t sector)
struct hd_struct *disk_map_sector_rcu(struct gendisk *disk, sector_t sector)
EXPORT_SYMBOL_GPL(disk_map_sector_rcu);
static struct blk_major_name  *major_names[BLKDEV_MAJOR_HASH_SIZE];
static inline int major_to_index(unsigned major)
void blkdev_show(struct seq_file *seqf, off_t offset)
int register_blkdev(unsigned int major, const char *name)
EXPORT_SYMBOL(register_blkdev);
void unregister_blkdev(unsigned int major, const char *name)
EXPORT_SYMBOL(unregister_blkdev);
static struct kobj_map *bdev_map;
static int blk_mangle_minor(int minor)
int blk_alloc_devt(struct hd_struct *part, dev_t *devt)
void blk_free_devt(dev_t devt)
static char *bdevt_str(dev_t devt, char *buf)
void blk_register_region(dev_t devt, unsigned long range, struct module *module,
struct kobject *(*probe)(dev_t, int *, void *),
int (*lock)(dev_t, void *), void *data)
EXPORT_SYMBOL(blk_register_region);
void blk_unregister_region(dev_t devt, unsigned long range)
EXPORT_SYMBOL(blk_unregister_region);
static struct kobject *exact_match(dev_t devt, int *partno, void *data)
static int exact_lock(dev_t devt, void *data)
void register_disk(struct gendisk *disk)
void add_disk(struct gendisk *disk)
EXPORT_SYMBOL(add_disk);
void del_gendisk(struct gendisk *disk)
EXPORT_SYMBOL(del_gendisk);
struct gendisk *get_gendisk(dev_t devt, int *partno)
EXPORT_SYMBOL(get_gendisk);
struct block_device *bdget_disk(struct gendisk *disk, int partno)
EXPORT_SYMBOL(bdget_disk);
void __init printk_all_partitions(void)
static void *disk_seqf_start(struct seq_file *seqf, loff_t *pos)
static void *disk_seqf_next(struct seq_file *seqf, void *v, loff_t *pos)
static void disk_seqf_stop(struct seq_file *seqf, void *v)
static void *show_partition_start(struct seq_file *seqf, loff_t *pos)
static int show_partition(struct seq_file *seqf, void *v)
static const struct seq_operations partitions_op = ;
static int partitions_open(struct inode *inode, struct file *file)
static const struct file_operations proc_partitions_operations = ;
static struct kobject *base_probe(dev_t devt, int *partno, void *data)
static int __init genhd_device_init(void)
subsys_initcall(genhd_device_init);
static ssize_t disk_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_ext_range_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_removable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_ro_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_capability_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_alignment_offset_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t disk_discard_alignment_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(range, S_IRUGO, disk_range_show, NULL);
static DEVICE_ATTR(ext_range, S_IRUGO, disk_ext_range_show, NULL);
static DEVICE_ATTR(removable, S_IRUGO, disk_removable_show, NULL);
static DEVICE_ATTR(ro, S_IRUGO, disk_ro_show, NULL);
static DEVICE_ATTR(size, S_IRUGO, part_size_show, NULL);
static DEVICE_ATTR(alignment_offset, S_IRUGO, disk_alignment_offset_show, NULL);
static DEVICE_ATTR(discard_alignment, S_IRUGO, disk_discard_alignment_show,
NULL);
static DEVICE_ATTR(capability, S_IRUGO, disk_capability_show, NULL);
static DEVICE_ATTR(stat, S_IRUGO, part_stat_show, NULL);
static DEVICE_ATTR(inflight, S_IRUGO, part_inflight_show, NULL);
static struct device_attribute dev_attr_fail =
__ATTR(make-it-fail, S_IRUGO|S_IWUSR, part_fail_show, part_fail_store);
static struct device_attribute dev_attr_fail_timeout =
__ATTR(io-timeout-fail,  S_IRUGO|S_IWUSR, part_timeout_show,
part_timeout_store);
static struct attribute *disk_attrs[] = ;
static struct attribute_group disk_attr_group = ;
static const struct attribute_group *disk_attr_groups[] = ;
static void disk_free_ptbl_rcu_cb(struct rcu_head *head)
static void disk_replace_part_tbl(struct gendisk *disk,
struct disk_part_tbl *new_ptbl)
int disk_expand_part_tbl(struct gendisk *disk, int partno)
static void disk_release(struct device *dev)
struct class block_class = ;
static char *block_devnode(struct device *dev, mode_t *mode)
static struct device_type disk_type = ;
static int diskstats_show(struct seq_file *seqf, void *v)
static const struct seq_operations diskstats_op = ;
static int diskstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_diskstats_operations = ;
static int __init proc_genhd_init(void)
module_init(proc_genhd_init);
dev_t blk_lookup_devt(const char *name, int partno)
EXPORT_SYMBOL(blk_lookup_devt);
struct gendisk *alloc_disk(int minors)
EXPORT_SYMBOL(alloc_disk);
struct gendisk *alloc_disk_node(int minors, int node_id)
EXPORT_SYMBOL(alloc_disk_node);
struct kobject *get_disk(struct gendisk *disk)
EXPORT_SYMBOL(get_disk);
void put_disk(struct gendisk *disk)
EXPORT_SYMBOL(put_disk);
static void set_disk_ro_uevent(struct gendisk *gd, int ro)
void set_device_ro(struct block_device *bdev, int flag)
EXPORT_SYMBOL(set_device_ro);
void set_disk_ro(struct gendisk *disk, int flag)
EXPORT_SYMBOL(set_disk_ro);
int bdev_read_only(struct block_device *bdev)
EXPORT_SYMBOL(bdev_read_only);
int invalidate_partition(struct gendisk *disk, int partno)
EXPORT_SYMBOL(invalidate_partition);
struct disk_events ;
static const char *disk_events_strs[] = ;
static char *disk_uevents[] = ;
static DEFINE_MUTEX(disk_events_mutex);
static LIST_HEAD(disk_events);
static unsigned long disk_events_dfl_poll_msecs	= 0;
static unsigned long disk_events_poll_jiffies(struct gendisk *disk)
void disk_block_events(struct gendisk *disk)
static void __disk_unblock_events(struct gendisk *disk, bool check_now)
void disk_unblock_events(struct gendisk *disk)
void disk_check_events(struct gendisk *disk)
EXPORT_SYMBOL_GPL(disk_check_events);
unsigned int disk_clear_events(struct gendisk *disk, unsigned int mask)
static void disk_events_workfn(struct work_struct *work)
static ssize_t __disk_events_show(unsigned int events, char *buf)
static ssize_t disk_events_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_events_async_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t disk_events_poll_msecs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t disk_events_poll_msecs_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static const DEVICE_ATTR(events, S_IRUGO, disk_events_show, NULL);
static const DEVICE_ATTR(events_async, S_IRUGO, disk_events_async_show, NULL);
static const DEVICE_ATTR(events_poll_msecs, S_IRUGO|S_IWUSR,
disk_events_poll_msecs_show,
disk_events_poll_msecs_store);
static const struct attribute *disk_events_attrs[] = ;
static int disk_events_set_dfl_poll_msecs(const char *val,
const struct kernel_param *kp)
static const struct kernel_param_ops disk_events_dfl_poll_msecs_param_ops = ;
#undef MODULE_PARAM_PREFIX
#define MODULE_PARAM_PREFIX	"block."
module_param_cb(events_dfl_poll_msecs, &disk_events_dfl_poll_msecs_param_ops,
&disk_events_dfl_poll_msecs, 0644);
static void disk_add_events(struct gendisk *disk)
static void disk_del_events(struct gendisk *disk)
static void disk_release_events(struct gendisk *disk)
