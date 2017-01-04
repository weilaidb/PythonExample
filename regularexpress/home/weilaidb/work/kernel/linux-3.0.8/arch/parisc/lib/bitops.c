arch_spinlock_t __atomic_hash[ATOMIC_HASH_SIZE] __lock_aligned = ;
unsigned long __xchg64(unsigned long x, unsigned long *ptr)
unsigned long __xchg32(int x, int *ptr)
unsigned long __xchg8(char x, char *ptr)
unsigned long __cmpxchg_u64(volatile unsigned long *ptr, unsigned long old, unsigned long new)
unsigned long __cmpxchg_u32(volatile unsigned int *ptr, unsigned int old, unsigned int new)
