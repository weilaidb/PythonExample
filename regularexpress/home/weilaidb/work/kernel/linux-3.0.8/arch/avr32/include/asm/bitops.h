#define __ASM_AVR32_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
static inline void set_bit(int nr, volatile void * addr)
static inline void clear_bit(int nr, volatile void * addr)
static inline void change_bit(int nr, volatile void * addr)
static inline int test_and_set_bit(int nr, volatile void * addr)
static inline int test_and_clear_bit(int nr, volatile void * addr)
static inline int test_and_change_bit(int nr, volatile void * addr)
static inline unsigned long __ffs(unsigned long word)
static inline unsigned long ffz(unsigned long word)
static inline int fls(unsigned long word)
static inline int __fls(unsigned long word)
unsigned long find_first_zero_bit(const unsigned long *addr,
unsigned long size);
#define find_first_zero_bit find_first_zero_bit
unsigned long find_next_zero_bit(const unsigned long *addr,
unsigned long size,
unsigned long offset);
#define find_next_zero_bit find_next_zero_bit
unsigned long find_first_bit(const unsigned long *addr,
unsigned long size);
#define find_first_bit find_first_bit
unsigned long find_next_bit(const unsigned long *addr,
unsigned long size,
unsigned long offset);
#define find_next_bit find_next_bit
static inline int ffs(unsigned long word)
extern unsigned long find_next_zero_bit_le(const void *addr,
unsigned long size, unsigned long offset);
#define find_next_zero_bit_le find_next_zero_bit_le
extern unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset);
#define find_next_bit_le find_next_bit_le
