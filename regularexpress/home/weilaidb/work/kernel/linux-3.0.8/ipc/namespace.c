static struct ipc_namespace *create_ipc_ns(struct task_struct *tsk,
struct ipc_namespace *old_ns)
struct ipc_namespace *copy_ipcs(unsigned long flags,
struct task_struct *tsk)
void free_ipcs(struct ipc_namespace *ns, struct ipc_ids *ids,
void (*free)(struct ipc_namespace *, struct kern_ipc_perm *))
static void free_ipc_ns(struct ipc_namespace *ns)
void put_ipc_ns(struct ipc_namespace *ns)
static void *ipcns_get(struct task_struct *task)
static void ipcns_put(void *ns)
static int ipcns_install(struct nsproxy *nsproxy, void *ns)
const struct proc_ns_operations ipcns_operations = ;
