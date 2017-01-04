#define _ASM_TILE_BITOPS_32_H
unsigned long _atomic_or(volatile unsigned long *p, unsigned long mask);
unsigned long _atomic_andn(volatile unsigned long *p, unsigned long mask);
unsigned long _atomic_xor(volatile unsigned long *p, unsigned long mask);
static inline void set_bit(unsigned nr, volatile unsigned long *addr)
static inline void clear_bit(unsigned nr, volatile unsigned long *addr)
static inline void change_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_set_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_change_bit(unsigned nr,
volatile unsigned long *addr)
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	do  while (0)
