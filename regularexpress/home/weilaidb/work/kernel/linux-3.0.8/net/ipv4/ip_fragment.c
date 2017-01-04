static int sysctl_ipfrag_max_dist __read_mostly = 64;
struct ipfrag_skb_cb
;
#define FRAG_CB(skb)	((struct ipfrag_skb_cb *)((skb)->cb))
struct ipq ;
#define	IPFRAG_ECN_NOT_ECT	0x01
#define	IPFRAG_ECN_ECT_1	0x02
#define	IPFRAG_ECN_ECT_0	0x04
#define	IPFRAG_ECN_CE		0x08
static inline u8 ip4_frag_ecn(u8 tos)
static const u8 ip4_frag_ecn_table[16] = ;
static struct inet_frags ip4_frags;
int ip_frag_nqueues(struct net *net)
int ip_frag_mem(struct net *net)
static int ip_frag_reasm(struct ipq *qp, struct sk_buff *prev,
struct net_device *dev);
struct ip4_create_arg ;
static unsigned int ipqhashfn(__be16 id, __be32 saddr, __be32 daddr, u8 prot)
static unsigned int ip4_hashfn(struct inet_frag_queue *q)
static int ip4_frag_match(struct inet_frag_queue *q, void *a)
static void frag_kfree_skb(struct netns_frags *nf, struct sk_buff *skb)
static void ip4_frag_init(struct inet_frag_queue *q, void *a)
static __inline__ void ip4_frag_free(struct inet_frag_queue *q)
static __inline__ void ipq_put(struct ipq *ipq)
static void ipq_kill(struct ipq *ipq)
static void ip_evictor(struct net *net)
static void ip_expire(unsigned long arg)
static inline struct ipq *ip_find(struct net *net, struct iphdr *iph, u32 user)
static inline int ip_frag_too_far(struct ipq *qp)
static int ip_frag_reinit(struct ipq *qp)
static int ip_frag_queue(struct ipq *qp, struct sk_buff *skb)
static int ip_frag_reasm(struct ipq *qp, struct sk_buff *prev,
struct net_device *dev)
int ip_defrag(struct sk_buff *skb, u32 user)
EXPORT_SYMBOL(ip_defrag);
static int zero;
static struct ctl_table ip4_frags_ns_ctl_table[] = ;
static struct ctl_table ip4_frags_ctl_table[] = ;
static int __net_init ip4_frags_ns_ctl_register(struct net *net)
static void __net_exit ip4_frags_ns_ctl_unregister(struct net *net)
static void ip4_frags_ctl_register(void)
static inline int ip4_frags_ns_ctl_register(struct net *net)
static inline void ip4_frags_ns_ctl_unregister(struct net *net)
static inline void ip4_frags_ctl_register(void)
static int __net_init ipv4_frags_init_net(struct net *net)
static void __net_exit ipv4_frags_exit_net(struct net *net)
static struct pernet_operations ip4_frags_ops = ;
void __init ipfrag_init(void)
