#if defined(CONFIG_ATM_CLIP) || defined(CONFIG_ATM_CLIP_MODULE)
struct neigh_table *clip_tbl_hook;
EXPORT_SYMBOL(clip_tbl_hook);
static u32 arp_hash(const void *pkey, const struct net_device *dev, __u32 rnd);
static int arp_constructor(struct neighbour *neigh);
static void arp_solicit(struct neighbour *neigh, struct sk_buff *skb);
static void arp_error_report(struct neighbour *neigh, struct sk_buff *skb);
static void parp_redo(struct sk_buff *skb);
static const struct neigh_ops arp_generic_ops = ;
static const struct neigh_ops arp_hh_ops = ;
static const struct neigh_ops arp_direct_ops = ;
static const struct neigh_ops arp_broken_ops = ;
struct neigh_table arp_tbl = ;
EXPORT_SYMBOL(arp_tbl);
int arp_mc_map(__be32 addr, u8 *haddr, struct net_device *dev, int dir)
static u32 arp_hash(const void *pkey,
const struct net_device *dev,
__u32 hash_rnd)
static int arp_constructor(struct neighbour *neigh)
static void arp_error_report(struct neighbour *neigh, struct sk_buff *skb)
static void arp_solicit(struct neighbour *neigh, struct sk_buff *skb)
static int arp_ignore(struct in_device *in_dev, __be32 sip, __be32 tip)
static int arp_filter(__be32 sip, __be32 tip, struct net_device *dev)
static int arp_set_predefined(int addr_hint, unsigned char *haddr,
__be32 paddr, struct net_device *dev)
int arp_find(unsigned char *haddr, struct sk_buff *skb)
EXPORT_SYMBOL(arp_find);
int arp_bind_neighbour(struct dst_entry *dst)
static inline int arp_fwd_proxy(struct in_device *in_dev,
struct net_device *dev,	struct rtable *rt)
static inline int arp_fwd_pvlan(struct in_device *in_dev,
struct net_device *dev,	struct rtable *rt,
__be32 sip, __be32 tip)
struct sk_buff *arp_create(int type, int ptype, __be32 dest_ip,
struct net_device *dev, __be32 src_ip,
const unsigned char *dest_hw,
const unsigned char *src_hw,
const unsigned char *target_hw)
EXPORT_SYMBOL(arp_create);
void arp_xmit(struct sk_buff *skb)
EXPORT_SYMBOL(arp_xmit);
void arp_send(int type, int ptype, __be32 dest_ip,
struct net_device *dev, __be32 src_ip,
const unsigned char *dest_hw, const unsigned char *src_hw,
const unsigned char *target_hw)
EXPORT_SYMBOL(arp_send);
static int arp_process(struct sk_buff *skb)
static void parp_redo(struct sk_buff *skb)
static int arp_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int arp_req_set_proxy(struct net *net, struct net_device *dev, int on)
static int arp_req_set_public(struct net *net, struct arpreq *r,
struct net_device *dev)
static int arp_req_set(struct net *net, struct arpreq *r,
struct net_device *dev)
static unsigned arp_state_to_flags(struct neighbour *neigh)
static int arp_req_get(struct arpreq *r, struct net_device *dev)
int arp_invalidate(struct net_device *dev, __be32 ip)
EXPORT_SYMBOL(arp_invalidate);
static int arp_req_delete_public(struct net *net, struct arpreq *r,
struct net_device *dev)
static int arp_req_delete(struct net *net, struct arpreq *r,
struct net_device *dev)
int arp_ioctl(struct net *net, unsigned int cmd, void __user *arg)
static int arp_netdev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block arp_netdev_notifier = ;
void arp_ifdown(struct net_device *dev)
static struct packet_type arp_packet_type __read_mostly = ;
static int arp_proc_init(void);
void __init arp_init(void)
#if defined(CONFIG_AX25) || defined(CONFIG_AX25_MODULE)
static char *ax2asc2(ax25_address *a, char *buf)
#define HBUFFERLEN 30
static void arp_format_neigh_entry(struct seq_file *seq,
struct neighbour *n)
static void arp_format_pneigh_entry(struct seq_file *seq,
struct pneigh_entry *n)
static int arp_seq_show(struct seq_file *seq, void *v)
static void *arp_seq_start(struct seq_file *seq, loff_t *pos)
static const struct seq_operations arp_seq_ops = ;
static int arp_seq_open(struct inode *inode, struct file *file)
static const struct file_operations arp_seq_fops = ;
static int __net_init arp_net_init(struct net *net)
static void __net_exit arp_net_exit(struct net *net)
static struct pernet_operations arp_net_ops = ;
static int __init arp_proc_init(void)
static int __init arp_proc_init(void)
