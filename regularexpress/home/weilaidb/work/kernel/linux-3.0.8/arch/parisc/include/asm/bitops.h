#define _PARISC_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define CHOP_SHIFTCOUNT(x) (((unsigned long) (x)) & (BITS_PER_LONG - 1))
#define smp_mb__before_clear_bit()      smp_mb()
#define smp_mb__after_clear_bit()       smp_mb()
static __inline__ void set_bit(int nr, volatile unsigned long * addr)
static __inline__ void clear_bit(int nr, volatile unsigned long * addr)
static __inline__ void change_bit(int nr, volatile unsigned long * addr)
static __inline__ int test_and_set_bit(int nr, volatile unsigned long * addr)
static __inline__ int test_and_clear_bit(int nr, volatile unsigned long * addr)
static __inline__ int test_and_change_bit(int nr, volatile unsigned long * addr)
static __inline__ unsigned long __ffs(unsigned long x)
static __inline__ int ffs(int x)
static __inline__ int fls(int x)
#define LE_BYTE_ADDR ((sizeof(unsigned long) - 1) << 3)
#define ext2_set_bit_atomic(l,nr,addr) \
test_and_set_bit((nr)   ^ LE_BYTE_ADDR, (unsigned long *)addr)
#define ext2_clear_bit_atomic(l,nr,addr) \
test_and_clear_bit( (nr) ^ LE_BYTE_ADDR, (unsigned long *)addr)
