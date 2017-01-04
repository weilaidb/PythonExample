struct ip6addrlbl_entry
;
static struct ip6addrlbl_table
ip6addrlbl_table;
static inline
struct net *ip6addrlbl_net(const struct ip6addrlbl_entry *lbl)
#define IPV6_ADDR_LABEL_DEFAULT	0xffffffffUL
static const __net_initdata struct ip6addrlbl_init_table
ip6addrlbl_init_table[] = ;
static inline void ip6addrlbl_free(struct ip6addrlbl_entry *p)
static void ip6addrlbl_free_rcu(struct rcu_head *h)
static inline int ip6addrlbl_hold(struct ip6addrlbl_entry *p)
static inline void ip6addrlbl_put(struct ip6addrlbl_entry *p)
static int __ip6addrlbl_match(struct net *net,
struct ip6addrlbl_entry *p,
const struct in6_addr *addr,
int addrtype, int ifindex)
static struct ip6addrlbl_entry *__ipv6_addr_label(struct net *net,
const struct in6_addr *addr,
int type, int ifindex)
u32 ipv6_addr_label(struct net *net,
const struct in6_addr *addr, int type, int ifindex)
static struct ip6addrlbl_entry *ip6addrlbl_alloc(struct net *net,
const struct in6_addr *prefix,
int prefixlen, int ifindex,
u32 label)
static int __ip6addrlbl_add(struct ip6addrlbl_entry *newp, int replace)
static int ip6addrlbl_add(struct net *net,
const struct in6_addr *prefix, int prefixlen,
int ifindex, u32 label, int replace)
static int __ip6addrlbl_del(struct net *net,
const struct in6_addr *prefix, int prefixlen,
int ifindex)
static int ip6addrlbl_del(struct net *net,
const struct in6_addr *prefix, int prefixlen,
int ifindex)
static int __net_init ip6addrlbl_net_init(struct net *net)
static void __net_exit ip6addrlbl_net_exit(struct net *net)
static struct pernet_operations ipv6_addr_label_ops = ;
int __init ipv6_addr_label_init(void)
void ipv6_addr_label_cleanup(void)
static const struct nla_policy ifal_policy[IFAL_MAX+1] = ;
static int ip6addrlbl_newdel(struct sk_buff *skb, struct nlmsghdr *nlh,
void *arg)
static inline void ip6addrlbl_putmsg(struct nlmsghdr *nlh,
int prefixlen, int ifindex, u32 lseq)
;
static int ip6addrlbl_fill(struct sk_buff *skb,
struct ip6addrlbl_entry *p,
u32 lseq,
u32 pid, u32 seq, int event,
unsigned int flags)
static int ip6addrlbl_dump(struct sk_buff *skb, struct netlink_callback *cb)
static inline int ip6addrlbl_msgsize(void)
static int ip6addrlbl_get(struct sk_buff *in_skb, struct nlmsghdr* nlh,
void *arg)
void __init ipv6_addr_label_rtnl_register(void)
