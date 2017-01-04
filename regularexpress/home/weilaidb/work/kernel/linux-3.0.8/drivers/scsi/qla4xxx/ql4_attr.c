static ssize_t
qla4xxx_fw_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla4xxx_serial_num_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla4xxx_iscsi_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla4xxx_optrom_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(fw_version, S_IRUGO, qla4xxx_fw_version_show, NULL);
static DEVICE_ATTR(serial_num, S_IRUGO, qla4xxx_serial_num_show, NULL);
static DEVICE_ATTR(iscsi_version, S_IRUGO, qla4xxx_iscsi_version_show, NULL);
static DEVICE_ATTR(optrom_version, S_IRUGO, qla4xxx_optrom_version_show, NULL);
struct device_attribute *qla4xxx_host_attrs[] = ;
