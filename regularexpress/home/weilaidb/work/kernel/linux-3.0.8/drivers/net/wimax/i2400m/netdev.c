#define D_SUBMODULE netdev
enum ;
static
int i2400m_open(struct net_device *net_dev)
static
int i2400m_stop(struct net_device *net_dev)
void i2400m_wake_tx_work(struct work_struct *ws)
static
void i2400m_tx_prep_header(struct sk_buff *skb)
void i2400m_net_wake_stop(struct i2400m *i2400m)
static
int i2400m_net_wake_tx(struct i2400m *i2400m, struct net_device *net_dev,
struct sk_buff *skb)
static
int i2400m_net_tx(struct i2400m *i2400m, struct net_device *net_dev,
struct sk_buff *skb)
static
netdev_tx_t i2400m_hard_start_xmit(struct sk_buff *skb,
struct net_device *net_dev)
static
int i2400m_change_mtu(struct net_device *net_dev, int new_mtu)
static
void i2400m_tx_timeout(struct net_device *net_dev)
static
void i2400m_rx_fake_eth_header(struct net_device *net_dev,
void *_eth_hdr, __be16 protocol)
void i2400m_net_rx(struct i2400m *i2400m, struct sk_buff *skb_rx,
unsigned i, const void *buf, int buf_len)
void i2400m_net_erx(struct i2400m *i2400m, struct sk_buff *skb,
enum i2400m_cs cs)
static const struct net_device_ops i2400m_netdev_ops = ;
static void i2400m_get_drvinfo(struct net_device *net_dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops i2400m_ethtool_ops = ;
void i2400m_netdev_setup(struct net_device *net_dev)
EXPORT_SYMBOL_GPL(i2400m_netdev_setup);
