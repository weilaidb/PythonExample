static int qib_parse_ushort(const char *str, unsigned short *valp)
static ssize_t show_hrtbt_enb(struct qib_pportdata *ppd, char *buf)
static ssize_t store_hrtbt_enb(struct qib_pportdata *ppd, const char *buf,
size_t count)
static ssize_t store_loopback(struct qib_pportdata *ppd, const char *buf,
size_t count)
static ssize_t store_led_override(struct qib_pportdata *ppd, const char *buf,
size_t count)
static ssize_t show_status(struct qib_pportdata *ppd, char *buf)
static const char *qib_status_str[] = ;
static ssize_t show_status_str(struct qib_pportdata *ppd, char *buf)
#define QIB_PORT_ATTR(name, mode, show, store) \
static struct qib_port_attr qib_port_attr_##name = \
__ATTR(name, mode, show, store)
struct qib_port_attr ;
QIB_PORT_ATTR(loopback, S_IWUSR, NULL, store_loopback);
QIB_PORT_ATTR(led_override, S_IWUSR, NULL, store_led_override);
QIB_PORT_ATTR(hrtbt_enable, S_IWUSR | S_IRUGO, show_hrtbt_enb,
store_hrtbt_enb);
QIB_PORT_ATTR(status, S_IRUGO, show_status, NULL);
QIB_PORT_ATTR(status_str, S_IRUGO, show_status_str, NULL);
static struct attribute *port_default_attributes[] = ;
static ssize_t qib_portattr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t qib_portattr_store(struct kobject *kobj,
struct attribute *attr, const char *buf, size_t len)
static void qib_port_release(struct kobject *kobj)
static const struct sysfs_ops qib_port_ops = ;
static struct kobj_type qib_port_ktype = ;
#define QIB_SL2VL_ATTR(N) \
static struct qib_sl2vl_attr qib_sl2vl_attr_##N =
struct qib_sl2vl_attr ;
QIB_SL2VL_ATTR(0);
QIB_SL2VL_ATTR(1);
QIB_SL2VL_ATTR(2);
QIB_SL2VL_ATTR(3);
QIB_SL2VL_ATTR(4);
QIB_SL2VL_ATTR(5);
QIB_SL2VL_ATTR(6);
QIB_SL2VL_ATTR(7);
QIB_SL2VL_ATTR(8);
QIB_SL2VL_ATTR(9);
QIB_SL2VL_ATTR(10);
QIB_SL2VL_ATTR(11);
QIB_SL2VL_ATTR(12);
QIB_SL2VL_ATTR(13);
QIB_SL2VL_ATTR(14);
QIB_SL2VL_ATTR(15);
static struct attribute *sl2vl_default_attributes[] = ;
static ssize_t sl2vl_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static const struct sysfs_ops qib_sl2vl_ops = ;
static struct kobj_type qib_sl2vl_ktype = ;
#define QIB_DIAGC_ATTR(N) \
static struct qib_diagc_attr qib_diagc_attr_##N =
struct qib_diagc_attr ;
QIB_DIAGC_ATTR(rc_resends);
QIB_DIAGC_ATTR(rc_acks);
QIB_DIAGC_ATTR(rc_qacks);
QIB_DIAGC_ATTR(rc_delayed_comp);
QIB_DIAGC_ATTR(seq_naks);
QIB_DIAGC_ATTR(rdma_seq);
QIB_DIAGC_ATTR(rnr_naks);
QIB_DIAGC_ATTR(other_naks);
QIB_DIAGC_ATTR(rc_timeouts);
QIB_DIAGC_ATTR(loop_pkts);
QIB_DIAGC_ATTR(pkt_drops);
QIB_DIAGC_ATTR(dmawait);
QIB_DIAGC_ATTR(unaligned);
QIB_DIAGC_ATTR(rc_dupreq);
QIB_DIAGC_ATTR(rc_seqnak);
static struct attribute *diagc_default_attributes[] = ;
static ssize_t diagc_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t diagc_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t size)
static const struct sysfs_ops qib_diagc_ops = ;
static struct kobj_type qib_diagc_ktype = ;
static ssize_t show_rev(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_version(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_boardversion(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_localbus_info(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_nctxts(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_serial(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_chip_reset(struct device *device,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t show_logged_errs(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_tempsense(struct device *device,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(version, S_IRUGO, show_version, NULL);
static DEVICE_ATTR(nctxts, S_IRUGO, show_nctxts, NULL);
static DEVICE_ATTR(serial, S_IRUGO, show_serial, NULL);
static DEVICE_ATTR(boardversion, S_IRUGO, show_boardversion, NULL);
static DEVICE_ATTR(logged_errors, S_IRUGO, show_logged_errs, NULL);
static DEVICE_ATTR(tempsense, S_IRUGO, show_tempsense, NULL);
static DEVICE_ATTR(localbus_info, S_IRUGO, show_localbus_info, NULL);
static DEVICE_ATTR(chip_reset, S_IWUSR, NULL, store_chip_reset);
static struct device_attribute *qib_attributes[] = ;
int qib_create_port_files(struct ib_device *ibdev, u8 port_num,
struct kobject *kobj)
int qib_verbs_register_sysfs(struct qib_devdata *dd)
void qib_verbs_unregister_sysfs(struct qib_devdata *dd)
