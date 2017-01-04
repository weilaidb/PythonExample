#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
EXPORT_SYMBOL(register_ip_vs_scheduler);
EXPORT_SYMBOL(unregister_ip_vs_scheduler);
EXPORT_SYMBOL(ip_vs_proto_name);
EXPORT_SYMBOL(ip_vs_conn_new);
EXPORT_SYMBOL(ip_vs_conn_in_get);
EXPORT_SYMBOL(ip_vs_conn_out_get);
EXPORT_SYMBOL(ip_vs_tcp_conn_listen);
EXPORT_SYMBOL(ip_vs_conn_put);
EXPORT_SYMBOL(ip_vs_get_debug_level);
int ip_vs_net_id __read_mostly;
EXPORT_SYMBOL(ip_vs_net_id);
static atomic_t ipvs_netns_cnt = ATOMIC_INIT(0);
#define icmp_id(icmph)          (((icmph)->un).echo.id)
#define icmpv6_id(icmph)        (icmph->icmp6_dataun.u_echo.identifier)
const char *ip_vs_proto_name(unsigned proto)
void ip_vs_init_hash_table(struct list_head *table, int rows)
static inline void
ip_vs_in_stats(struct ip_vs_conn *cp, struct sk_buff *skb)
static inline void
ip_vs_out_stats(struct ip_vs_conn *cp, struct sk_buff *skb)
static inline void
ip_vs_conn_stats(struct ip_vs_conn *cp, struct ip_vs_service *svc)
static inline int
ip_vs_set_state(struct ip_vs_conn *cp, int direction,
const struct sk_buff *skb,
struct ip_vs_proto_data *pd)
static inline int
ip_vs_conn_fill_param_persist(const struct ip_vs_service *svc,
struct sk_buff *skb, int protocol,
const union nf_inet_addr *caddr, __be16 cport,
const union nf_inet_addr *vaddr, __be16 vport,
struct ip_vs_conn_param *p)
static struct ip_vs_conn *
ip_vs_sched_persist(struct ip_vs_service *svc,
struct sk_buff *skb,
__be16 src_port, __be16 dst_port, int *ignored)
struct ip_vs_conn *
ip_vs_schedule(struct ip_vs_service *svc, struct sk_buff *skb,
struct ip_vs_proto_data *pd, int *ignored)
int ip_vs_leave(struct ip_vs_service *svc, struct sk_buff *skb,
struct ip_vs_proto_data *pd)
static int sysctl_snat_reroute(struct sk_buff *skb)
static int sysctl_nat_icmp_send(struct net *net)
static int sysctl_expire_nodest_conn(struct netns_ipvs *ipvs)
static int sysctl_snat_reroute(struct sk_buff *skb)
static int sysctl_nat_icmp_send(struct net *net)
static int sysctl_expire_nodest_conn(struct netns_ipvs *ipvs)
__sum16 ip_vs_checksum_complete(struct sk_buff *skb, int offset)
static inline enum ip_defrag_users ip_vs_defrag_user(unsigned int hooknum)
static inline int ip_vs_gather_frags(struct sk_buff *skb, u_int32_t user)
static inline int ip_vs_gather_frags_v6(struct sk_buff *skb, u_int32_t user)
static int ip_vs_route_me_harder(int af, struct sk_buff *skb)
void ip_vs_nat_icmp(struct sk_buff *skb, struct ip_vs_protocol *pp,
struct ip_vs_conn *cp, int inout)
void ip_vs_nat_icmp_v6(struct sk_buff *skb, struct ip_vs_protocol *pp,
struct ip_vs_conn *cp, int inout)
static int handle_response_icmp(int af, struct sk_buff *skb,
union nf_inet_addr *snet,
__u8 protocol, struct ip_vs_conn *cp,
struct ip_vs_protocol *pp,
unsigned int offset, unsigned int ihl)
static int ip_vs_out_icmp(struct sk_buff *skb, int *related,
unsigned int hooknum)
static int ip_vs_out_icmp_v6(struct sk_buff *skb, int *related,
unsigned int hooknum)
static inline int is_sctp_abort(const struct sk_buff *skb, int nh_len)
static inline int is_tcp_reset(const struct sk_buff *skb, int nh_len)
static unsigned int
handle_response(int af, struct sk_buff *skb, struct ip_vs_proto_data *pd,
struct ip_vs_conn *cp, int ihl)
static unsigned int
ip_vs_out(unsigned int hooknum, struct sk_buff *skb, int af)
static unsigned int
ip_vs_reply4(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_local_reply4(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_reply6(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_local_reply6(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static int
ip_vs_in_icmp(struct sk_buff *skb, int *related, unsigned int hooknum)
static int
ip_vs_in_icmp_v6(struct sk_buff *skb, int *related, unsigned int hooknum)
static unsigned int
ip_vs_in(unsigned int hooknum, struct sk_buff *skb, int af)
static unsigned int
ip_vs_remote_request4(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_local_request4(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_remote_request6(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_local_request6(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_forward_icmp(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static unsigned int
ip_vs_forward_icmp_v6(unsigned int hooknum, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops ip_vs_ops[] __read_mostly = ;
static int __net_init __ip_vs_init(struct net *net)
static void __net_exit __ip_vs_cleanup(struct net *net)
static void __net_exit __ip_vs_dev_cleanup(struct net *net)
static struct pernet_operations ipvs_core_ops = ;
static struct pernet_operations ipvs_core_dev_ops = ;
static int __init ip_vs_init(void)
static void __exit ip_vs_cleanup(void)
module_init(ip_vs_init);
module_exit(ip_vs_cleanup);
MODULE_LICENSE("GPL");
