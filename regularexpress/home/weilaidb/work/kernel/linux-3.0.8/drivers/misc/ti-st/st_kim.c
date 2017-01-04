#define pr_fmt(fmt) "(stk) :" fmt
#define MAX_ST_DEVICES	3
static struct platform_device *st_kim_devices[MAX_ST_DEVICES];
static struct platform_device *st_get_plat_device(int id)
void validate_firmware_response(struct kim_data_s *kim_gdata)
static inline int kim_check_data_len(struct kim_data_s *kim_gdata, int len)
void kim_int_recv(struct kim_data_s *kim_gdata,
const unsigned char *data, long count)
static long read_local_version(struct kim_data_s *kim_gdata, char *bts_scr_name)
void skip_change_remote_baud(unsigned char **ptr, long *len)
static long download_firmware(struct kim_data_s *kim_gdata)
void st_kim_recv(void *disc_data, const unsigned char *data, long count)
void st_kim_complete(void *kim_data)
long st_kim_start(void *kim_data)
long st_kim_stop(void *kim_data)
static int show_version(struct seq_file *s, void *unused)
static int show_list(struct seq_file *s, void *unused)
static ssize_t show_install(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_dev_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_baud_rate(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_flow_cntrl(struct device *dev,
struct device_attribute *attr, char *buf)
static struct kobj_attribute ldisc_install =
__ATTR(install, 0444, (void *)show_install, NULL);
static struct kobj_attribute uart_dev_name =
__ATTR(dev_name, 0444, (void *)show_dev_name, NULL);
static struct kobj_attribute uart_baud_rate =
__ATTR(baud_rate, 0444, (void *)show_baud_rate, NULL);
static struct kobj_attribute uart_flow_cntrl =
__ATTR(flow_cntrl, 0444, (void *)show_flow_cntrl, NULL);
static struct attribute *uim_attrs[] = ;
static struct attribute_group uim_attr_grp = ;
void st_kim_ref(struct st_data_s **core_data, int id)
static int kim_version_open(struct inode *i, struct file *f)
static int kim_list_open(struct inode *i, struct file *f)
static const struct file_operations version_debugfs_fops = ;
static const struct file_operations list_debugfs_fops = ;
struct dentry *kim_debugfs_dir;
static int kim_probe(struct platform_device *pdev)
static int kim_remove(struct platform_device *pdev)
int kim_suspend(struct platform_device *pdev, pm_message_t state)
int kim_resume(struct platform_device *pdev)
static struct platform_driver kim_platform_driver = ;
static int __init st_kim_init(void)
static void __exit st_kim_deinit(void)
module_init(st_kim_init);
module_exit(st_kim_deinit);
MODULE_AUTHOR("Pavan Savoy <pavan_savoy@ti.com>");
MODULE_DESCRIPTION("Shared Transport Driver for TI BT/FM/GPS combo chips ");
MODULE_LICENSE("GPL");
