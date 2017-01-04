#define _LINUX_TIPC_H_
struct tipc_portid ;
struct tipc_name ;
struct tipc_name_seq ;
static inline __u32 tipc_addr(unsigned int zone,
unsigned int cluster,
unsigned int node)
static inline unsigned int tipc_zone(__u32 addr)
static inline unsigned int tipc_cluster(__u32 addr)
static inline unsigned int tipc_node(__u32 addr)
#define TIPC_CFG_SRV		0
#define TIPC_TOP_SRV		1
#define TIPC_RESERVED_TYPES	64
#define TIPC_ZONE_SCOPE		1
#define TIPC_CLUSTER_SCOPE	2
#define TIPC_NODE_SCOPE		3
#define TIPC_MAX_USER_MSG_SIZE	66000U
#define TIPC_LOW_IMPORTANCE		0
#define TIPC_MEDIUM_IMPORTANCE		1
#define TIPC_HIGH_IMPORTANCE		2
#define TIPC_CRITICAL_IMPORTANCE	3
#define TIPC_OK			0
#define TIPC_ERR_NO_NAME	1
#define TIPC_ERR_NO_PORT	2
#define TIPC_ERR_NO_NODE	3
#define TIPC_ERR_OVERLOAD	4
#define TIPC_CONN_SHUTDOWN	5
#define TIPC_SUB_PORTS		0x01
#define TIPC_SUB_SERVICE	0x02
#define TIPC_SUB_CANCEL		0x04
#define TIPC_WAIT_FOREVER	(~0)
struct tipc_subscr ;
#define TIPC_PUBLISHED		1
#define TIPC_WITHDRAWN		2
#define TIPC_SUBSCR_TIMEOUT	3
struct tipc_event ;
#define AF_TIPC		30
#define PF_TIPC		AF_TIPC
#define SOL_TIPC	271
#define TIPC_ADDR_NAMESEQ	1
#define TIPC_ADDR_MCAST		1
#define TIPC_ADDR_NAME		2
#define TIPC_ADDR_ID		3
struct sockaddr_tipc ;
#define TIPC_ERRINFO	1
#define TIPC_RETDATA	2
#define TIPC_DESTNAME	3
#define TIPC_IMPORTANCE		127
#define TIPC_SRC_DROPPABLE	128
#define TIPC_DEST_DROPPABLE	129
#define TIPC_CONN_TIMEOUT	130
#define TIPC_NODE_RECVQ_DEPTH	131
#define TIPC_SOCK_RECVQ_DEPTH	132
