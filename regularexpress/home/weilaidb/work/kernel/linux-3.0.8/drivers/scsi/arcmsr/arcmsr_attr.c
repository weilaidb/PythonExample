struct device_attribute *arcmsr_host_attrs[];
static ssize_t arcmsr_sysfs_iop_message_read(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin,
char *buf, loff_t off,
size_t count)
static ssize_t arcmsr_sysfs_iop_message_write(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin,
char *buf, loff_t off,
size_t count)
static ssize_t arcmsr_sysfs_iop_message_clear(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin,
char *buf, loff_t off,
size_t count)
static struct bin_attribute arcmsr_sysfs_message_read_attr = ;
static struct bin_attribute arcmsr_sysfs_message_write_attr = ;
static struct bin_attribute arcmsr_sysfs_message_clear_attr = ;
int arcmsr_alloc_sysfs_attr(struct AdapterControlBlock *acb)
void arcmsr_free_sysfs_attr(struct AdapterControlBlock *acb)
static ssize_t
arcmsr_attr_host_driver_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_driver_posted_cmd(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_driver_reset(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_driver_abort(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_fw_model(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
arcmsr_attr_host_fw_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_fw_request_len(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_fw_numbers_queue(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_fw_sdram_size(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
arcmsr_attr_host_fw_hd_channels(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(host_driver_version, S_IRUGO, arcmsr_attr_host_driver_version, NULL);
static DEVICE_ATTR(host_driver_posted_cmd, S_IRUGO, arcmsr_attr_host_driver_posted_cmd, NULL);
static DEVICE_ATTR(host_driver_reset, S_IRUGO, arcmsr_attr_host_driver_reset, NULL);
static DEVICE_ATTR(host_driver_abort, S_IRUGO, arcmsr_attr_host_driver_abort, NULL);
static DEVICE_ATTR(host_fw_model, S_IRUGO, arcmsr_attr_host_fw_model, NULL);
static DEVICE_ATTR(host_fw_version, S_IRUGO, arcmsr_attr_host_fw_version, NULL);
static DEVICE_ATTR(host_fw_request_len, S_IRUGO, arcmsr_attr_host_fw_request_len, NULL);
static DEVICE_ATTR(host_fw_numbers_queue, S_IRUGO, arcmsr_attr_host_fw_numbers_queue, NULL);
static DEVICE_ATTR(host_fw_sdram_size, S_IRUGO, arcmsr_attr_host_fw_sdram_size, NULL);
static DEVICE_ATTR(host_fw_hd_channels, S_IRUGO, arcmsr_attr_host_fw_hd_channels, NULL);
struct device_attribute *arcmsr_host_attrs[] = ;
