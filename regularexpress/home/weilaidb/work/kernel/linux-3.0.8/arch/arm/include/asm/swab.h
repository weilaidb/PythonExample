#define __ASM_ARM_SWAB_H
#if !defined(__STRICT_ANSI__) || defined(__KERNEL__)
#  define __SWAB_64_THRU_32__
#if defined(__KERNEL__) && __LINUX_ARM_ARCH__ >= 6
static inline __attribute_const__ __u16 __arch_swab16(__u16 x)
#define __arch_swab16 __arch_swab16
static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
#define __arch_swab32 __arch_swab32
static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
#define __arch_swab32 __arch_swab32
