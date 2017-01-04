struct dcookie_struct ;
static LIST_HEAD(dcookie_users);
static DEFINE_MUTEX(dcookie_mutex);
static struct kmem_cache *dcookie_cache __read_mostly;
static struct list_head *dcookie_hashtable __read_mostly;
static size_t hash_size __read_mostly;
static inline int is_live(void)
static inline unsigned long dcookie_value(struct dcookie_struct * dcs)
static size_t dcookie_hash(unsigned long dcookie)
static struct dcookie_struct * find_dcookie(unsigned long dcookie)
static void hash_dcookie(struct dcookie_struct * dcs)
static struct dcookie_struct *alloc_dcookie(struct path *path)
int get_dcookie(struct path *path, unsigned long *cookie)
SYSCALL_DEFINE(lookup_dcookie)(u64 cookie64, char __user * buf, size_t len)
asmlinkage long SyS_lookup_dcookie(u64 cookie64, long buf, long len)
SYSCALL_ALIAS(sys_lookup_dcookie, SyS_lookup_dcookie);
static int dcookie_init(void)
static void free_dcookie(struct dcookie_struct * dcs)
static void dcookie_exit(void)
struct dcookie_user ;
struct dcookie_user * dcookie_register(void)
void dcookie_unregister(struct dcookie_user * user)
EXPORT_SYMBOL_GPL(dcookie_register);
EXPORT_SYMBOL_GPL(dcookie_unregister);
EXPORT_SYMBOL_GPL(get_dcookie);
