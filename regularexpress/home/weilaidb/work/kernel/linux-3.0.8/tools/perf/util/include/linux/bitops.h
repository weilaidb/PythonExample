#define _PERF_LINUX_BITOPS_H_
#define BITS_PER_LONG __WORDSIZE
#define BITS_PER_BYTE           8
#define BITS_TO_LONGS(nr)       DIV_ROUND_UP(nr, BITS_PER_BYTE * sizeof(long))
static inline void set_bit(int nr, unsigned long *addr)
static inline void clear_bit(int nr, unsigned long *addr)
static __always_inline int test_bit(unsigned int nr, const unsigned long *addr)
static inline unsigned long hweight_long(unsigned long w)
