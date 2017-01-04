#define _LINUX_SRCU_H
struct srcu_struct_array ;
struct srcu_struct ;
#define srcu_barrier() barrier()
#define srcu_barrier()
int __init_srcu_struct(struct srcu_struct *sp, const char *name,
struct lock_class_key *key);
#define init_srcu_struct(sp) \
()
# define srcu_read_acquire(sp) \
lock_acquire(&(sp)->dep_map, 0, 0, 2, 1, NULL, _THIS_IP_)
# define srcu_read_release(sp) \
lock_release(&(sp)->dep_map, 1, _THIS_IP_)
int init_srcu_struct(struct srcu_struct *sp);
# define srcu_read_acquire(sp)  do  while (0)
# define srcu_read_release(sp)  do  while (0)
void cleanup_srcu_struct(struct srcu_struct *sp);
int __srcu_read_lock(struct srcu_struct *sp) __acquires(sp);
void __srcu_read_unlock(struct srcu_struct *sp, int idx) __releases(sp);
void synchronize_srcu(struct srcu_struct *sp);
void synchronize_srcu_expedited(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
static inline int srcu_read_lock_held(struct srcu_struct *sp)
static inline int srcu_read_lock_held(struct srcu_struct *sp)
#define srcu_dereference_check(p, sp, c) \
__rcu_dereference_check((p), srcu_read_lock_held(sp) || (c), __rcu)
#define srcu_dereference(p, sp) srcu_dereference_check((p), (sp), 0)
static inline int srcu_read_lock(struct srcu_struct *sp) __acquires(sp)
static inline void srcu_read_unlock(struct srcu_struct *sp, int idx)
__releases(sp)
