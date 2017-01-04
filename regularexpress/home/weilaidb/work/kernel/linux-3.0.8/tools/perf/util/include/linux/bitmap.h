#define _PERF_BITOPS_H
int __bitmap_weight(const unsigned long *bitmap, int bits);
#define BITMAP_LAST_WORD_MASK(nbits)					\
(									\
((nbits) % BITS_PER_LONG) ?					\
(1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL		\
)
#define small_const_nbits(nbits) \
(__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG)
static inline void bitmap_zero(unsigned long *dst, int nbits)
static inline int bitmap_weight(const unsigned long *src, int nbits)
