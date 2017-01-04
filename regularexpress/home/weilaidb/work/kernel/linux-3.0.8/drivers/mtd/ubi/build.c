#define MTD_PARAM_LEN_MAX 64
#define ubi_is_module() 1
#define ubi_is_module() 0
struct mtd_dev_param ;
static int __initdata mtd_devs;
static struct mtd_dev_param __initdata mtd_dev_param[UBI_MAX_DEVICES];
struct class *ubi_class;
struct kmem_cache *ubi_wl_entry_slab;
static struct miscdevice ubi_ctrl_cdev = ;
static struct ubi_device *ubi_devices[UBI_MAX_DEVICES];
DEFINE_MUTEX(ubi_devices_mutex);
static DEFINE_SPINLOCK(ubi_devices_lock);
static ssize_t ubi_version_show(struct class *class,
struct class_attribute *attr, char *buf)
static struct class_attribute ubi_version =
__ATTR(version, S_IRUGO, ubi_version_show, NULL);
static ssize_t dev_attribute_show(struct device *dev,
struct device_attribute *attr, char *buf);
static struct device_attribute dev_eraseblock_size =
__ATTR(eraseblock_size, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_avail_eraseblocks =
__ATTR(avail_eraseblocks, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_total_eraseblocks =
__ATTR(total_eraseblocks, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_volumes_count =
__ATTR(volumes_count, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_max_ec =
__ATTR(max_ec, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_reserved_for_bad =
__ATTR(reserved_for_bad, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_bad_peb_count =
__ATTR(bad_peb_count, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_max_vol_count =
__ATTR(max_vol_count, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_min_io_size =
__ATTR(min_io_size, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_bgt_enabled =
__ATTR(bgt_enabled, S_IRUGO, dev_attribute_show, NULL);
static struct device_attribute dev_mtd_num =
__ATTR(mtd_num, S_IRUGO, dev_attribute_show, NULL);
int ubi_volume_notify(struct ubi_device *ubi, struct ubi_volume *vol, int ntype)
int ubi_notify_all(struct ubi_device *ubi, int ntype, struct notifier_block *nb)
int ubi_enumerate_volumes(struct notifier_block *nb)
struct ubi_device *ubi_get_device(int ubi_num)
void ubi_put_device(struct ubi_device *ubi)
struct ubi_device *ubi_get_by_major(int major)
int ubi_major2num(int major)
static ssize_t dev_attribute_show(struct device *dev,
struct device_attribute *attr, char *buf)
static void dev_release(struct device *dev)
static int ubi_sysfs_init(struct ubi_device *ubi, int *ref)
static void ubi_sysfs_close(struct ubi_device *ubi)
static void kill_volumes(struct ubi_device *ubi)
static int uif_init(struct ubi_device *ubi, int *ref)
static void uif_close(struct ubi_device *ubi)
static void free_internal_volumes(struct ubi_device *ubi)
static int attach_by_scanning(struct ubi_device *ubi)
static int io_init(struct ubi_device *ubi)
static int autoresize(struct ubi_device *ubi, int vol_id)
int ubi_attach_mtd_dev(struct mtd_info *mtd, int ubi_num, int vid_hdr_offset)
int ubi_detach_mtd_dev(int ubi_num, int anyway)
static struct mtd_info * __init open_mtd_by_chdev(const char *mtd_dev)
static struct mtd_info * __init open_mtd_device(const char *mtd_dev)
static int __init ubi_init(void)
module_init(ubi_init);
static void __exit ubi_exit(void)
module_exit(ubi_exit);
static int __init bytes_str_to_int(const char *str)
static int __init ubi_mtd_param_parse(const char *val, struct kernel_param *kp)
module_param_call(mtd, ubi_mtd_param_parse, NULL, NULL, 000);
MODULE_PARM_DESC(mtd, "MTD devices to attach. Parameter format: "
"mtd=<name|num|path>[,<vid_hdr_offs>].\n"
"Multiple \"mtd\" parameters may be specified.\n"
"MTD devices may be specified by their number, name, or "
"path to the MTD character device node.\n"
"Optional \"vid_hdr_offs\" parameter specifies UBI VID "
"header position to be used by UBI.\n"
"Example 1: mtd=/dev/mtd0 - attach MTD device "
"/dev/mtd0.\n"
"Example 2: mtd=content,1984 mtd=4 - attach MTD device "
"with name \"content\" using VID header offset 1984, and "
"MTD device number 4 with default VID header offset.");
MODULE_VERSION(__stringify(UBI_VERSION));
MODULE_DESCRIPTION("UBI - Unsorted Block Images");
MODULE_AUTHOR("Artem Bityutskiy");
MODULE_LICENSE("GPL");
