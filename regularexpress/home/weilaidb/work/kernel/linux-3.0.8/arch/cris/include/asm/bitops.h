#define _CRIS_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define set_bit(nr, addr)    (void)test_and_set_bit(nr, addr)
#define clear_bit(nr, addr)  (void)test_and_clear_bit(nr, addr)
#define change_bit(nr, addr) (void)test_and_change_bit(nr, addr)
static inline int test_and_set_bit(int nr, volatile unsigned long *addr)
#define smp_mb__before_clear_bit()      barrier()
#define smp_mb__after_clear_bit()       barrier()
static inline int test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int test_and_change_bit(int nr, volatile unsigned long *addr)
#define ffs kernel_ffs
#define ext2_set_bit_atomic(l,n,a)   test_and_set_bit(n,a)
#define ext2_clear_bit_atomic(l,n,a) test_and_clear_bit(n,a)
