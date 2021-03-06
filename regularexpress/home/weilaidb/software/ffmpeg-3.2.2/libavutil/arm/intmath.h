#define AVUTIL_ARM_INTMATH_H
#if HAVE_INLINE_ASM
#if HAVE_ARMV6_INLINE
#define av_clip_uint8 av_clip_uint8_arm
av_clip_uint8_arm
#define av_clip_int8 av_clip_int8_arm
av_clip_int8_arm
#define av_clip_uint16 av_clip_uint16_arm
av_clip_uint16_arm
#define av_clip_int16 av_clip_int16_arm
av_clip_int16_arm
#define av_clip_intp2 av_clip_intp2_arm
av_clip_intp2_arm
#define av_clip_uintp2 av_clip_uintp2_arm
av_clip_uintp2_arm
#define av_sat_add32 av_sat_add32_arm
av_sat_add32_arm
#define av_sat_dadd32 av_sat_dadd32_arm
av_sat_dadd32_arm
#if HAVE_ASM_MOD_Q
#define av_clipl_int32 av_clipl_int32_arm
av_clipl_int32_arm
