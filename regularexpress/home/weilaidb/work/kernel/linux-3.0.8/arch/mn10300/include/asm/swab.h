#define _ASM_SWAB_H
static inline __attribute__((const))
__u32 __arch_swab32(__u32 x)
#define __arch_swab32 __arch_swab32
static inline __attribute__((const))
__u16 __arch_swab16(__u16 x)
#define __arch_swab32 __arch_swab32
#if !defined(__STRICT_ANSI__) || defined(__KERNEL__)
#  define __SWAB_64_THRU_32__
