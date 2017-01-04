#define __WL_PRIV_H__
int wvlan_set_netname( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_get_netname( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_set_station_nickname( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_get_station_nickname( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_set_porttype( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_get_porttype( struct net_device *,  struct iw_request_info *, union iwreq_data *, char *extra );
int wvlan_uil( struct uilreq *urq, struct wl_private *lp );
int wvlan_rts( struct rtsreq *rrq, __u32 io_base );
int wvlan_rts_read( __u16 reg, __u16 *val, __u32 io_base );
int wvlan_rts_write( __u16 reg, __u16 val, __u32 io_base );
int wvlan_rts_batch_read( struct rtsreq *rrq, __u32 io_base );
int wvlan_rts_batch_write( struct rtsreq *rrq, __u32 io_base );
