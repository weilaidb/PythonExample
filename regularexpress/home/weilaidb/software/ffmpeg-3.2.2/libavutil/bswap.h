#define AVUTIL_BSWAP_H
#if   ARCH_AARCH64
#   include
#elif ARCH_ARM
#   include
#elif ARCH_AVR32
#   include
#elif ARCH_SH4
#   include
#elif ARCH_X86
#   include
AV_BSWAP16C (((x) << 8 & 0xff00)  | ((x) >> 8 & 0x00ff))
AV_BSWAP32C (AV_BSWAP16C(x) << 16 | AV_BSWAP16C((x) >> 16))
AV_BSWAP64C (AV_BSWAP32C(x) << 32 | AV_BSWAP32C((x) >> 32))
AV_BSWAPC AV_BSWAP##s##C(x)
av_bswap16
av_bswap32
av_bswap64
#if AV_HAVE_BIGENDIAN
av_be2ne16 (x)
av_be2ne32 (x)
av_be2ne64 (x)
av_le2ne16 av_bswap16(x)
av_le2ne32 av_bswap32(x)
av_le2ne64 av_bswap64(x)
AV_BE2NEC (x)
AV_LE2NEC AV_BSWAPC(s, x)
av_be2ne16 av_bswap16(x)
av_be2ne32 av_bswap32(x)
av_be2ne64 av_bswap64(x)
av_le2ne16 (x)
av_le2ne32 (x)
av_le2ne64 (x)
AV_BE2NEC AV_BSWAPC(s, x)
AV_LE2NEC (x)
AV_BE2NE16C AV_BE2NEC(16, x)
AV_BE2NE32C AV_BE2NEC(32, x)
AV_BE2NE64C AV_BE2NEC(64, x)
AV_LE2NE16C AV_LE2NEC(16, x)
AV_LE2NE32C AV_LE2NEC(32, x)
AV_LE2NE64C AV_LE2NEC(64, x)
