struct udp_table 	udplite_table __read_mostly;
EXPORT_SYMBOL(udplite_table);
static int udplite_rcv(struct sk_buff *skb)
static void udplite_err(struct sk_buff *skb, u32 info)
static const struct net_protocol udplite_protocol = ;
struct proto 	udplite_prot = ;
EXPORT_SYMBOL(udplite_prot);
static struct inet_protosw udplite4_protosw = ;
static struct udp_seq_afinfo udplite4_seq_afinfo = ;
static int __net_init udplite4_proc_init_net(struct net *net)
static void __net_exit udplite4_proc_exit_net(struct net *net)
static struct pernet_operations udplite4_net_ops = ;
static __init int udplite4_proc_init(void)
static inline int udplite4_proc_init(void)
void __init udplite4_register(void)
