int __read_mostly futex_cmpxchg_enabled;
#define FUTEX_HASHBITS (CONFIG_BASE_SMALL ? 4 : 8)
#define FLAGS_SHARED		0x01
#define FLAGS_CLOCKRT		0x02
#define FLAGS_HAS_TIMEOUT	0x04
struct futex_pi_state ;
struct futex_q ;
static const struct futex_q futex_q_init = ;
struct futex_hash_bucket ;
static struct futex_hash_bucket futex_queues[1<<FUTEX_HASHBITS];
static struct futex_hash_bucket *hash_futex(union futex_key *key)
static inline int match_futex(union futex_key *key1, union futex_key *key2)
static void get_futex_key_refs(union futex_key *key)
static void drop_futex_key_refs(union futex_key *key)
static int
get_futex_key(u32 __user *uaddr, int fshared, union futex_key *key, int rw)
static inline void put_futex_key(union futex_key *key)
static int fault_in_user_writeable(u32 __user *uaddr)
static struct futex_q *futex_top_waiter(struct futex_hash_bucket *hb,
union futex_key *key)
static int cmpxchg_futex_value_locked(u32 *curval, u32 __user *uaddr,
u32 uval, u32 newval)
static int get_futex_value_locked(u32 *dest, u32 __user *from)
static int refill_pi_state_cache(void)
static struct futex_pi_state * alloc_pi_state(void)
static void free_pi_state(struct futex_pi_state *pi_state)
static struct task_struct * futex_find_get_task(pid_t pid)
void exit_pi_state_list(struct task_struct *curr)
static int
lookup_pi_state(u32 uval, struct futex_hash_bucket *hb,
union futex_key *key, struct futex_pi_state **ps)
static int futex_lock_pi_atomic(u32 __user *uaddr, struct futex_hash_bucket *hb,
union futex_key *key,
struct futex_pi_state **ps,
struct task_struct *task, int set_waiters)
static void __unqueue_futex(struct futex_q *q)
static void wake_futex(struct futex_q *q)
static int wake_futex_pi(u32 __user *uaddr, u32 uval, struct futex_q *this)
static int unlock_futex_pi(u32 __user *uaddr, u32 uval)
static inline void
double_lock_hb(struct futex_hash_bucket *hb1, struct futex_hash_bucket *hb2)
static inline void
double_unlock_hb(struct futex_hash_bucket *hb1, struct futex_hash_bucket *hb2)
static int
futex_wake(u32 __user *uaddr, unsigned int flags, int nr_wake, u32 bitset)
static int
futex_wake_op(u32 __user *uaddr1, unsigned int flags, u32 __user *uaddr2,
int nr_wake, int nr_wake2, int op)
static inline
void requeue_futex(struct futex_q *q, struct futex_hash_bucket *hb1,
struct futex_hash_bucket *hb2, union futex_key *key2)
static inline
void requeue_pi_wake_futex(struct futex_q *q, union futex_key *key,
struct futex_hash_bucket *hb)
static int futex_proxy_trylock_atomic(u32 __user *pifutex,
struct futex_hash_bucket *hb1,
struct futex_hash_bucket *hb2,
union futex_key *key1, union futex_key *key2,
struct futex_pi_state **ps, int set_waiters)
static int futex_requeue(u32 __user *uaddr1, unsigned int flags,
u32 __user *uaddr2, int nr_wake, int nr_requeue,
u32 *cmpval, int requeue_pi)
static inline struct futex_hash_bucket *queue_lock(struct futex_q *q)
__acquires(&hb->lock)
static inline void
queue_unlock(struct futex_q *q, struct futex_hash_bucket *hb)
__releases(&hb->lock)
static inline void queue_me(struct futex_q *q, struct futex_hash_bucket *hb)
__releases(&hb->lock)
static int unqueue_me(struct futex_q *q)
static void unqueue_me_pi(struct futex_q *q)
__releases(q->lock_ptr)
static int fixup_pi_state_owner(u32 __user *uaddr, struct futex_q *q,
struct task_struct *newowner)
static long futex_wait_restart(struct restart_block *restart);
static int fixup_owner(u32 __user *uaddr, struct futex_q *q, int locked)
static void futex_wait_queue_me(struct futex_hash_bucket *hb, struct futex_q *q,
struct hrtimer_sleeper *timeout)
static int futex_wait_setup(u32 __user *uaddr, u32 val, unsigned int flags,
struct futex_q *q, struct futex_hash_bucket **hb)
static int futex_wait(u32 __user *uaddr, unsigned int flags, u32 val,
ktime_t *abs_time, u32 bitset)
static long futex_wait_restart(struct restart_block *restart)
static int futex_lock_pi(u32 __user *uaddr, unsigned int flags, int detect,
ktime_t *time, int trylock)
static int futex_unlock_pi(u32 __user *uaddr, unsigned int flags)
static inline
int handle_early_requeue_pi_wakeup(struct futex_hash_bucket *hb,
struct futex_q *q, union futex_key *key2,
struct hrtimer_sleeper *timeout)
static int futex_wait_requeue_pi(u32 __user *uaddr, unsigned int flags,
u32 val, ktime_t *abs_time, u32 bitset,
u32 __user *uaddr2)
SYSCALL_DEFINE2(set_robust_list, struct robust_list_head __user *, head,
size_t, len)
SYSCALL_DEFINE3(get_robust_list, int, pid,
struct robust_list_head __user * __user *, head_ptr,
size_t __user *, len_ptr)
int handle_futex_death(u32 __user *uaddr, struct task_struct *curr, int pi)
static inline int fetch_robust_entry(struct robust_list __user **entry,
struct robust_list __user * __user *head,
unsigned int *pi)
void exit_robust_list(struct task_struct *curr)
long do_futex(u32 __user *uaddr, int op, u32 val, ktime_t *timeout,
u32 __user *uaddr2, u32 val2, u32 val3)
SYSCALL_DEFINE6(futex, u32 __user *, uaddr, int, op, u32, val,
struct timespec __user *, utime, u32 __user *, uaddr2,
u32, val3)
static int __init futex_init(void)
__initcall(futex_init);
