#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define GPRS_PDP_MTU 1500
#define CONNECT_TIMEOUT (5 * HZ)
#define CAIF_NET_DEFAULT_QUEUE_LEN 500
static LIST_HEAD(chnl_net_list);
MODULE_LICENSE("GPL");
MODULE_ALIAS_RTNL_LINK("caif");
enum caif_states ;
struct chnl_net ;
static void robust_list_del(struct list_head *delete_node)
static int chnl_recv_cb(struct cflayer *layr, struct cfpkt *pkt)
static int delete_device(struct chnl_net *dev)
static void close_work(struct work_struct *work)
static DECLARE_WORK(close_worker, close_work);
static void chnl_hold(struct cflayer *lyr)
static void chnl_put(struct cflayer *lyr)
static void chnl_flowctrl_cb(struct cflayer *layr, enum caif_ctrlcmd flow,
int phyid)
static int chnl_net_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int chnl_net_open(struct net_device *dev)
static int chnl_net_stop(struct net_device *dev)
static int chnl_net_init(struct net_device *dev)
static void chnl_net_uninit(struct net_device *dev)
static const struct net_device_ops netdev_ops = ;
static void chnl_net_destructor(struct net_device *dev)
static void ipcaif_net_setup(struct net_device *dev)
static int ipcaif_fill_info(struct sk_buff *skb, const struct net_device *dev)
static void caif_netlink_parms(struct nlattr *data[],
struct caif_connect_request *conn_req)
static int ipcaif_newlink(struct net *src_net, struct net_device *dev,
struct nlattr *tb[], struct nlattr *data[])
static int ipcaif_changelink(struct net_device *dev, struct nlattr *tb[],
struct nlattr *data[])
static size_t ipcaif_get_size(const struct net_device *dev)
static const struct nla_policy ipcaif_policy[IFLA_CAIF_MAX + 1] = ;
static struct rtnl_link_ops ipcaif_link_ops __read_mostly = ;
static int __init chnl_init_module(void)
static void __exit chnl_exit_module(void)
module_init(chnl_init_module);
module_exit(chnl_exit_module);
