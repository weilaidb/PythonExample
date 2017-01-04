#define AVCODEC_AARCH64_CABAC_H
#if HAVE_INLINE_ASM
#define get_cabac_inline get_cabac_inline_aarch64
static av_always_inline int get_cabac_inline_aarch64(CABACContext *c,
uint8_t *const state)
