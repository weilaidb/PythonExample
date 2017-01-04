#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static DEFINE_MUTEX(__ip_vs_mutex);
static DEFINE_RWLOCK(__ip_vs_svc_lock);
static int sysctl_ip_vs_debug_level = 0;
int ip_vs_get_debug_level(void)
static void __ip_vs_del_service(struct ip_vs_service *svc);
static int __ip_vs_addr_is_local_v6(struct net *net,
const struct in6_addr *addr)
static void update_defense_level(struct netns_ipvs *ipvs)
#define DEFENSE_TIMER_PERIOD	1*HZ
static void defense_work_handler(struct work_struct *work)
int
ip_vs_use_count_inc(void)
void
ip_vs_use_count_dec(void)
#define IP_VS_SVC_TAB_BITS 8
#define IP_VS_SVC_TAB_SIZE (1 << IP_VS_SVC_TAB_BITS)
#define IP_VS_SVC_TAB_MASK (IP_VS_SVC_TAB_SIZE - 1)
static struct list_head ip_vs_svc_table[IP_VS_SVC_TAB_SIZE];
static struct list_head ip_vs_svc_fwm_table[IP_VS_SVC_TAB_SIZE];
static inline unsigned
ip_vs_svc_hashkey(struct net *net, int af, unsigned proto,
const union nf_inet_addr *addr, __be16 port)
static inline unsigned ip_vs_svc_fwm_hashkey(struct net *net, __u32 fwmark)
static int ip_vs_svc_hash(struct ip_vs_service *svc)
static int ip_vs_svc_unhash(struct ip_vs_service *svc)
static inline struct ip_vs_service *
__ip_vs_service_find(struct net *net, int af, __u16 protocol,
const union nf_inet_addr *vaddr, __be16 vport)
static inline struct ip_vs_service *
__ip_vs_svc_fwm_find(struct net *net, int af, __u32 fwmark)
struct ip_vs_service *
ip_vs_service_get(struct net *net, int af, __u32 fwmark, __u16 protocol,
const union nf_inet_addr *vaddr, __be16 vport)
static inline void
__ip_vs_bind_svc(struct ip_vs_dest *dest, struct ip_vs_service *svc)
static void
__ip_vs_unbind_svc(struct ip_vs_dest *dest)
static inline unsigned ip_vs_rs_hashkey(int af,
const union nf_inet_addr *addr,
__be16 port)
static int ip_vs_rs_hash(struct netns_ipvs *ipvs, struct ip_vs_dest *dest)
static int ip_vs_rs_unhash(struct ip_vs_dest *dest)
struct ip_vs_dest *
ip_vs_lookup_real_service(struct net *net, int af, __u16 protocol,
const union nf_inet_addr *daddr,
__be16 dport)
static struct ip_vs_dest *
ip_vs_lookup_dest(struct ip_vs_service *svc, const union nf_inet_addr *daddr,
__be16 dport)
struct ip_vs_dest *ip_vs_find_dest(struct net  *net, int af,
const union nf_inet_addr *daddr,
__be16 dport,
const union nf_inet_addr *vaddr,
__be16 vport, __u16 protocol, __u32 fwmark)
static struct ip_vs_dest *
ip_vs_trash_get_dest(struct ip_vs_service *svc, const union nf_inet_addr *daddr,
__be16 dport)
static void ip_vs_trash_cleanup(struct net *net)
static void
ip_vs_copy_stats(struct ip_vs_stats_user *dst, struct ip_vs_stats *src)
static void
ip_vs_zero_stats(struct ip_vs_stats *stats)
static void
__ip_vs_update_dest(struct ip_vs_service *svc, struct ip_vs_dest *dest,
struct ip_vs_dest_user_kern *udest, int add)
static int
ip_vs_new_dest(struct ip_vs_service *svc, struct ip_vs_dest_user_kern *udest,
struct ip_vs_dest **dest_p)
static int
ip_vs_add_dest(struct ip_vs_service *svc, struct ip_vs_dest_user_kern *udest)
static int
ip_vs_edit_dest(struct ip_vs_service *svc, struct ip_vs_dest_user_kern *udest)
static void __ip_vs_del_dest(struct net *net, struct ip_vs_dest *dest)
static void __ip_vs_unlink_dest(struct ip_vs_service *svc,
struct ip_vs_dest *dest,
int svcupd)
static int
ip_vs_del_dest(struct ip_vs_service *svc, struct ip_vs_dest_user_kern *udest)
static int
ip_vs_add_service(struct net *net, struct ip_vs_service_user_kern *u,
struct ip_vs_service **svc_p)
static int
ip_vs_edit_service(struct ip_vs_service *svc, struct ip_vs_service_user_kern *u)
static void __ip_vs_del_service(struct ip_vs_service *svc)
static void ip_vs_unlink_service(struct ip_vs_service *svc)
static int ip_vs_del_service(struct ip_vs_service *svc)
static int ip_vs_flush(struct net *net)
void __ip_vs_service_cleanup(struct net *net)
static inline void
__ip_vs_dev_reset(struct ip_vs_dest *dest, struct net_device *dev)
static int ip_vs_dst_event(struct notifier_block *this, unsigned long event,
void *ptr)
static int ip_vs_zero_service(struct ip_vs_service *svc)
static int ip_vs_zero_all(struct net *net)
static int
proc_do_defense_mode(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int
proc_do_sync_threshold(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int
proc_do_sync_mode(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static struct ctl_table vs_vars[] = ;
const struct ctl_path net_vs_ctl_path[] = ;
EXPORT_SYMBOL_GPL(net_vs_ctl_path);
struct ip_vs_iter ;
static inline const char *ip_vs_fwd_name(unsigned flags)
static struct ip_vs_service *ip_vs_info_array(struct seq_file *seq, loff_t pos)
static void *ip_vs_info_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(__ip_vs_svc_lock)
static void *ip_vs_info_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ip_vs_info_seq_stop(struct seq_file *seq, void *v)
__releases(__ip_vs_svc_lock)
static int ip_vs_info_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip_vs_info_seq_ops = ;
static int ip_vs_info_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_info_fops = ;
static int ip_vs_stats_show(struct seq_file *seq, void *v)
static int ip_vs_stats_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_stats_fops = ;
static int ip_vs_stats_percpu_show(struct seq_file *seq, void *v)
static int ip_vs_stats_percpu_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_stats_percpu_fops = ;
static int ip_vs_set_timeout(struct net *net, struct ip_vs_timeout_user *u)
#define SET_CMDID(cmd)		(cmd - IP_VS_BASE_CTL)
#define SERVICE_ARG_LEN		(sizeof(struct ip_vs_service_user))
#define SVCDEST_ARG_LEN		(sizeof(struct ip_vs_service_user) +	\
sizeof(struct ip_vs_dest_user))
#define TIMEOUT_ARG_LEN		(sizeof(struct ip_vs_timeout_user))
#define DAEMON_ARG_LEN		(sizeof(struct ip_vs_daemon_user))
#define MAX_ARG_LEN		SVCDEST_ARG_LEN
static const unsigned char set_arglen[SET_CMDID(IP_VS_SO_SET_MAX)+1] = ;
static void ip_vs_copy_usvc_compat(struct ip_vs_service_user_kern *usvc,
struct ip_vs_service_user *usvc_compat)
static void ip_vs_copy_udest_compat(struct ip_vs_dest_user_kern *udest,
struct ip_vs_dest_user *udest_compat)
static int
do_ip_vs_set_ctl(struct sock *sk, int cmd, void __user *user, unsigned int len)
static void
ip_vs_copy_service(struct ip_vs_service_entry *dst, struct ip_vs_service *src)
static inline int
__ip_vs_get_service_entries(struct net *net,
const struct ip_vs_get_services *get,
struct ip_vs_get_services __user *uptr)
static inline int
__ip_vs_get_dest_entries(struct net *net, const struct ip_vs_get_dests *get,
struct ip_vs_get_dests __user *uptr)
static inline void
__ip_vs_get_timeouts(struct net *net, struct ip_vs_timeout_user *u)
#define GET_CMDID(cmd)		(cmd - IP_VS_BASE_CTL)
#define GET_INFO_ARG_LEN	(sizeof(struct ip_vs_getinfo))
#define GET_SERVICES_ARG_LEN	(sizeof(struct ip_vs_get_services))
#define GET_SERVICE_ARG_LEN	(sizeof(struct ip_vs_service_entry))
#define GET_DESTS_ARG_LEN	(sizeof(struct ip_vs_get_dests))
#define GET_TIMEOUT_ARG_LEN	(sizeof(struct ip_vs_timeout_user))
#define GET_DAEMON_ARG_LEN	(sizeof(struct ip_vs_daemon_user) * 2)
static const unsigned char get_arglen[GET_CMDID(IP_VS_SO_GET_MAX)+1] = ;
static int
do_ip_vs_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
static struct nf_sockopt_ops ip_vs_sockopts = ;
static struct genl_family ip_vs_genl_family = ;
static const struct nla_policy ip_vs_cmd_policy[IPVS_CMD_ATTR_MAX + 1] = ;
static const struct nla_policy ip_vs_daemon_policy[IPVS_DAEMON_ATTR_MAX + 1] = ;
static const struct nla_policy ip_vs_svc_policy[IPVS_SVC_ATTR_MAX + 1] = ;
static const struct nla_policy ip_vs_dest_policy[IPVS_DEST_ATTR_MAX + 1] = ;
static int ip_vs_genl_fill_stats(struct sk_buff *skb, int container_type,
struct ip_vs_stats *stats)
static int ip_vs_genl_fill_service(struct sk_buff *skb,
struct ip_vs_service *svc)
static int ip_vs_genl_dump_service(struct sk_buff *skb,
struct ip_vs_service *svc,
struct netlink_callback *cb)
static int ip_vs_genl_dump_services(struct sk_buff *skb,
struct netlink_callback *cb)
static int ip_vs_genl_parse_service(struct net *net,
struct ip_vs_service_user_kern *usvc,
struct nlattr *nla, int full_entry,
struct ip_vs_service **ret_svc)
static struct ip_vs_service *ip_vs_genl_find_service(struct net *net,
struct nlattr *nla)
static int ip_vs_genl_fill_dest(struct sk_buff *skb, struct ip_vs_dest *dest)
static int ip_vs_genl_dump_dest(struct sk_buff *skb, struct ip_vs_dest *dest,
struct netlink_callback *cb)
static int ip_vs_genl_dump_dests(struct sk_buff *skb,
struct netlink_callback *cb)
static int ip_vs_genl_parse_dest(struct ip_vs_dest_user_kern *udest,
struct nlattr *nla, int full_entry)
static int ip_vs_genl_fill_daemon(struct sk_buff *skb, __be32 state,
const char *mcast_ifn, __be32 syncid)
static int ip_vs_genl_dump_daemon(struct sk_buff *skb, __be32 state,
const char *mcast_ifn, __be32 syncid,
struct netlink_callback *cb)
static int ip_vs_genl_dump_daemons(struct sk_buff *skb,
struct netlink_callback *cb)
static int ip_vs_genl_new_daemon(struct net *net, struct nlattr **attrs)
static int ip_vs_genl_del_daemon(struct net *net, struct nlattr **attrs)
static int ip_vs_genl_set_config(struct net *net, struct nlattr **attrs)
static int ip_vs_genl_set_cmd(struct sk_buff *skb, struct genl_info *info)
static int ip_vs_genl_get_cmd(struct sk_buff *skb, struct genl_info *info)
static struct genl_ops ip_vs_genl_ops[] __read_mostly = ;
static int __init ip_vs_genl_register(void)
static void ip_vs_genl_unregister(void)
int __net_init __ip_vs_control_init_sysctl(struct net *net)
void __net_init __ip_vs_control_cleanup_sysctl(struct net *net)
int __net_init __ip_vs_control_init_sysctl(struct net *net)
void __net_init __ip_vs_control_cleanup_sysctl(struct net *net)
static struct notifier_block ip_vs_dst_notifier = ;
int __net_init __ip_vs_control_init(struct net *net)
void __net_exit __ip_vs_control_cleanup(struct net *net)
int __init ip_vs_control_init(void)
void ip_vs_control_cleanup(void)
