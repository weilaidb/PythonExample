#define BITOP_WORD(nr)		((nr) / BITS_PER_LONG)
unsigned long find_next_bit(const unsigned long *addr, unsigned long size,
unsigned long offset)
EXPORT_SYMBOL(find_next_bit);
unsigned long find_next_zero_bit(const unsigned long *addr, unsigned long size,
unsigned long offset)
EXPORT_SYMBOL(find_next_zero_bit);
unsigned long find_first_bit(const unsigned long *addr, unsigned long size)
EXPORT_SYMBOL(find_first_bit);
unsigned long find_first_zero_bit(const unsigned long *addr, unsigned long size)
EXPORT_SYMBOL(find_first_zero_bit);
static inline unsigned long ext2_swabp(const unsigned long * x)
static inline unsigned long ext2_swab(const unsigned long y)
unsigned long find_next_zero_bit_le(const void *addr, unsigned
long size, unsigned long offset)
EXPORT_SYMBOL(find_next_zero_bit_le);
unsigned long find_next_bit_le(const void *addr, unsigned
long size, unsigned long offset)
EXPORT_SYMBOL(find_next_bit_le);
