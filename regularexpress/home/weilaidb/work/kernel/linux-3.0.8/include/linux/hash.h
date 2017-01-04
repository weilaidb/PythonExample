#define _LINUX_HASH_H
#define GOLDEN_RATIO_PRIME_32 0x9e370001UL
#define GOLDEN_RATIO_PRIME_64 0x9e37fffffffc0001UL
#if BITS_PER_LONG == 32
#define GOLDEN_RATIO_PRIME GOLDEN_RATIO_PRIME_32
#define hash_long(val, bits) hash_32(val, bits)
#elif BITS_PER_LONG == 64
#define hash_long(val, bits) hash_64(val, bits)
#define GOLDEN_RATIO_PRIME GOLDEN_RATIO_PRIME_64
#error Wordsize not 32 or 64
static inline u64 hash_64(u64 val, unsigned int bits)
static inline u32 hash_32(u32 val, unsigned int bits)
static inline unsigned long hash_ptr(void *ptr, unsigned int bits)
