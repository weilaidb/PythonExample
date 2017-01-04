#define __ASM_CRIS_ARCH_ATOMIC__
extern void cris_spin_unlock(void *l, int val);
extern void cris_spin_lock(void *l);
extern int cris_spin_trylock(void* l);
#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);
extern spinlock_t cris_atomic_locks[];
#define LOCK_COUNT 128
#define HASH_ADDR(a) (((int)a) & 127)
#define cris_atomic_save(addr, flags) \
local_irq_save(flags); \
cris_spin_lock((void *)&cris_atomic_locks[HASH_ADDR(addr)].raw_lock.slock);
#define cris_atomic_restore(addr, flags) \
