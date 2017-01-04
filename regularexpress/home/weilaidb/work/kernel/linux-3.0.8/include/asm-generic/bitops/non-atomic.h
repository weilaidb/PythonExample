#define _ASM_GENERIC_BITOPS_NON_ATOMIC_H_
static inline void __set_bit(int nr, volatile unsigned long *addr)
static inline void __clear_bit(int nr, volatile unsigned long *addr)
static inline void __change_bit(int nr, volatile unsigned long *addr)
static inline int __test_and_set_bit(int nr, volatile unsigned long *addr)
static inline int __test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int __test_and_change_bit(int nr,
volatile unsigned long *addr)
static inline int test_bit(int nr, const volatile unsigned long *addr)
