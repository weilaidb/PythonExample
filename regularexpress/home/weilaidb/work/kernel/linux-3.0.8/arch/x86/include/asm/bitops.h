#define _ASM_X86_BITOPS_H
#error only <linux/bitops.h> can be included directly
#if __GNUC__ < 4 || (__GNUC__ == 4 && __GNUC_MINOR__ < 1)
#define BITOP_ADDR(x) "=m" (*(volatile long *) (x))
#define BITOP_ADDR(x) "+m" (*(volatile long *) (x))
#define ADDR				BITOP_ADDR(addr)
#define IS_IMMEDIATE(nr)		(__builtin_constant_p(nr))
#define CONST_MASK_ADDR(nr, addr)	BITOP_ADDR((void *)(addr) + ((nr)>>3))
#define CONST_MASK(nr)			(1 << ((nr) & 7))
static __always_inline void
set_bit(unsigned int nr, volatile unsigned long *addr)
static inline void __set_bit(int nr, volatile unsigned long *addr)
static __always_inline void
clear_bit(int nr, volatile unsigned long *addr)
static inline void clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
static inline void __clear_bit(int nr, volatile unsigned long *addr)
static inline void __clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
static inline void __change_bit(int nr, volatile unsigned long *addr)
static inline void change_bit(int nr, volatile unsigned long *addr)
static inline int test_and_set_bit(int nr, volatile unsigned long *addr)
static __always_inline int
test_and_set_bit_lock(int nr, volatile unsigned long *addr)
static inline int __test_and_set_bit(int nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int __test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int __test_and_change_bit(int nr, volatile unsigned long *addr)
static inline int test_and_change_bit(int nr, volatile unsigned long *addr)
static __always_inline int constant_test_bit(unsigned int nr, const volatile unsigned long *addr)
static inline int variable_test_bit(int nr, volatile const unsigned long *addr)
#define test_bit(nr, addr)			\
(__builtin_constant_p((nr))		\
? constant_test_bit((nr), (addr))	\
: variable_test_bit((nr), (addr)))
static inline unsigned long __ffs(unsigned long word)
static inline unsigned long ffz(unsigned long word)
static inline unsigned long __fls(unsigned long word)
static inline int ffs(int x)
static inline int fls(int x)
#undef ADDR
#define ARCH_HAS_FAST_MULTIPLIER 1
#define ext2_set_bit_atomic(lock, nr, addr)			\
test_and_set_bit((nr), (unsigned long *)(addr))
#define ext2_clear_bit_atomic(lock, nr, addr)			\
test_and_clear_bit((nr), (unsigned long *)(addr))
