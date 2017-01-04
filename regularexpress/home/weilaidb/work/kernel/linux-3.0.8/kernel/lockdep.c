#define DISABLE_BRANCH_PROFILING
#define CREATE_TRACE_POINTS
int prove_locking = 1;
module_param(prove_locking, int, 0644);
#define prove_locking 0
int lock_stat = 1;
module_param(lock_stat, int, 0644);
#define lock_stat 0
static arch_spinlock_t lockdep_lock = (arch_spinlock_t)__ARCH_SPIN_LOCK_UNLOCKED;
static int graph_lock(void)
static inline int graph_unlock(void)
static inline int debug_locks_off_graph_unlock(void)
static int lockdep_initialized;
unsigned long nr_list_entries;
static struct lock_list list_entries[MAX_LOCKDEP_ENTRIES];
unsigned long nr_lock_classes;
static struct lock_class lock_classes[MAX_LOCKDEP_KEYS];
static inline struct lock_class *hlock_class(struct held_lock *hlock)
static DEFINE_PER_CPU(struct lock_class_stats[MAX_LOCKDEP_KEYS],
cpu_lock_stats);
static inline u64 lockstat_clock(void)
static int lock_point(unsigned long points[], unsigned long ip)
static void lock_time_inc(struct lock_time *lt, u64 time)
static inline void lock_time_add(struct lock_time *src, struct lock_time *dst)
struct lock_class_stats lock_stats(struct lock_class *class)
void clear_lock_stats(struct lock_class *class)
static struct lock_class_stats *get_lock_stats(struct lock_class *class)
static void put_lock_stats(struct lock_class_stats *stats)
static void lock_release_holdtime(struct held_lock *hlock)
static inline void lock_release_holdtime(struct held_lock *hlock)
LIST_HEAD(all_lock_classes);
#define CLASSHASH_BITS		(MAX_LOCKDEP_KEYS_BITS - 1)
#define CLASSHASH_SIZE		(1UL << CLASSHASH_BITS)
#define __classhashfn(key)	hash_long((unsigned long)key, CLASSHASH_BITS)
#define classhashentry(key)	(classhash_table + __classhashfn((key)))
static struct list_head classhash_table[CLASSHASH_SIZE];
#define CHAINHASH_BITS		(MAX_LOCKDEP_CHAINS_BITS-1)
#define CHAINHASH_SIZE		(1UL << CHAINHASH_BITS)
#define __chainhashfn(chain)	hash_long(chain, CHAINHASH_BITS)
#define chainhashentry(chain)	(chainhash_table + __chainhashfn((chain)))
static struct list_head chainhash_table[CHAINHASH_SIZE];
#define iterate_chain_key(key1, key2) \
(((key1) << MAX_LOCKDEP_KEYS_BITS) ^ \
((key1) >> (64-MAX_LOCKDEP_KEYS_BITS)) ^ \
(key2))
void lockdep_off(void)
EXPORT_SYMBOL(lockdep_off);
void lockdep_on(void)
EXPORT_SYMBOL(lockdep_on);
#define VERBOSE			0
#define VERY_VERBOSE		0
#if VERBOSE
# define HARDIRQ_VERBOSE	1
# define SOFTIRQ_VERBOSE	1
# define RECLAIM_VERBOSE	1
# define HARDIRQ_VERBOSE	0
# define SOFTIRQ_VERBOSE	0
# define RECLAIM_VERBOSE	0
#if VERBOSE || HARDIRQ_VERBOSE || SOFTIRQ_VERBOSE || RECLAIM_VERBOSE
static int class_filter(struct lock_class *class)
static int verbose(struct lock_class *class)
unsigned long nr_stack_trace_entries;
static unsigned long stack_trace[MAX_STACK_TRACE_ENTRIES];
static int save_trace(struct stack_trace *trace)
unsigned int nr_hardirq_chains;
unsigned int nr_softirq_chains;
unsigned int nr_process_chains;
unsigned int max_lockdep_depth;
static int lockdep_init_error;
static unsigned long lockdep_init_trace_data[20];
static struct stack_trace lockdep_init_trace = ;
DEFINE_PER_CPU(struct lockdep_stats, lockdep_stats);
#define __USAGE(__STATE)						\
[LOCK_USED_IN_##__STATE] = "IN-"__stringify(__STATE)"-W",	\
[LOCK_ENABLED_##__STATE] = __stringify(__STATE)"-ON-W",		\
[LOCK_USED_IN_##__STATE##_READ] = "IN-"__stringify(__STATE)"-R",\
[LOCK_ENABLED_##__STATE##_READ] = __stringify(__STATE)"-ON-R",
static const char *usage_str[] =
;
const char * __get_key_name(struct lockdep_subclass_key *key, char *str)
static inline unsigned long lock_flag(enum lock_usage_bit bit)
static char get_usage_char(struct lock_class *class, enum lock_usage_bit bit)
void get_usage_chars(struct lock_class *class, char usage[LOCK_USAGE_CHARS])
static int __print_lock_name(struct lock_class *class)
static void print_lock_name(struct lock_class *class)
static void print_lockdep_cache(struct lockdep_map *lock)
static void print_lock(struct held_lock *hlock)
static void lockdep_print_held_locks(struct task_struct *curr)
static void print_kernel_version(void)
static int very_verbose(struct lock_class *class)
static int static_obj(void *obj)
static int count_matching_names(struct lock_class *new_class)
static inline struct lock_class *
look_up_lock_class(struct lockdep_map *lock, unsigned int subclass)
static inline struct lock_class *
register_lock_class(struct lockdep_map *lock, unsigned int subclass, int force)
static struct lock_list *alloc_list_entry(void)
static int add_lock_to_list(struct lock_class *class, struct lock_class *this,
struct list_head *head, unsigned long ip,
int distance, struct stack_trace *trace)
#define MAX_CIRCULAR_QUEUE_SIZE		4096UL
#define CQ_MASK				(MAX_CIRCULAR_QUEUE_SIZE-1)
struct circular_queue ;
static struct circular_queue lock_cq;
unsigned int max_bfs_queue_depth;
static unsigned int lockdep_dependency_gen_id;
static inline void __cq_init(struct circular_queue *cq)
static inline int __cq_empty(struct circular_queue *cq)
static inline int __cq_full(struct circular_queue *cq)
static inline int __cq_enqueue(struct circular_queue *cq, unsigned long elem)
static inline int __cq_dequeue(struct circular_queue *cq, unsigned long *elem)
static inline unsigned int  __cq_get_elem_count(struct circular_queue *cq)
static inline void mark_lock_accessed(struct lock_list *lock,
struct lock_list *parent)
static inline unsigned long lock_accessed(struct lock_list *lock)
static inline struct lock_list *get_lock_parent(struct lock_list *child)
static inline int get_lock_depth(struct lock_list *child)
static int __bfs(struct lock_list *source_entry,
void *data,
int (*match)(struct lock_list *entry, void *data),
struct lock_list **target_entry,
int forward)
static inline int __bfs_forwards(struct lock_list *src_entry,
void *data,
int (*match)(struct lock_list *entry, void *data),
struct lock_list **target_entry)
static inline int __bfs_backwards(struct lock_list *src_entry,
void *data,
int (*match)(struct lock_list *entry, void *data),
struct lock_list **target_entry)
static noinline int
print_circular_bug_entry(struct lock_list *target, int depth)
static void
print_circular_lock_scenario(struct held_lock *src,
struct held_lock *tgt,
struct lock_list *prt)
static noinline int
print_circular_bug_header(struct lock_list *entry, unsigned int depth,
struct held_lock *check_src,
struct held_lock *check_tgt)
static inline int class_equal(struct lock_list *entry, void *data)
static noinline int print_circular_bug(struct lock_list *this,
struct lock_list *target,
struct held_lock *check_src,
struct held_lock *check_tgt)
static noinline int print_bfs_bug(int ret)
static int noop_count(struct lock_list *entry, void *data)
unsigned long __lockdep_count_forward_deps(struct lock_list *this)
unsigned long lockdep_count_forward_deps(struct lock_class *class)
unsigned long __lockdep_count_backward_deps(struct lock_list *this)
unsigned long lockdep_count_backward_deps(struct lock_class *class)
static noinline int
check_noncircular(struct lock_list *root, struct lock_class *target,
struct lock_list **target_entry)
#if defined(CONFIG_TRACE_IRQFLAGS) && defined(CONFIG_PROVE_LOCKING)
static inline int usage_match(struct lock_list *entry, void *bit)
static int
find_usage_forwards(struct lock_list *root, enum lock_usage_bit bit,
struct lock_list **target_entry)
static int
find_usage_backwards(struct lock_list *root, enum lock_usage_bit bit,
struct lock_list **target_entry)
static void print_lock_class_header(struct lock_class *class, int depth)
static void __used
print_shortest_lock_dependencies(struct lock_list *leaf,
struct lock_list *root)
static void
print_irq_lock_scenario(struct lock_list *safe_entry,
struct lock_list *unsafe_entry,
struct lock_class *prev_class,
struct lock_class *next_class)
static int
print_bad_irq_dependency(struct task_struct *curr,
struct lock_list *prev_root,
struct lock_list *next_root,
struct lock_list *backwards_entry,
struct lock_list *forwards_entry,
struct held_lock *prev,
struct held_lock *next,
enum lock_usage_bit bit1,
enum lock_usage_bit bit2,
const char *irqclass)
static int
check_usage(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next, enum lock_usage_bit bit_backwards,
enum lock_usage_bit bit_forwards, const char *irqclass)
static const char *state_names[] = ;
static const char *state_rnames[] = ;
static inline const char *state_name(enum lock_usage_bit bit)
static int exclusive_bit(int new_bit)
static int check_irq_usage(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next, enum lock_usage_bit bit)
static int
check_prev_add_irq(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next)
static void inc_chains(void)
static inline int
check_prev_add_irq(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next)
static inline void inc_chains(void)
static void
print_deadlock_scenario(struct held_lock *nxt,
struct held_lock *prv)
static int
print_deadlock_bug(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next)
static int
check_deadlock(struct task_struct *curr, struct held_lock *next,
struct lockdep_map *next_instance, int read)
static int
check_prev_add(struct task_struct *curr, struct held_lock *prev,
struct held_lock *next, int distance, int trylock_loop)
static int
check_prevs_add(struct task_struct *curr, struct held_lock *next)
unsigned long nr_lock_chains;
struct lock_chain lock_chains[MAX_LOCKDEP_CHAINS];
int nr_chain_hlocks;
static u16 chain_hlocks[MAX_LOCKDEP_CHAIN_HLOCKS];
struct lock_class *lock_chain_get_class(struct lock_chain *chain, int i)
static inline int lookup_chain_cache(struct task_struct *curr,
struct held_lock *hlock,
u64 chain_key)
static int validate_chain(struct task_struct *curr, struct lockdep_map *lock,
struct held_lock *hlock, int chain_head, u64 chain_key)
static inline int validate_chain(struct task_struct *curr,
struct lockdep_map *lock, struct held_lock *hlock,
int chain_head, u64 chain_key)
static void check_chain_key(struct task_struct *curr)
static void
print_usage_bug_scenario(struct held_lock *lock)
static int
print_usage_bug(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit prev_bit, enum lock_usage_bit new_bit)
static inline int
valid_state(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit new_bit, enum lock_usage_bit bad_bit)
static int mark_lock(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit new_bit);
#if defined(CONFIG_TRACE_IRQFLAGS) && defined(CONFIG_PROVE_LOCKING)
static int
print_irq_inversion_bug(struct task_struct *curr,
struct lock_list *root, struct lock_list *other,
struct held_lock *this, int forwards,
const char *irqclass)
static int
check_usage_forwards(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit bit, const char *irqclass)
static int
check_usage_backwards(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit bit, const char *irqclass)
void print_irqtrace_events(struct task_struct *curr)
static int HARDIRQ_verbose(struct lock_class *class)
static int SOFTIRQ_verbose(struct lock_class *class)
static int RECLAIM_FS_verbose(struct lock_class *class)
#define STRICT_READ_CHECKS	1
static int (*state_verbose_f[])(struct lock_class *class) = ;
static inline int state_verbose(enum lock_usage_bit bit,
struct lock_class *class)
typedef int (*check_usage_f)(struct task_struct *, struct held_lock *,
enum lock_usage_bit bit, const char *name);
static int
mark_lock_irq(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit new_bit)
enum mark_type ;
static int
mark_held_locks(struct task_struct *curr, enum mark_type mark)
void trace_hardirqs_on_caller(unsigned long ip)
EXPORT_SYMBOL(trace_hardirqs_on_caller);
void trace_hardirqs_on(void)
EXPORT_SYMBOL(trace_hardirqs_on);
void trace_hardirqs_off_caller(unsigned long ip)
EXPORT_SYMBOL(trace_hardirqs_off_caller);
void trace_hardirqs_off(void)
EXPORT_SYMBOL(trace_hardirqs_off);
void trace_softirqs_on(unsigned long ip)
void trace_softirqs_off(unsigned long ip)
static void __lockdep_trace_alloc(gfp_t gfp_mask, unsigned long flags)
static void check_flags(unsigned long flags);
void lockdep_trace_alloc(gfp_t gfp_mask)
static int mark_irqflags(struct task_struct *curr, struct held_lock *hlock)
static int separate_irq_context(struct task_struct *curr,
struct held_lock *hlock)
static inline
int mark_lock_irq(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit new_bit)
static inline int mark_irqflags(struct task_struct *curr,
struct held_lock *hlock)
static inline int separate_irq_context(struct task_struct *curr,
struct held_lock *hlock)
void lockdep_trace_alloc(gfp_t gfp_mask)
static int mark_lock(struct task_struct *curr, struct held_lock *this,
enum lock_usage_bit new_bit)
void lockdep_init_map(struct lockdep_map *lock, const char *name,
struct lock_class_key *key, int subclass)
EXPORT_SYMBOL_GPL(lockdep_init_map);
struct lock_class_key __lockdep_no_validate__;
static int __lock_acquire(struct lockdep_map *lock, unsigned int subclass,
int trylock, int read, int check, int hardirqs_off,
struct lockdep_map *nest_lock, unsigned long ip,
int references)
static int
print_unlock_inbalance_bug(struct task_struct *curr, struct lockdep_map *lock,
unsigned long ip)
static int check_unlock(struct task_struct *curr, struct lockdep_map *lock,
unsigned long ip)
static int match_held_lock(struct held_lock *hlock, struct lockdep_map *lock)
static int
__lock_set_class(struct lockdep_map *lock, const char *name,
struct lock_class_key *key, unsigned int subclass,
unsigned long ip)
static int
lock_release_non_nested(struct task_struct *curr,
struct lockdep_map *lock, unsigned long ip)
static int lock_release_nested(struct task_struct *curr,
struct lockdep_map *lock, unsigned long ip)
static void
__lock_release(struct lockdep_map *lock, int nested, unsigned long ip)
static int __lock_is_held(struct lockdep_map *lock)
static void check_flags(unsigned long flags)
void lock_set_class(struct lockdep_map *lock, const char *name,
struct lock_class_key *key, unsigned int subclass,
unsigned long ip)
EXPORT_SYMBOL_GPL(lock_set_class);
void lock_acquire(struct lockdep_map *lock, unsigned int subclass,
int trylock, int read, int check,
struct lockdep_map *nest_lock, unsigned long ip)
EXPORT_SYMBOL_GPL(lock_acquire);
void lock_release(struct lockdep_map *lock, int nested,
unsigned long ip)
EXPORT_SYMBOL_GPL(lock_release);
int lock_is_held(struct lockdep_map *lock)
EXPORT_SYMBOL_GPL(lock_is_held);
void lockdep_set_current_reclaim_state(gfp_t gfp_mask)
void lockdep_clear_current_reclaim_state(void)
static int
print_lock_contention_bug(struct task_struct *curr, struct lockdep_map *lock,
unsigned long ip)
static void
__lock_contended(struct lockdep_map *lock, unsigned long ip)
static void
__lock_acquired(struct lockdep_map *lock, unsigned long ip)
void lock_contended(struct lockdep_map *lock, unsigned long ip)
EXPORT_SYMBOL_GPL(lock_contended);
void lock_acquired(struct lockdep_map *lock, unsigned long ip)
EXPORT_SYMBOL_GPL(lock_acquired);
void lockdep_reset(void)
static void zap_class(struct lock_class *class)
static inline int within(const void *addr, void *start, unsigned long size)
void lockdep_free_key_range(void *start, unsigned long size)
void lockdep_reset_lock(struct lockdep_map *lock)
void lockdep_init(void)
void __init lockdep_info(void)
static void
print_freed_lock_bug(struct task_struct *curr, const void *mem_from,
const void *mem_to, struct held_lock *hlock)
static inline int not_in_range(const void* mem_from, unsigned long mem_len,
const void* lock_from, unsigned long lock_len)
void debug_check_no_locks_freed(const void *mem_from, unsigned long mem_len)
EXPORT_SYMBOL_GPL(debug_check_no_locks_freed);
static void print_held_locks_bug(struct task_struct *curr)
void debug_check_no_locks_held(struct task_struct *task)
void debug_show_all_locks(void)
EXPORT_SYMBOL_GPL(debug_show_all_locks);
void debug_show_held_locks(struct task_struct *task)
EXPORT_SYMBOL_GPL(debug_show_held_locks);
void lockdep_sys_exit(void)
void lockdep_rcu_dereference(const char *file, const int line)
EXPORT_SYMBOL_GPL(lockdep_rcu_dereference);
