#define __ASM_AVR32_SWAB_H
#define __SWAB_64_THRU_32__
extern unsigned long __builtin_bswap_32(unsigned long x);
extern unsigned short __builtin_bswap_16(unsigned short x);
#if !(__GNUC__ == 4 && __GNUC_MINOR__ < 2)
static inline __attribute_const__ __u16 __arch_swab16(__u16 val)
#define __arch_swab16 __arch_swab16
static inline __attribute_const__ __u32 __arch_swab32(__u32 val)
#define __arch_swab32 __arch_swab32
