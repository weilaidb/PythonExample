# define RPCDBG_FACILITY	RPCDBG_TRANS
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("RPC/RDMA Transport for Linux kernel NFS");
MODULE_AUTHOR("Network Appliance, Inc.");
static unsigned int xprt_rdma_slot_table_entries = RPCRDMA_DEF_SLOT_TABLE;
static unsigned int xprt_rdma_max_inline_read = RPCRDMA_DEF_INLINE;
static unsigned int xprt_rdma_max_inline_write = RPCRDMA_DEF_INLINE;
static unsigned int xprt_rdma_inline_write_padding;
static unsigned int xprt_rdma_memreg_strategy = RPCRDMA_FRMR;
int xprt_rdma_pad_optimize = 0;
static unsigned int min_slot_table_size = RPCRDMA_MIN_SLOT_TABLE;
static unsigned int max_slot_table_size = RPCRDMA_MAX_SLOT_TABLE;
static unsigned int zero;
static unsigned int max_padding = PAGE_SIZE;
static unsigned int min_memreg = RPCRDMA_BOUNCEBUFFERS;
static unsigned int max_memreg = RPCRDMA_LAST - 1;
static struct ctl_table_header *sunrpc_table_header;
static ctl_table xr_tunables_table[] = ;
static ctl_table sunrpc_table[] = ;
static struct rpc_xprt_ops xprt_rdma_procs;
static void
xprt_rdma_format_addresses(struct rpc_xprt *xprt)
static void
xprt_rdma_free_addresses(struct rpc_xprt *xprt)
static void
xprt_rdma_connect_worker(struct work_struct *work)
static void
xprt_rdma_destroy(struct rpc_xprt *xprt)
static const struct rpc_timeout xprt_rdma_default_timeout = ;
static struct rpc_xprt *
xprt_setup_rdma(struct xprt_create *args)
static void
xprt_rdma_close(struct rpc_xprt *xprt)
static void
xprt_rdma_set_port(struct rpc_xprt *xprt, u16 port)
static void
xprt_rdma_connect(struct rpc_task *task)
static int
xprt_rdma_reserve_xprt(struct rpc_task *task)
static void *
xprt_rdma_allocate(struct rpc_task *task, size_t size)
static void
xprt_rdma_free(void *buffer)
static int
xprt_rdma_send_request(struct rpc_task *task)
static void xprt_rdma_print_stats(struct rpc_xprt *xprt, struct seq_file *seq)
static struct rpc_xprt_ops xprt_rdma_procs = ;
static struct xprt_class xprt_rdma = ;
static void __exit xprt_rdma_cleanup(void)
static int __init xprt_rdma_init(void)
module_init(xprt_rdma_init);
module_exit(xprt_rdma_cleanup);
