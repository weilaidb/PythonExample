#define RPCDBG_FACILITY	RPCDBG_MISC
static int rpc_proc_show(struct seq_file *seq, void *v)
static int rpc_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rpc_proc_fops = ;
void svc_seq_show(struct seq_file *seq, const struct svc_stat *statp)
EXPORT_SYMBOL_GPL(svc_seq_show);
struct rpc_iostats *rpc_alloc_iostats(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_alloc_iostats);
void rpc_free_iostats(struct rpc_iostats *stats)
EXPORT_SYMBOL_GPL(rpc_free_iostats);
void rpc_count_iostats(struct rpc_task *task)
static void _print_name(struct seq_file *seq, unsigned int op,
struct rpc_procinfo *procs)
void rpc_print_iostats(struct seq_file *seq, struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_print_iostats);
static inline struct proc_dir_entry *
do_register(const char *name, void *data, const struct file_operations *fops)
struct proc_dir_entry *
rpc_proc_register(struct rpc_stat *statp)
EXPORT_SYMBOL_GPL(rpc_proc_register);
void
rpc_proc_unregister(const char *name)
EXPORT_SYMBOL_GPL(rpc_proc_unregister);
struct proc_dir_entry *
svc_proc_register(struct svc_stat *statp, const struct file_operations *fops)
EXPORT_SYMBOL_GPL(svc_proc_register);
void
svc_proc_unregister(const char *name)
EXPORT_SYMBOL_GPL(svc_proc_unregister);
int rpc_proc_init(struct net *net)
void rpc_proc_exit(struct net *net)
