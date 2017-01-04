struct ib_port ;
struct port_attribute ;
#define PORT_ATTR(_name, _mode, _show, _store) \
struct port_attribute port_attr_##_name = __ATTR(_name, _mode, _show, _store)
#define PORT_ATTR_RO(_name) \
struct port_attribute port_attr_##_name = __ATTR_RO(_name)
struct port_table_attribute ;
static ssize_t port_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static const struct sysfs_ops port_sysfs_ops = ;
static ssize_t state_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t lid_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t lid_mask_count_show(struct ib_port *p,
struct port_attribute *unused,
char *buf)
static ssize_t sm_lid_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t sm_sl_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t cap_mask_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t rate_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t phys_state_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static ssize_t link_layer_show(struct ib_port *p, struct port_attribute *unused,
char *buf)
static PORT_ATTR_RO(state);
static PORT_ATTR_RO(lid);
static PORT_ATTR_RO(lid_mask_count);
static PORT_ATTR_RO(sm_lid);
static PORT_ATTR_RO(sm_sl);
static PORT_ATTR_RO(cap_mask);
static PORT_ATTR_RO(rate);
static PORT_ATTR_RO(phys_state);
static PORT_ATTR_RO(link_layer);
static struct attribute *port_default_attrs[] = ;
static ssize_t show_port_gid(struct ib_port *p, struct port_attribute *attr,
char *buf)
static ssize_t show_port_pkey(struct ib_port *p, struct port_attribute *attr,
char *buf)
#define PORT_PMA_ATTR(_name, _counter, _width, _offset)			\
struct port_table_attribute port_pma_attr_##_name =
static ssize_t show_pma_counter(struct ib_port *p, struct port_attribute *attr,
char *buf)
static PORT_PMA_ATTR(symbol_error		    ,  0, 16,  32);
static PORT_PMA_ATTR(link_error_recovery	    ,  1,  8,  48);
static PORT_PMA_ATTR(link_downed		    ,  2,  8,  56);
static PORT_PMA_ATTR(port_rcv_errors		    ,  3, 16,  64);
static PORT_PMA_ATTR(port_rcv_remote_physical_errors,  4, 16,  80);
static PORT_PMA_ATTR(port_rcv_switch_relay_errors   ,  5, 16,  96);
static PORT_PMA_ATTR(port_xmit_discards		    ,  6, 16, 112);
static PORT_PMA_ATTR(port_xmit_constraint_errors    ,  7,  8, 128);
static PORT_PMA_ATTR(port_rcv_constraint_errors	    ,  8,  8, 136);
static PORT_PMA_ATTR(local_link_integrity_errors    ,  9,  4, 152);
static PORT_PMA_ATTR(excessive_buffer_overrun_errors, 10,  4, 156);
static PORT_PMA_ATTR(VL15_dropped		    , 11, 16, 176);
static PORT_PMA_ATTR(port_xmit_data		    , 12, 32, 192);
static PORT_PMA_ATTR(port_rcv_data		    , 13, 32, 224);
static PORT_PMA_ATTR(port_xmit_packets		    , 14, 32, 256);
static PORT_PMA_ATTR(port_rcv_packets		    , 15, 32, 288);
static struct attribute *pma_attrs[] = ;
static struct attribute_group pma_group = ;
static void ib_port_release(struct kobject *kobj)
static struct kobj_type port_type = ;
static void ib_device_release(struct device *device)
static int ib_device_uevent(struct device *device,
struct kobj_uevent_env *env)
static struct attribute **
alloc_group_attrs(ssize_t (*show)(struct ib_port *,
struct port_attribute *, char *buf),
int len)
static int add_port(struct ib_device *device, int port_num,
int (*port_callback)(struct ib_device *,
u8, struct kobject *))
static ssize_t show_node_type(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_sys_image_guid(struct device *device,
struct device_attribute *dev_attr, char *buf)
static ssize_t show_node_guid(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_node_desc(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t set_node_desc(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(node_type, S_IRUGO, show_node_type, NULL);
static DEVICE_ATTR(sys_image_guid, S_IRUGO, show_sys_image_guid, NULL);
static DEVICE_ATTR(node_guid, S_IRUGO, show_node_guid, NULL);
static DEVICE_ATTR(node_desc, S_IRUGO | S_IWUSR, show_node_desc, set_node_desc);
static struct device_attribute *ib_class_attributes[] = ;
static struct class ib_class = ;
static ssize_t show_protocol_stat(const struct device *device,
struct device_attribute *attr, char *buf,
unsigned offset)
#define IW_STATS_ENTRY(name)						\
static ssize_t show_##name(struct device *device,			\
struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL)
IW_STATS_ENTRY(ipInReceives);
IW_STATS_ENTRY(ipInHdrErrors);
IW_STATS_ENTRY(ipInTooBigErrors);
IW_STATS_ENTRY(ipInNoRoutes);
IW_STATS_ENTRY(ipInAddrErrors);
IW_STATS_ENTRY(ipInUnknownProtos);
IW_STATS_ENTRY(ipInTruncatedPkts);
IW_STATS_ENTRY(ipInDiscards);
IW_STATS_ENTRY(ipInDelivers);
IW_STATS_ENTRY(ipOutForwDatagrams);
IW_STATS_ENTRY(ipOutRequests);
IW_STATS_ENTRY(ipOutDiscards);
IW_STATS_ENTRY(ipOutNoRoutes);
IW_STATS_ENTRY(ipReasmTimeout);
IW_STATS_ENTRY(ipReasmReqds);
IW_STATS_ENTRY(ipReasmOKs);
IW_STATS_ENTRY(ipReasmFails);
IW_STATS_ENTRY(ipFragOKs);
IW_STATS_ENTRY(ipFragFails);
IW_STATS_ENTRY(ipFragCreates);
IW_STATS_ENTRY(ipInMcastPkts);
IW_STATS_ENTRY(ipOutMcastPkts);
IW_STATS_ENTRY(ipInBcastPkts);
IW_STATS_ENTRY(ipOutBcastPkts);
IW_STATS_ENTRY(tcpRtoAlgorithm);
IW_STATS_ENTRY(tcpRtoMin);
IW_STATS_ENTRY(tcpRtoMax);
IW_STATS_ENTRY(tcpMaxConn);
IW_STATS_ENTRY(tcpActiveOpens);
IW_STATS_ENTRY(tcpPassiveOpens);
IW_STATS_ENTRY(tcpAttemptFails);
IW_STATS_ENTRY(tcpEstabResets);
IW_STATS_ENTRY(tcpCurrEstab);
IW_STATS_ENTRY(tcpInSegs);
IW_STATS_ENTRY(tcpOutSegs);
IW_STATS_ENTRY(tcpRetransSegs);
IW_STATS_ENTRY(tcpInErrs);
IW_STATS_ENTRY(tcpOutRsts);
static struct attribute *iw_proto_stats_attrs[] = ;
static struct attribute_group iw_stats_group = ;
int ib_device_register_sysfs(struct ib_device *device,
int (*port_callback)(struct ib_device *,
u8, struct kobject *))
void ib_device_unregister_sysfs(struct ib_device *device)
int ib_sysfs_setup(void)
void ib_sysfs_cleanup(void)
