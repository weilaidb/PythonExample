#define _LINUX_JHASH_H
#define jhash_size(n)   ((u32)1<<(n))
#define jhash_mask(n)   (jhash_size(n)-1)
#define __jhash_mix(a, b, c)			\
#define __jhash_final(a, b, c)			\
#define JHASH_INITVAL		0xdeadbeef
static inline u32 jhash(const void *key, u32 length, u32 initval)
static inline u32 jhash2(const u32 *k, u32 length, u32 initval)
static inline u32 jhash_3words(u32 a, u32 b, u32 c, u32 initval)
static inline u32 jhash_2words(u32 a, u32 b, u32 initval)
static inline u32 jhash_1word(u32 a, u32 initval)
