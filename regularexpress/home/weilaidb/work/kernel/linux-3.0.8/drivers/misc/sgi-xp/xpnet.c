struct xpnet_message ;
#define XPNET_MSG_SIZE		XPC_MSG_PAYLOAD_MAX_SIZE
#define XPNET_MSG_DATA_MAX	\
(XPNET_MSG_SIZE - offsetof(struct xpnet_message, data))
#define XPNET_MSG_NENTRIES	(PAGE_SIZE / XPC_MSG_MAX_SIZE)
#define XPNET_MAX_KTHREADS	(XPNET_MSG_NENTRIES + 1)
#define XPNET_MAX_IDLE_KTHREADS	(XPNET_MSG_NENTRIES + 1)
#define _XPNET_VERSION(_major, _minor)	(((_major) << 4) | (_minor))
#define XPNET_VERSION_MAJOR(_v)		((_v) >> 4)
#define XPNET_VERSION_MINOR(_v)		((_v) & 0xf)
#define	XPNET_VERSION _XPNET_VERSION(1, 0)
#define	XPNET_VERSION_EMBED _XPNET_VERSION(1, 1)
#define XPNET_MAGIC	0x88786984
#define XPNET_VALID_MSG(_m)						     \
((XPNET_VERSION_MAJOR(_m->version) == XPNET_VERSION_MAJOR(XPNET_VERSION)) \
&& (msg->magic == XPNET_MAGIC))
#define XPNET_DEVICE_NAME		"xp0"
struct xpnet_pending_msg ;
struct net_device *xpnet_device;
static unsigned long *xpnet_broadcast_partitions;
static DEFINE_SPINLOCK(xpnet_broadcast_lock);
#define XPNET_MAX_MTU (0x800000UL - L1_CACHE_BYTES)
#define XPNET_DEF_MTU (0x8000UL)
#define XPNET_PARTID_OCTET	2
struct device_driver xpnet_dbg_name = ;
struct device xpnet_dbg_subname = ;
struct device *xpnet = &xpnet_dbg_subname;
static void
xpnet_receive(short partid, int channel, struct xpnet_message *msg)
static void
xpnet_connection_activity(enum xp_retval reason, short partid, int channel,
void *data, void *key)
static int
xpnet_dev_open(struct net_device *dev)
static int
xpnet_dev_stop(struct net_device *dev)
static int
xpnet_dev_change_mtu(struct net_device *dev, int new_mtu)
static void
xpnet_send_completed(enum xp_retval reason, short partid, int channel,
void *__qm)
static void
xpnet_send(struct sk_buff *skb, struct xpnet_pending_msg *queued_msg,
u64 start_addr, u64 end_addr, u16 embedded_bytes, int dest_partid)
static int
xpnet_dev_hard_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void
xpnet_dev_tx_timeout(struct net_device *dev)
static const struct net_device_ops xpnet_netdev_ops = ;
static int __init
xpnet_init(void)
module_init(xpnet_init);
static void __exit
xpnet_exit(void)
module_exit(xpnet_exit);
MODULE_AUTHOR("Silicon Graphics, Inc.");
MODULE_DESCRIPTION("Cross Partition Network adapter (XPNET)");
MODULE_LICENSE("GPL");
