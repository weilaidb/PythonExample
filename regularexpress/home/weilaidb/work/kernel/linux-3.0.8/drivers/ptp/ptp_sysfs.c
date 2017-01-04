static ssize_t clock_name_show(struct device *dev,
struct device_attribute *attr, char *page)
#define PTP_SHOW_INT(name)						\
static ssize_t name##_show(struct device *dev,				\
struct device_attribute *attr, char *page)	\
PTP_SHOW_INT(max_adj);
PTP_SHOW_INT(n_alarm);
PTP_SHOW_INT(n_ext_ts);
PTP_SHOW_INT(n_per_out);
PTP_SHOW_INT(pps);
#define PTP_RO_ATTR(_var, _name)
struct device_attribute ptp_dev_attrs[] = ;
static ssize_t extts_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t extts_fifo_show(struct device *dev,
struct device_attribute *attr, char *page)
static ssize_t period_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pps_enable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(extts_enable, 0220, NULL, extts_enable_store);
static DEVICE_ATTR(fifo,         0444, extts_fifo_show, NULL);
static DEVICE_ATTR(period,       0220, NULL, period_store);
static DEVICE_ATTR(pps_enable,   0220, NULL, pps_enable_store);
int ptp_cleanup_sysfs(struct ptp_clock *ptp)
int ptp_populate_sysfs(struct ptp_clock *ptp)
