#define GPRS_DEFAULT_MTU 1400
struct gprs_dev ;
static __be16 gprs_type_trans(struct sk_buff *skb)
static void gprs_writeable(struct gprs_dev *gp)
static void gprs_state_change(struct sock *sk)
static int gprs_recv(struct gprs_dev *gp, struct sk_buff *skb)
static void gprs_data_ready(struct sock *sk, int len)
static void gprs_write_space(struct sock *sk)
static int gprs_open(struct net_device *dev)
static int gprs_close(struct net_device *dev)
static netdev_tx_t gprs_xmit(struct sk_buff *skb, struct net_device *dev)
static int gprs_set_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops gprs_netdev_ops = ;
static void gprs_setup(struct net_device *dev)
int gprs_attach(struct sock *sk)
void gprs_detach(struct sock *sk)
