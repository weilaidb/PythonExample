#define __WL_WEXT_H__
struct iw_statistics *wl_wireless_stats( struct net_device *dev );
struct iw_statistics * wl_get_wireless_stats( struct net_device *dev );
inline void wl_spy_gather (struct net_device *dev, u_char *mac);
void wl_wext_event_freq( struct net_device *dev );
void wl_wext_event_mode( struct net_device *dev );
void wl_wext_event_essid( struct net_device *dev );
void wl_wext_event_encode( struct net_device *dev );
void wl_wext_event_ap( struct net_device *dev );
void wl_wext_event_scan_complete( struct net_device *dev );
void wl_wext_event_new_sta( struct net_device *dev );
void wl_wext_event_expired_sta( struct net_device *dev );
void wl_wext_event_mic_failed( struct net_device *dev );
void wl_wext_event_assoc_ie( struct net_device *dev );
extern const struct iw_handler_def wl_iw_handler_def;
#error WIRELESS_EXT
