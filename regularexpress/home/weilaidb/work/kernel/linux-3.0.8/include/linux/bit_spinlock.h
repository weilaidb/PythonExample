#define __LINUX_BIT_SPINLOCK_H
static inline void bit_spin_lock(int bitnum, unsigned long *addr)
static inline int bit_spin_trylock(int bitnum, unsigned long *addr)
static inline void bit_spin_unlock(int bitnum, unsigned long *addr)
static inline void __bit_spin_unlock(int bitnum, unsigned long *addr)
static inline int bit_spin_is_locked(int bitnum, unsigned long *addr)
