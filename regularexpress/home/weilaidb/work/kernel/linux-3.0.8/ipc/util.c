struct ipc_proc_iface ;
static void ipc_memory_notifier(struct work_struct *work)
static DECLARE_WORK(ipc_memory_wq, ipc_memory_notifier);
static int ipc_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
static int __init ipc_init(void)
__initcall(ipc_init);
void ipc_init_ids(struct ipc_ids *ids)
static const struct file_operations sysvipc_proc_fops;
void __init ipc_init_proc_interface(const char *path, const char *header,
int ids, int (*show)(struct seq_file *, void *))
static struct kern_ipc_perm *ipc_findkey(struct ipc_ids *ids, key_t key)
int ipc_get_maxid(struct ipc_ids *ids)
int ipc_addid(struct ipc_ids* ids, struct kern_ipc_perm* new, int size)
static int ipcget_new(struct ipc_namespace *ns, struct ipc_ids *ids,
struct ipc_ops *ops, struct ipc_params *params)
static int ipc_check_perms(struct ipc_namespace *ns,
struct kern_ipc_perm *ipcp,
struct ipc_ops *ops,
struct ipc_params *params)
static int ipcget_public(struct ipc_namespace *ns, struct ipc_ids *ids,
struct ipc_ops *ops, struct ipc_params *params)
void ipc_rmid(struct ipc_ids *ids, struct kern_ipc_perm *ipcp)
void* ipc_alloc(int size)
void ipc_free(void* ptr, int size)
struct ipc_rcu_hdr
;
struct ipc_rcu_grace
;
struct ipc_rcu_sched
;
#define HDRLEN_KMALLOC		(sizeof(struct ipc_rcu_grace) > sizeof(struct ipc_rcu_hdr) ? \
sizeof(struct ipc_rcu_grace) : sizeof(struct ipc_rcu_hdr))
#define HDRLEN_VMALLOC		(sizeof(struct ipc_rcu_sched) > HDRLEN_KMALLOC ? \
sizeof(struct ipc_rcu_sched) : HDRLEN_KMALLOC)
static inline int rcu_use_vmalloc(int size)
void* ipc_rcu_alloc(int size)
void ipc_rcu_getref(void *ptr)
static void ipc_do_vfree(struct work_struct *work)
static void ipc_schedule_free(struct rcu_head *head)
static void ipc_immediate_free(struct rcu_head *head)
void ipc_rcu_putref(void *ptr)
int ipcperms(struct ipc_namespace *ns, struct kern_ipc_perm *ipcp, short flag)
void kernel_to_ipc64_perm (struct kern_ipc_perm *in, struct ipc64_perm *out)
void ipc64_perm_to_ipc_perm (struct ipc64_perm *in, struct ipc_perm *out)
struct kern_ipc_perm *ipc_lock(struct ipc_ids *ids, int id)
struct kern_ipc_perm *ipc_lock_check(struct ipc_ids *ids, int id)
int ipcget(struct ipc_namespace *ns, struct ipc_ids *ids,
struct ipc_ops *ops, struct ipc_params *params)
void ipc_update_perm(struct ipc64_perm *in, struct kern_ipc_perm *out)
struct kern_ipc_perm *ipcctl_pre_down(struct ipc_namespace *ns,
struct ipc_ids *ids, int id, int cmd,
struct ipc64_perm *perm, int extra_perm)
int ipc_parse_version (int *cmd)
struct ipc_proc_iter ;
static struct kern_ipc_perm *sysvipc_find_ipc(struct ipc_ids *ids, loff_t pos,
loff_t *new_pos)
static void *sysvipc_proc_next(struct seq_file *s, void *it, loff_t *pos)
static void *sysvipc_proc_start(struct seq_file *s, loff_t *pos)
static void sysvipc_proc_stop(struct seq_file *s, void *it)
static int sysvipc_proc_show(struct seq_file *s, void *it)
static const struct seq_operations sysvipc_proc_seqops = ;
static int sysvipc_proc_open(struct inode *inode, struct file *file)
static int sysvipc_proc_release(struct inode *inode, struct file *file)
static const struct file_operations sysvipc_proc_fops = ;
