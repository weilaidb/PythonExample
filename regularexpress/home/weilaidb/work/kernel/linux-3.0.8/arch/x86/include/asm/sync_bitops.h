#define _ASM_X86_SYNC_BITOPS_H
#define ADDR (*(volatile long *)addr)
static inline void sync_set_bit(int nr, volatile unsigned long *addr)
static inline void sync_clear_bit(int nr, volatile unsigned long *addr)
static inline void sync_change_bit(int nr, volatile unsigned long *addr)
static inline int sync_test_and_set_bit(int nr, volatile unsigned long *addr)
static inline int sync_test_and_clear_bit(int nr, volatile unsigned long *addr)
static inline int sync_test_and_change_bit(int nr, volatile unsigned long *addr)
#define sync_test_bit(nr, addr) test_bit(nr, addr)
#undef ADDR
