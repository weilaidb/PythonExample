#define _LINUX_SUNRPC_STATS_H
struct rpc_stat ;
struct svc_stat ;
struct net;
int			rpc_proc_init(struct net *);
void			rpc_proc_exit(struct net *);
static inline int rpc_proc_init(struct net *net)
static inline void rpc_proc_exit(struct net *net)
void			rpc_modcount(struct inode *, int);
struct proc_dir_entry *	rpc_proc_register(struct rpc_stat *);
void			rpc_proc_unregister(const char *);
void			rpc_proc_zero(struct rpc_program *);
struct proc_dir_entry *	svc_proc_register(struct svc_stat *,
const struct file_operations *);
void			svc_proc_unregister(const char *);
void			svc_seq_show(struct seq_file *,
const struct svc_stat *);
static inline struct proc_dir_entry *rpc_proc_register(struct rpc_stat *s)
static inline void rpc_proc_unregister(const char *p)
static inline void rpc_proc_zero(struct rpc_program *p)
static inline struct proc_dir_entry *svc_proc_register(struct svc_stat *s,
const struct file_operations *f)
static inline void svc_proc_unregister(const char *p)
static inline void svc_seq_show(struct seq_file *seq,
const struct svc_stat *st)
