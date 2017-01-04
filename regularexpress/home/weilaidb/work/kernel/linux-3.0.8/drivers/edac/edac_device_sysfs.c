#define EDAC_DEVICE_SYMLINK	"device"
#define to_edacdev(k) container_of(k, struct edac_device_ctl_info, kobj)
#define to_edacdev_attr(a) container_of(a, struct edacdev_attribute, attr)
static ssize_t edac_device_ctl_log_ue_show(struct edac_device_ctl_info
*ctl_info, char *data)
static ssize_t edac_device_ctl_log_ue_store(struct edac_device_ctl_info
*ctl_info, const char *data,
size_t count)
static ssize_t edac_device_ctl_log_ce_show(struct edac_device_ctl_info
*ctl_info, char *data)
static ssize_t edac_device_ctl_log_ce_store(struct edac_device_ctl_info
*ctl_info, const char *data,
size_t count)
static ssize_t edac_device_ctl_panic_on_ue_show(struct edac_device_ctl_info
*ctl_info, char *data)
static ssize_t edac_device_ctl_panic_on_ue_store(struct edac_device_ctl_info
*ctl_info, const char *data,
size_t count)
static ssize_t edac_device_ctl_poll_msec_show(struct edac_device_ctl_info
*ctl_info, char *data)
static ssize_t edac_device_ctl_poll_msec_store(struct edac_device_ctl_info
*ctl_info, const char *data,
size_t count)
struct ctl_info_attribute ;
#define to_ctl_info(k) container_of(k, struct edac_device_ctl_info, kobj)
#define to_ctl_info_attr(a) container_of(a,struct ctl_info_attribute,attr)
static ssize_t edac_dev_ctl_info_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static ssize_t edac_dev_ctl_info_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops device_ctl_info_ops = ;
#define CTL_INFO_ATTR(_name,_mode,_show,_store)        \
static struct ctl_info_attribute attr_ctl_info_##_name = ;
CTL_INFO_ATTR(log_ue, S_IRUGO | S_IWUSR,
edac_device_ctl_log_ue_show, edac_device_ctl_log_ue_store);
CTL_INFO_ATTR(log_ce, S_IRUGO | S_IWUSR,
edac_device_ctl_log_ce_show, edac_device_ctl_log_ce_store);
CTL_INFO_ATTR(panic_on_ue, S_IRUGO | S_IWUSR,
edac_device_ctl_panic_on_ue_show,
edac_device_ctl_panic_on_ue_store);
CTL_INFO_ATTR(poll_msec, S_IRUGO | S_IWUSR,
edac_device_ctl_poll_msec_show, edac_device_ctl_poll_msec_store);
static struct ctl_info_attribute *device_ctrl_attr[] = ;
static void edac_device_ctrl_master_release(struct kobject *kobj)
static struct kobj_type ktype_device_ctrl = ;
int edac_device_register_sysfs_main_kobj(struct edac_device_ctl_info *edac_dev)
void edac_device_unregister_sysfs_main_kobj(struct edac_device_ctl_info *dev)
static ssize_t instance_ue_count_show(struct edac_device_instance *instance,
char *data)
static ssize_t instance_ce_count_show(struct edac_device_instance *instance,
char *data)
#define to_instance(k) container_of(k, struct edac_device_instance, kobj)
#define to_instance_attr(a) container_of(a,struct instance_attribute,attr)
static void edac_device_ctrl_instance_release(struct kobject *kobj)
struct instance_attribute ;
static ssize_t edac_dev_instance_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static ssize_t edac_dev_instance_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops device_instance_ops = ;
#define INSTANCE_ATTR(_name,_mode,_show,_store)        \
static struct instance_attribute attr_instance_##_name = ;
INSTANCE_ATTR(ce_count, S_IRUGO, instance_ce_count_show, NULL);
INSTANCE_ATTR(ue_count, S_IRUGO, instance_ue_count_show, NULL);
static struct instance_attribute *device_instance_attr[] = ;
static struct kobj_type ktype_instance_ctrl = ;
#define to_block(k) container_of(k, struct edac_device_block, kobj)
#define to_block_attr(a) \
container_of(a, struct edac_dev_sysfs_block_attribute, attr)
static ssize_t block_ue_count_show(struct kobject *kobj,
struct attribute *attr, char *data)
static ssize_t block_ce_count_show(struct kobject *kobj,
struct attribute *attr, char *data)
static void edac_device_ctrl_block_release(struct kobject *kobj)
static ssize_t edac_dev_block_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static ssize_t edac_dev_block_store(struct kobject *kobj,
struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops device_block_ops = ;
#define BLOCK_ATTR(_name,_mode,_show,_store)        \
static struct edac_dev_sysfs_block_attribute attr_block_##_name = ;
BLOCK_ATTR(ce_count, S_IRUGO, block_ce_count_show, NULL);
BLOCK_ATTR(ue_count, S_IRUGO, block_ue_count_show, NULL);
static struct edac_dev_sysfs_block_attribute *device_block_attr[] = ;
static struct kobj_type ktype_block_ctrl = ;
static int edac_device_create_block(struct edac_device_ctl_info *edac_dev,
struct edac_device_instance *instance,
struct edac_device_block *block)
static void edac_device_delete_block(struct edac_device_ctl_info *edac_dev,
struct edac_device_block *block)
static int edac_device_create_instance(struct edac_device_ctl_info *edac_dev,
int idx)
static void edac_device_delete_instance(struct edac_device_ctl_info *edac_dev,
int idx)
static int edac_device_create_instances(struct edac_device_ctl_info *edac_dev)
static void edac_device_delete_instances(struct edac_device_ctl_info *edac_dev)
static int edac_device_add_main_sysfs_attributes(
struct edac_device_ctl_info *edac_dev)
static void edac_device_remove_main_sysfs_attributes(
struct edac_device_ctl_info *edac_dev)
int edac_device_create_sysfs(struct edac_device_ctl_info *edac_dev)
void edac_device_remove_sysfs(struct edac_device_ctl_info *edac_dev)
