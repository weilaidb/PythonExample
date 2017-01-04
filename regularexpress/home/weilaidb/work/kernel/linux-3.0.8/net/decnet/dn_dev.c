#define DN_IFREQ_SIZE (sizeof(struct ifreq) - sizeof(struct sockaddr) + sizeof(struct sockaddr_dn))
static char dn_rt_all_end_mcast[ETH_ALEN] = ;
static char dn_rt_all_rt_mcast[ETH_ALEN]  = ;
static char dn_hiord[ETH_ALEN]            = ;
static unsigned char dn_eco_version[3]    = ;
extern struct neigh_table dn_neigh_table;
__le16 decnet_address = 0;
static DEFINE_SPINLOCK(dndev_lock);
static struct net_device *decnet_default_device;
static BLOCKING_NOTIFIER_HEAD(dnaddr_chain);
static struct dn_dev *dn_dev_create(struct net_device *dev, int *err);
static void dn_dev_delete(struct net_device *dev);
static void dn_ifaddr_notify(int event, struct dn_ifaddr *ifa);
static int dn_eth_up(struct net_device *);
static void dn_eth_down(struct net_device *);
static void dn_send_brd_hello(struct net_device *dev, struct dn_ifaddr *ifa);
static void dn_send_ptp_hello(struct net_device *dev, struct dn_ifaddr *ifa);
static struct dn_dev_parms dn_dev_list[] =  ;
#define DN_DEV_LIST_SIZE ARRAY_SIZE(dn_dev_list)
#define DN_DEV_PARMS_OFFSET(x) offsetof(struct dn_dev_parms, x)
static int min_t2[] = ;
static int max_t2[] = ;
static int min_t3[] = ;
static int max_t3[] = ;
static int min_priority[1];
static int max_priority[] = ;
static int dn_forwarding_proc(ctl_table *, int,
void __user *, size_t *, loff_t *);
static struct dn_dev_sysctl_table  dn_dev_sysctl = ;
static void dn_dev_sysctl_register(struct net_device *dev, struct dn_dev_parms *parms)
static void dn_dev_sysctl_unregister(struct dn_dev_parms *parms)
static int dn_forwarding_proc(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static void dn_dev_sysctl_unregister(struct dn_dev_parms *parms)
static void dn_dev_sysctl_register(struct net_device *dev, struct dn_dev_parms *parms)
static inline __u16 mtu2blksize(struct net_device *dev)
static struct dn_ifaddr *dn_dev_alloc_ifa(void)
static void dn_dev_free_ifa(struct dn_ifaddr *ifa)
static void dn_dev_del_ifa(struct dn_dev *dn_db, struct dn_ifaddr __rcu **ifap, int destroy)
static int dn_dev_insert_ifa(struct dn_dev *dn_db, struct dn_ifaddr *ifa)
static int dn_dev_set_ifa(struct net_device *dev, struct dn_ifaddr *ifa)
int dn_dev_ioctl(unsigned int cmd, void __user *arg)
struct net_device *dn_dev_get_default(void)
int dn_dev_set_default(struct net_device *dev, int force)
static void dn_dev_check_default(struct net_device *dev)
static struct dn_dev *dn_dev_by_index(int ifindex)
static const struct nla_policy dn_ifa_policy[IFA_MAX+1] = ;
static int dn_nl_deladdr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int dn_nl_newaddr(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static inline size_t dn_ifaddr_nlmsg_size(void)
static int dn_nl_fill_ifaddr(struct sk_buff *skb, struct dn_ifaddr *ifa,
u32 pid, u32 seq, int event, unsigned int flags)
static void dn_ifaddr_notify(int event, struct dn_ifaddr *ifa)
static int dn_nl_dump_ifaddr(struct sk_buff *skb, struct netlink_callback *cb)
static int dn_dev_get_first(struct net_device *dev, __le16 *addr)
int dn_dev_bind_default(__le16 *addr)
static void dn_send_endnode_hello(struct net_device *dev, struct dn_ifaddr *ifa)
#define DRDELAY (5 * HZ)
static int dn_am_i_a_router(struct dn_neigh *dn, struct dn_dev *dn_db, struct dn_ifaddr *ifa)
static void dn_send_router_hello(struct net_device *dev, struct dn_ifaddr *ifa)
static void dn_send_brd_hello(struct net_device *dev, struct dn_ifaddr *ifa)
static void dn_send_ptp_hello(struct net_device *dev, struct dn_ifaddr *ifa)
static int dn_eth_up(struct net_device *dev)
static void dn_eth_down(struct net_device *dev)
static void dn_dev_set_timer(struct net_device *dev);
static void dn_dev_timer_func(unsigned long arg)
static void dn_dev_set_timer(struct net_device *dev)
static struct dn_dev *dn_dev_create(struct net_device *dev, int *err)
void dn_dev_up(struct net_device *dev)
static void dn_dev_delete(struct net_device *dev)
void dn_dev_down(struct net_device *dev)
void dn_dev_init_pkt(struct sk_buff *skb)
void dn_dev_veri_pkt(struct sk_buff *skb)
void dn_dev_hello(struct sk_buff *skb)
void dn_dev_devices_off(void)
void dn_dev_devices_on(void)
int register_dnaddr_notifier(struct notifier_block *nb)
int unregister_dnaddr_notifier(struct notifier_block *nb)
static inline int is_dn_dev(struct net_device *dev)
static void *dn_dev_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *dn_dev_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void dn_dev_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static char *dn_type2asc(char type)
static int dn_dev_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations dn_dev_seq_ops = ;
static int dn_dev_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dn_dev_seq_fops = ;
static int addr[2];
module_param_array(addr, int, NULL, 0444);
MODULE_PARM_DESC(addr, "The DECnet address of this machine: area,node");
void __init dn_dev_init(void)
void __exit dn_dev_cleanup(void)
