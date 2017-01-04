#if DBG
extern dbg_info_t *DbgInfo;
#if HCF_ENCAP
#define MTU_MAX (HCF_MAX_MSG - ETH_HLEN - 8)
#define MTU_MAX (HCF_MAX_MSG - ETH_HLEN)
#define BLOCK_INPUT(buf, len) \
desc->buf_addr = buf; \
desc->BUF_SIZE = len; \
status = hcf_rcv_msg(&(lp->hcfCtx), desc, 0)
#define BLOCK_INPUT_DMA(buf, len) memcpy( buf, desc_next->buf_addr, pktlen )
int wl_init( struct net_device *dev )
int wl_config( struct net_device *dev, struct ifmap *map )
struct net_device_stats *wl_stats( struct net_device *dev )
int wl_open(struct net_device *dev)
int wl_close( struct net_device *dev )
static void wl_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static struct ethtool_ops wl_ethtool_ops = ;
int wl_ioctl( struct net_device *dev, struct ifreq *rq, int cmd )
void wl_poll(struct net_device *dev)
void wl_tx_timeout( struct net_device *dev )
int wl_send( struct wl_private *lp )
int wl_tx( struct sk_buff *skb, struct net_device *dev, int port )
int wl_rx(struct net_device *dev)
void wl_multicast( struct net_device *dev )
void wl_multicast( struct net_device *dev, int num_addrs, void *addrs )
static const struct net_device_ops wl_netdev_ops =
;
struct net_device * wl_device_alloc( void )
void wl_device_dealloc( struct net_device *dev )
int wl_tx_port0( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port1( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port2( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port3( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port4( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port5( struct sk_buff *skb, struct net_device *dev )
int wl_tx_port6( struct sk_buff *skb, struct net_device *dev )
void wl_wds_device_alloc( struct wl_private *lp )
void wl_wds_device_dealloc( struct wl_private *lp )
void wl_wds_netif_start_queue( struct wl_private *lp )
void wl_wds_netif_stop_queue( struct wl_private *lp )
void wl_wds_netif_wake_queue( struct wl_private *lp )
void wl_wds_netif_carrier_on( struct wl_private *lp )
void wl_wds_netif_carrier_off( struct wl_private *lp )
int wl_send_dma( struct wl_private *lp, struct sk_buff *skb, int port )
int wl_rx_dma( struct net_device *dev )
