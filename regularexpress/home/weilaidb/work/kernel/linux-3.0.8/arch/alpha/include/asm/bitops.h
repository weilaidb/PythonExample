#define _ALPHA_BITOPS_H
#error only <linux/bitops.h> can be included directly
static inline void
set_bit(unsigned long nr, volatile void * addr)
static inline void
__set_bit(unsigned long nr, volatile void * addr)
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
static inline void
clear_bit(unsigned long nr, volatile void * addr)
static inline void
clear_bit_unlock(unsigned long nr, volatile void * addr)
static __inline__ void
__clear_bit(unsigned long nr, volatile void * addr)
static inline void
__clear_bit_unlock(unsigned long nr, volatile void * addr)
static inline void
change_bit(unsigned long nr, volatile void * addr)
static __inline__ void
__change_bit(unsigned long nr, volatile void * addr)
static inline int
test_and_set_bit(unsigned long nr, volatile void *addr)
static inline int
test_and_set_bit_lock(unsigned long nr, volatile void *addr)
static inline int
__test_and_set_bit(unsigned long nr, volatile void * addr)
static inline int
test_and_clear_bit(unsigned long nr, volatile void * addr)
static inline int
__test_and_clear_bit(unsigned long nr, volatile void * addr)
static inline int
test_and_change_bit(unsigned long nr, volatile void * addr)
static __inline__ int
__test_and_change_bit(unsigned long nr, volatile void * addr)
static inline int
test_bit(int nr, const volatile void * addr)
static inline unsigned long ffz_b(unsigned long x)
static inline unsigned long ffz(unsigned long word)
static inline unsigned long __ffs(unsigned long word)
static inline int ffs(int word)
#if defined(CONFIG_ALPHA_EV6) && defined(CONFIG_ALPHA_EV67)
static inline int fls64(unsigned long word)
extern const unsigned char __flsm1_tab[256];
static inline int fls64(unsigned long x)
static inline unsigned long __fls(unsigned long x)
static inline int fls(int x)
#if defined(CONFIG_ALPHA_EV6) && defined(CONFIG_ALPHA_EV67)
static inline unsigned long __arch_hweight64(unsigned long w)
static inline unsigned int __arch_hweight32(unsigned int w)
static inline unsigned int __arch_hweight16(unsigned int w)
static inline unsigned int __arch_hweight8(unsigned int w)
static inline unsigned long
sched_find_first_bit(const unsigned long b[2])
#define ext2_set_bit_atomic(l,n,a)   test_and_set_bit(n,a)
#define ext2_clear_bit_atomic(l,n,a) test_and_clear_bit(n,a)
