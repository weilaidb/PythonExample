#define BOOT_BITOPS_H
#define _LINUX_BITOPS_H
static inline int constant_test_bit(int nr, const void *addr)
static inline int variable_test_bit(int nr, const void *addr)
#define test_bit(nr,addr) \
(__builtin_constant_p(nr) ? \
constant_test_bit((nr),(addr)) : \
variable_test_bit((nr),(addr)))
static inline void set_bit(int nr, void *addr)
