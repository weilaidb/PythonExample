int sunrpc_net_id;
static __net_init int sunrpc_init_net(struct net *net)
static __net_exit void sunrpc_exit_net(struct net *net)
static struct pernet_operations sunrpc_net_ops = ;
extern struct cache_detail unix_gid_cache;
extern void cleanup_rpcb_clnt(void);
static int __init
init_sunrpc(void)
static void __exit
cleanup_sunrpc(void)
MODULE_LICENSE("GPL");
fs_initcall(init_sunrpc);
module_exit(cleanup_sunrpc);
