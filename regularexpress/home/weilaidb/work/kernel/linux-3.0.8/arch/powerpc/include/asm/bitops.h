#define _ASM_POWERPC_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
#define BITOP_MASK(nr)		(1UL << ((nr) % BITS_PER_LONG))
#define BITOP_WORD(nr)		((nr) / BITS_PER_LONG)
#define BITOP_LE_SWIZZLE	((BITS_PER_LONG-1) & ~0x7)
#define DEFINE_BITOP(fn, op, prefix, postfix)	\
static __inline__ void fn(unsigned long mask,	\
volatile unsigned long *_p)	\
DEFINE_BITOP(set_bits, or, "", "")
DEFINE_BITOP(clear_bits, andc, "", "")
DEFINE_BITOP(clear_bits_unlock, andc, PPC_RELEASE_BARRIER, "")
DEFINE_BITOP(change_bits, xor, "", "")
static __inline__ void set_bit(int nr, volatile unsigned long *addr)
static __inline__ void clear_bit(int nr, volatile unsigned long *addr)
static __inline__ void clear_bit_unlock(int nr, volatile unsigned long *addr)
static __inline__ void change_bit(int nr, volatile unsigned long *addr)
#define DEFINE_TESTOP(fn, op, prefix, postfix, eh)	\
static __inline__ unsigned long fn(			\
unsigned long mask,			\
volatile unsigned long *_p)		\
DEFINE_TESTOP(test_and_set_bits, or, PPC_RELEASE_BARRIER,
PPC_ACQUIRE_BARRIER, 0)
DEFINE_TESTOP(test_and_set_bits_lock, or, "",
PPC_ACQUIRE_BARRIER, 1)
DEFINE_TESTOP(test_and_clear_bits, andc, PPC_RELEASE_BARRIER,
PPC_ACQUIRE_BARRIER, 0)
DEFINE_TESTOP(test_and_change_bits, xor, PPC_RELEASE_BARRIER,
PPC_ACQUIRE_BARRIER, 0)
static __inline__ int test_and_set_bit(unsigned long nr,
volatile unsigned long *addr)
static __inline__ int test_and_set_bit_lock(unsigned long nr,
volatile unsigned long *addr)
static __inline__ int test_and_clear_bit(unsigned long nr,
volatile unsigned long *addr)
static __inline__ int test_and_change_bit(unsigned long nr,
volatile unsigned long *addr)
static __inline__ void __clear_bit_unlock(int nr, volatile unsigned long *addr)
static __inline__ __attribute__((const))
int __ilog2(unsigned long x)
static inline __attribute__((const))
int __ilog2_u32(u32 n)
static inline __attribute__((const))
int __ilog2_u64(u64 n)
static __inline__ unsigned long ffz(unsigned long x)
static __inline__ int __ffs(unsigned long x)
static __inline__ int ffs(int x)
static __inline__ int fls(unsigned int x)
static __inline__ unsigned long __fls(unsigned long x)
static __inline__ int fls64(__u64 x)
unsigned int __arch_hweight8(unsigned int w);
unsigned int __arch_hweight16(unsigned int w);
unsigned int __arch_hweight32(unsigned int w);
unsigned long __arch_hweight64(__u64 w);
static __inline__ int test_bit_le(unsigned long nr,
__const__ void *addr)
static inline void __set_bit_le(int nr, void *addr)
static inline void __clear_bit_le(int nr, void *addr)
static inline int test_and_set_bit_le(int nr, void *addr)
static inline int test_and_clear_bit_le(int nr, void *addr)
static inline int __test_and_set_bit_le(int nr, void *addr)
static inline int __test_and_clear_bit_le(int nr, void *addr)
#define find_first_zero_bit_le(addr, size) \
find_next_zero_bit_le((addr), (size), 0)
unsigned long find_next_zero_bit_le(const void *addr,
unsigned long size, unsigned long offset);
unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset);
#define ext2_set_bit_atomic(lock, nr, addr) \
test_and_set_bit_le((nr), (unsigned long*)addr)
#define ext2_clear_bit_atomic(lock, nr, addr) \
test_and_clear_bit_le((nr), (unsigned long*)addr)
