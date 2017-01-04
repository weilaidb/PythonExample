unsigned int hynet_enable = 0xffffffff;
module_param(hynet_enable, uint, 0);
#define MAX_SKB_BUFFERS 20
struct net_local ;
static int
net_open(struct net_device *dev)
static void
flush_tx_buffers(struct net_local *nl)
static int
net_close(struct net_device *dev)
static netdev_tx_t
net_send_packet(struct sk_buff *skb, struct net_device *dev)
void
hysdn_tx_netack(hysdn_card * card)
void
hysdn_rx_netpkt(hysdn_card * card, unsigned char *buf, unsigned short len)
struct sk_buff *
hysdn_tx_netget(hysdn_card * card)
static const struct net_device_ops hysdn_netdev_ops = ;
int
hysdn_net_create(hysdn_card * card)
int
hysdn_net_release(hysdn_card * card)
char *
hysdn_net_getname(hysdn_card * card)
