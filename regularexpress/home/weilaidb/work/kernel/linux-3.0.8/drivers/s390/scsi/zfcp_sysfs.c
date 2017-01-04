#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ZFCP_DEV_ATTR(_feat, _name, _mode, _show, _store) \
struct device_attribute dev_attr_##_feat##_##_name = __ATTR(_name, _mode,\
_show, _store)
#define ZFCP_DEFINE_ATTR(_feat_def, _feat, _name, _format, _value)	       \
static ssize_t zfcp_sysfs_##_feat##_##_name##_show(struct device *dev,	       \
struct device_attribute *at,\
char *buf)		       \
\
static ZFCP_DEV_ATTR(_feat, _name, S_IRUGO,				       \
zfcp_sysfs_##_feat##_##_name##_show, NULL);
#define ZFCP_DEFINE_A_ATTR(_name, _format, _value)			     \
static ssize_t zfcp_sysfs_adapter_##_name##_show(struct device *dev,	     \
struct device_attribute *at,\
char *buf)		     \
\
static ZFCP_DEV_ATTR(adapter, _name, S_IRUGO,				     \
zfcp_sysfs_adapter_##_name##_show, NULL);
ZFCP_DEFINE_A_ATTR(status, "0x%08x\n", atomic_read(&adapter->status));
ZFCP_DEFINE_A_ATTR(peer_wwnn, "0x%016llx\n",
(unsigned long long) adapter->peer_wwnn);
ZFCP_DEFINE_A_ATTR(peer_wwpn, "0x%016llx\n",
(unsigned long long) adapter->peer_wwpn);
ZFCP_DEFINE_A_ATTR(peer_d_id, "0x%06x\n", adapter->peer_d_id);
ZFCP_DEFINE_A_ATTR(card_version, "0x%04x\n", adapter->hydra_version);
ZFCP_DEFINE_A_ATTR(lic_version, "0x%08x\n", adapter->fsf_lic_version);
ZFCP_DEFINE_A_ATTR(hardware_version, "0x%08x\n", adapter->hardware_version);
ZFCP_DEFINE_A_ATTR(in_recovery, "%d\n", (atomic_read(&adapter->status) &
ZFCP_STATUS_COMMON_ERP_INUSE) != 0);
ZFCP_DEFINE_ATTR(zfcp_port, port, status, "0x%08x\n",
atomic_read(&port->status));
ZFCP_DEFINE_ATTR(zfcp_port, port, in_recovery, "%d\n",
(atomic_read(&port->status) &
ZFCP_STATUS_COMMON_ERP_INUSE) != 0);
ZFCP_DEFINE_ATTR(zfcp_port, port, access_denied, "%d\n",
(atomic_read(&port->status) &
ZFCP_STATUS_COMMON_ACCESS_DENIED) != 0);
ZFCP_DEFINE_ATTR(zfcp_unit, unit, status, "0x%08x\n",
zfcp_unit_sdev_status(unit));
ZFCP_DEFINE_ATTR(zfcp_unit, unit, in_recovery, "%d\n",
(zfcp_unit_sdev_status(unit) &
ZFCP_STATUS_COMMON_ERP_INUSE) != 0);
ZFCP_DEFINE_ATTR(zfcp_unit, unit, access_denied, "%d\n",
(zfcp_unit_sdev_status(unit) &
ZFCP_STATUS_COMMON_ACCESS_DENIED) != 0);
ZFCP_DEFINE_ATTR(zfcp_unit, unit, access_shared, "%d\n",
(zfcp_unit_sdev_status(unit) &
ZFCP_STATUS_LUN_SHARED) != 0);
ZFCP_DEFINE_ATTR(zfcp_unit, unit, access_readonly, "%d\n",
(zfcp_unit_sdev_status(unit) &
ZFCP_STATUS_LUN_READONLY) != 0);
static ssize_t zfcp_sysfs_port_failed_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t zfcp_sysfs_port_failed_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ZFCP_DEV_ATTR(port, failed, S_IWUSR | S_IRUGO,
zfcp_sysfs_port_failed_show,
zfcp_sysfs_port_failed_store);
static ssize_t zfcp_sysfs_unit_failed_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t zfcp_sysfs_unit_failed_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ZFCP_DEV_ATTR(unit, failed, S_IWUSR | S_IRUGO,
zfcp_sysfs_unit_failed_show,
zfcp_sysfs_unit_failed_store);
static ssize_t zfcp_sysfs_adapter_failed_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t zfcp_sysfs_adapter_failed_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ZFCP_DEV_ATTR(adapter, failed, S_IWUSR | S_IRUGO,
zfcp_sysfs_adapter_failed_show,
zfcp_sysfs_adapter_failed_store);
static ssize_t zfcp_sysfs_port_rescan_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ZFCP_DEV_ATTR(adapter, port_rescan, S_IWUSR, NULL,
zfcp_sysfs_port_rescan_store);
static ssize_t zfcp_sysfs_port_remove_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ZFCP_DEV_ATTR(adapter, port_remove, S_IWUSR, NULL,
zfcp_sysfs_port_remove_store);
static struct attribute *zfcp_adapter_attrs[] = ;
struct attribute_group zfcp_sysfs_adapter_attrs = ;
static ssize_t zfcp_sysfs_unit_add_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(unit_add, S_IWUSR, NULL, zfcp_sysfs_unit_add_store);
static ssize_t zfcp_sysfs_unit_remove_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(unit_remove, S_IWUSR, NULL, zfcp_sysfs_unit_remove_store);
static struct attribute *zfcp_port_attrs[] = ;
struct attribute_group zfcp_sysfs_port_attrs = ;
static struct attribute *zfcp_unit_attrs[] = ;
struct attribute_group zfcp_sysfs_unit_attrs = ;
#define ZFCP_DEFINE_LATENCY_ATTR(_name) 				\
static ssize_t								\
zfcp_sysfs_unit_##_name##_latency_show(struct device *dev,		\
struct device_attribute *attr,	\
char *buf) 									\
static ssize_t								\
zfcp_sysfs_unit_##_name##_latency_store(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
\
static DEVICE_ATTR(_name##_latency, S_IWUSR | S_IRUGO,			\
zfcp_sysfs_unit_##_name##_latency_show,		\
zfcp_sysfs_unit_##_name##_latency_store);
ZFCP_DEFINE_LATENCY_ATTR(read);
ZFCP_DEFINE_LATENCY_ATTR(write);
ZFCP_DEFINE_LATENCY_ATTR(cmd);
#define ZFCP_DEFINE_SCSI_ATTR(_name, _format, _value)			\
static ssize_t zfcp_sysfs_scsi_##_name##_show(struct device *dev,	\
struct device_attribute *attr,\
char *buf)                 \
\
static DEVICE_ATTR(_name, S_IRUGO, zfcp_sysfs_scsi_##_name##_show, NULL);
ZFCP_DEFINE_SCSI_ATTR(hba_id, "%s\n",
dev_name(&port->adapter->ccw_device->dev));
ZFCP_DEFINE_SCSI_ATTR(wwpn, "0x%016llx\n",
(unsigned long long) port->wwpn);
static ssize_t zfcp_sysfs_scsi_fcp_lun_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(fcp_lun, S_IRUGO, zfcp_sysfs_scsi_fcp_lun_show, NULL);
struct device_attribute *zfcp_sysfs_sdev_attrs[] = ;
static ssize_t zfcp_sysfs_adapter_util_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(utilization, S_IRUGO, zfcp_sysfs_adapter_util_show, NULL);
static int zfcp_sysfs_adapter_ex_config(struct device *dev,
struct fsf_statistics_info *stat_inf)
#define ZFCP_SHOST_ATTR(_name, _format, _arg...)			\
static ssize_t zfcp_sysfs_adapter_##_name##_show(struct device *dev,	\
struct device_attribute *attr,\
char *buf)		\
\
static DEVICE_ATTR(_name, S_IRUGO, zfcp_sysfs_adapter_##_name##_show, NULL);
ZFCP_SHOST_ATTR(requests, "%llu %llu %llu\n",
(unsigned long long) stat_info.input_req,
(unsigned long long) stat_info.output_req,
(unsigned long long) stat_info.control_req);
ZFCP_SHOST_ATTR(megabytes, "%llu %llu\n",
(unsigned long long) stat_info.input_mb,
(unsigned long long) stat_info.output_mb);
ZFCP_SHOST_ATTR(seconds_active, "%llu\n",
(unsigned long long) stat_info.seconds_act);
static ssize_t zfcp_sysfs_adapter_q_full_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(queue_full, S_IRUGO, zfcp_sysfs_adapter_q_full_show, NULL);
struct device_attribute *zfcp_sysfs_shost_attrs[] = ;
