#undef DEBUG
MODULE_AUTHOR("Kyle Lucke <klucke@us.ibm.com>");
MODULE_DESCRIPTION("iSeries Virtual ethernet driver");
MODULE_LICENSE("GPL");
#define VETH_EVENT_CAP	(0)
#define VETH_EVENT_FRAMES	(1)
#define VETH_EVENT_MONITOR	(2)
#define VETH_EVENT_FRAMES_ACK	(3)
#define VETH_MAX_ACKS_PER_MSG	(20)
#define VETH_MAX_FRAMES_PER_MSG	(6)
struct veth_frames_data ;
#define VETH_EOF_SHIFT		(32-VETH_MAX_FRAMES_PER_MSG)
struct veth_frames_ack_data ;
struct veth_cap_data ;
struct veth_lpevent ;
#define DRV_NAME	"iseries_veth"
#define DRV_VERSION	"2.0"
#define VETH_NUMBUFFERS		(120)
#define VETH_ACKTIMEOUT 	(1000000)
#define VETH_MAX_MCAST		(12)
#define VETH_MAX_MTU		(9000)
#if VETH_NUMBUFFERS < 10
#define ACK_THRESHOLD 		(1)
#elif VETH_NUMBUFFERS < 20
#define ACK_THRESHOLD 		(4)
#elif VETH_NUMBUFFERS < 40
#define ACK_THRESHOLD 		(10)
#define ACK_THRESHOLD 		(20)
#define	VETH_STATE_SHUTDOWN	(0x0001)
#define VETH_STATE_OPEN		(0x0002)
#define VETH_STATE_RESET	(0x0004)
#define VETH_STATE_SENTMON	(0x0008)
#define VETH_STATE_SENTCAPS	(0x0010)
#define VETH_STATE_GOTCAPACK	(0x0020)
#define VETH_STATE_GOTCAPS	(0x0040)
#define VETH_STATE_SENTCAPACK	(0x0080)
#define VETH_STATE_READY	(0x0100)
struct veth_msg ;
struct veth_lpar_connection ;
struct veth_port ;
static HvLpIndex this_lp;
static struct veth_lpar_connection *veth_cnx[HVMAXARCHITECTEDLPS];
static struct net_device *veth_dev[HVMAXARCHITECTEDVIRTUALLANS];
static int veth_start_xmit(struct sk_buff *skb, struct net_device *dev);
static void veth_recycle_msg(struct veth_lpar_connection *, struct veth_msg *);
static void veth_wake_queues(struct veth_lpar_connection *cnx);
static void veth_stop_queues(struct veth_lpar_connection *cnx);
static void veth_receive(struct veth_lpar_connection *, struct veth_lpevent *);
static void veth_release_connection(struct kobject *kobject);
static void veth_timed_ack(unsigned long ptr);
static void veth_timed_reset(unsigned long ptr);
#define veth_info(fmt, args...) \
printk(KERN_INFO DRV_NAME ": " fmt, ## args)
#define veth_error(fmt, args...) \
printk(KERN_ERR DRV_NAME ": Error: " fmt, ## args)
#define veth_debug(fmt, args...) \
printk(KERN_DEBUG DRV_NAME ": " fmt, ## args)
#define veth_debug(fmt, args...) do  while (0)
static inline void veth_stack_push(struct veth_lpar_connection *cnx,
struct veth_msg *msg)
static inline struct veth_msg *veth_stack_pop(struct veth_lpar_connection *cnx)
static inline int veth_stack_is_empty(struct veth_lpar_connection *cnx)
static inline HvLpEvent_Rc
veth_signalevent(struct veth_lpar_connection *cnx, u16 subtype,
HvLpEvent_AckInd ackind, HvLpEvent_AckType acktype,
u64 token,
u64 data1, u64 data2, u64 data3, u64 data4, u64 data5)
static inline HvLpEvent_Rc veth_signaldata(struct veth_lpar_connection *cnx,
u16 subtype, u64 token, void *data)
struct veth_allocation ;
static void veth_complete_allocation(void *parm, int number)
static int veth_allocate_events(HvLpIndex rlp, int number)
struct veth_cnx_attribute ;
static ssize_t veth_cnx_attribute_show(struct kobject *kobj,
struct attribute *attr, char *buf)
#define CUSTOM_CNX_ATTR(_name, _format, _expression)			\
static ssize_t _name##_show(struct veth_lpar_connection *cnx, char *buf)\
\
struct veth_cnx_attribute veth_cnx_attr_##_name = __ATTR_RO(_name)
#define SIMPLE_CNX_ATTR(_name)	\
CUSTOM_CNX_ATTR(_name, "%lu\n", (unsigned long)cnx->_name)
SIMPLE_CNX_ATTR(outstanding_tx);
SIMPLE_CNX_ATTR(remote_lp);
SIMPLE_CNX_ATTR(num_events);
SIMPLE_CNX_ATTR(src_inst);
SIMPLE_CNX_ATTR(dst_inst);
SIMPLE_CNX_ATTR(num_pending_acks);
SIMPLE_CNX_ATTR(num_ack_events);
CUSTOM_CNX_ATTR(ack_timeout, "%d\n", jiffies_to_msecs(cnx->ack_timeout));
CUSTOM_CNX_ATTR(reset_timeout, "%d\n", jiffies_to_msecs(cnx->reset_timeout));
CUSTOM_CNX_ATTR(state, "0x%.4lX\n", cnx->state);
CUSTOM_CNX_ATTR(last_contact, "%d\n", cnx->last_contact ?
jiffies_to_msecs(jiffies - cnx->last_contact) : 0);
#define GET_CNX_ATTR(_name)	(&veth_cnx_attr_##_name.attr)
static struct attribute *veth_cnx_default_attrs[] = ;
static const struct sysfs_ops veth_cnx_sysfs_ops = ;
static struct kobj_type veth_lpar_connection_ktype = ;
struct veth_port_attribute ;
static ssize_t veth_port_attribute_show(struct kobject *kobj,
struct attribute *attr, char *buf)
#define CUSTOM_PORT_ATTR(_name, _format, _expression)			\
static ssize_t _name##_show(struct veth_port *port, char *buf)		\
\
struct veth_port_attribute veth_port_attr_##_name = __ATTR_RO(_name)
#define SIMPLE_PORT_ATTR(_name)	\
CUSTOM_PORT_ATTR(_name, "%lu\n", (unsigned long)port->_name)
SIMPLE_PORT_ATTR(promiscuous);
SIMPLE_PORT_ATTR(num_mcast);
CUSTOM_PORT_ATTR(lpar_map, "0x%X\n", port->lpar_map);
CUSTOM_PORT_ATTR(stopped_map, "0x%X\n", port->stopped_map);
CUSTOM_PORT_ATTR(mac_addr, "0x%llX\n", port->mac_addr);
#define GET_PORT_ATTR(_name)	(&veth_port_attr_##_name.attr)
static struct attribute *veth_port_default_attrs[] = ;
static const struct sysfs_ops veth_port_sysfs_ops = ;
static struct kobj_type veth_port_ktype = ;
static inline void veth_kick_statemachine(struct veth_lpar_connection *cnx)
static void veth_take_cap(struct veth_lpar_connection *cnx,
struct veth_lpevent *event)
static void veth_take_cap_ack(struct veth_lpar_connection *cnx,
struct veth_lpevent *event)
static void veth_take_monitor_ack(struct veth_lpar_connection *cnx,
struct veth_lpevent *event)
static void veth_handle_ack(struct veth_lpevent *event)
static void veth_handle_int(struct veth_lpevent *event)
static void veth_handle_event(struct HvLpEvent *event)
static int veth_process_caps(struct veth_lpar_connection *cnx)
static void veth_statemachine(struct work_struct *work)
static int veth_init_connection(u8 rlp)
static void veth_stop_connection(struct veth_lpar_connection *cnx)
static void veth_destroy_connection(struct veth_lpar_connection *cnx)
static void veth_release_connection(struct kobject *kobj)
static int veth_open(struct net_device *dev)
static int veth_close(struct net_device *dev)
static int veth_change_mtu(struct net_device *dev, int new_mtu)
static void veth_set_multicast_list(struct net_device *dev)
static void veth_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int veth_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static const struct ethtool_ops ops = ;
static const struct net_device_ops veth_netdev_ops = ;
static struct net_device *veth_probe_one(int vlan,
struct vio_dev *vio_dev)
static int veth_transmit_to_one(struct sk_buff *skb, HvLpIndex rlp,
struct net_device *dev)
static void veth_transmit_to_many(struct sk_buff *skb,
HvLpIndexMap lpmask,
struct net_device *dev)
static int veth_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void veth_recycle_msg(struct veth_lpar_connection *cnx,
struct veth_msg *msg)
static void veth_wake_queues(struct veth_lpar_connection *cnx)
static void veth_stop_queues(struct veth_lpar_connection *cnx)
static void veth_timed_reset(unsigned long ptr)
static inline int veth_frame_wanted(struct veth_port *port, u64 mac_addr)
struct dma_chunk ;
#define VETH_MAX_PAGES_PER_FRAME ( (VETH_MAX_MTU+PAGE_SIZE-2)/PAGE_SIZE + 1 )
static inline void veth_build_dma_list(struct dma_chunk *list,
unsigned char *p, unsigned long length)
static void veth_flush_acks(struct veth_lpar_connection *cnx)
static void veth_receive(struct veth_lpar_connection *cnx,
struct veth_lpevent *event)
static void veth_timed_ack(unsigned long ptr)
static int veth_remove(struct vio_dev *vdev)
static int veth_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static struct vio_device_id veth_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, veth_device_table);
static struct vio_driver veth_driver = ;
static void __exit veth_module_cleanup(void)
module_exit(veth_module_cleanup);
static int __init veth_module_init(void)
module_init(veth_module_init);
