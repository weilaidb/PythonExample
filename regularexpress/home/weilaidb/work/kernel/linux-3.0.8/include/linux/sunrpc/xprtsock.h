#define _LINUX_SUNRPC_XPRTSOCK_H
int		init_socket_xprt(void);
void		cleanup_socket_xprt(void);
extern unsigned int xprt_udp_slot_table_entries;
extern unsigned int xprt_tcp_slot_table_entries;
extern unsigned int xprt_min_resvport;
extern unsigned int xprt_max_resvport;
#define RPC_MIN_RESVPORT	(1U)
#define RPC_MAX_RESVPORT	(65535U)
#define RPC_DEF_MIN_RESVPORT	(665U)
#define RPC_DEF_MAX_RESVPORT	(1023U)
