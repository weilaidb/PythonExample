#define DRM_FIXED_H
typedef union dfixed  fixed20_12;
#define dfixed_const(A) (u32)(((A) << 12))
#define dfixed_const_half(A) (u32)(((A) << 12) + 2048)
#define dfixed_const_666(A) (u32)(((A) << 12) + 2731)
#define dfixed_const_8(A) (u32)(((A) << 12) + 3277)
#define dfixed_mul(A, B) ((u64)((u64)(A).full * (B).full + 2048) >> 12)
#define dfixed_init(A)
#define dfixed_init_half(A)
#define dfixed_trunc(A) ((A).full >> 12)
static inline u32 dfixed_floor(fixed20_12 A)
static inline u32 dfixed_ceil(fixed20_12 A)
static inline u32 dfixed_div(fixed20_12 A, fixed20_12 B)
