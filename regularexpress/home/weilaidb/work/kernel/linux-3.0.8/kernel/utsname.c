static struct uts_namespace *create_uts_ns(void)
static struct uts_namespace *clone_uts_ns(struct task_struct *tsk,
struct uts_namespace *old_ns)
struct uts_namespace *copy_utsname(unsigned long flags,
struct task_struct *tsk)
void free_uts_ns(struct kref *kref)
static void *utsns_get(struct task_struct *task)
static void utsns_put(void *ns)
static int utsns_install(struct nsproxy *nsproxy, void *ns)
const struct proc_ns_operations utsns_operations = ;
