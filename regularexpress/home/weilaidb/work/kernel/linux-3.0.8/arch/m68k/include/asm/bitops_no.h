#define _M68KNOMMU_BITOPS_H
#error only <linux/bitops.h> can be included directly
#if defined (__mcfisaaplus__) || defined (__mcfisac__)
static inline int ffs(unsigned int val)
static inline int __ffs(unsigned int val)
static __inline__ void set_bit(int nr, volatile unsigned long * addr)
#define __set_bit(nr, addr) set_bit(nr, addr)
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
static __inline__ void clear_bit(int nr, volatile unsigned long * addr)
#define __clear_bit(nr, addr) clear_bit(nr, addr)
static __inline__ void change_bit(int nr, volatile unsigned long * addr)
#define __change_bit(nr, addr) change_bit(nr, addr)
static __inline__ int test_and_set_bit(int nr, volatile unsigned long * addr)
#define __test_and_set_bit(nr, addr) test_and_set_bit(nr, addr)
static __inline__ int test_and_clear_bit(int nr, volatile unsigned long * addr)
#define __test_and_clear_bit(nr, addr) test_and_clear_bit(nr, addr)
static __inline__ int test_and_change_bit(int nr, volatile unsigned long * addr)
#define __test_and_change_bit(nr, addr) test_and_change_bit(nr, addr)
static __inline__ int __constant_test_bit(int nr, const volatile unsigned long * addr)
static __inline__ int __test_bit(int nr, const volatile unsigned long * addr)
#define test_bit(nr,addr) \
(__builtin_constant_p(nr) ? \
__constant_test_bit((nr),(addr)) : \
__test_bit((nr),(addr)))
#define BITOP_LE_SWIZZLE	((BITS_PER_LONG-1) & ~0x7)
static inline void __set_bit_le(int nr, void *addr)
static inline void __clear_bit_le(int nr, void *addr)
static inline int __test_and_set_bit_le(int nr, volatile void *addr)
static inline int __test_and_clear_bit_le(int nr, volatile void *addr)
static inline int test_bit_le(int nr, const volatile void *addr)
#define find_first_zero_bit_le(addr, size)	\
find_next_zero_bit_le((addr), (size), 0)
static inline unsigned long find_next_zero_bit_le(void *addr, unsigned long size, unsigned long offset)
#define find_next_zero_bit_le find_next_zero_bit_le
extern unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset);
