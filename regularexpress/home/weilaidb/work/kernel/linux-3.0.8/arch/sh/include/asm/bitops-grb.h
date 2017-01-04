#define __ASM_SH_BITOPS_GRB_H
static inline void set_bit(int nr, volatile void * addr)
static inline void clear_bit(int nr, volatile void * addr)
static inline void change_bit(int nr, volatile void * addr)
static inline int test_and_set_bit(int nr, volatile void * addr)
static inline int test_and_clear_bit(int nr, volatile void * addr)
static inline int test_and_change_bit(int nr, volatile void * addr)
