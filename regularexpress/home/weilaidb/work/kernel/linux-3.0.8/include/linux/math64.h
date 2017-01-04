#define _LINUX_MATH64_H
#if BITS_PER_LONG == 64
static inline u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
static inline s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
static inline u64 div64_u64(u64 dividend, u64 divisor)
static inline s64 div64_s64(s64 dividend, s64 divisor)
#elif BITS_PER_LONG == 32
static inline u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
extern s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder);
extern u64 div64_u64(u64 dividend, u64 divisor);
extern s64 div64_s64(s64 dividend, s64 divisor);
static inline u64 div_u64(u64 dividend, u32 divisor)
static inline s64 div_s64(s64 dividend, s32 divisor)
u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);
static __always_inline u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
