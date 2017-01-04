static struct kmem_cache *nsproxy_cachep;
struct nsproxy init_nsproxy = ;
static inline struct nsproxy *create_nsproxy(void)
static struct nsproxy *create_new_namespaces(unsigned long flags,
struct task_struct *tsk, struct fs_struct *new_fs)
int copy_namespaces(unsigned long flags, struct task_struct *tsk)
void free_nsproxy(struct nsproxy *ns)
int unshare_nsproxy_namespaces(unsigned long unshare_flags,
struct nsproxy **new_nsp, struct fs_struct *new_fs)
void switch_task_namespaces(struct task_struct *p, struct nsproxy *new)
void exit_task_namespaces(struct task_struct *p)
SYSCALL_DEFINE2(setns, int, fd, int, nstype)
static int __init nsproxy_cache_init(void)
module_init(nsproxy_cache_init);
