#define __NET_DCBNL_H__
struct dcb_app_type ;
u8 dcb_setapp(struct net_device *, struct dcb_app *);
u8 dcb_getapp(struct net_device *, struct dcb_app *);
struct dcbnl_rtnl_ops ;
