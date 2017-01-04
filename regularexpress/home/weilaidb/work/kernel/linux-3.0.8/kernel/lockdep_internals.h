enum lock_usage_bit ;
#define __LOCKF(__STATE)	LOCKF_##__STATE = (1 << LOCK_##__STATE),
enum ;
#define LOCKF_ENABLED_IRQ (LOCKF_ENABLED_HARDIRQ | LOCKF_ENABLED_SOFTIRQ)
#define LOCKF_USED_IN_IRQ (LOCKF_USED_IN_HARDIRQ | LOCKF_USED_IN_SOFTIRQ)
#define LOCKF_ENABLED_IRQ_READ \
(LOCKF_ENABLED_HARDIRQ_READ | LOCKF_ENABLED_SOFTIRQ_READ)
#define LOCKF_USED_IN_IRQ_READ \
(LOCKF_USED_IN_HARDIRQ_READ | LOCKF_USED_IN_SOFTIRQ_READ)
#define MAX_LOCKDEP_ENTRIES	16384UL
#define MAX_LOCKDEP_CHAINS_BITS	15
#define MAX_LOCKDEP_CHAINS	(1UL << MAX_LOCKDEP_CHAINS_BITS)
#define MAX_LOCKDEP_CHAIN_HLOCKS (MAX_LOCKDEP_CHAINS*5)
#define MAX_STACK_TRACE_ENTRIES	262144UL
extern struct list_head all_lock_classes;
extern struct lock_chain lock_chains[];
#define LOCK_USAGE_CHARS (1+LOCK_USAGE_STATES/2)
extern void get_usage_chars(struct lock_class *class,
char usage[LOCK_USAGE_CHARS]);
extern const char * __get_key_name(struct lockdep_subclass_key *key, char *str);
struct lock_class *lock_chain_get_class(struct lock_chain *chain, int i);
extern unsigned long nr_lock_classes;
extern unsigned long nr_list_entries;
extern unsigned long nr_lock_chains;
extern int nr_chain_hlocks;
extern unsigned long nr_stack_trace_entries;
extern unsigned int nr_hardirq_chains;
extern unsigned int nr_softirq_chains;
extern unsigned int nr_process_chains;
extern unsigned int max_lockdep_depth;
extern unsigned int max_recursion_depth;
extern unsigned int max_bfs_queue_depth;
extern unsigned long lockdep_count_forward_deps(struct lock_class *);
extern unsigned long lockdep_count_backward_deps(struct lock_class *);
static inline unsigned long
lockdep_count_forward_deps(struct lock_class *class)
static inline unsigned long
lockdep_count_backward_deps(struct lock_class *class)
struct lockdep_stats ;
DECLARE_PER_CPU(struct lockdep_stats, lockdep_stats);
#define __debug_atomic_inc(ptr)					\
this_cpu_inc(lockdep_stats.ptr);
#define debug_atomic_inc(ptr)
#define debug_atomic_dec(ptr)
#define debug_atomic_read(ptr)		()
# define __debug_atomic_inc(ptr)	do  while (0)
# define debug_atomic_inc(ptr)		do  while (0)
# define debug_atomic_dec(ptr)		do  while (0)
# define debug_atomic_read(ptr)		0
