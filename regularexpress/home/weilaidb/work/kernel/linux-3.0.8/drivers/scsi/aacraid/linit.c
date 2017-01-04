#define AAC_DRIVER_VERSION		"1.1-7"
#define AAC_DRIVER_BRANCH		""
#define AAC_DRIVERNAME			"aacraid"
#define _str(x) #x
#define str(x) _str(x)
#define AAC_DRIVER_FULL_VERSION	AAC_DRIVER_VERSION "[" str(AAC_DRIVER_BUILD) "]" AAC_DRIVER_BRANCH
#define AAC_DRIVER_FULL_VERSION	AAC_DRIVER_VERSION AAC_DRIVER_BRANCH
MODULE_AUTHOR("Red Hat Inc and Adaptec");
MODULE_DESCRIPTION("Dell PERC2, 2/Si, 3/Si, 3/Di, "
"Adaptec Advanced Raid Products, "
"HP NetRAID-4M, IBM ServeRAID & ICP SCSI driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(AAC_DRIVER_FULL_VERSION);
static DEFINE_MUTEX(aac_mutex);
static LIST_HEAD(aac_devices);
static int aac_cfg_major = -1;
char aac_driver_version[] = AAC_DRIVER_FULL_VERSION;
static DECLARE_PCI_DEVICE_TABLE(aac_pci_tbl) = {
#elif defined(__devinitconst)
static const struct pci_device_id aac_pci_tbl[] __devinitconst = {
static const struct pci_device_id aac_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, aac_pci_tbl);
static struct aac_driver_ident aac_drivers[] = ;
static int aac_queuecommand_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(aac_queuecommand)
static const char *aac_info(struct Scsi_Host *shost)
struct aac_driver_ident* aac_get_driver_ident(int devtype)
static int aac_biosparm(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int *geom)
static int aac_slave_configure(struct scsi_device *sdev)
static int aac_change_queue_depth(struct scsi_device *sdev, int depth,
int reason)
static ssize_t aac_show_raid_level(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute aac_raid_level_attr = ;
static struct device_attribute *aac_dev_attrs[] = ;
static int aac_ioctl(struct scsi_device *sdev, int cmd, void __user * arg)
static int aac_eh_abort(struct scsi_cmnd* cmd)
static int aac_eh_reset(struct scsi_cmnd* cmd)
static int aac_cfg_open(struct inode *inode, struct file *file)
static long aac_cfg_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long aac_compat_do_ioctl(struct aac_dev *dev, unsigned cmd, unsigned long arg)
static int aac_compat_ioctl(struct scsi_device *sdev, int cmd, void __user *arg)
static long aac_compat_cfg_ioctl(struct file *file, unsigned cmd, unsigned long arg)
static ssize_t aac_show_model(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t aac_show_vendor(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t aac_show_flags(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t aac_show_kernel_version(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t aac_show_monitor_version(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t aac_show_bios_version(struct device *device,
struct device_attribute *attr,
char *buf)
static ssize_t aac_show_serial_number(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t aac_show_max_channel(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t aac_show_max_id(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t aac_store_reset_adapter(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t aac_show_reset_adapter(struct device *device,
struct device_attribute *attr,
char *buf)
static struct device_attribute aac_model = ;
static struct device_attribute aac_vendor = ;
static struct device_attribute aac_flags = ;
static struct device_attribute aac_kernel_version = ;
static struct device_attribute aac_monitor_version = ;
static struct device_attribute aac_bios_version = ;
static struct device_attribute aac_serial_number = ;
static struct device_attribute aac_max_channel = ;
static struct device_attribute aac_max_id = ;
static struct device_attribute aac_reset = ;
static struct device_attribute *aac_attrs[] = ;
ssize_t aac_get_serial_number(struct device *device, char *buf)
static const struct file_operations aac_cfg_fops = ;
static struct scsi_host_template aac_driver_template = ;
static void __aac_shutdown(struct aac_dev * aac)
static int __devinit aac_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void aac_shutdown(struct pci_dev *dev)
static void __devexit aac_remove_one(struct pci_dev *pdev)
static struct pci_driver aac_pci_driver = ;
static int __init aac_init(void)
static void __exit aac_exit(void)
module_init(aac_init);
module_exit(aac_exit);
