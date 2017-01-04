#define __LINUX_HWSPINLOCK_H
#define HWLOCK_IRQSTATE	0x01
#define HWLOCK_IRQ	0x02
struct hwspinlock;
#if defined(CONFIG_HWSPINLOCK) || defined(CONFIG_HWSPINLOCK_MODULE)
int hwspin_lock_register(struct hwspinlock *lock);
struct hwspinlock *hwspin_lock_unregister(unsigned int id);
struct hwspinlock *hwspin_lock_request(void);
struct hwspinlock *hwspin_lock_request_specific(unsigned int id);
int hwspin_lock_free(struct hwspinlock *hwlock);
int hwspin_lock_get_id(struct hwspinlock *hwlock);
int __hwspin_lock_timeout(struct hwspinlock *, unsigned int, int,
unsigned long *);
int __hwspin_trylock(struct hwspinlock *, int, unsigned long *);
void __hwspin_unlock(struct hwspinlock *, int, unsigned long *);
static inline struct hwspinlock *hwspin_lock_request(void)
static inline struct hwspinlock *hwspin_lock_request_specific(unsigned int id)
static inline int hwspin_lock_free(struct hwspinlock *hwlock)
static inline
int __hwspin_lock_timeout(struct hwspinlock *hwlock, unsigned int to,
int mode, unsigned long *flags)
static inline
int __hwspin_trylock(struct hwspinlock *hwlock, int mode, unsigned long *flags)
static inline
void __hwspin_unlock(struct hwspinlock *hwlock, int mode, unsigned long *flags)
static inline int hwspin_lock_get_id(struct hwspinlock *hwlock)
static inline int hwspin_lock_register(struct hwspinlock *hwlock)
static inline struct hwspinlock *hwspin_lock_unregister(unsigned int id)
static inline
int hwspin_trylock_irqsave(struct hwspinlock *hwlock, unsigned long *flags)
static inline int hwspin_trylock_irq(struct hwspinlock *hwlock)
static inline int hwspin_trylock(struct hwspinlock *hwlock)
static inline int hwspin_lock_timeout_irqsave(struct hwspinlock *hwlock,
unsigned int to, unsigned long *flags)
static inline
int hwspin_lock_timeout_irq(struct hwspinlock *hwlock, unsigned int to)
static inline
int hwspin_lock_timeout(struct hwspinlock *hwlock, unsigned int to)
static inline void hwspin_unlock_irqrestore(struct hwspinlock *hwlock,
unsigned long *flags)
static inline void hwspin_unlock_irq(struct hwspinlock *hwlock)
static inline void hwspin_unlock(struct hwspinlock *hwlock)
