static LIST_HEAD(percpu_counters);
static DEFINE_MUTEX(percpu_counters_lock);
static struct debug_obj_descr percpu_counter_debug_descr;
static int percpu_counter_fixup_free(void *addr, enum debug_obj_state state)
static struct debug_obj_descr percpu_counter_debug_descr = ;
static inline void debug_percpu_counter_activate(struct percpu_counter *fbc)
static inline void debug_percpu_counter_deactivate(struct percpu_counter *fbc)
static inline void debug_percpu_counter_activate(struct percpu_counter *fbc)
static inline void debug_percpu_counter_deactivate(struct percpu_counter *fbc)
void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
EXPORT_SYMBOL(percpu_counter_set);
void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch)
EXPORT_SYMBOL(__percpu_counter_add);
s64 __percpu_counter_sum(struct percpu_counter *fbc)
EXPORT_SYMBOL(__percpu_counter_sum);
int __percpu_counter_init(struct percpu_counter *fbc, s64 amount,
struct lock_class_key *key)
EXPORT_SYMBOL(__percpu_counter_init);
void percpu_counter_destroy(struct percpu_counter *fbc)
EXPORT_SYMBOL(percpu_counter_destroy);
int percpu_counter_batch __read_mostly = 32;
EXPORT_SYMBOL(percpu_counter_batch);
static void compute_batch_value(void)
static int __cpuinit percpu_counter_hotcpu_callback(struct notifier_block *nb,
unsigned long action, void *hcpu)
int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs)
EXPORT_SYMBOL(percpu_counter_compare);
static int __init percpu_counter_startup(void)
module_init(percpu_counter_startup);
