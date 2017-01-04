#define _LINUX_BYTEORDER_SWAB_H
#define __u16 unsigned short
#define __u32 unsigned int
#define __u8 unsigned char
#define __u64 unsigned long long
static inline __u16  ___swab16(__u16 x)
static inline __u32  ___swab32(__u32 x)
static inline __u64  ___swab64(__u64 x)
static inline __u16 __arch__swab16(__u16 x)
static inline __u32 __arch__swab32(__u32 x)
static inline __u64 __arch__swab64(__u64 x)
#define __swab16(x) __fswab16(x)
#define __swab32(x) __fswab32(x)
#define __swab64(x) __fswab64(x)
static inline const __u16 __fswab16(__u16 x)
static inline const __u32 __fswab32(__u32 x)
#define swab16 __swab16
#define swab32 __swab32
#define swab64 __swab64
#define swab16p __swab16p
#define swab32p __swab32p
#define swab64p __swab64p
#define swab16s __swab16s
#define swab32s __swab32s
#define swab64s __swab64s
