#define _BLACKFIN_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
asmlinkage int __raw_bit_set_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_clear_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_toggle_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_test_set_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_test_clear_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_test_toggle_asm(volatile unsigned long *addr, int nr);
asmlinkage int __raw_bit_test_asm(const volatile unsigned long *addr, int nr);
static inline void set_bit(int nr, volatile unsigned long *addr)
static inline void clear_bit(int nr, volatile unsigned long *addr)
static inline void change_bit(int nr, volatile unsigned long *addr)
static inline int test_bit(int nr, const volatile unsigned long *addr)
static inline int test_and_set_bit(int nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int test_and_change_bit(int nr, volatile unsigned long *addr)
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
#define test_bit __skip_test_bit
#undef test_bit
static inline unsigned int __arch_hweight32(unsigned int w)
static inline unsigned int __arch_hweight64(__u64 w)
static inline unsigned int __arch_hweight16(unsigned int w)
static inline unsigned int __arch_hweight8(unsigned int w)
