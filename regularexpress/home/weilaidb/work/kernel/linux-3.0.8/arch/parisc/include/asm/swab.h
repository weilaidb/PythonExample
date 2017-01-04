#define _PARISC_SWAB_H
#define __SWAB_64_THRU_32__
static inline __attribute_const__ __u16 __arch_swab16(__u16 x)
#define __arch_swab16 __arch_swab16
static inline __attribute_const__ __u32 __arch_swab24(__u32 x)
static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
#define __arch_swab32 __arch_swab32
#if BITS_PER_LONG > 32
static inline __attribute_const__ __u64 __arch_swab64(__u64 x)
#define __arch_swab64 __arch_swab64
