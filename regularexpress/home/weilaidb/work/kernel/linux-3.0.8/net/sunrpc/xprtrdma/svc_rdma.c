#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
unsigned int svcrdma_ord = RPCRDMA_ORD;
static unsigned int min_ord = 1;
static unsigned int max_ord = 4096;
unsigned int svcrdma_max_requests = RPCRDMA_MAX_REQUESTS;
static unsigned int min_max_requests = 4;
static unsigned int max_max_requests = 16384;
unsigned int svcrdma_max_req_size = RPCRDMA_MAX_REQ_SIZE;
static unsigned int min_max_inline = 4096;
static unsigned int max_max_inline = 65536;
atomic_t rdma_stat_recv;
atomic_t rdma_stat_read;
atomic_t rdma_stat_write;
atomic_t rdma_stat_sq_starve;
atomic_t rdma_stat_rq_starve;
atomic_t rdma_stat_rq_poll;
atomic_t rdma_stat_rq_prod;
atomic_t rdma_stat_sq_poll;
atomic_t rdma_stat_sq_prod;
struct kmem_cache *svc_rdma_map_cachep;
struct kmem_cache *svc_rdma_ctxt_cachep;
struct workqueue_struct *svc_rdma_wq;
static int read_reset_stat(ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static struct ctl_table_header *svcrdma_table_header;
static ctl_table svcrdma_parm_table[] = ;
static ctl_table svcrdma_table[] = ;
static ctl_table svcrdma_root_table[] = ;
void svc_rdma_cleanup(void)
int svc_rdma_init(void)
MODULE_AUTHOR("Tom Tucker <tom@opengridcomputing.com>");
MODULE_DESCRIPTION("SVC RDMA Transport");
MODULE_LICENSE("Dual BSD/GPL");
module_init(svc_rdma_init);
module_exit(svc_rdma_cleanup);
