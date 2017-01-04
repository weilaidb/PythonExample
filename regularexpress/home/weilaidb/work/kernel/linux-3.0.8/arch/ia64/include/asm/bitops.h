#define _ASM_IA64_BITOPS_H
#error only <linux/bitops.h> can be included directly
static __inline__ void
set_bit (int nr, volatile void *addr)
static __inline__ void
__set_bit (int nr, volatile void *addr)
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	do  while (0)
static __inline__ void
clear_bit (int nr, volatile void *addr)
static __inline__ void
clear_bit_unlock (int nr, volatile void *addr)
static __inline__ void
__clear_bit_unlock(int nr, void *addr)
static __inline__ void
__clear_bit (int nr, volatile void *addr)
static __inline__ void
change_bit (int nr, volatile void *addr)
static __inline__ void
__change_bit (int nr, volatile void *addr)
static __inline__ int
test_and_set_bit (int nr, volatile void *addr)
#define test_and_set_bit_lock test_and_set_bit
static __inline__ int
__test_and_set_bit (int nr, volatile void *addr)
static __inline__ int
test_and_clear_bit (int nr, volatile void *addr)
static __inline__ int
__test_and_clear_bit(int nr, volatile void * addr)
static __inline__ int
test_and_change_bit (int nr, volatile void *addr)
static __inline__ int
__test_and_change_bit (int nr, void *addr)
static __inline__ int
test_bit (int nr, const volatile void *addr)
static inline unsigned long
ffz (unsigned long x)
static __inline__ unsigned long
__ffs (unsigned long x)
static inline unsigned long
ia64_fls (unsigned long x)
static inline int
fls (int t)
static inline unsigned long
__fls (unsigned long x)
#define ffs(x)	__builtin_ffs(x)
static __inline__ unsigned long __arch_hweight64(unsigned long x)
#define __arch_hweight32(x) ((unsigned int) __arch_hweight64((x) & 0xfffffffful))
#define __arch_hweight16(x) ((unsigned int) __arch_hweight64((x) & 0xfffful))
#define __arch_hweight8(x)  ((unsigned int) __arch_hweight64((x) & 0xfful))
#define ext2_set_bit_atomic(l,n,a)	test_and_set_bit(n,a)
#define ext2_clear_bit_atomic(l,n,a)	test_and_clear_bit(n,a)
