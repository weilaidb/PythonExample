#define L2TP_ETH_DEV_NAME	"l2tpeth%d"
struct l2tp_eth ;
struct l2tp_eth_sess ;
static unsigned int l2tp_eth_net_id;
struct l2tp_eth_net ;
static inline struct l2tp_eth_net *l2tp_eth_pernet(struct net *net)
static int l2tp_eth_dev_init(struct net_device *dev)
static void l2tp_eth_dev_uninit(struct net_device *dev)
static int l2tp_eth_dev_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_ops l2tp_eth_netdev_ops = ;
static void l2tp_eth_dev_setup(struct net_device *dev)
static void l2tp_eth_dev_recv(struct l2tp_session *session, struct sk_buff *skb, int data_len)
static void l2tp_eth_delete(struct l2tp_session *session)
#if defined(CONFIG_L2TP_DEBUGFS) || defined(CONFIG_L2TP_DEBUGFS_MODULE)
static void l2tp_eth_show(struct seq_file *m, void *arg)
static int l2tp_eth_create(struct net *net, u32 tunnel_id, u32 session_id, u32 peer_session_id, struct l2tp_session_cfg *cfg)
static __net_init int l2tp_eth_init_net(struct net *net)
static struct pernet_operations l2tp_eth_net_ops = ;
static const struct l2tp_nl_cmd_ops l2tp_eth_nl_cmd_ops = ;
static int __init l2tp_eth_init(void)
static void __exit l2tp_eth_exit(void)
module_init(l2tp_eth_init);
module_exit(l2tp_eth_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("L2TP ethernet pseudowire driver");
MODULE_VERSION("1.0");
