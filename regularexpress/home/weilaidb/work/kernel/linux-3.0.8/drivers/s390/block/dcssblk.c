#define KMSG_COMPONENT "dcssblk"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define DCSSBLK_NAME "dcssblk"
#define DCSSBLK_MINORS_PER_DISK 1
#define DCSSBLK_PARM_LEN 400
#define DCSS_BUS_ID_SIZE 20
static int dcssblk_open(struct block_device *bdev, fmode_t mode);
static int dcssblk_release(struct gendisk *disk, fmode_t mode);
static int dcssblk_make_request(struct request_queue *q, struct bio *bio);
static int dcssblk_direct_access(struct block_device *bdev, sector_t secnum,
void **kaddr, unsigned long *pfn);
static char dcssblk_segments[DCSSBLK_PARM_LEN] = "\0";
static int dcssblk_major;
static const struct block_device_operations dcssblk_devops = ;
struct dcssblk_dev_info ;
struct segment_info ;
static ssize_t dcssblk_add_store(struct device * dev, struct device_attribute *attr, const char * buf,
size_t count);
static ssize_t dcssblk_remove_store(struct device * dev, struct device_attribute *attr, const char * buf,
size_t count);
static ssize_t dcssblk_save_store(struct device * dev, struct device_attribute *attr, const char * buf,
size_t count);
static ssize_t dcssblk_save_show(struct device *dev, struct device_attribute *attr, char *buf);
static ssize_t dcssblk_shared_store(struct device * dev, struct device_attribute *attr, const char * buf,
size_t count);
static ssize_t dcssblk_shared_show(struct device *dev, struct device_attribute *attr, char *buf);
static ssize_t dcssblk_seglist_show(struct device *dev,
struct device_attribute *attr,
char *buf);
static DEVICE_ATTR(add, S_IWUSR, NULL, dcssblk_add_store);
static DEVICE_ATTR(remove, S_IWUSR, NULL, dcssblk_remove_store);
static DEVICE_ATTR(save, S_IWUSR | S_IRUSR, dcssblk_save_show,
dcssblk_save_store);
static DEVICE_ATTR(shared, S_IWUSR | S_IRUSR, dcssblk_shared_show,
dcssblk_shared_store);
static DEVICE_ATTR(seglist, S_IRUSR, dcssblk_seglist_show, NULL);
static struct device *dcssblk_root_dev;
static LIST_HEAD(dcssblk_devices);
static struct rw_semaphore dcssblk_devices_sem;
static void
dcssblk_release_segment(struct device *dev)
static int
dcssblk_assign_free_minor(struct dcssblk_dev_info *dev_info)
static struct dcssblk_dev_info *
dcssblk_get_device_by_name(char *name)
static struct segment_info *
dcssblk_get_segment_by_name(char *name)
static unsigned long
dcssblk_find_highest_addr(struct dcssblk_dev_info *dev_info)
static unsigned long
dcssblk_find_lowest_addr(struct dcssblk_dev_info *dev_info)
static int
dcssblk_is_continuous(struct dcssblk_dev_info *dev_info)
static int
dcssblk_load_segment(char *name, struct segment_info **seg_info)
static void dcssblk_unregister_callback(struct device *dev)
static ssize_t
dcssblk_shared_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dcssblk_shared_store(struct device *dev, struct device_attribute *attr, const char *inbuf, size_t count)
static ssize_t
dcssblk_save_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dcssblk_save_store(struct device *dev, struct device_attribute *attr, const char *inbuf, size_t count)
static ssize_t
dcssblk_seglist_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
dcssblk_add_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t
dcssblk_remove_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static int
dcssblk_open(struct block_device *bdev, fmode_t mode)
static int
dcssblk_release(struct gendisk *disk, fmode_t mode)
static int
dcssblk_make_request(struct request_queue *q, struct bio *bio)
static int
dcssblk_direct_access (struct block_device *bdev, sector_t secnum,
void **kaddr, unsigned long *pfn)
static void
dcssblk_check_params(void)
static int dcssblk_freeze(struct device *dev)
static int dcssblk_restore(struct device *dev)
static int dcssblk_thaw(struct device *dev)
static const struct dev_pm_ops dcssblk_pm_ops = ;
static struct platform_driver dcssblk_pdrv = ;
static struct platform_device *dcssblk_pdev;
static void __exit
dcssblk_exit(void)
static int __init
dcssblk_init(void)
module_init(dcssblk_init);
module_exit(dcssblk_exit);
module_param_string(segments, dcssblk_segments, DCSSBLK_PARM_LEN, 0444);
MODULE_PARM_DESC(segments, "Name of DCSS segment(s) to be loaded, "
"comma-separated list, names in each set separated "
"by commas are separated by colons, each set contains "
"names of contiguous segments and each name max. 8 chars.\n"
"Adding \"(local)\" to the end of each set equals echoing 0 "
"to /sys/devices/dcssblk/<device name>/shared after loading "
"the contiguous segments - \n"
"e.g. segments=\"mydcss1,mydcss2:mydcss3,mydcss4(local)\"");
MODULE_LICENSE("GPL");
