#define _LINUX_BITOPS_H
#define BIT(nr)			(1UL << (nr))
#define BIT_MASK(nr)		(1UL << ((nr) % BITS_PER_LONG))
#define BIT_WORD(nr)		((nr) / BITS_PER_LONG)
#define BITS_PER_BYTE		8
#define BITS_TO_LONGS(nr)	DIV_ROUND_UP(nr, BITS_PER_BYTE * sizeof(long))
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);
#define for_each_set_bit(bit, addr, size) \
for ((bit) = find_first_bit((addr), (size)); \
(bit) < (size); \
(bit) = find_next_bit((addr), (size), (bit) + 1))
static __inline__ int get_bitmask_order(unsigned int count)
static __inline__ int get_count_order(unsigned int count)
static inline unsigned long hweight_long(unsigned long w)
static inline __u32 rol32(__u32 word, unsigned int shift)
static inline __u32 ror32(__u32 word, unsigned int shift)
static inline __u16 rol16(__u16 word, unsigned int shift)
static inline __u16 ror16(__u16 word, unsigned int shift)
static inline __u8 rol8(__u8 word, unsigned int shift)
static inline __u8 ror8(__u8 word, unsigned int shift)
static inline __s32 sign_extend32(__u32 value, int index)
static inline unsigned fls_long(unsigned long l)
static inline unsigned long __ffs64(u64 word)
extern unsigned long find_last_bit(const unsigned long *addr,
unsigned long size);
