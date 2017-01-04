#define _ASM_GENERIC_BITOPS_LE_H_
#if defined(__LITTLE_ENDIAN)
#define BITOP_LE_SWIZZLE	0
static inline unsigned long find_next_zero_bit_le(const void *addr,
unsigned long size, unsigned long offset)
static inline unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset)
static inline unsigned long find_first_zero_bit_le(const void *addr,
unsigned long size)
#elif defined(__BIG_ENDIAN)
#define BITOP_LE_SWIZZLE	((BITS_PER_LONG-1) & ~0x7)
extern unsigned long find_next_zero_bit_le(const void *addr,
unsigned long size, unsigned long offset);
extern unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset);
#define find_first_zero_bit_le(addr, size) \
find_next_zero_bit_le((addr), (size), 0)
#error "Please fix <asm/byteorder.h>"
static inline int test_bit_le(int nr, const void *addr)
static inline void __set_bit_le(int nr, void *addr)
static inline void __clear_bit_le(int nr, void *addr)
static inline int test_and_set_bit_le(int nr, void *addr)
static inline int test_and_clear_bit_le(int nr, void *addr)
static inline int __test_and_set_bit_le(int nr, void *addr)
static inline int __test_and_clear_bit_le(int nr, void *addr)
