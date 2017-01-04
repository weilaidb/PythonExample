#define KMSG_COMPONENT "qeth"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static ssize_t qeth_dev_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(state, 0444, qeth_dev_state_show, NULL);
static ssize_t qeth_dev_chpid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(chpid, 0444, qeth_dev_chpid_show, NULL);
static ssize_t qeth_dev_if_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(if_name, 0444, qeth_dev_if_name_show, NULL);
static ssize_t qeth_dev_card_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(card_type, 0444, qeth_dev_card_type_show, NULL);
static inline const char *qeth_get_bufsize_str(struct qeth_card *card)
static ssize_t qeth_dev_inbuf_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(inbuf_size, 0444, qeth_dev_inbuf_size_show, NULL);
static ssize_t qeth_dev_portno_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_portno_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(portno, 0644, qeth_dev_portno_show, qeth_dev_portno_store);
static ssize_t qeth_dev_portname_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_portname_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(portname, 0644, qeth_dev_portname_show,
qeth_dev_portname_store);
static ssize_t qeth_dev_prioqing_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_prioqing_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(priority_queueing, 0644, qeth_dev_prioqing_show,
qeth_dev_prioqing_store);
static ssize_t qeth_dev_bufcnt_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_bufcnt_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(buffer_count, 0644, qeth_dev_bufcnt_show,
qeth_dev_bufcnt_store);
static ssize_t qeth_dev_recover_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(recover, 0200, NULL, qeth_dev_recover_store);
static ssize_t qeth_dev_performance_stats_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_performance_stats_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(performance_stats, 0644, qeth_dev_performance_stats_show,
qeth_dev_performance_stats_store);
static ssize_t qeth_dev_layer2_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_layer2_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(layer2, 0644, qeth_dev_layer2_show,
qeth_dev_layer2_store);
#define ATTR_QETH_ISOLATION_NONE	("none")
#define ATTR_QETH_ISOLATION_FWD		("forward")
#define ATTR_QETH_ISOLATION_DROP	("drop")
static ssize_t qeth_dev_isolation_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_isolation_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(isolation, 0644, qeth_dev_isolation_show,
qeth_dev_isolation_store);
static ssize_t qeth_hw_trap_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_hw_trap_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(hw_trap, 0644, qeth_hw_trap_show,
qeth_hw_trap_store);
static ssize_t qeth_dev_blkt_show(char *buf, struct qeth_card *card, int value)
static ssize_t qeth_dev_blkt_store(struct qeth_card *card,
const char *buf, size_t count, int *value, int max_value)
static ssize_t qeth_dev_blkt_total_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_blkt_total_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(total, 0644, qeth_dev_blkt_total_show,
qeth_dev_blkt_total_store);
static ssize_t qeth_dev_blkt_inter_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_blkt_inter_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(inter, 0644, qeth_dev_blkt_inter_show,
qeth_dev_blkt_inter_store);
static ssize_t qeth_dev_blkt_inter_jumbo_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_dev_blkt_inter_jumbo_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(inter_jumbo, 0644, qeth_dev_blkt_inter_jumbo_show,
qeth_dev_blkt_inter_jumbo_store);
static struct attribute *qeth_blkt_device_attrs[] = ;
static struct attribute_group qeth_device_blkt_group = ;
static struct attribute *qeth_device_attrs[] = ;
static struct attribute_group qeth_device_attr_group = ;
static struct attribute *qeth_osn_device_attrs[] = ;
static struct attribute_group qeth_osn_device_attr_group = ;
int qeth_core_create_device_attributes(struct device *dev)
void qeth_core_remove_device_attributes(struct device *dev)
int qeth_core_create_osn_attributes(struct device *dev)
void qeth_core_remove_osn_attributes(struct device *dev)
