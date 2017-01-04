static const struct gre_protocol __rcu *gre_proto[GREPROTO_MAX] __read_mostly;
static DEFINE_SPINLOCK(gre_proto_lock);
int gre_add_protocol(const struct gre_protocol *proto, u8 version)
EXPORT_SYMBOL_GPL(gre_add_protocol);
int gre_del_protocol(const struct gre_protocol *proto, u8 version)
EXPORT_SYMBOL_GPL(gre_del_protocol);
static int gre_rcv(struct sk_buff *skb)
static void gre_err(struct sk_buff *skb, u32 info)
static const struct net_protocol net_gre_protocol = ;
static int __init gre_init(void)
static void __exit gre_exit(void)
module_init(gre_init);
module_exit(gre_exit);
MODULE_DESCRIPTION("GRE over IPv4 demultiplexer driver");
MODULE_AUTHOR("D. Kozlov (xeb@mail.ru)");
MODULE_LICENSE("GPL");
