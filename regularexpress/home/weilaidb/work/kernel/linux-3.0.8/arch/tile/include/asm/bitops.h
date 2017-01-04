#define _ASM_TILE_BITOPS_H
#error only <linux/bitops.h> can be included directly
static inline unsigned long __ffs(unsigned long word)
static inline unsigned long ffz(unsigned long word)
static inline unsigned long __fls(unsigned long word)
static inline int ffs(int x)
static inline int fls(int x)
static inline int fls64(__u64 w)
static inline unsigned int __arch_hweight32(unsigned int w)
static inline unsigned int __arch_hweight16(unsigned int w)
static inline unsigned int __arch_hweight8(unsigned int w)
static inline unsigned long __arch_hweight64(__u64 w)
