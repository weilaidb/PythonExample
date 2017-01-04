#define __LINUX_RCUPDATE_H
extern int rcutorture_runnable;
#if defined(CONFIG_TREE_RCU) || defined(CONFIG_TREE_PREEMPT_RCU)
extern void rcutorture_record_test_transition(void);
extern void rcutorture_record_progress(unsigned long vernum);
static inline void rcutorture_record_test_transition(void)
static inline void rcutorture_record_progress(unsigned long vernum)
#define UINT_CMP_GE(a, b)	(UINT_MAX / 2 >= (a) - (b))
#define UINT_CMP_LT(a, b)	(UINT_MAX / 2 < (a) - (b))
#define ULONG_CMP_GE(a, b)	(ULONG_MAX / 2 >= (a) - (b))
#define ULONG_CMP_LT(a, b)	(ULONG_MAX / 2 < (a) - (b))
struct rcu_head ;
extern void call_rcu_sched(struct rcu_head *head,
void (*func)(struct rcu_head *rcu));
extern void synchronize_sched(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);
static inline void __rcu_read_lock_bh(void)
static inline void __rcu_read_unlock_bh(void)
extern void __rcu_read_lock(void);
extern void __rcu_read_unlock(void);
void synchronize_rcu(void);
#define rcu_preempt_depth() (current->rcu_read_lock_nesting)
static inline void __rcu_read_lock(void)
static inline void __rcu_read_unlock(void)
static inline void synchronize_rcu(void)
static inline int rcu_preempt_depth(void)
extern void rcu_sched_qs(int cpu);
extern void rcu_bh_qs(int cpu);
extern void rcu_check_callbacks(int cpu, int user);
struct notifier_block;
extern void rcu_enter_nohz(void);
extern void rcu_exit_nohz(void);
static inline void rcu_enter_nohz(void)
static inline void rcu_exit_nohz(void)
#if defined(CONFIG_TREE_RCU) || defined(CONFIG_TREE_PREEMPT_RCU)
#elif defined(CONFIG_TINY_RCU) || defined(CONFIG_TINY_PREEMPT_RCU)
#error "Unknown RCU implementation specified to kernel configuration"
extern void init_rcu_head_on_stack(struct rcu_head *head);
extern void destroy_rcu_head_on_stack(struct rcu_head *head);
static inline void init_rcu_head_on_stack(struct rcu_head *head)
static inline void destroy_rcu_head_on_stack(struct rcu_head *head)
extern struct lockdep_map rcu_lock_map;
# define rcu_read_acquire() \
lock_acquire(&rcu_lock_map, 0, 0, 2, 1, NULL, _THIS_IP_)
# define rcu_read_release()	lock_release(&rcu_lock_map, 1, _THIS_IP_)
extern struct lockdep_map rcu_bh_lock_map;
# define rcu_read_acquire_bh() \
lock_acquire(&rcu_bh_lock_map, 0, 0, 2, 1, NULL, _THIS_IP_)
# define rcu_read_release_bh()	lock_release(&rcu_bh_lock_map, 1, _THIS_IP_)
extern struct lockdep_map rcu_sched_lock_map;
# define rcu_read_acquire_sched() \
lock_acquire(&rcu_sched_lock_map, 0, 0, 2, 1, NULL, _THIS_IP_)
# define rcu_read_release_sched() \
lock_release(&rcu_sched_lock_map, 1, _THIS_IP_)
extern int debug_lockdep_rcu_enabled(void);
static inline int rcu_read_lock_held(void)
extern int rcu_read_lock_bh_held(void);
static inline int rcu_read_lock_sched_held(void)
static inline int rcu_read_lock_sched_held(void)
# define rcu_read_acquire()		do  while (0)
# define rcu_read_release()		do  while (0)
# define rcu_read_acquire_bh()		do  while (0)
# define rcu_read_release_bh()		do  while (0)
# define rcu_read_acquire_sched()	do  while (0)
# define rcu_read_release_sched()	do  while (0)
static inline int rcu_read_lock_held(void)
static inline int rcu_read_lock_bh_held(void)
static inline int rcu_read_lock_sched_held(void)
static inline int rcu_read_lock_sched_held(void)
extern int rcu_my_thread_group_empty(void);
#define rcu_lockdep_assert(c)						\
do  while (0)
#define rcu_lockdep_assert(c) do  while (0)
#define rcu_dereference_sparse(p, space) \
((void)(((typeof(*p) space *)p) == p))
#define rcu_dereference_sparse(p, space)
#define __rcu_access_pointer(p, space) \
()
#define __rcu_dereference_check(p, c, space) \
()
#define __rcu_dereference_protected(p, c, space) \
()
#define __rcu_access_index(p, space) \
()
#define __rcu_dereference_index_check(p, c) \
()
#define __rcu_assign_pointer(p, v, space) \
()
#define rcu_access_pointer(p) __rcu_access_pointer((p), __rcu)
#define rcu_dereference_check(p, c) \
__rcu_dereference_check((p), rcu_read_lock_held() || (c), __rcu)
#define rcu_dereference_bh_check(p, c) \
__rcu_dereference_check((p), rcu_read_lock_bh_held() || (c), __rcu)
#define rcu_dereference_sched_check(p, c) \
__rcu_dereference_check((p), rcu_read_lock_sched_held() || (c), \
__rcu)
#define rcu_dereference_raw(p) rcu_dereference_check(p, 1)
#define rcu_access_index(p) __rcu_access_index((p), __rcu)
#define rcu_dereference_index_check(p, c) \
__rcu_dereference_index_check((p), (c))
#define rcu_dereference_protected(p, c) \
__rcu_dereference_protected((p), (c), __rcu)
#define rcu_dereference_bh_protected(p, c) \
__rcu_dereference_protected((p), (c), __rcu)
#define rcu_dereference_sched_protected(p, c) \
__rcu_dereference_protected((p), (c), __rcu)
#define rcu_dereference(p) rcu_dereference_check(p, 0)
#define rcu_dereference_bh(p) rcu_dereference_bh_check(p, 0)
#define rcu_dereference_sched(p) rcu_dereference_sched_check(p, 0)
static inline void rcu_read_lock(void)
static inline void rcu_read_unlock(void)
static inline void rcu_read_lock_bh(void)
static inline void rcu_read_unlock_bh(void)
static inline void rcu_read_lock_sched(void)
static inline notrace void rcu_read_lock_sched_notrace(void)
static inline void rcu_read_unlock_sched(void)
static inline notrace void rcu_read_unlock_sched_notrace(void)
#define rcu_assign_pointer(p, v) \
__rcu_assign_pointer((p), (v), __rcu)
#define RCU_INIT_POINTER(p, v) \
p = (typeof(*v) __force __rcu *)(v)
struct rcu_synchronize ;
extern void wakeme_after_rcu(struct rcu_head  *head);
extern void call_rcu(struct rcu_head *head,
void (*func)(struct rcu_head *head));
#define	call_rcu	call_rcu_sched
extern void call_rcu_bh(struct rcu_head *head,
void (*func)(struct rcu_head *head));
# define STATE_RCU_HEAD_READY	0
# define STATE_RCU_HEAD_QUEUED	1
extern struct debug_obj_descr rcuhead_debug_descr;
static inline void debug_rcu_head_queue(struct rcu_head *head)
static inline void debug_rcu_head_unqueue(struct rcu_head *head)
static inline void debug_rcu_head_queue(struct rcu_head *head)
static inline void debug_rcu_head_unqueue(struct rcu_head *head)
static __always_inline bool __is_kfree_rcu_offset(unsigned long offset)
static __always_inline
void __kfree_rcu(struct rcu_head *head, unsigned long offset)
extern void kfree(const void *);
static inline void __rcu_reclaim(struct rcu_head *head)
#define kfree_rcu(ptr, rcu_head)					\
__kfree_rcu(&((ptr)->rcu_head), offsetof(typeof(*(ptr)), rcu_head))
