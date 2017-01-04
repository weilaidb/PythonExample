extern struct tracepoint * const __start___tracepoints_ptrs[];
extern struct tracepoint * const __stop___tracepoints_ptrs[];
static const int tracepoint_debug;
static DEFINE_MUTEX(tracepoints_mutex);
#define TRACEPOINT_HASH_BITS 6
#define TRACEPOINT_TABLE_SIZE (1 << TRACEPOINT_HASH_BITS)
static struct hlist_head tracepoint_table[TRACEPOINT_TABLE_SIZE];
struct tracepoint_entry ;
struct tp_probes ;
static inline void *allocate_probes(int count)
static void rcu_free_old_probes(struct rcu_head *head)
static inline void release_probes(struct tracepoint_func *old)
static void debug_print_probes(struct tracepoint_entry *entry)
static struct tracepoint_func *
tracepoint_entry_add_probe(struct tracepoint_entry *entry,
void *probe, void *data)
static void *
tracepoint_entry_remove_probe(struct tracepoint_entry *entry,
void *probe, void *data)
static struct tracepoint_entry *get_tracepoint(const char *name)
static struct tracepoint_entry *add_tracepoint(const char *name)
static inline void remove_tracepoint(struct tracepoint_entry *e)
static void set_tracepoint(struct tracepoint_entry **entry,
struct tracepoint *elem, int active)
static void disable_tracepoint(struct tracepoint *elem)
void tracepoint_update_probe_range(struct tracepoint * const *begin,
struct tracepoint * const *end)
static void tracepoint_update_probes(void)
static struct tracepoint_func *
tracepoint_add_probe(const char *name, void *probe, void *data)
int tracepoint_probe_register(const char *name, void *probe, void *data)
EXPORT_SYMBOL_GPL(tracepoint_probe_register);
static struct tracepoint_func *
tracepoint_remove_probe(const char *name, void *probe, void *data)
int tracepoint_probe_unregister(const char *name, void *probe, void *data)
EXPORT_SYMBOL_GPL(tracepoint_probe_unregister);
static LIST_HEAD(old_probes);
static int need_update;
static void tracepoint_add_old_probes(void *old)
int tracepoint_probe_register_noupdate(const char *name, void *probe,
void *data)
EXPORT_SYMBOL_GPL(tracepoint_probe_register_noupdate);
int tracepoint_probe_unregister_noupdate(const char *name, void *probe,
void *data)
EXPORT_SYMBOL_GPL(tracepoint_probe_unregister_noupdate);
void tracepoint_probe_update_all(void)
EXPORT_SYMBOL_GPL(tracepoint_probe_update_all);
int tracepoint_get_iter_range(struct tracepoint * const **tracepoint,
struct tracepoint * const *begin, struct tracepoint * const *end)
EXPORT_SYMBOL_GPL(tracepoint_get_iter_range);
static void tracepoint_get_iter(struct tracepoint_iter *iter)
void tracepoint_iter_start(struct tracepoint_iter *iter)
EXPORT_SYMBOL_GPL(tracepoint_iter_start);
void tracepoint_iter_next(struct tracepoint_iter *iter)
EXPORT_SYMBOL_GPL(tracepoint_iter_next);
void tracepoint_iter_stop(struct tracepoint_iter *iter)
EXPORT_SYMBOL_GPL(tracepoint_iter_stop);
void tracepoint_iter_reset(struct tracepoint_iter *iter)
EXPORT_SYMBOL_GPL(tracepoint_iter_reset);
int tracepoint_module_notify(struct notifier_block *self,
unsigned long val, void *data)
struct notifier_block tracepoint_module_nb = ;
static int init_tracepoints(void)
__initcall(init_tracepoints);
static int sys_tracepoint_refcount;
void syscall_regfunc(void)
void syscall_unregfunc(void)
