#define _BR_PRIVATE_H
#define BR_HASH_BITS 8
#define BR_HASH_SIZE (1 << BR_HASH_BITS)
#define BR_HOLD_TIME (1*HZ)
#define BR_PORT_BITS	10
#define BR_MAX_PORTS	(1<<BR_PORT_BITS)
#define BR_VERSION	"2.3"
#define BR_STP_PROG	"/sbin/bridge-stp"
typedef struct bridge_id bridge_id;
typedef struct mac_addr mac_addr;
typedef __u16 port_id;
struct bridge_id
;
struct mac_addr
;
struct br_ip
;
struct net_bridge_fdb_entry
;
struct net_bridge_port_group ;
struct net_bridge_mdb_entry
;
struct net_bridge_mdb_htable
;
struct net_bridge_port
;
#define br_port_exists(dev) (dev->priv_flags & IFF_BRIDGE_PORT)
static inline struct net_bridge_port *br_port_get_rcu(const struct net_device *dev)
static inline struct net_bridge_port *br_port_get_rtnl(struct net_device *dev)
struct br_cpu_netstats ;
struct net_bridge
;
struct br_input_skb_cb ;
#define BR_INPUT_SKB_CB(__skb)	((struct br_input_skb_cb *)(__skb)->cb)
# define BR_INPUT_SKB_CB_MROUTERS_ONLY(__skb)	(BR_INPUT_SKB_CB(__skb)->mrouters_only)
# define BR_INPUT_SKB_CB_MROUTERS_ONLY(__skb)	(0)
#define br_printk(level, br, format, args...)	\
printk(level "%s: " format, (br)->dev->name, ##args)
#define br_err(__br, format, args...)			\
br_printk(KERN_ERR, __br, format, ##args)
#define br_warn(__br, format, args...)			\
br_printk(KERN_WARNING, __br, format, ##args)
#define br_notice(__br, format, args...)		\
br_printk(KERN_NOTICE, __br, format, ##args)
#define br_info(__br, format, args...)			\
br_printk(KERN_INFO, __br, format, ##args)
#define br_debug(br, format, args...)			\
pr_debug("%s: " format,  (br)->dev->name, ##args)
extern struct notifier_block br_device_notifier;
extern const u8 br_group_address[ETH_ALEN];
static inline int br_is_root_bridge(const struct net_bridge *br)
extern void br_dev_setup(struct net_device *dev);
extern netdev_tx_t br_dev_xmit(struct sk_buff *skb,
struct net_device *dev);
static inline struct netpoll_info *br_netpoll_info(struct net_bridge *br)
static inline void br_netpoll_send_skb(const struct net_bridge_port *p,
struct sk_buff *skb)
extern int br_netpoll_enable(struct net_bridge_port *p);
extern void br_netpoll_disable(struct net_bridge_port *p);
static inline struct netpoll_info *br_netpoll_info(struct net_bridge *br)
static inline void br_netpoll_send_skb(const struct net_bridge_port *p,
struct sk_buff *skb)
static inline int br_netpoll_enable(struct net_bridge_port *p)
static inline void br_netpoll_disable(struct net_bridge_port *p)
extern int br_fdb_init(void);
extern void br_fdb_fini(void);
extern void br_fdb_flush(struct net_bridge *br);
extern void br_fdb_changeaddr(struct net_bridge_port *p,
const unsigned char *newaddr);
extern void br_fdb_cleanup(unsigned long arg);
extern void br_fdb_delete_by_port(struct net_bridge *br,
const struct net_bridge_port *p, int do_all);
extern struct net_bridge_fdb_entry *__br_fdb_get(struct net_bridge *br,
const unsigned char *addr);
extern int br_fdb_test_addr(struct net_device *dev, unsigned char *addr);
extern int br_fdb_fillbuf(struct net_bridge *br, void *buf,
unsigned long count, unsigned long off);
extern int br_fdb_insert(struct net_bridge *br,
struct net_bridge_port *source,
const unsigned char *addr);
extern void br_fdb_update(struct net_bridge *br,
struct net_bridge_port *source,
const unsigned char *addr);
extern int br_fdb_dump(struct sk_buff *skb, struct netlink_callback *cb);
extern int br_fdb_add(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg);
extern int br_fdb_delete(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg);
extern void br_deliver(const struct net_bridge_port *to,
struct sk_buff *skb);
extern int br_dev_queue_push_xmit(struct sk_buff *skb);
extern void br_forward(const struct net_bridge_port *to,
struct sk_buff *skb, struct sk_buff *skb0);
extern int br_forward_finish(struct sk_buff *skb);
extern void br_flood_deliver(struct net_bridge *br, struct sk_buff *skb);
extern void br_flood_forward(struct net_bridge *br, struct sk_buff *skb,
struct sk_buff *skb2);
extern void br_port_carrier_check(struct net_bridge_port *p);
extern int br_add_bridge(struct net *net, const char *name);
extern int br_del_bridge(struct net *net, const char *name);
extern void br_net_exit(struct net *net);
extern int br_add_if(struct net_bridge *br,
struct net_device *dev);
extern int br_del_if(struct net_bridge *br,
struct net_device *dev);
extern int br_min_mtu(const struct net_bridge *br);
extern u32 br_features_recompute(struct net_bridge *br, u32 features);
extern int br_handle_frame_finish(struct sk_buff *skb);
extern rx_handler_result_t br_handle_frame(struct sk_buff **pskb);
extern int br_dev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
extern int br_ioctl_deviceless_stub(struct net *net, unsigned int cmd, void __user *arg);
extern int br_multicast_rcv(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb);
extern struct net_bridge_mdb_entry *br_mdb_get(struct net_bridge *br,
struct sk_buff *skb);
extern void br_multicast_add_port(struct net_bridge_port *port);
extern void br_multicast_del_port(struct net_bridge_port *port);
extern void br_multicast_enable_port(struct net_bridge_port *port);
extern void br_multicast_disable_port(struct net_bridge_port *port);
extern void br_multicast_init(struct net_bridge *br);
extern void br_multicast_open(struct net_bridge *br);
extern void br_multicast_stop(struct net_bridge *br);
extern void br_multicast_deliver(struct net_bridge_mdb_entry *mdst,
struct sk_buff *skb);
extern void br_multicast_forward(struct net_bridge_mdb_entry *mdst,
struct sk_buff *skb, struct sk_buff *skb2);
extern int br_multicast_set_router(struct net_bridge *br, unsigned long val);
extern int br_multicast_set_port_router(struct net_bridge_port *p,
unsigned long val);
extern int br_multicast_toggle(struct net_bridge *br, unsigned long val);
extern int br_multicast_set_hash_max(struct net_bridge *br, unsigned long val);
static inline bool br_multicast_is_router(struct net_bridge *br)
static inline int br_multicast_rcv(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
static inline struct net_bridge_mdb_entry *br_mdb_get(struct net_bridge *br,
struct sk_buff *skb)
static inline void br_multicast_add_port(struct net_bridge_port *port)
static inline void br_multicast_del_port(struct net_bridge_port *port)
static inline void br_multicast_enable_port(struct net_bridge_port *port)
static inline void br_multicast_disable_port(struct net_bridge_port *port)
static inline void br_multicast_init(struct net_bridge *br)
static inline void br_multicast_open(struct net_bridge *br)
static inline void br_multicast_stop(struct net_bridge *br)
static inline void br_multicast_deliver(struct net_bridge_mdb_entry *mdst,
struct sk_buff *skb)
static inline void br_multicast_forward(struct net_bridge_mdb_entry *mdst,
struct sk_buff *skb,
struct sk_buff *skb2)
static inline bool br_multicast_is_router(struct net_bridge *br)
extern int br_netfilter_init(void);
extern void br_netfilter_fini(void);
extern void br_netfilter_rtable_init(struct net_bridge *);
#define br_netfilter_init()	(0)
#define br_netfilter_fini()	do  while(0)
#define br_netfilter_rtable_init(x)
extern void br_log_state(const struct net_bridge_port *p);
extern struct net_bridge_port *br_get_port(struct net_bridge *br,
u16 port_no);
extern void br_init_port(struct net_bridge_port *p);
extern void br_become_designated_port(struct net_bridge_port *p);
extern int br_set_forward_delay(struct net_bridge *br, unsigned long x);
extern int br_set_hello_time(struct net_bridge *br, unsigned long x);
extern int br_set_max_age(struct net_bridge *br, unsigned long x);
extern void br_stp_enable_bridge(struct net_bridge *br);
extern void br_stp_disable_bridge(struct net_bridge *br);
extern void br_stp_set_enabled(struct net_bridge *br, unsigned long val);
extern void br_stp_enable_port(struct net_bridge_port *p);
extern void br_stp_disable_port(struct net_bridge_port *p);
extern bool br_stp_recalculate_bridge_id(struct net_bridge *br);
extern void br_stp_change_bridge_id(struct net_bridge *br, const unsigned char *a);
extern void br_stp_set_bridge_priority(struct net_bridge *br,
u16 newprio);
extern int br_stp_set_port_priority(struct net_bridge_port *p,
unsigned long newprio);
extern int br_stp_set_path_cost(struct net_bridge_port *p,
unsigned long path_cost);
extern ssize_t br_show_bridge_id(char *buf, const struct bridge_id *id);
struct stp_proto;
extern void br_stp_rcv(const struct stp_proto *proto, struct sk_buff *skb,
struct net_device *dev);
extern void br_stp_timer_init(struct net_bridge *br);
extern void br_stp_port_timer_init(struct net_bridge_port *p);
extern unsigned long br_timer_value(const struct timer_list *timer);
#if defined(CONFIG_ATM_LANE) || defined(CONFIG_ATM_LANE_MODULE)
extern int (*br_fdb_test_addr_hook)(struct net_device *dev, unsigned char *addr);
extern int br_netlink_init(void);
extern void br_netlink_fini(void);
extern void br_ifinfo_notify(int event, struct net_bridge_port *port);
extern const struct sysfs_ops brport_sysfs_ops;
extern int br_sysfs_addif(struct net_bridge_port *p);
extern int br_sysfs_renameif(struct net_bridge_port *p);
extern int br_sysfs_addbr(struct net_device *dev);
extern void br_sysfs_delbr(struct net_device *dev);
#define br_sysfs_addif(p)	(0)
#define br_sysfs_renameif(p)	(0)
#define br_sysfs_addbr(dev)	(0)
#define br_sysfs_delbr(dev)	do  while(0)
