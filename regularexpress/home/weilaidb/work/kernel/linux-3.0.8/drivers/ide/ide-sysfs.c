char *ide_media_string(ide_drive_t *drive)
static ssize_t media_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t drivename_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t model_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t firmware_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t serial_show(struct device *dev, struct device_attribute *attr,
char *buf)
struct device_attribute ide_dev_attrs[] = ;
static ssize_t store_delete_devices(struct device *portdev,
struct device_attribute *attr,
const char *buf, size_t n)
;
static DEVICE_ATTR(delete_devices, S_IWUSR, NULL, store_delete_devices);
static ssize_t store_scan(struct device *portdev,
struct device_attribute *attr,
const char *buf, size_t n)
;
static DEVICE_ATTR(scan, S_IWUSR, NULL, store_scan);
static struct device_attribute *ide_port_attrs[] = ;
int ide_sysfs_register_port(ide_hwif_t *hwif)
