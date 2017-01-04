#define _ASM_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
static inline
unsigned long atomic_test_and_ANDNOT_mask(unsigned long mask, volatile unsigned long *v)
static inline
unsigned long atomic_test_and_OR_mask(unsigned long mask, volatile unsigned long *v)
static inline
unsigned long atomic_test_and_XOR_mask(unsigned long mask, volatile unsigned long *v)
extern unsigned long atomic_test_and_ANDNOT_mask(unsigned long mask, volatile unsigned long *v);
extern unsigned long atomic_test_and_OR_mask(unsigned long mask, volatile unsigned long *v);
extern unsigned long atomic_test_and_XOR_mask(unsigned long mask, volatile unsigned long *v);
#define atomic_clear_mask(mask, v)	atomic_test_and_ANDNOT_mask((mask), (v))
#define atomic_set_mask(mask, v)	atomic_test_and_OR_mask((mask), (v))
static inline int test_and_clear_bit(unsigned long nr, volatile void *addr)
static inline int test_and_set_bit(unsigned long nr, volatile void *addr)
static inline int test_and_change_bit(unsigned long nr, volatile void *addr)
static inline void clear_bit(unsigned long nr, volatile void *addr)
static inline void set_bit(unsigned long nr, volatile void *addr)
static inline void change_bit(unsigned long nr, volatile void *addr)
static inline void __clear_bit(unsigned long nr, volatile void *addr)
static inline void __set_bit(unsigned long nr, volatile void *addr)
static inline void __change_bit(unsigned long nr, volatile void *addr)
static inline int __test_and_clear_bit(unsigned long nr, volatile void *addr)
static inline int __test_and_set_bit(unsigned long nr, volatile void *addr)
static inline int __test_and_change_bit(unsigned long nr, volatile void *addr)
static inline int
__constant_test_bit(unsigned long nr, const volatile void *addr)
static inline int __test_bit(unsigned long nr, const volatile void *addr)
#define test_bit(nr,addr) \
(__builtin_constant_p(nr) ? \
__constant_test_bit((nr),(addr)) : \
__test_bit((nr),(addr)))
#define fls(x)						\
()
static inline __attribute__((const))
int fls64(u64 n)
static inline __attribute__((const))
int ffs(int x)
static inline __attribute__((const))
int __ffs(unsigned long x)
static inline unsigned long __fls(unsigned long word)
#define ARCH_HAS_ILOG2_U32
static inline __attribute__((const))
int __ilog2_u32(u32 n)
#define ARCH_HAS_ILOG2_U64
static inline __attribute__((const))
int __ilog2_u64(u64 n)
#define ext2_set_bit_atomic(lock,nr,addr)	test_and_set_bit  ((nr) ^ 0x18, (addr))
#define ext2_clear_bit_atomic(lock,nr,addr)	test_and_clear_bit((nr) ^ 0x18, (addr))
