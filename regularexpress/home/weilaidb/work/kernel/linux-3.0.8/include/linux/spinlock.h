#define __LINUX_SPINLOCK_H
#define LOCK_SECTION_NAME ".text..lock."KBUILD_BASENAME
#define LOCK_SECTION_START(extra)               \
".subsection 1\n\t"                     \
extra                                   \
".ifndef " LOCK_SECTION_NAME "\n\t"     \
LOCK_SECTION_NAME ":\n\t"               \
".endif\n"
#define LOCK_SECTION_END                        \
".previous\n\t"
#define __lockfunc __attribute__((section(".spinlock.text")))
# include <asm/spinlock.h>
# include <linux/spinlock_up.h>
extern void __raw_spin_lock_init(raw_spinlock_t *lock, const char *name,
struct lock_class_key *key);
# define raw_spin_lock_init(lock)				\
do  while (0)
# define raw_spin_lock_init(lock)				\
do  while (0)
#define raw_spin_is_locked(lock)	arch_spin_is_locked(&(lock)->raw_lock)
#define raw_spin_is_contended(lock) ((lock)->break_lock)
#define raw_spin_is_contended(lock)	arch_spin_is_contended(&(lock)->raw_lock)
#define raw_spin_is_contended(lock)	(((void)(lock), 0))
static inline void smp_mb__after_lock(void)
#define raw_spin_unlock_wait(lock)	arch_spin_unlock_wait(&(lock)->raw_lock)
extern void do_raw_spin_lock(raw_spinlock_t *lock) __acquires(lock);
#define do_raw_spin_lock_flags(lock, flags) do_raw_spin_lock(lock)
extern int do_raw_spin_trylock(raw_spinlock_t *lock);
extern void do_raw_spin_unlock(raw_spinlock_t *lock) __releases(lock);
static inline void do_raw_spin_lock(raw_spinlock_t *lock) __acquires(lock)
static inline void
do_raw_spin_lock_flags(raw_spinlock_t *lock, unsigned long *flags) __acquires(lock)
static inline int do_raw_spin_trylock(raw_spinlock_t *lock)
static inline void do_raw_spin_unlock(raw_spinlock_t *lock) __releases(lock)
#define raw_spin_trylock(lock)	__cond_lock(lock, _raw_spin_trylock(lock))
#define raw_spin_lock(lock)	_raw_spin_lock(lock)
# define raw_spin_lock_nested(lock, subclass) \
_raw_spin_lock_nested(lock, subclass)
# define raw_spin_lock_nest_lock(lock, nest_lock)			\
do  while (0)
# define raw_spin_lock_nested(lock, subclass)		_raw_spin_lock(lock)
# define raw_spin_lock_nest_lock(lock, nest_lock)	_raw_spin_lock(lock)
#if defined(CONFIG_SMP) || defined(CONFIG_DEBUG_SPINLOCK)
#define raw_spin_lock_irqsave(lock, flags)			\
do  while (0)
#define raw_spin_lock_irqsave_nested(lock, flags, subclass)		\
do  while (0)
#define raw_spin_lock_irqsave_nested(lock, flags, subclass)		\
do  while (0)
#define raw_spin_lock_irqsave(lock, flags)		\
do  while (0)
#define raw_spin_lock_irqsave_nested(lock, flags, subclass)	\
raw_spin_lock_irqsave(lock, flags)
#define raw_spin_lock_irq(lock)		_raw_spin_lock_irq(lock)
#define raw_spin_lock_bh(lock)		_raw_spin_lock_bh(lock)
#define raw_spin_unlock(lock)		_raw_spin_unlock(lock)
#define raw_spin_unlock_irq(lock)	_raw_spin_unlock_irq(lock)
#define raw_spin_unlock_irqrestore(lock, flags)		\
do  while (0)
#define raw_spin_unlock_bh(lock)	_raw_spin_unlock_bh(lock)
#define raw_spin_trylock_bh(lock) \
__cond_lock(lock, _raw_spin_trylock_bh(lock))
#define raw_spin_trylock_irq(lock) \
()
#define raw_spin_trylock_irqsave(lock, flags) \
()
#define raw_spin_can_lock(lock)	(!raw_spin_is_locked(lock))
#if defined(CONFIG_SMP) || defined(CONFIG_DEBUG_SPINLOCK)
# include <linux/spinlock_api_smp.h>
# include <linux/spinlock_api_up.h>
static inline raw_spinlock_t *spinlock_check(spinlock_t *lock)
#define spin_lock_init(_lock)				\
do  while (0)
static inline void spin_lock(spinlock_t *lock)
static inline void spin_lock_bh(spinlock_t *lock)
static inline int spin_trylock(spinlock_t *lock)
#define spin_lock_nested(lock, subclass)			\
do  while (0)
#define spin_lock_nest_lock(lock, nest_lock)				\
do  while (0)
static inline void spin_lock_irq(spinlock_t *lock)
#define spin_lock_irqsave(lock, flags)				\
do  while (0)
#define spin_lock_irqsave_nested(lock, flags, subclass)			\
do  while (0)
static inline void spin_unlock(spinlock_t *lock)
static inline void spin_unlock_bh(spinlock_t *lock)
static inline void spin_unlock_irq(spinlock_t *lock)
static inline void spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
static inline int spin_trylock_bh(spinlock_t *lock)
static inline int spin_trylock_irq(spinlock_t *lock)
#define spin_trylock_irqsave(lock, flags)			\
()
static inline void spin_unlock_wait(spinlock_t *lock)
static inline int spin_is_locked(spinlock_t *lock)
static inline int spin_is_contended(spinlock_t *lock)
static inline int spin_can_lock(spinlock_t *lock)
static inline void assert_spin_locked(spinlock_t *lock)
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
#define atomic_dec_and_lock(atomic, lock) \
__cond_lock(lock, _atomic_dec_and_lock(atomic, lock))
