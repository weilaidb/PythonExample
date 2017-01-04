struct ip6frag_skb_cb
;
#define FRAG6_CB(skb)	((struct ip6frag_skb_cb*)((skb)->cb))
struct frag_queue
;
static struct inet_frags ip6_frags;
int ip6_frag_nqueues(struct net *net)
int ip6_frag_mem(struct net *net)
static int ip6_frag_reasm(struct frag_queue *fq, struct sk_buff *prev,
struct net_device *dev);
unsigned int inet6_hash_frag(__be32 id, const struct in6_addr *saddr,
const struct in6_addr *daddr, u32 rnd)
EXPORT_SYMBOL_GPL(inet6_hash_frag);
static unsigned int ip6_hashfn(struct inet_frag_queue *q)
int ip6_frag_match(struct inet_frag_queue *q, void *a)
EXPORT_SYMBOL(ip6_frag_match);
void ip6_frag_init(struct inet_frag_queue *q, void *a)
EXPORT_SYMBOL(ip6_frag_init);
static __inline__ void fq_put(struct frag_queue *fq)
static __inline__ void fq_kill(struct frag_queue *fq)
static void ip6_evictor(struct net *net, struct inet6_dev *idev)
static void ip6_frag_expire(unsigned long data)
static __inline__ struct frag_queue *
fq_find(struct net *net, __be32 id, const struct in6_addr *src, const struct in6_addr *dst)
static int ip6_frag_queue(struct frag_queue *fq, struct sk_buff *skb,
struct frag_hdr *fhdr, int nhoff)
static int ip6_frag_reasm(struct frag_queue *fq, struct sk_buff *prev,
struct net_device *dev)
static int ipv6_frag_rcv(struct sk_buff *skb)
static const struct inet6_protocol frag_protocol =
;
static struct ctl_table ip6_frags_ns_ctl_table[] = ;
static struct ctl_table ip6_frags_ctl_table[] = ;
static int __net_init ip6_frags_ns_sysctl_register(struct net *net)
static void __net_exit ip6_frags_ns_sysctl_unregister(struct net *net)
static struct ctl_table_header *ip6_ctl_header;
static int ip6_frags_sysctl_register(void)
static void ip6_frags_sysctl_unregister(void)
static inline int ip6_frags_ns_sysctl_register(struct net *net)
static inline void ip6_frags_ns_sysctl_unregister(struct net *net)
static inline int ip6_frags_sysctl_register(void)
static inline void ip6_frags_sysctl_unregister(void)
static int __net_init ipv6_frags_init_net(struct net *net)
static void __net_exit ipv6_frags_exit_net(struct net *net)
static struct pernet_operations ip6_frags_ops = ;
int __init ipv6_frag_init(void)
void ipv6_frag_exit(void)
