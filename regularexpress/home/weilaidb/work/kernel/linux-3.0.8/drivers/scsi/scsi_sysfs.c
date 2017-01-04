static struct device_type scsi_dev_type;
static const struct  sdev_states[] = ;
const char *scsi_device_state_name(enum scsi_device_state state)
static const struct  shost_states[] = ;
const char *scsi_host_state_name(enum scsi_host_state state)
static int check_set(unsigned int *val, char *src)
static int scsi_scan(struct Scsi_Host *shost, const char *str)
#define shost_show_function(name, field, format_string)			\
static ssize_t								\
show_##name (struct device *dev, struct device_attribute *attr, 	\
char *buf)							\
#define shost_rd_attr2(name, field, format_string)			\
shost_show_function(name, field, format_string)			\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL);
#define shost_rd_attr(field, format_string) \
shost_rd_attr2(field, field, format_string)
static ssize_t
store_scan(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
;
static DEVICE_ATTR(scan, S_IWUSR, NULL, store_scan);
static ssize_t
store_shost_state(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_shost_state(struct device *dev, struct device_attribute *attr, char *buf)
struct device_attribute dev_attr_hstate =
__ATTR(state, S_IRUGO | S_IWUSR, show_shost_state, store_shost_state);
static ssize_t
show_shost_mode(unsigned int mode, char *buf)
static ssize_t
show_shost_supported_mode(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(supported_mode, S_IRUGO | S_IWUSR, show_shost_supported_mode, NULL);
static ssize_t
show_shost_active_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(active_mode, S_IRUGO | S_IWUSR, show_shost_active_mode, NULL);
shost_rd_attr(unique_id, "%u\n");
shost_rd_attr(host_busy, "%hu\n");
shost_rd_attr(cmd_per_lun, "%hd\n");
shost_rd_attr(can_queue, "%hd\n");
shost_rd_attr(sg_tablesize, "%hu\n");
shost_rd_attr(sg_prot_tablesize, "%hu\n");
shost_rd_attr(unchecked_isa_dma, "%d\n");
shost_rd_attr(prot_capabilities, "%u\n");
shost_rd_attr(prot_guard_type, "%hd\n");
shost_rd_attr2(proc_name, hostt->proc_name, "%s\n");
static struct attribute *scsi_sysfs_shost_attrs[] = ;
struct attribute_group scsi_shost_attr_group = ;
const struct attribute_group *scsi_sysfs_shost_attr_groups[] = ;
static void scsi_device_cls_release(struct device *class_dev)
static void scsi_device_dev_release_usercontext(struct work_struct *work)
static void scsi_device_dev_release(struct device *dev)
static struct class sdev_class = ;
static int scsi_bus_match(struct device *dev, struct device_driver *gendrv)
static int scsi_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
struct bus_type scsi_bus_type = ;
EXPORT_SYMBOL_GPL(scsi_bus_type);
int scsi_sysfs_register(void)
void scsi_sysfs_unregister(void)
#define sdev_show_function(field, format_string)				\
static ssize_t								\
sdev_show_##field (struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
#define sdev_rd_attr(field, format_string)				\
sdev_show_function(field, format_string)			\
static DEVICE_ATTR(field, S_IRUGO, sdev_show_##field, NULL);
#define sdev_rw_attr(field, format_string)				\
sdev_show_function(field, format_string)				\
\
static ssize_t								\
sdev_store_##field (struct device *dev, struct device_attribute *attr,	\
const char *buf, size_t count)			\
\
static DEVICE_ATTR(field, S_IRUGO | S_IWUSR, sdev_show_##field, sdev_store_##field);
sdev_rd_attr (device_blocked, "%d\n");
sdev_rd_attr (queue_depth, "%d\n");
sdev_rd_attr (type, "%d\n");
sdev_rd_attr (scsi_level, "%d\n");
sdev_rd_attr (vendor, "%.8s\n");
sdev_rd_attr (model, "%.16s\n");
sdev_rd_attr (rev, "%.4s\n");
static ssize_t
sdev_show_timeout (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
sdev_store_timeout (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(timeout, S_IRUGO | S_IWUSR, sdev_show_timeout, sdev_store_timeout);
static ssize_t
store_rescan_field (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rescan, S_IWUSR, NULL, store_rescan_field);
static void sdev_store_delete_callback(struct device *dev)
static ssize_t
sdev_store_delete(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
;
static DEVICE_ATTR(delete, S_IWUSR, NULL, sdev_store_delete);
static ssize_t
store_state_field(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_state_field(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(state, S_IRUGO | S_IWUSR, show_state_field, store_state_field);
static ssize_t
show_queue_type_field(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(queue_type, S_IRUGO, show_queue_type_field, NULL);
static ssize_t
show_iostat_counterbits(struct device *dev, struct device_attribute *attr, 				char *buf)
static DEVICE_ATTR(iocounterbits, S_IRUGO, show_iostat_counterbits, NULL);
#define show_sdev_iostat(field)						\
static ssize_t								\
show_iostat_##field(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
\
static DEVICE_ATTR(field, S_IRUGO, show_iostat_##field, NULL)
show_sdev_iostat(iorequest_cnt);
show_sdev_iostat(iodone_cnt);
show_sdev_iostat(ioerr_cnt);
static ssize_t
sdev_show_modalias(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(modalias, S_IRUGO, sdev_show_modalias, NULL);
#define DECLARE_EVT_SHOW(name, Cap_name)				\
static ssize_t								\
sdev_show_evt_##name(struct device *dev, struct device_attribute *attr,	\
char *buf)						\
#define DECLARE_EVT_STORE(name, Cap_name)				\
static ssize_t								\
sdev_store_evt_##name(struct device *dev, struct device_attribute *attr,\
const char *buf, size_t count)			\
#define DECLARE_EVT(name, Cap_name)					\
DECLARE_EVT_SHOW(name, Cap_name)				\
DECLARE_EVT_STORE(name, Cap_name)				\
static DEVICE_ATTR(evt_##name, S_IRUGO, sdev_show_evt_##name,	\
sdev_store_evt_##name);
#define REF_EVT(name) &dev_attr_evt_##name.attr
DECLARE_EVT(media_change, MEDIA_CHANGE)
static struct attribute *scsi_sdev_attrs[] = ;
static struct attribute_group scsi_sdev_attr_group = ;
static const struct attribute_group *scsi_sdev_attr_groups[] = ;
static ssize_t
sdev_store_queue_depth_rw(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute sdev_attr_queue_depth_rw =
__ATTR(queue_depth, S_IRUGO | S_IWUSR, sdev_show_queue_depth,
sdev_store_queue_depth_rw);
static ssize_t
sdev_show_queue_ramp_up_period(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t
sdev_store_queue_ramp_up_period(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute sdev_attr_queue_ramp_up_period =
__ATTR(queue_ramp_up_period, S_IRUGO | S_IWUSR,
sdev_show_queue_ramp_up_period,
sdev_store_queue_ramp_up_period);
static ssize_t
sdev_store_queue_type_rw(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int scsi_target_add(struct scsi_target *starget)
static struct device_attribute sdev_attr_queue_type_rw =
__ATTR(queue_type, S_IRUGO | S_IWUSR, show_queue_type_field,
sdev_store_queue_type_rw);
int scsi_sysfs_add_sdev(struct scsi_device *sdev)
void __scsi_remove_device(struct scsi_device *sdev)
void scsi_remove_device(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_remove_device);
static void __scsi_remove_target(struct scsi_target *starget)
static int __remove_child (struct device * dev, void * data)
void scsi_remove_target(struct device *dev)
EXPORT_SYMBOL(scsi_remove_target);
int scsi_register_driver(struct device_driver *drv)
EXPORT_SYMBOL(scsi_register_driver);
int scsi_register_interface(struct class_interface *intf)
EXPORT_SYMBOL(scsi_register_interface);
int scsi_sysfs_add_host(struct Scsi_Host *shost)
static struct device_type scsi_dev_type = ;
void scsi_sysfs_device_initialize(struct scsi_device *sdev)
int scsi_is_sdev_device(const struct device *dev)
EXPORT_SYMBOL(scsi_is_sdev_device);
struct scsi_transport_template blank_transport_template = ;
