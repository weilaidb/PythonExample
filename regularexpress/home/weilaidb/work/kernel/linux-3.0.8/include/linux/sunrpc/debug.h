#define _LINUX_SUNRPC_DEBUG_H_
#define RPCDBG_XPRT		0x0001
#define RPCDBG_CALL		0x0002
#define RPCDBG_DEBUG		0x0004
#define RPCDBG_NFS		0x0008
#define RPCDBG_AUTH		0x0010
#define RPCDBG_BIND		0x0020
#define RPCDBG_SCHED		0x0040
#define RPCDBG_TRANS		0x0080
#define RPCDBG_SVCXPRT		0x0100
#define RPCDBG_SVCDSP		0x0200
#define RPCDBG_MISC		0x0400
#define RPCDBG_CACHE		0x0800
#define RPCDBG_ALL		0x7fff
#define  RPC_DEBUG
extern unsigned int		rpc_debug;
extern unsigned int		nfs_debug;
extern unsigned int		nfsd_debug;
extern unsigned int		nlm_debug;
#define dprintk(args...)	dfprintk(FACILITY, ## args)
#undef ifdebug
# define ifdebug(fac)		if (unlikely(rpc_debug & RPCDBG_##fac))
# define dfprintk(fac, args...)	do  while(0)
# define RPC_IFDEBUG(x)		x
# define ifdebug(fac)		if (0)
# define dfprintk(fac, args...)	do ; while (0)
# define RPC_IFDEBUG(x)
void		rpc_register_sysctl(void);
void		rpc_unregister_sysctl(void);
enum ;
