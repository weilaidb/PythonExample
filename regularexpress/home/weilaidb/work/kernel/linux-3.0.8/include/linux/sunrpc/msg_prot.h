#define _LINUX_SUNRPC_MSGPROT_H_
#define RPC_VERSION 2
#define XDR_UNIT	(4)
typedef u32	rpc_authflavor_t;
enum rpc_auth_flavors ;
#define RPC_MAX_AUTH_SIZE (400)
enum rpc_msg_type ;
enum rpc_reply_stat ;
enum rpc_accept_stat ;
enum rpc_reject_stat ;
enum rpc_auth_stat ;
#define RPC_MAXNETNAMELEN	256
typedef __be32	rpc_fraghdr;
#define	RPC_LAST_STREAM_FRAGMENT	(1U << 31)
#define	RPC_FRAGMENT_SIZE_MASK		(~RPC_LAST_STREAM_FRAGMENT)
#define	RPC_MAX_FRAGMENT_SIZE		((1U << 31) - 1)
#define RPC_CALLHDRSIZE		(6)
#define RPC_REPHDRSIZE		(4)
#define RPC_MAX_HEADER_WITH_AUTH \
(RPC_CALLHDRSIZE + 2*(2+RPC_MAX_AUTH_SIZE/4))
#define RPCBIND_NETID_UDP	"udp"
#define RPCBIND_NETID_TCP	"tcp"
#define RPCBIND_NETID_UDP6	"udp6"
#define RPCBIND_NETID_TCP6	"tcp6"
#define RPCBIND_NETID_LOCAL	"local"
#define RPCBIND_MAXNETIDLEN	(4u)
#define RPCBIND_MAXUADDRPLEN	sizeof(".255.255")
#define RPCBIND_MAXUADDR4LEN	\
(INET_ADDRSTRLEN + RPCBIND_MAXUADDRPLEN)
#define RPCBIND_MAXUADDR6LEN	\
(INET6_ADDRSTRLEN + RPCBIND_MAXUADDRPLEN)
#define RPCBIND_MAXUADDRLEN	RPCBIND_MAXUADDR6LEN
