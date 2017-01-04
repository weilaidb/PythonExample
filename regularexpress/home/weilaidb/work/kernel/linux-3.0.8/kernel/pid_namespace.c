#define BITS_PER_PAGE		(PAGE_SIZE*8)
struct pid_cache ;
static LIST_HEAD(pid_caches_lh);
static DEFINE_MUTEX(pid_caches_mutex);
static struct kmem_cache *pid_ns_cachep;
static struct kmem_cache *create_pid_cachep(int nr_ids)
static struct pid_namespace *create_pid_namespace(struct pid_namespace *parent_pid_ns)
static void destroy_pid_namespace(struct pid_namespace *ns)
struct pid_namespace *copy_pid_ns(unsigned long flags, struct pid_namespace *old_ns)
void free_pid_ns(struct kref *kref)
void zap_pid_ns_processes(struct pid_namespace *pid_ns)
static __init int pid_namespaces_init(void)
__initcall(pid_namespaces_init);
