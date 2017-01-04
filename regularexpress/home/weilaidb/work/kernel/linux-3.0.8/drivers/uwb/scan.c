int uwb_rc_scan(struct uwb_rc *rc,
unsigned channel, enum uwb_scan_type type,
unsigned bpst_offset)
static ssize_t uwb_rc_scan_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uwb_rc_scan_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
DEVICE_ATTR(scan, S_IRUGO | S_IWUSR, uwb_rc_scan_show, uwb_rc_scan_store);
