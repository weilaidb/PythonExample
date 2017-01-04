#define _LINUX_SWAB_H
#define ___constant_swab16(x) ((__u16)(				\
(((__u16)(x) & (__u16)0x00ffU) << 8) |			\
(((__u16)(x) & (__u16)0xff00U) >> 8)))
#define ___constant_swab32(x) ((__u32)(				\
(((__u32)(x) & (__u32)0x000000ffUL) << 24) |		\
(((__u32)(x) & (__u32)0x0000ff00UL) <<  8) |		\
(((__u32)(x) & (__u32)0x00ff0000UL) >>  8) |		\
(((__u32)(x) & (__u32)0xff000000UL) >> 24)))
#define ___constant_swab64(x) ((__u64)(				\
(((__u64)(x) & (__u64)0x00000000000000ffULL) << 56) |	\
(((__u64)(x) & (__u64)0x000000000000ff00ULL) << 40) |	\
(((__u64)(x) & (__u64)0x0000000000ff0000ULL) << 24) |	\
(((__u64)(x) & (__u64)0x00000000ff000000ULL) <<  8) |	\
(((__u64)(x) & (__u64)0x000000ff00000000ULL) >>  8) |	\
(((__u64)(x) & (__u64)0x0000ff0000000000ULL) >> 24) |	\
(((__u64)(x) & (__u64)0x00ff000000000000ULL) >> 40) |	\
(((__u64)(x) & (__u64)0xff00000000000000ULL) >> 56)))
#define ___constant_swahw32(x) ((__u32)(			\
(((__u32)(x) & (__u32)0x0000ffffUL) << 16) |		\
(((__u32)(x) & (__u32)0xffff0000UL) >> 16)))
#define ___constant_swahb32(x) ((__u32)(			\
(((__u32)(x) & (__u32)0x00ff00ffUL) << 8) |		\
(((__u32)(x) & (__u32)0xff00ff00UL) >> 8)))
static inline __attribute_const__ __u16 __fswab16(__u16 val)
static inline __attribute_const__ __u32 __fswab32(__u32 val)
static inline __attribute_const__ __u64 __fswab64(__u64 val)
static inline __attribute_const__ __u32 __fswahw32(__u32 val)
static inline __attribute_const__ __u32 __fswahb32(__u32 val)
#define __swab16(x)				\
(__builtin_constant_p((__u16)(x)) ?	\
___constant_swab16(x) :			\
__fswab16(x))
#define __swab32(x)				\
(__builtin_constant_p((__u32)(x)) ?	\
___constant_swab32(x) :			\
__fswab32(x))
#define __swab64(x)				\
(__builtin_constant_p((__u64)(x)) ?	\
___constant_swab64(x) :			\
__fswab64(x))
#define __swahw32(x)				\
(__builtin_constant_p((__u32)(x)) ?	\
___constant_swahw32(x) :		\
__fswahw32(x))
#define __swahb32(x)				\
(__builtin_constant_p((__u32)(x)) ?	\
___constant_swahb32(x) :		\
__fswahb32(x))
static inline __u16 __swab16p(const __u16 *p)
static inline __u32 __swab32p(const __u32 *p)
static inline __u64 __swab64p(const __u64 *p)
static inline __u32 __swahw32p(const __u32 *p)
static inline __u32 __swahb32p(const __u32 *p)
static inline void __swab16s(__u16 *p)
static inline void __swab32s(__u32 *p)
static inline void __swab64s(__u64 *p)
static inline void __swahw32s(__u32 *p)
static inline void __swahb32s(__u32 *p)
# define swab16 __swab16
# define swab32 __swab32
# define swab64 __swab64
# define swahw32 __swahw32
# define swahb32 __swahb32
# define swab16p __swab16p
# define swab32p __swab32p
# define swab64p __swab64p
# define swahw32p __swahw32p
# define swahb32p __swahb32p
# define swab16s __swab16s
# define swab32s __swab32s
# define swab64s __swab64s
# define swahw32s __swahw32s
# define swahb32s __swahb32s
