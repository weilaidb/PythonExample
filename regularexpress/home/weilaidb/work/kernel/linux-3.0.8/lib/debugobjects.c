#define ODEBUG_HASH_BITS	14
#define ODEBUG_HASH_SIZE	(1 << ODEBUG_HASH_BITS)
#define ODEBUG_POOL_SIZE	512
#define ODEBUG_POOL_MIN_LEVEL	256
#define ODEBUG_CHUNK_SHIFT	PAGE_SHIFT
#define ODEBUG_CHUNK_SIZE	(1 << ODEBUG_CHUNK_SHIFT)
#define ODEBUG_CHUNK_MASK	(~(ODEBUG_CHUNK_SIZE - 1))
struct debug_bucket ;
static struct debug_bucket	obj_hash[ODEBUG_HASH_SIZE];
static struct debug_obj		obj_static_pool[ODEBUG_POOL_SIZE] __initdata;
static DEFINE_RAW_SPINLOCK(pool_lock);
static HLIST_HEAD(obj_pool);
static int			obj_pool_min_free = ODEBUG_POOL_SIZE;
static int			obj_pool_free = ODEBUG_POOL_SIZE;
static int			obj_pool_used;
static int			obj_pool_max_used;
static struct kmem_cache	*obj_cache;
static int			debug_objects_maxchain __read_mostly;
static int			debug_objects_fixups __read_mostly;
static int			debug_objects_warnings __read_mostly;
static int			debug_objects_enabled __read_mostly
= CONFIG_DEBUG_OBJECTS_ENABLE_DEFAULT;
static struct debug_obj_descr	*descr_test  __read_mostly;
static void free_obj_work(struct work_struct *work);
static DECLARE_WORK(debug_obj_work, free_obj_work);
static int __init enable_object_debug(char *str)
static int __init disable_object_debug(char *str)
early_param("debug_objects", enable_object_debug);
early_param("no_debug_objects", disable_object_debug);
static const char *obj_states[ODEBUG_STATE_MAX] = ;
static int fill_pool(void)
static struct debug_obj *lookup_object(void *addr, struct debug_bucket *b)
static struct debug_obj *
alloc_object(void *addr, struct debug_bucket *b, struct debug_obj_descr *descr)
static void free_obj_work(struct work_struct *work)
static void free_object(struct debug_obj *obj)
static void debug_objects_oom(void)
static struct debug_bucket *get_bucket(unsigned long addr)
static void debug_print_object(struct debug_obj *obj, char *msg)
static void
debug_object_fixup(int (*fixup)(void *addr, enum debug_obj_state state),
void * addr, enum debug_obj_state state)
static void debug_object_is_on_stack(void *addr, int onstack)
static void
__debug_object_init(void *addr, struct debug_obj_descr *descr, int onstack)
void debug_object_init(void *addr, struct debug_obj_descr *descr)
void debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr)
void debug_object_activate(void *addr, struct debug_obj_descr *descr)
void debug_object_deactivate(void *addr, struct debug_obj_descr *descr)
void debug_object_destroy(void *addr, struct debug_obj_descr *descr)
void debug_object_free(void *addr, struct debug_obj_descr *descr)
void
debug_object_active_state(void *addr, struct debug_obj_descr *descr,
unsigned int expect, unsigned int next)
static void __debug_check_no_obj_freed(const void *address, unsigned long size)
void debug_check_no_obj_freed(const void *address, unsigned long size)
static int debug_stats_show(struct seq_file *m, void *v)
static int debug_stats_open(struct inode *inode, struct file *filp)
static const struct file_operations debug_stats_fops = ;
static int __init debug_objects_init_debugfs(void)
__initcall(debug_objects_init_debugfs);
static inline void debug_objects_init_debugfs(void)
struct self_test ;
static __initdata struct debug_obj_descr descr_type_test;
static int __init fixup_init(void *addr, enum debug_obj_state state)
static int __init fixup_activate(void *addr, enum debug_obj_state state)
static int __init fixup_destroy(void *addr, enum debug_obj_state state)
static int __init fixup_free(void *addr, enum debug_obj_state state)
static int __init
check_results(void *addr, enum debug_obj_state state, int fixups, int warnings)
static __initdata struct debug_obj_descr descr_type_test = ;
static __initdata struct self_test obj = ;
static void __init debug_objects_selftest(void)
static inline void debug_objects_selftest(void)
void __init debug_objects_early_init(void)
static int __init debug_objects_replace_static_objects(void)
void __init debug_objects_mem_init(void)
