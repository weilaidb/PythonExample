#define AVCODEC_ARM_CABAC_H
#if HAVE_ARMV6T2_INLINE
#define get_cabac_inline get_cabac_inline_arm
static av_always_inline int get_cabac_inline_arm(CABACContext *c,
uint8_t *const state)
