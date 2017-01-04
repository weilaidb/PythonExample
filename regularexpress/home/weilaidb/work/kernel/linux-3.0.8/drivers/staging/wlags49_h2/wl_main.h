#define __WL_MAIN_H__
int wl_insert( struct net_device *dev );
void wl_set_wep_keys( struct wl_private *lp );
int wl_put_ltv_init( struct wl_private *lp );
int wl_put_ltv( struct wl_private *lp );
p_u16 wl_get_irq_mask( void );
p_s8 * wl_get_irq_list( void );
int wl_reset( struct net_device *dev );
int wl_go( struct wl_private *lp );
int wl_apply( struct wl_private *lp );
irqreturn_t wl_isr( int irq, void *dev_id, struct pt_regs *regs );
void wl_remove( struct net_device *dev );
void wl_suspend( struct net_device *dev );
void wl_resume( struct net_device *dev );
void wl_release( struct net_device *dev );
int wl_enable( struct wl_private *lp );
int wl_connect( struct wl_private *lp );
int wl_disable( struct wl_private *lp );
int wl_disconnect( struct wl_private *lp );
void wl_enable_wds_ports( struct wl_private * lp );
void wl_disable_wds_ports( struct wl_private * lp );
int wl_mbx( struct wl_private *lp );
void wl_endian_translate_mailbox( ltv_t *ltv );
void wl_process_mailbox( struct wl_private *lp );
void wl_wds_netdev_register( struct wl_private *lp );
void wl_wds_netdev_deregister( struct wl_private *lp );
#define WL_WDS_NETDEV_REGISTER( ARG )   wl_wds_netdev_register( ARG )
#define WL_WDS_NETDEV_DEREGISTER( ARG ) wl_wds_netdev_deregister( ARG )
#define WL_WDS_NETDEV_REGISTER( ARG )
#define WL_WDS_NETDEV_DEREGISTER( ARG )
