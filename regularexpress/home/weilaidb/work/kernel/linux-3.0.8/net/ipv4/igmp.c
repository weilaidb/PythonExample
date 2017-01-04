#define IP_MAX_MEMBERSHIPS	20
#define IP_MAX_MSF		10
#define IGMP_V1_Router_Present_Timeout		(400*HZ)
#define IGMP_V2_Router_Present_Timeout		(400*HZ)
#define IGMP_Unsolicited_Report_Interval	(10*HZ)
#define IGMP_Query_Response_Interval		(10*HZ)
#define IGMP_Unsolicited_Report_Count		2
#define IGMP_Initial_Report_Delay		(1)
#define IGMP_V1_SEEN(in_dev) \
(IPV4_DEVCONF_ALL(dev_net(in_dev->dev), FORCE_IGMP_VERSION) == 1 || \
IN_DEV_CONF_GET((in_dev), FORCE_IGMP_VERSION) == 1 || \
((in_dev)->mr_v1_seen && \
time_before(jiffies, (in_dev)->mr_v1_seen)))
#define IGMP_V2_SEEN(in_dev) \
(IPV4_DEVCONF_ALL(dev_net(in_dev->dev), FORCE_IGMP_VERSION) == 2 || \
IN_DEV_CONF_GET((in_dev), FORCE_IGMP_VERSION) == 2 || \
((in_dev)->mr_v2_seen && \
time_before(jiffies, (in_dev)->mr_v2_seen)))
static void igmpv3_add_delrec(struct in_device *in_dev, struct ip_mc_list *im);
static void igmpv3_del_delrec(struct in_device *in_dev, __be32 multiaddr);
static void igmpv3_clear_delrec(struct in_device *in_dev);
static int sf_setstate(struct ip_mc_list *pmc);
static void sf_markstate(struct ip_mc_list *pmc);
static void ip_mc_clear_src(struct ip_mc_list *pmc);
static int ip_mc_add_src(struct in_device *in_dev, __be32 *pmca, int sfmode,
int sfcount, __be32 *psfsrc, int delta);
static void ip_ma_put(struct ip_mc_list *im)
#define for_each_pmc_rcu(in_dev, pmc)				\
for (pmc = rcu_dereference(in_dev->mc_list);		\
pmc != NULL;					\
pmc = rcu_dereference(pmc->next_rcu))
#define for_each_pmc_rtnl(in_dev, pmc)				\
for (pmc = rtnl_dereference(in_dev->mc_list);		\
pmc != NULL;					\
pmc = rtnl_dereference(pmc->next_rcu))
static void igmp_stop_timer(struct ip_mc_list *im)
static void igmp_start_timer(struct ip_mc_list *im, int max_delay)
static void igmp_gq_start_timer(struct in_device *in_dev)
static void igmp_ifc_start_timer(struct in_device *in_dev, int delay)
static void igmp_mod_timer(struct ip_mc_list *im, int max_delay)
#define IGMP_SIZE (sizeof(struct igmphdr)+sizeof(struct iphdr)+4)
static int is_in(struct ip_mc_list *pmc, struct ip_sf_list *psf, int type,
int gdeleted, int sdeleted)
static int
igmp_scount(struct ip_mc_list *pmc, int type, int gdeleted, int sdeleted)
#define igmp_skb_size(skb) (*(unsigned int *)((skb)->cb))
static struct sk_buff *igmpv3_newpack(struct net_device *dev, int size)
static int igmpv3_sendpack(struct sk_buff *skb)
static int grec_size(struct ip_mc_list *pmc, int type, int gdel, int sdel)
static struct sk_buff *add_grhead(struct sk_buff *skb, struct ip_mc_list *pmc,
int type, struct igmpv3_grec **ppgr)
#define AVAILABLE(skb) ((skb) ? ((skb)->dev ? igmp_skb_size(skb) - (skb)->len : \
skb_tailroom(skb)) : 0)
static struct sk_buff *add_grec(struct sk_buff *skb, struct ip_mc_list *pmc,
int type, int gdeleted, int sdeleted)
static int igmpv3_send_report(struct in_device *in_dev, struct ip_mc_list *pmc)
static void igmpv3_clear_zeros(struct ip_sf_list **ppsf)
static void igmpv3_send_cr(struct in_device *in_dev)
static int igmp_send_report(struct in_device *in_dev, struct ip_mc_list *pmc,
int type)
static void igmp_gq_timer_expire(unsigned long data)
static void igmp_ifc_timer_expire(unsigned long data)
static void igmp_ifc_event(struct in_device *in_dev)
static void igmp_timer_expire(unsigned long data)
static int igmp_xmarksources(struct ip_mc_list *pmc, int nsrcs, __be32 *srcs)
static int igmp_marksources(struct ip_mc_list *pmc, int nsrcs, __be32 *srcs)
static void igmp_heard_report(struct in_device *in_dev, __be32 group)
static void igmp_heard_query(struct in_device *in_dev, struct sk_buff *skb,
int len)
int igmp_rcv(struct sk_buff *skb)
static void ip_mc_filter_add(struct in_device *in_dev, __be32 addr)
static void ip_mc_filter_del(struct in_device *in_dev, __be32 addr)
static void igmpv3_add_delrec(struct in_device *in_dev, struct ip_mc_list *im)
static void igmpv3_del_delrec(struct in_device *in_dev, __be32 multiaddr)
static void igmpv3_clear_delrec(struct in_device *in_dev)
static void igmp_group_dropped(struct ip_mc_list *im)
static void igmp_group_added(struct ip_mc_list *im)
void ip_mc_inc_group(struct in_device *in_dev, __be32 addr)
EXPORT_SYMBOL(ip_mc_inc_group);
void ip_mc_rejoin_groups(struct in_device *in_dev)
EXPORT_SYMBOL(ip_mc_rejoin_groups);
void ip_mc_dec_group(struct in_device *in_dev, __be32 addr)
EXPORT_SYMBOL(ip_mc_dec_group);
void ip_mc_unmap(struct in_device *in_dev)
void ip_mc_remap(struct in_device *in_dev)
void ip_mc_down(struct in_device *in_dev)
void ip_mc_init_dev(struct in_device *in_dev)
void ip_mc_up(struct in_device *in_dev)
void ip_mc_destroy_dev(struct in_device *in_dev)
static struct in_device *ip_mc_find_dev(struct net *net, struct ip_mreqn *imr)
int sysctl_igmp_max_memberships __read_mostly = IP_MAX_MEMBERSHIPS;
int sysctl_igmp_max_msf __read_mostly = IP_MAX_MSF;
static int ip_mc_del1_src(struct ip_mc_list *pmc, int sfmode,
__be32 *psfsrc)
#define igmp_ifc_event(x)	do  while (0)
static int ip_mc_del_src(struct in_device *in_dev, __be32 *pmca, int sfmode,
int sfcount, __be32 *psfsrc, int delta)
static int ip_mc_add1_src(struct ip_mc_list *pmc, int sfmode,
__be32 *psfsrc, int delta)
static void sf_markstate(struct ip_mc_list *pmc)
static int sf_setstate(struct ip_mc_list *pmc)
static int ip_mc_add_src(struct in_device *in_dev, __be32 *pmca, int sfmode,
int sfcount, __be32 *psfsrc, int delta)
static void ip_mc_clear_src(struct ip_mc_list *pmc)
int ip_mc_join_group(struct sock *sk , struct ip_mreqn *imr)
EXPORT_SYMBOL(ip_mc_join_group);
static int ip_mc_leave_src(struct sock *sk, struct ip_mc_socklist *iml,
struct in_device *in_dev)
int ip_mc_leave_group(struct sock *sk, struct ip_mreqn *imr)
int ip_mc_source(int add, int omode, struct sock *sk, struct
ip_mreq_source *mreqs, int ifindex)
int ip_mc_msfilter(struct sock *sk, struct ip_msfilter *msf, int ifindex)
int ip_mc_msfget(struct sock *sk, struct ip_msfilter *msf,
struct ip_msfilter __user *optval, int __user *optlen)
int ip_mc_gsfget(struct sock *sk, struct group_filter *gsf,
struct group_filter __user *optval, int __user *optlen)
int ip_mc_sf_allow(struct sock *sk, __be32 loc_addr, __be32 rmt_addr, int dif)
void ip_mc_drop_socket(struct sock *sk)
int ip_check_mc_rcu(struct in_device *in_dev, __be32 mc_addr, __be32 src_addr, u16 proto)
#if defined(CONFIG_PROC_FS)
struct igmp_mc_iter_state ;
#define	igmp_mc_seq_private(seq)	((struct igmp_mc_iter_state *)(seq)->private)
static inline struct ip_mc_list *igmp_mc_get_first(struct seq_file *seq)
static struct ip_mc_list *igmp_mc_get_next(struct seq_file *seq, struct ip_mc_list *im)
static struct ip_mc_list *igmp_mc_get_idx(struct seq_file *seq, loff_t pos)
static void *igmp_mc_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu)
static void *igmp_mc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void igmp_mc_seq_stop(struct seq_file *seq, void *v)
__releases(rcu)
static int igmp_mc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations igmp_mc_seq_ops = ;
static int igmp_mc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations igmp_mc_seq_fops = ;
struct igmp_mcf_iter_state ;
#define igmp_mcf_seq_private(seq)	((struct igmp_mcf_iter_state *)(seq)->private)
static inline struct ip_sf_list *igmp_mcf_get_first(struct seq_file *seq)
static struct ip_sf_list *igmp_mcf_get_next(struct seq_file *seq, struct ip_sf_list *psf)
static struct ip_sf_list *igmp_mcf_get_idx(struct seq_file *seq, loff_t pos)
static void *igmp_mcf_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu)
static void *igmp_mcf_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void igmp_mcf_seq_stop(struct seq_file *seq, void *v)
__releases(rcu)
static int igmp_mcf_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations igmp_mcf_seq_ops = ;
static int igmp_mcf_seq_open(struct inode *inode, struct file *file)
static const struct file_operations igmp_mcf_seq_fops = ;
static int __net_init igmp_net_init(struct net *net)
static void __net_exit igmp_net_exit(struct net *net)
static struct pernet_operations igmp_net_ops = ;
int __init igmp_mc_proc_init(void)
