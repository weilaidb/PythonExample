#define __ASM_BITOPS_H
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
#define __set_bit(nr, addr)					\
()
#define set_bit(nr, addr) __set_bit((nr), (addr))
#define ___clear_bit(nr, addr)					\
()
#define clear_bit(nr, addr) ___clear_bit((nr), (addr))
static inline void __clear_bit(unsigned long nr, volatile void *addr)
static inline int test_bit(unsigned long nr, const volatile void *addr)
static inline void __change_bit(unsigned long nr, volatile void *addr)
extern void change_bit(unsigned long nr, volatile void *addr);
#define __test_and_set_bit(nr,addr)				\
()
#define test_and_set_bit(nr, addr) __test_and_set_bit((nr), (addr))
#define __test_and_clear_bit(nr, addr)				\
()
#define test_and_clear_bit(nr, addr) __test_and_clear_bit((nr), (addr))
static inline int __test_and_change_bit(unsigned long nr, volatile void *addr)
extern int test_and_change_bit(unsigned long nr, volatile void *addr);
static inline __attribute__((const))
unsigned long __ffs(unsigned long x)
static inline __attribute__((const))
int __ilog2_u32(u32 n)
static inline __attribute__((const))
int fls(int x)
static inline unsigned long __fls(unsigned long word)
static inline __attribute__((const))
int ffs(int x)
#define ext2_set_bit_atomic(lock, nr, addr) \
test_and_set_bit((nr), (addr))
#define ext2_clear_bit_atomic(lock, nr, addr) \
test_and_clear_bit((nr), (addr))
