#define DRIVER_NAME		"dcdbas"
#define DRIVER_VERSION		"5.6.0-3.2"
#define DRIVER_DESCRIPTION	"Dell Systems Management Base Driver"
static struct platform_device *dcdbas_pdev;
static u8 *smi_data_buf;
static dma_addr_t smi_data_buf_handle;
static unsigned long smi_data_buf_size;
static u32 smi_data_buf_phys_addr;
static DEFINE_MUTEX(smi_data_lock);
static unsigned int host_control_action;
static unsigned int host_control_smi_type;
static unsigned int host_control_on_shutdown;
static void smi_data_buf_free(void)
static int smi_data_buf_realloc(unsigned long size)
static ssize_t smi_data_buf_phys_addr_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t smi_data_buf_size_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t smi_data_buf_size_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t smi_data_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static ssize_t smi_data_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static ssize_t host_control_action_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t host_control_action_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t host_control_smi_type_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t host_control_smi_type_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t host_control_on_shutdown_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t host_control_on_shutdown_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
int dcdbas_smi_request(struct smi_cmd *smi_cmd)
static ssize_t smi_request_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
EXPORT_SYMBOL(dcdbas_smi_request);
static int host_control_smi(void)
static void dcdbas_host_control(void)
static int dcdbas_reboot_notify(struct notifier_block *nb, unsigned long code,
void *unused)
static struct notifier_block dcdbas_reboot_nb = ;
static DCDBAS_BIN_ATTR_RW(smi_data);
static struct bin_attribute *dcdbas_bin_attrs[] = ;
static DCDBAS_DEV_ATTR_RW(smi_data_buf_size);
static DCDBAS_DEV_ATTR_RO(smi_data_buf_phys_addr);
static DCDBAS_DEV_ATTR_WO(smi_request);
static DCDBAS_DEV_ATTR_RW(host_control_action);
static DCDBAS_DEV_ATTR_RW(host_control_smi_type);
static DCDBAS_DEV_ATTR_RW(host_control_on_shutdown);
static struct attribute *dcdbas_dev_attrs[] = ;
static struct attribute_group dcdbas_attr_group = ;
static int __devinit dcdbas_probe(struct platform_device *dev)
static int __devexit dcdbas_remove(struct platform_device *dev)
static struct platform_driver dcdbas_driver = ;
static int __init dcdbas_init(void)
static void __exit dcdbas_exit(void)
module_init(dcdbas_init);
module_exit(dcdbas_exit);
MODULE_DESCRIPTION(DRIVER_DESCRIPTION " (version " DRIVER_VERSION ")");
MODULE_VERSION(DRIVER_VERSION);
MODULE_AUTHOR("Dell Inc.");
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:[bs]vnD[Ee][Ll][Ll]*:*");
