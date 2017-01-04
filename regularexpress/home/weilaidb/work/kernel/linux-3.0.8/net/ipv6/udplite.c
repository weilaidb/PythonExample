static int udplitev6_rcv(struct sk_buff *skb)
static void udplitev6_err(struct sk_buff *skb,
struct inet6_skb_parm *opt,
u8 type, u8 code, int offset, __be32 info)
static const struct inet6_protocol udplitev6_protocol = ;
struct proto udplitev6_prot = ;
static struct inet_protosw udplite6_protosw = ;
int __init udplitev6_init(void)
void udplitev6_exit(void)
static struct udp_seq_afinfo udplite6_seq_afinfo = ;
static int __net_init udplite6_proc_init_net(struct net *net)
static void __net_exit udplite6_proc_exit_net(struct net *net)
static struct pernet_operations udplite6_net_ops = ;
int __init udplite6_proc_init(void)
void udplite6_proc_exit(void)
