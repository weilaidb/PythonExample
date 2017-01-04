#define _IPX_H_
#define IPX_NODE_LEN	6
#define IPX_MTU		576
struct sockaddr_ipx ;
#define sipx_special	sipx_port
#define sipx_action	sipx_zero
#define IPX_DLTITF	0
#define IPX_CRTITF	1
struct ipx_route_definition ;
struct ipx_interface_definition ;
struct ipx_config_data ;
struct ipx_route_def ;
#define SIOCAIPXITFCRT		(SIOCPROTOPRIVATE)
#define SIOCAIPXPRISLT		(SIOCPROTOPRIVATE + 1)
#define SIOCIPXCFGDATA		(SIOCPROTOPRIVATE + 2)
#define SIOCIPXNCPCONN		(SIOCPROTOPRIVATE + 3)
