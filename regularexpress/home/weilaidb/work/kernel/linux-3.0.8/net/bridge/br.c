static const struct stp_proto br_stp_proto = ;
static struct pernet_operations br_net_ops = ;
static int __init br_init(void)
static void __exit br_deinit(void)
module_init(br_init)
module_exit(br_deinit)
MODULE_LICENSE("GPL");
MODULE_VERSION(BR_VERSION);
MODULE_ALIAS_RTNL_LINK("bridge");
