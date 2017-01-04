#define _ASM_TILE_BITOPS_64_H
static inline void set_bit(unsigned nr, volatile unsigned long *addr)
static inline void clear_bit(unsigned nr, volatile unsigned long *addr)
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
static inline void change_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_set_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(unsigned nr, volatile unsigned long *addr)
static inline int test_and_change_bit(unsigned nr,
volatile unsigned long *addr)
#define ext2_set_bit_atomic(lock, nr, addr)			\
test_and_set_bit((nr), (unsigned long *)(addr))
#define ext2_clear_bit_atomic(lock, nr, addr)			\
test_and_clear_bit((nr), (unsigned long *)(addr))
