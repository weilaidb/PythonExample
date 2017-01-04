void ip_options_build(struct sk_buff *skb, struct ip_options *opt,
__be32 daddr, struct rtable *rt, int is_frag)
int ip_options_echo(struct ip_options *dopt, struct sk_buff *skb)
void ip_options_fragment(struct sk_buff * skb)
int ip_options_compile(struct net *net,
struct ip_options * opt, struct sk_buff * skb)
EXPORT_SYMBOL(ip_options_compile);
void ip_options_undo(struct ip_options * opt)
static struct ip_options_rcu *ip_options_get_alloc(const int optlen)
static int ip_options_get_finish(struct net *net, struct ip_options_rcu **optp,
struct ip_options_rcu *opt, int optlen)
int ip_options_get_from_user(struct net *net, struct ip_options_rcu **optp,
unsigned char __user *data, int optlen)
int ip_options_get(struct net *net, struct ip_options_rcu **optp,
unsigned char *data, int optlen)
void ip_forward_options(struct sk_buff *skb)
int ip_options_rcv_srr(struct sk_buff *skb)
EXPORT_SYMBOL(ip_options_rcv_srr);
