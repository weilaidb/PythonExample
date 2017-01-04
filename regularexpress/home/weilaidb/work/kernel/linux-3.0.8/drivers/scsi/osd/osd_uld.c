#  define TYPE_OSD 0x11
#  define SCSI_OSD_MAJOR 260
#define SCSI_OSD_MAX_MINOR 64
static const char osd_name[] = "osd";
static const char *osd_version_string = "open-osd 0.2.0";
MODULE_AUTHOR("Boaz Harrosh <bharrosh@panasas.com>");
MODULE_DESCRIPTION("open-osd Upper-Layer-Driver osd.ko");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(SCSI_OSD_MAJOR);
MODULE_ALIAS_SCSI_DEVICE(TYPE_OSD);
struct osd_uld_device ;
struct osd_dev_handle  ;
static DEFINE_IDA(osd_minor_ida);
static struct class osd_uld_class = ;
static int osd_uld_open(struct inode *inode, struct file *file)
static int osd_uld_release(struct inode *inode, struct file *file)
unsigned g_test_ioctl;
do_test_fn *g_do_test;
int osduld_register_test(unsigned ioctl, do_test_fn *do_test)
EXPORT_SYMBOL(osduld_register_test);
void osduld_unregister_test(unsigned ioctl)
EXPORT_SYMBOL(osduld_unregister_test);
static do_test_fn *_find_ioctl(unsigned cmd)
static long osd_uld_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations osd_fops = ;
struct osd_dev *osduld_path_lookup(const char *name)
EXPORT_SYMBOL(osduld_path_lookup);
static inline bool _the_same_or_null(const u8 *a1, unsigned a1_len,
const u8 *a2, unsigned a2_len)
struct find_oud_t  ;
int _mach_odi(struct device *dev, void *find_data)
struct osd_dev *osduld_info_lookup(const struct osd_dev_info *odi)
EXPORT_SYMBOL(osduld_info_lookup);
void osduld_put_device(struct osd_dev *od)
EXPORT_SYMBOL(osduld_put_device);
const struct osd_dev_info *osduld_device_info(struct osd_dev *od)
EXPORT_SYMBOL(osduld_device_info);
bool osduld_device_same(struct osd_dev *od, const struct osd_dev_info *odi)
EXPORT_SYMBOL(osduld_device_same);
static int __detect_osd(struct osd_uld_device *oud)
static void __remove(struct device *dev)
static int osd_probe(struct device *dev)
static int osd_remove(struct device *dev)
static struct scsi_driver osd_driver = ;
static int __init osd_uld_init(void)
static void __exit osd_uld_exit(void)
module_init(osd_uld_init);
module_exit(osd_uld_exit);
