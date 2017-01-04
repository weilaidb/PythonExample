#define ND_DEBUG 1
#define ND_PRINTK(fmt, args...) do  while(0)
#define ND_NOPRINTK(x...) do  while(0)
#define ND_PRINTK0 ND_PRINTK
#define ND_PRINTK1 ND_NOPRINTK
#define ND_PRINTK2 ND_NOPRINTK
#define ND_PRINTK3 ND_NOPRINTK
#if ND_DEBUG >= 1
#undef ND_PRINTK1
#define ND_PRINTK1 ND_PRINTK
#if ND_DEBUG >= 2
#undef ND_PRINTK2
#define ND_PRINTK2 ND_PRINTK
#if ND_DEBUG >= 3
#undef ND_PRINTK3
#define ND_PRINTK3 ND_PRINTK
static u32 ndisc_hash(const void *pkey,
const struct net_device *dev,
__u32 rnd);
static int ndisc_constructor(struct neighbour *neigh);
static void ndisc_solicit(struct neighbour *neigh, struct sk_buff *skb);
static void ndisc_error_report(struct neighbour *neigh, struct sk_buff *skb);
static int pndisc_constructor(struct pneigh_entry *n);
static void pndisc_destructor(struct pneigh_entry *n);
static void pndisc_redo(struct sk_buff *skb);
static const struct neigh_ops ndisc_generic_ops = ;
static const struct neigh_ops ndisc_hh_ops = ;
static const struct neigh_ops ndisc_direct_ops = ;
struct neigh_table nd_tbl = ;
struct ndisc_options ;
#define nd_opts_src_lladdr	nd_opt_array[ND_OPT_SOURCE_LL_ADDR]
#define nd_opts_tgt_lladdr	nd_opt_array[ND_OPT_TARGET_LL_ADDR]
#define nd_opts_pi		nd_opt_array[ND_OPT_PREFIX_INFO]
#define nd_opts_pi_end		nd_opt_array[__ND_OPT_PREFIX_INFO_END]
#define nd_opts_rh		nd_opt_array[ND_OPT_REDIRECT_HDR]
#define nd_opts_mtu		nd_opt_array[ND_OPT_MTU]
#define NDISC_OPT_SPACE(len) (((len)+2+7)&~7)
static int ndisc_addr_option_pad(unsigned short type)
static inline int ndisc_opt_addr_space(struct net_device *dev)
static u8 *ndisc_fill_addr_option(u8 *opt, int type, void *data, int data_len,
unsigned short addr_type)
static struct nd_opt_hdr *ndisc_next_option(struct nd_opt_hdr *cur,
struct nd_opt_hdr *end)
static inline int ndisc_is_useropt(struct nd_opt_hdr *opt)
static struct nd_opt_hdr *ndisc_next_useropt(struct nd_opt_hdr *cur,
struct nd_opt_hdr *end)
static struct ndisc_options *ndisc_parse_options(u8 *opt, int opt_len,
struct ndisc_options *ndopts)
static inline u8 *ndisc_opt_addr_data(struct nd_opt_hdr *p,
struct net_device *dev)
int ndisc_mc_map(const struct in6_addr *addr, char *buf, struct net_device *dev, int dir)
EXPORT_SYMBOL(ndisc_mc_map);
static u32 ndisc_hash(const void *pkey,
const struct net_device *dev,
__u32 hash_rnd)
static int ndisc_constructor(struct neighbour *neigh)
static int pndisc_constructor(struct pneigh_entry *n)
static void pndisc_destructor(struct pneigh_entry *n)
struct sk_buff *ndisc_build_skb(struct net_device *dev,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct icmp6hdr *icmp6h,
const struct in6_addr *target,
int llinfo)
EXPORT_SYMBOL(ndisc_build_skb);
void ndisc_send_skb(struct sk_buff *skb,
struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct icmp6hdr *icmp6h)
EXPORT_SYMBOL(ndisc_send_skb);
static void __ndisc_send(struct net_device *dev,
struct neighbour *neigh,
const struct in6_addr *daddr,
const struct in6_addr *saddr,
struct icmp6hdr *icmp6h, const struct in6_addr *target,
int llinfo)
static void ndisc_send_na(struct net_device *dev, struct neighbour *neigh,
const struct in6_addr *daddr,
const struct in6_addr *solicited_addr,
int router, int solicited, int override, int inc_opt)
static void ndisc_send_unsol_na(struct net_device *dev)
void ndisc_send_ns(struct net_device *dev, struct neighbour *neigh,
const struct in6_addr *solicit,
const struct in6_addr *daddr, const struct in6_addr *saddr)
void ndisc_send_rs(struct net_device *dev, const struct in6_addr *saddr,
const struct in6_addr *daddr)
static void ndisc_error_report(struct neighbour *neigh, struct sk_buff *skb)
static void ndisc_solicit(struct neighbour *neigh, struct sk_buff *skb)
static int pndisc_is_router(const void *pkey,
struct net_device *dev)
static void ndisc_recv_ns(struct sk_buff *skb)
static void ndisc_recv_na(struct sk_buff *skb)
static void ndisc_recv_rs(struct sk_buff *skb)
static void ndisc_ra_useropt(struct sk_buff *ra, struct nd_opt_hdr *opt)
static inline int accept_ra(struct inet6_dev *in6_dev)
static void ndisc_router_discovery(struct sk_buff *skb)
static void ndisc_redirect_rcv(struct sk_buff *skb)
void ndisc_send_redirect(struct sk_buff *skb, struct neighbour *neigh,
const struct in6_addr *target)
static void pndisc_redo(struct sk_buff *skb)
int ndisc_rcv(struct sk_buff *skb)
static int ndisc_netdev_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block ndisc_netdev_notifier = ;
static void ndisc_warn_deprecated_sysctl(struct ctl_table *ctl,
const char *func, const char *dev_name)
int ndisc_ifinfo_sysctl_change(struct ctl_table *ctl, int write, void __user *buffer, size_t *lenp, loff_t *ppos)
static int __net_init ndisc_net_init(struct net *net)
static void __net_exit ndisc_net_exit(struct net *net)
static struct pernet_operations ndisc_net_ops = ;
int __init ndisc_init(void)
void ndisc_cleanup(void)
