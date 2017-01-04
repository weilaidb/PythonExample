#define _LINUX_SUNRPC_XPRTRDMA_H
#define RPCBIND_NETID_RDMA	"rdma"
#define RPCRDMA_MIN_SLOT_TABLE	(2U)
#define RPCRDMA_DEF_SLOT_TABLE	(32U)
#define RPCRDMA_MAX_SLOT_TABLE	(256U)
#define RPCRDMA_DEF_INLINE  (1024)
#define RPCRDMA_INLINE_PAD_THRESH  (512)
#define RPCRDMA_PERSISTENT_REGISTRATION (1)
enum rpcrdma_memreg ;