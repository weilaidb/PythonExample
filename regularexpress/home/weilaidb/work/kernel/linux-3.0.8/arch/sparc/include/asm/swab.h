#define _SPARC_SWAB_H
#if defined(__sparc__) && defined(__arch64__)
static inline __u16 __arch_swab16p(const __u16 *addr)
#define __arch_swab16p __arch_swab16p
static inline __u32 __arch_swab32p(const __u32 *addr)
#define __arch_swab32p __arch_swab32p
static inline __u64 __arch_swab64p(const __u64 *addr)
#define __arch_swab64p __arch_swab64p
#define __SWAB_64_THRU_32__
