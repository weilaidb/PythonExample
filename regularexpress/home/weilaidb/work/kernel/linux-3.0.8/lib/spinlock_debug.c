void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(__raw_spin_lock_init);
void __rwlock_init(rwlock_t *lock, const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(__rwlock_init);
static void spin_bug(raw_spinlock_t *lock, const char *msg)
#define SPIN_BUG_ON(cond, lock, msg) if (unlikely(cond)) spin_bug(lock, msg)
static inline void
debug_spin_lock_before(raw_spinlock_t *lock)
static inline void debug_spin_lock_after(raw_spinlock_t *lock)
static inline void debug_spin_unlock(raw_spinlock_t *lock)
static void __spin_lock_debug(raw_spinlock_t *lock)
void do_raw_spin_lock(raw_spinlock_t *lock)
int do_raw_spin_trylock(raw_spinlock_t *lock)
void do_raw_spin_unlock(raw_spinlock_t *lock)
static void rwlock_bug(rwlock_t *lock, const char *msg)
#define RWLOCK_BUG_ON(cond, lock, msg) if (unlikely(cond)) rwlock_bug(lock, msg)
void do_raw_read_lock(rwlock_t *lock)
int do_raw_read_trylock(rwlock_t *lock)
void do_raw_read_unlock(rwlock_t *lock)
static inline void debug_write_lock_before(rwlock_t *lock)
static inline void debug_write_lock_after(rwlock_t *lock)
static inline void debug_write_unlock(rwlock_t *lock)
void do_raw_write_lock(rwlock_t *lock)
int do_raw_write_trylock(rwlock_t *lock)
void do_raw_write_unlock(rwlock_t *lock)
