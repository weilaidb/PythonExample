#define __WL_NETDEV_H__
int wl_init( struct net_device *dev );
int wl_config( struct net_device *dev, struct ifmap *map );
struct net_device *wl_device_alloc( void );
void wl_device_dealloc( struct net_device *dev );
int wl_open( struct net_device *dev );
int wl_close( struct net_device *dev );
int wl_ioctl( struct net_device *dev, struct ifreq *rq, int cmd );
int wl_tx( struct sk_buff *skb, struct net_device *dev, int port );
int wl_send( struct wl_private *lp );
int wl_rx( struct net_device *dev );
void wl_tx_timeout( struct net_device *dev );
struct net_device_stats *wl_stats( struct net_device *dev );
int wl_send_dma( struct wl_private *lp, struct sk_buff *skb, int port );
int wl_rx_dma( struct net_device *dev );
void wl_multicast( struct net_device *dev );
void wl_multicast( struct net_device *dev, int num_addrs, void *addrs );
int wl_tx_port0( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port1( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port2( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port3( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port4( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port5( struct sk_buff *skb, struct net_device *dev );
int wl_tx_port6( struct sk_buff *skb, struct net_device *dev );
void wl_wds_device_alloc( struct wl_private *lp );
void wl_wds_device_dealloc( struct wl_private *lp );
void wl_wds_netif_start_queue( struct wl_private *lp );
void wl_wds_netif_stop_queue( struct wl_private *lp );
void wl_wds_netif_wake_queue( struct wl_private *lp );
void wl_wds_netif_carrier_on( struct wl_private *lp );
void wl_wds_netif_carrier_off( struct wl_private *lp );
#define WL_WDS_DEVICE_ALLOC( ARG )      wl_wds_device_alloc( ARG )
#define WL_WDS_DEVICE_DEALLOC( ARG )    wl_wds_device_dealloc( ARG )
#define WL_WDS_NETIF_START_QUEUE( ARG ) wl_wds_netif_start_queue( ARG )
#define WL_WDS_NETIF_STOP_QUEUE( ARG )  wl_wds_netif_stop_queue( ARG )
#define WL_WDS_NETIF_WAKE_QUEUE( ARG )  wl_wds_netif_wake_queue( ARG )
#define WL_WDS_NETIF_CARRIER_ON( ARG )  wl_wds_netif_carrier_on( ARG )
#define WL_WDS_NETIF_CARRIER_OFF( ARG ) wl_wds_netif_carrier_off( ARG )
#define WL_WDS_DEVICE_ALLOC( ARG )
#define WL_WDS_DEVICE_DEALLOC( ARG )
#define WL_WDS_NETIF_START_QUEUE( ARG )
#define WL_WDS_NETIF_STOP_QUEUE( ARG )
#define WL_WDS_NETIF_WAKE_QUEUE( ARG )
#define WL_WDS_NETIF_CARRIER_ON( ARG )
#define WL_WDS_NETIF_CARRIER_OFF( ARG )
