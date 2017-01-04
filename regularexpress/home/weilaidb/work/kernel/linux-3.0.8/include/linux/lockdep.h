#define __LINUX_LOCKDEP_H
struct task_struct;
struct lockdep_map;
extern int prove_locking;
extern int lock_stat;
#define XXX_LOCK_USAGE_STATES		(1+3*4)
#define MAX_LOCKDEP_SUBCLASSES		8UL
#define NR_LOCKDEP_CACHING_CLASSES	2
struct lockdep_subclass_key  __attribute__ ((__packed__));
struct lock_class_key ;
extern struct lock_class_key __lockdep_no_validate__;
#define LOCKSTAT_POINTS		4
struct lock_class ;
struct lock_time ;
enum bounce_type ;
struct lock_class_stats ;
struct lock_class_stats lock_stats(struct lock_class *class);
void clear_lock_stats(struct lock_class *class);
struct lockdep_map ;
struct lock_list ;
struct lock_chain ;
#define MAX_LOCKDEP_KEYS_BITS		13
#define MAX_LOCKDEP_KEYS		((1UL << MAX_LOCKDEP_KEYS_BITS) - 1)
struct held_lock ;
extern void lockdep_init(void);
extern void lockdep_info(void);
extern void lockdep_reset(void);
extern void lockdep_reset_lock(struct lockdep_map *lock);
extern void lockdep_free_key_range(void *start, unsigned long size);
extern void lockdep_sys_exit(void);
extern void lockdep_off(void);
extern void lockdep_on(void);
extern void lockdep_init_map(struct lockdep_map *lock, const char *name,
struct lock_class_key *key, int subclass);
#define STATIC_LOCKDEP_MAP_INIT(_name, _key) \
#define lockdep_set_class(lock, key) \
lockdep_init_map(&(lock)->dep_map, #key, key, 0)
#define lockdep_set_class_and_name(lock, key, name) \
lockdep_init_map(&(lock)->dep_map, name, key, 0)
#define lockdep_set_class_and_subclass(lock, key, sub) \
lockdep_init_map(&(lock)->dep_map, #key, key, sub)
#define lockdep_set_subclass(lock, sub)	\
lockdep_init_map(&(lock)->dep_map, #lock, \
(lock)->dep_map.key, sub)
#define lockdep_set_novalidate_class(lock) \
lockdep_set_class(lock, &__lockdep_no_validate__)
#define lockdep_match_class(lock, key) lockdep_match_key(&(lock)->dep_map, key)
static inline int lockdep_match_key(struct lockdep_map *lock,
struct lock_class_key *key)
extern void lock_acquire(struct lockdep_map *lock, unsigned int subclass,
int trylock, int read, int check,
struct lockdep_map *nest_lock, unsigned long ip);
extern void lock_release(struct lockdep_map *lock, int nested,
unsigned long ip);
#define lockdep_is_held(lock)	lock_is_held(&(lock)->dep_map)
extern int lock_is_held(struct lockdep_map *lock);
extern void lock_set_class(struct lockdep_map *lock, const char *name,
struct lock_class_key *key, unsigned int subclass,
unsigned long ip);
static inline void lock_set_subclass(struct lockdep_map *lock,
unsigned int subclass, unsigned long ip)
extern void lockdep_set_current_reclaim_state(gfp_t gfp_mask);
extern void lockdep_clear_current_reclaim_state(void);
extern void lockdep_trace_alloc(gfp_t mask);
# define INIT_LOCKDEP				.lockdep_recursion = 0, .lockdep_reclaim_gfp = 0,
#define lockdep_depth(tsk)	(debug_locks ? (tsk)->lockdep_depth : 0)
#define lockdep_assert_held(l)	WARN_ON(debug_locks && !lockdep_is_held(l))
static inline void lockdep_off(void)
static inline void lockdep_on(void)
# define lock_acquire(l, s, t, r, c, n, i)	do  while (0)
# define lock_release(l, n, i)			do  while (0)
# define lock_set_class(l, n, k, s, i)		do  while (0)
# define lock_set_subclass(l, s, i)		do  while (0)
# define lockdep_set_current_reclaim_state(g)	do  while (0)
# define lockdep_clear_current_reclaim_state()	do  while (0)
# define lockdep_trace_alloc(g)			do  while (0)
# define lockdep_init()				do  while (0)
# define lockdep_info()				do  while (0)
# define lockdep_init_map(lock, name, key, sub) \
do  while (0)
# define lockdep_set_class(lock, key)		do  while (0)
# define lockdep_set_class_and_name(lock, key, name) \
do  while (0)
#define lockdep_set_class_and_subclass(lock, key, sub) \
do  while (0)
#define lockdep_set_subclass(lock, sub)		do  while (0)
#define lockdep_set_novalidate_class(lock) do  while (0)
# define INIT_LOCKDEP
# define lockdep_reset()		do  while (0)
# define lockdep_free_key_range(start, size)	do  while (0)
# define lockdep_sys_exit() 			do  while (0)
struct lock_class_key ;
#define lockdep_depth(tsk)	(0)
#define lockdep_assert_held(l)			do  while (0)
extern void lock_contended(struct lockdep_map *lock, unsigned long ip);
extern void lock_acquired(struct lockdep_map *lock, unsigned long ip);
#define LOCK_CONTENDED(_lock, try, lock)			\
do  while (0)
#define lock_contended(lockdep_map, ip) do  while (0)
#define lock_acquired(lockdep_map, ip) do  while (0)
#define LOCK_CONTENDED(_lock, try, lock) \
lock(_lock)
#define LOCK_CONTENDED_FLAGS(_lock, try, lock, lockfl, flags) \
LOCK_CONTENDED((_lock), (try), (lock))
#define LOCK_CONTENDED_FLAGS(_lock, try, lock, lockfl, flags) \
lockfl((_lock), (flags))
extern void print_irqtrace_events(struct task_struct *curr);
static inline void print_irqtrace_events(struct task_struct *curr)
#define SINGLE_DEPTH_NESTING			1
# ifdef CONFIG_PROVE_LOCKING
#  define spin_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 2, NULL, i)
#  define spin_acquire_nest(l, s, t, n, i)	lock_acquire(l, s, t, 0, 2, n, i)
# else
#  define spin_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 1, NULL, i)
#  define spin_acquire_nest(l, s, t, n, i)	lock_acquire(l, s, t, 0, 1, NULL, i)
# endif
# define spin_release(l, n, i)			lock_release(l, n, i)
# define spin_acquire(l, s, t, i)		do  while (0)
# define spin_release(l, n, i)			do  while (0)
# ifdef CONFIG_PROVE_LOCKING
#  define rwlock_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 2, NULL, i)
#  define rwlock_acquire_read(l, s, t, i)	lock_acquire(l, s, t, 2, 2, NULL, i)
# else
#  define rwlock_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 1, NULL, i)
#  define rwlock_acquire_read(l, s, t, i)	lock_acquire(l, s, t, 2, 1, NULL, i)
# endif
# define rwlock_release(l, n, i)		lock_release(l, n, i)
# define rwlock_acquire(l, s, t, i)		do  while (0)
# define rwlock_acquire_read(l, s, t, i)	do  while (0)
# define rwlock_release(l, n, i)		do  while (0)
# ifdef CONFIG_PROVE_LOCKING
#  define mutex_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 2, NULL, i)
#  define mutex_acquire_nest(l, s, t, n, i)	lock_acquire(l, s, t, 0, 2, n, i)
# else
#  define mutex_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 1, NULL, i)
#  define mutex_acquire_nest(l, s, t, n, i)	lock_acquire(l, s, t, 0, 1, n, i)
# endif
# define mutex_release(l, n, i)			lock_release(l, n, i)
# define mutex_acquire(l, s, t, i)		do  while (0)
# define mutex_acquire_nest(l, s, t, n, i)	do  while (0)
# define mutex_release(l, n, i)			do  while (0)
# ifdef CONFIG_PROVE_LOCKING
#  define rwsem_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 2, NULL, i)
#  define rwsem_acquire_read(l, s, t, i)	lock_acquire(l, s, t, 1, 2, NULL, i)
# else
#  define rwsem_acquire(l, s, t, i)		lock_acquire(l, s, t, 0, 1, NULL, i)
#  define rwsem_acquire_read(l, s, t, i)	lock_acquire(l, s, t, 1, 1, NULL, i)
# endif
# define rwsem_release(l, n, i)			lock_release(l, n, i)
# define rwsem_acquire(l, s, t, i)		do  while (0)
# define rwsem_acquire_read(l, s, t, i)		do  while (0)
# define rwsem_release(l, n, i)			do  while (0)
# ifdef CONFIG_PROVE_LOCKING
#  define lock_map_acquire(l)		lock_acquire(l, 0, 0, 0, 2, NULL, _THIS_IP_)
#  define lock_map_acquire_read(l)	lock_acquire(l, 0, 0, 2, 2, NULL, _THIS_IP_)
# else
#  define lock_map_acquire(l)		lock_acquire(l, 0, 0, 0, 1, NULL, _THIS_IP_)
#  define lock_map_acquire_read(l)	lock_acquire(l, 0, 0, 2, 1, NULL, _THIS_IP_)
# endif
# define lock_map_release(l)			lock_release(l, 1, _THIS_IP_)
# define lock_map_acquire(l)			do  while (0)
# define lock_map_acquire_read(l)		do  while (0)
# define lock_map_release(l)			do  while (0)
# define might_lock(lock) 						\
do  while (0)
# define might_lock_read(lock) 						\
do  while (0)
# define might_lock(lock) do  while (0)
# define might_lock_read(lock) do  while (0)
extern void lockdep_rcu_dereference(const char *file, const int line);
