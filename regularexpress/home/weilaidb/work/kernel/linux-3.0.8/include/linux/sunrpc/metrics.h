#define _LINUX_SUNRPC_METRICS_H
#define RPC_IOSTATS_VERS	"1.0"
struct rpc_iostats  ____cacheline_aligned;
struct rpc_task;
struct rpc_clnt;
struct rpc_iostats *	rpc_alloc_iostats(struct rpc_clnt *);
void			rpc_count_iostats(struct rpc_task *);
void			rpc_print_iostats(struct seq_file *, struct rpc_clnt *);
void			rpc_free_iostats(struct rpc_iostats *);
static inline struct rpc_iostats *rpc_alloc_iostats(struct rpc_clnt *clnt)
static inline void rpc_count_iostats(struct rpc_task *task)
static inline void rpc_print_iostats(struct seq_file *seq, struct rpc_clnt *clnt)
static inline void rpc_free_iostats(struct rpc_iostats *stats)
