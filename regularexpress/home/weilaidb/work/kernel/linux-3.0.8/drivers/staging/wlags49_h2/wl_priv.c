int wvlan_uil_connect( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_disconnect( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_action( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_block( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_unblock( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_send_diag_msg( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_put_info( struct uilreq *urq, struct wl_private *lp );
int wvlan_uil_get_info( struct uilreq *urq, struct wl_private *lp );
int cfg_driver_info( struct uilreq *urq, struct wl_private *lp );
int cfg_driver_identity( struct uilreq *urq, struct wl_private *lp );
#if DBG
extern dbg_info_t *DbgInfo;
int wvlan_uil( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_connect( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_disconnect( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_action( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_block( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_unblock( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_send_diag_msg( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_put_info( struct uilreq *urq, struct wl_private *lp )
int wvlan_uil_get_info( struct uilreq *urq, struct wl_private *lp )
int cfg_driver_info( struct uilreq *urq, struct wl_private *lp )
int cfg_driver_identity( struct uilreq *urq, struct wl_private *lp )
int wvlan_set_netname(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_get_netname(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_set_station_nickname(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_get_station_nickname(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_set_porttype(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_get_porttype(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
int wvlan_rts( struct rtsreq *rrq, __u32 io_base )
