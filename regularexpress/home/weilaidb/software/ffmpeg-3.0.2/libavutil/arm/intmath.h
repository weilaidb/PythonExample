#define AVUTIL_ARM_INTMATH_H
#if HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define av_clip_uint8 av_clip_uint8_arm
static av_always_inline av_const int av_clip_uint8_arm(int a)
#define av_clip_int8 av_clip_int8_arm
static av_always_inline av_const int av_clip_int8_arm(int a)
#define av_clip_uint16 av_clip_uint16_arm
static av_always_inline av_const int av_clip_uint16_arm(int a)
#define av_clip_int16 av_clip_int16_arm
static av_always_inline av_const int av_clip_int16_arm(int a)
#define av_clip_intp2 av_clip_intp2_arm
static av_always_inline av_const int av_clip_intp2_arm(int a, int p)
#define av_clip_uintp2 av_clip_uintp2_arm
static av_always_inline av_const unsigned av_clip_uintp2_arm(int a, int p)
#define av_sat_add32 av_sat_add32_arm
static av_always_inline int av_sat_add32_arm(int a, int b)
#define av_sat_dadd32 av_sat_dadd32_arm
static av_always_inline int av_sat_dadd32_arm(int a, int b)
#if HAVE_ASM_MOD_Q
#define av_clipl_int32 av_clipl_int32_arm
static av_always_inline av_const int32_t av_clipl_int32_arm(int64_t a)
