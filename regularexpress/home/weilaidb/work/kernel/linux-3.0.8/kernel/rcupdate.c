static struct lock_class_key rcu_lock_key;
struct lockdep_map rcu_lock_map =
STATIC_LOCKDEP_MAP_INIT("rcu_read_lock", &rcu_lock_key);
EXPORT_SYMBOL_GPL(rcu_lock_map);
static struct lock_class_key rcu_bh_lock_key;
struct lockdep_map rcu_bh_lock_map =
STATIC_LOCKDEP_MAP_INIT("rcu_read_lock_bh", &rcu_bh_lock_key);
EXPORT_SYMBOL_GPL(rcu_bh_lock_map);
static struct lock_class_key rcu_sched_lock_key;
struct lockdep_map rcu_sched_lock_map =
STATIC_LOCKDEP_MAP_INIT("rcu_read_lock_sched", &rcu_sched_lock_key);
EXPORT_SYMBOL_GPL(rcu_sched_lock_map);
int debug_lockdep_rcu_enabled(void)
EXPORT_SYMBOL_GPL(debug_lockdep_rcu_enabled);
int rcu_read_lock_bh_held(void)
EXPORT_SYMBOL_GPL(rcu_read_lock_bh_held);
void wakeme_after_rcu(struct rcu_head  *head)
int rcu_my_thread_group_empty(void)
EXPORT_SYMBOL_GPL(rcu_my_thread_group_empty);
static inline void debug_init_rcu_head(struct rcu_head *head)
static inline void debug_rcu_head_free(struct rcu_head *head)
static int rcuhead_fixup_init(void *addr, enum debug_obj_state state)
static int rcuhead_fixup_activate(void *addr, enum debug_obj_state state)
static int rcuhead_fixup_free(void *addr, enum debug_obj_state state)
void init_rcu_head_on_stack(struct rcu_head *head)
EXPORT_SYMBOL_GPL(init_rcu_head_on_stack);
void destroy_rcu_head_on_stack(struct rcu_head *head)
EXPORT_SYMBOL_GPL(destroy_rcu_head_on_stack);
struct debug_obj_descr rcuhead_debug_descr = ;
EXPORT_SYMBOL_GPL(rcuhead_debug_descr);
