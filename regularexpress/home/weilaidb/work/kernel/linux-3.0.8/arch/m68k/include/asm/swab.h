#define _M68K_SWAB_H
#define __SWAB_64_THRU_32__
#if defined (__mcfisaaplus__) || defined (__mcfisac__)
static inline __attribute_const__ __u32 __arch_swab32(__u32 val)
#define __arch_swab32 __arch_swab32
#elif !defined(__mcoldfire__)
static inline __attribute_const__ __u32 __arch_swab32(__u32 val)
#define __arch_swab32 __arch_swab32
