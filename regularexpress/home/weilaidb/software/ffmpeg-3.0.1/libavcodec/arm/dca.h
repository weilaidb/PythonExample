#define AVCODEC_ARM_DCA_H
#if HAVE_ARMV6_INLINE && AV_GCC_VERSION_AT_LEAST(4,4) && !CONFIG_THUMB
#define decode_blockcodes decode_blockcodes
static inline int decode_blockcodes(int code1, int code2, int levels,
int32_t *values)
