#define MCAST_DEBUG 2
#if MCAST_DEBUG >= 3
#define MDBG(x) printk x
#define MDBG(x)
static void *__mld2_query_bugs[] __attribute__((__unused__)) = ;
static struct in6_addr mld2_all_mcr = MLD2_ALL_MCR_INIT;
static DEFINE_SPINLOCK(ipv6_sk_mc_lock);
static void igmp6_join_group(struct ifmcaddr6 *ma);
static void igmp6_leave_group(struct ifmcaddr6 *ma);
static void igmp6_timer_handler(unsigned long data);
static void mld_gq_timer_expire(unsigned long data);
static void mld_ifc_timer_expire(unsigned long data);
static void mld_ifc_event(struct inet6_dev *idev);
static void mld_add_delrec(struct inet6_dev *idev, struct ifmcaddr6 *pmc);
static void mld_del_delrec(struct inet6_dev *idev, const struct in6_addr *addr);
static void mld_clear_delrec(struct inet6_dev *idev);
static int sf_setstate(struct ifmcaddr6 *pmc);
static void sf_markstate(struct ifmcaddr6 *pmc);
static void ip6_mc_clear_src(struct ifmcaddr6 *pmc);
static int ip6_mc_del_src(struct inet6_dev *idev, const struct in6_addr *pmca,
int sfmode, int sfcount, const struct in6_addr *psfsrc,
int delta);
static int ip6_mc_add_src(struct inet6_dev *idev, const struct in6_addr *pmca,
int sfmode, int sfcount, const struct in6_addr *psfsrc,
int delta);
static int ip6_mc_leave_src(struct sock *sk, struct ipv6_mc_socklist *iml,
struct inet6_dev *idev);
#define IGMP6_UNSOLICITED_IVAL	(10*HZ)
#define MLD_QRV_DEFAULT		2
#define MLD_V1_SEEN(idev) (dev_net((idev)->dev)->ipv6.devconf_all->force_mld_version == 1 || \
(idev)->cnf.force_mld_version == 1 || \
((idev)->mc_v1_seen && \
time_before(jiffies, (idev)->mc_v1_seen)))
#define IPV6_MLD_MAX_MSF	64
int sysctl_mld_max_msf __read_mostly = IPV6_MLD_MAX_MSF;
#define for_each_pmc_rcu(np, pmc)				\
for (pmc = rcu_dereference(np->ipv6_mc_list);		\
pmc != NULL;					\
pmc = rcu_dereference(pmc->next))
int ipv6_sock_mc_join(struct sock *sk, int ifindex, const struct in6_addr *addr)
int ipv6_sock_mc_drop(struct sock *sk, int ifindex, const struct in6_addr *addr)
static struct inet6_dev *ip6_mc_find_dev_rcu(struct net *net,
const struct in6_addr *group,
int ifindex)
void ipv6_sock_mc_close(struct sock *sk)
int ip6_mc_source(int add, int omode, struct sock *sk,
struct group_source_req *pgsr)
int ip6_mc_msfilter(struct sock *sk, struct group_filter *gsf)
int ip6_mc_msfget(struct sock *sk, struct group_filter *gsf,
struct group_filter __user *optval, int __user *optlen)
int inet6_mc_check(struct sock *sk, const struct in6_addr *mc_addr,
const struct in6_addr *src_addr)
static void ma_put(struct ifmcaddr6 *mc)
static void igmp6_group_added(struct ifmcaddr6 *mc)
static void igmp6_group_dropped(struct ifmcaddr6 *mc)
static void mld_add_delrec(struct inet6_dev *idev, struct ifmcaddr6 *im)
static void mld_del_delrec(struct inet6_dev *idev, const struct in6_addr *pmca)
static void mld_clear_delrec(struct inet6_dev *idev)
int ipv6_dev_mc_inc(struct net_device *dev, const struct in6_addr *addr)
int __ipv6_dev_mc_dec(struct inet6_dev *idev, const struct in6_addr *addr)
int ipv6_dev_mc_dec(struct net_device *dev, const struct in6_addr *addr)
int ipv6_is_mld(struct sk_buff *skb, int nexthdr)
int ipv6_chk_mcast_addr(struct net_device *dev, const struct in6_addr *group,
const struct in6_addr *src_addr)
static void mld_gq_start_timer(struct inet6_dev *idev)
static void mld_ifc_start_timer(struct inet6_dev *idev, int delay)
static void igmp6_group_queried(struct ifmcaddr6 *ma, unsigned long resptime)
static int mld_xmarksources(struct ifmcaddr6 *pmc, int nsrcs,
const struct in6_addr *srcs)
static int mld_marksources(struct ifmcaddr6 *pmc, int nsrcs,
const struct in6_addr *srcs)
int igmp6_event_query(struct sk_buff *skb)
int igmp6_event_report(struct sk_buff *skb)
static int is_in(struct ifmcaddr6 *pmc, struct ip6_sf_list *psf, int type,
int gdeleted, int sdeleted)
static int
mld_scount(struct ifmcaddr6 *pmc, int type, int gdeleted, int sdeleted)
static struct sk_buff *mld_newpack(struct net_device *dev, int size)
static void mld_sendpack(struct sk_buff *skb)
static int grec_size(struct ifmcaddr6 *pmc, int type, int gdel, int sdel)
static struct sk_buff *add_grhead(struct sk_buff *skb, struct ifmcaddr6 *pmc,
int type, struct mld2_grec **ppgr)
#define AVAILABLE(skb) ((skb) ? ((skb)->dev ? (skb)->dev->mtu - (skb)->len : \
skb_tailroom(skb)) : 0)
static struct sk_buff *add_grec(struct sk_buff *skb, struct ifmcaddr6 *pmc,
int type, int gdeleted, int sdeleted)
static void mld_send_report(struct inet6_dev *idev, struct ifmcaddr6 *pmc)
static void mld_clear_zeros(struct ip6_sf_list **ppsf)
static void mld_send_cr(struct inet6_dev *idev)
static void igmp6_send(struct in6_addr *addr, struct net_device *dev, int type)
static int ip6_mc_del1_src(struct ifmcaddr6 *pmc, int sfmode,
const struct in6_addr *psfsrc)
static int ip6_mc_del_src(struct inet6_dev *idev, const struct in6_addr *pmca,
int sfmode, int sfcount, const struct in6_addr *psfsrc,
int delta)
static int ip6_mc_add1_src(struct ifmcaddr6 *pmc, int sfmode,
const struct in6_addr *psfsrc, int delta)
static void sf_markstate(struct ifmcaddr6 *pmc)
static int sf_setstate(struct ifmcaddr6 *pmc)
static int ip6_mc_add_src(struct inet6_dev *idev, const struct in6_addr *pmca,
int sfmode, int sfcount, const struct in6_addr *psfsrc,
int delta)
static void ip6_mc_clear_src(struct ifmcaddr6 *pmc)
static void igmp6_join_group(struct ifmcaddr6 *ma)
static int ip6_mc_leave_src(struct sock *sk, struct ipv6_mc_socklist *iml,
struct inet6_dev *idev)
static void igmp6_leave_group(struct ifmcaddr6 *ma)
static void mld_gq_timer_expire(unsigned long data)
static void mld_ifc_timer_expire(unsigned long data)
static void mld_ifc_event(struct inet6_dev *idev)
static void igmp6_timer_handler(unsigned long data)
void ipv6_mc_unmap(struct inet6_dev *idev)
void ipv6_mc_remap(struct inet6_dev *idev)
void ipv6_mc_down(struct inet6_dev *idev)
void ipv6_mc_up(struct inet6_dev *idev)
void ipv6_mc_init_dev(struct inet6_dev *idev)
void ipv6_mc_destroy_dev(struct inet6_dev *idev)
struct igmp6_mc_iter_state ;
#define igmp6_mc_seq_private(seq)	((struct igmp6_mc_iter_state *)(seq)->private)
static inline struct ifmcaddr6 *igmp6_mc_get_first(struct seq_file *seq)
static struct ifmcaddr6 *igmp6_mc_get_next(struct seq_file *seq, struct ifmcaddr6 *im)
static struct ifmcaddr6 *igmp6_mc_get_idx(struct seq_file *seq, loff_t pos)
static void *igmp6_mc_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *igmp6_mc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void igmp6_mc_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int igmp6_mc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations igmp6_mc_seq_ops = ;
static int igmp6_mc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations igmp6_mc_seq_fops = ;
struct igmp6_mcf_iter_state ;
#define igmp6_mcf_seq_private(seq)	((struct igmp6_mcf_iter_state *)(seq)->private)
static inline struct ip6_sf_list *igmp6_mcf_get_first(struct seq_file *seq)
static struct ip6_sf_list *igmp6_mcf_get_next(struct seq_file *seq, struct ip6_sf_list *psf)
static struct ip6_sf_list *igmp6_mcf_get_idx(struct seq_file *seq, loff_t pos)
static void *igmp6_mcf_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *igmp6_mcf_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void igmp6_mcf_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int igmp6_mcf_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations igmp6_mcf_seq_ops = ;
static int igmp6_mcf_seq_open(struct inode *inode, struct file *file)
static const struct file_operations igmp6_mcf_seq_fops = ;
static int __net_init igmp6_proc_init(struct net *net)
static void __net_exit igmp6_proc_exit(struct net *net)
static inline int igmp6_proc_init(struct net *net)
static inline void igmp6_proc_exit(struct net *net)
static int __net_init igmp6_net_init(struct net *net)
static void __net_exit igmp6_net_exit(struct net *net)
static struct pernet_operations igmp6_net_ops = ;
int __init igmp6_init(void)
void igmp6_cleanup(void)
