#define _ASM_GENERIC_BITOPS_ATOMIC_H_
#  define ATOMIC_HASH_SIZE 4
#  define ATOMIC_HASH(a) (&(__atomic_hash[ (((unsigned long) a)/L1_CACHE_BYTES) & (ATOMIC_HASH_SIZE-1) ]))
extern arch_spinlock_t __atomic_hash[ATOMIC_HASH_SIZE] __lock_aligned;
#define _atomic_spin_lock_irqsave(l,f) do  while(0)
#define _atomic_spin_unlock_irqrestore(l,f) do  while(0)
#  define _atomic_spin_lock_irqsave(l,f) do  while (0)
#  define _atomic_spin_unlock_irqrestore(l,f) do  while (0)
static inline void set_bit(int nr, volatile unsigned long *addr)
static inline void clear_bit(int nr, volatile unsigned long *addr)
static inline void change_bit(int nr, volatile unsigned long *addr)
static inline int test_and_set_bit(int nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int test_and_change_bit(int nr, volatile unsigned long *addr)
