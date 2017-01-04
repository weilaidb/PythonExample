#define _ASM_POWERPC_SWAB_H
#define __SWAB_64_THRU_32__
static __inline__ __u16 ld_le16(const volatile __u16 *addr)
#define __arch_swab16p ld_le16
static __inline__ void st_le16(volatile __u16 *addr, const __u16 val)
static inline void __arch_swab16s(__u16 *addr)
#define __arch_swab16s __arch_swab16s
static __inline__ __u32 ld_le32(const volatile __u32 *addr)
#define __arch_swab32p ld_le32
static __inline__ void st_le32(volatile __u32 *addr, const __u32 val)
static inline void __arch_swab32s(__u32 *addr)
#define __arch_swab32s __arch_swab32s
static inline __attribute_const__ __u16 __arch_swab16(__u16 value)
#define __arch_swab16 __arch_swab16
static inline __attribute_const__ __u32 __arch_swab32(__u32 value)
#define __arch_swab32 __arch_swab32
