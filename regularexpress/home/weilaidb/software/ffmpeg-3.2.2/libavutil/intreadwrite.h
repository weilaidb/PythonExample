#define AVUTIL_INTREADWRITE_H
typedef union  av_alias av_alias64;
typedef union  av_alias av_alias32;
typedef union  av_alias av_alias16;
#if   ARCH_ARM
#   include
#elif ARCH_AVR32
#   include
#elif ARCH_MIPS
#   include
#elif ARCH_PPC
#   include
#elif ARCH_TOMI
#   include
#elif ARCH_X86
#   include
#if AV_HAVE_BIGENDIAN
defined && !defined(AV_RB16)
AV_RB16 AV_RN16(p)
defined
AV_RN16 AV_RB16(p)
#   endif
defined && !defined(AV_WB16)
AV_WB16 AV_WN16(p, v)
defined
AV_WN16 AV_WB16(p, v)
#   endif
defined && !defined(AV_RB24)
AV_RB24 AV_RN24(p)
defined
AV_RN24 AV_RB24(p)
#   endif
defined && !defined(AV_WB24)
AV_WB24 AV_WN24(p, v)
defined
AV_WN24 AV_WB24(p, v)
#   endif
defined && !defined(AV_RB32)
AV_RB32 AV_RN32(p)
defined
AV_RN32 AV_RB32(p)
#   endif
defined && !defined(AV_WB32)
AV_WB32 AV_WN32(p, v)
defined
AV_WN32 AV_WB32(p, v)
#   endif
defined && !defined(AV_RB48)
AV_RB48 AV_RN48(p)
defined
AV_RN48 AV_RB48(p)
#   endif
defined && !defined(AV_WB48)
AV_WB48 AV_WN48(p, v)
defined
AV_WN48 AV_WB48(p, v)
#   endif
defined && !defined(AV_RB64)
AV_RB64 AV_RN64(p)
defined
AV_RN64 AV_RB64(p)
#   endif
defined && !defined(AV_WB64)
AV_WB64 AV_WN64(p, v)
defined
AV_WN64 AV_WB64(p, v)
#   endif
defined && !defined(AV_RL16)
AV_RL16 AV_RN16(p)
defined
AV_RN16 AV_RL16(p)
#   endif
defined && !defined(AV_WL16)
AV_WL16 AV_WN16(p, v)
defined
AV_WN16 AV_WL16(p, v)
#   endif
defined && !defined(AV_RL24)
AV_RL24 AV_RN24(p)
defined
AV_RN24 AV_RL24(p)
#   endif
defined && !defined(AV_WL24)
AV_WL24 AV_WN24(p, v)
defined
AV_WN24 AV_WL24(p, v)
#   endif
defined && !defined(AV_RL32)
AV_RL32 AV_RN32(p)
defined
AV_RN32 AV_RL32(p)
#   endif
defined && !defined(AV_WL32)
AV_WL32 AV_WN32(p, v)
defined
AV_WN32 AV_WL32(p, v)
#   endif
defined && !defined(AV_RL48)
AV_RL48 AV_RN48(p)
defined
AV_RN48 AV_RL48(p)
#   endif
defined && !defined(AV_WL48)
AV_WL48 AV_WN48(p, v)
defined
AV_WN48 AV_WL48(p, v)
#   endif
defined && !defined(AV_RL64)
AV_RL64 AV_RN64(p)
defined
AV_RN64 AV_RL64(p)
#   endif
defined && !defined(AV_WL64)
AV_WL64 AV_WN64(p, v)
defined
AV_WN64 AV_WL64(p, v)
#   endif
defined && !defined(__TI_COMPILER_VERSION__)
__attribute__) av_alias;
__attribute__) av_alias;
__attribute__) av_alias;
AV_RN (((const union unaligned_##s *) (p))->l)
AV_WN ((((union unaligned_##s *) (p))->l) = (v))
defined
AV_RN (*((const __unaligned uint##s##_t*)(p)))
AV_WN (*((__unaligned uint##s##_t*)(p)) = (v))
#elif AV_HAVE_FAST_UNALIGNED
AV_RN (((const av_alias##s*)(p))->u##s)
AV_WN (((av_alias##s*)(p))->u##s = (v))
AV_RB16                           \
((((const uint8_t*)(x))[0] << 8) |          \
((const uint8_t*)(x))[1])
while
AV_RL16                           \
((((const uint8_t*)(x))[1] << 8) |          \
((const uint8_t*)(x))[0])
while
AV_RB32                                \
(((uint32_t)((const uint8_t*)(x))[0] << 24) |    \
(((const uint8_t*)(x))[1] << 16) |    \
(((const uint8_t*)(x))[2] <<  8) |    \
((const uint8_t*)(x))[3])
while
AV_RL32                                \
(((uint32_t)((const uint8_t*)(x))[3] << 24) |    \
(((const uint8_t*)(x))[2] << 16) |    \
(((const uint8_t*)(x))[1] <<  8) |    \
((const uint8_t*)(x))[0])
while
AV_RB64                                   \
(((uint64_t)((const uint8_t*)(x))[0] << 56) |       \
((uint64_t)((const uint8_t*)(x))[1] << 48) |       \
((uint64_t)((const uint8_t*)(x))[2] << 40) |       \
((uint64_t)((const uint8_t*)(x))[3] << 32) |       \
((uint64_t)((const uint8_t*)(x))[4] << 24) |       \
((uint64_t)((const uint8_t*)(x))[5] << 16) |       \
((uint64_t)((const uint8_t*)(x))[6] <<  8) |       \
(uint64_t)((const uint8_t*)(x))[7])
while
AV_RL64                                   \
(((uint64_t)((const uint8_t*)(x))[7] << 56) |       \
((uint64_t)((const uint8_t*)(x))[6] << 48) |       \
((uint64_t)((const uint8_t*)(x))[5] << 40) |       \
((uint64_t)((const uint8_t*)(x))[4] << 32) |       \
((uint64_t)((const uint8_t*)(x))[3] << 24) |       \
((uint64_t)((const uint8_t*)(x))[2] << 16) |       \
((uint64_t)((const uint8_t*)(x))[1] <<  8) |       \
(uint64_t)((const uint8_t*)(x))[0])
while
#if AV_HAVE_BIGENDIAN
AV_RN    AV_RB##s(p)
AV_WN AV_WB##s(p, v)
AV_RN    AV_RL##s(p)
AV_WN AV_WL##s(p, v)
AV_RN16 AV_RN(16, p)
AV_RN32 AV_RN(32, p)
AV_RN64 AV_RN(64, p)
AV_WN16 AV_WN(16, p, v)
AV_WN32 AV_WN(32, p, v)
AV_WN64 AV_WN(64, p, v)
#if AV_HAVE_BIGENDIAN
AV_RB    AV_RN##s(p)
AV_WB AV_WN##s(p, v)
AV_RL    av_bswap##s(AV_RN##s(p))
AV_WL AV_WN##s(p, av_bswap##s(v))
AV_RB    av_bswap##s(AV_RN##s(p))
AV_WB AV_WN##s(p, av_bswap##s(v))
AV_RL    AV_RN##s(p)
AV_WL AV_WN##s(p, v)
AV_RB8     (((const uint8_t*)(x))[0])
while
AV_RL8     AV_RB8(x)
AV_WL8  AV_WB8(p, d)
AV_RB16    AV_RB(16, p)
AV_WB16 AV_WB(16, p, v)
AV_RL16    AV_RL(16, p)
AV_WL16 AV_WL(16, p, v)
AV_RB32    AV_RB(32, p)
AV_WB32 AV_WB(32, p, v)
AV_RL32    AV_RL(32, p)
AV_WL32 AV_WL(32, p, v)
AV_RB64    AV_RB(64, p)
AV_WB64 AV_WB(64, p, v)
AV_RL64    AV_RL(64, p)
AV_WL64 AV_WL(64, p, v)
AV_RB24                           \
((((const uint8_t*)(x))[0] << 16) |         \
(((const uint8_t*)(x))[1] <<  8) |         \
((const uint8_t*)(x))[2])
while
AV_RL24                           \
((((const uint8_t*)(x))[2] << 16) |         \
(((const uint8_t*)(x))[1] <<  8) |         \
((const uint8_t*)(x))[0])
while
AV_RB48                                     \
(((uint64_t)((const uint8_t*)(x))[0] << 40) |         \
((uint64_t)((const uint8_t*)(x))[1] << 32) |         \
((uint64_t)((const uint8_t*)(x))[2] << 24) |         \
((uint64_t)((const uint8_t*)(x))[3] << 16) |         \
((uint64_t)((const uint8_t*)(x))[4] <<  8) |         \
(uint64_t)((const uint8_t*)(x))[5])
while
AV_RL48                                     \
(((uint64_t)((const uint8_t*)(x))[5] << 40) |         \
((uint64_t)((const uint8_t*)(x))[4] << 32) |         \
((uint64_t)((const uint8_t*)(x))[3] << 24) |         \
((uint64_t)((const uint8_t*)(x))[2] << 16) |         \
((uint64_t)((const uint8_t*)(x))[1] <<  8) |         \
(uint64_t)((const uint8_t*)(x))[0])
while
AV_RNA    (((const av_alias##s*)(p))->u##s)
AV_WNA (((av_alias##s*)(p))->u##s = (v))
AV_RN16A AV_RNA(16, p)
AV_RN32A AV_RNA(32, p)
AV_RN64A AV_RNA(64, p)
AV_WN16A AV_WNA(16, p, v)
AV_WN32A AV_WNA(32, p, v)
AV_WN64A AV_WNA(64, p, v)
AV_COPYU AV_WN##n(d, AV_RN##n(s));
AV_COPY16U AV_COPYU(16, d, s)
AV_COPY32U AV_COPYU(32, d, s)
AV_COPY64U AV_COPYU(64, d, s)
AV_COPY128U                                    \
while
AV_COPY \
(((av_alias##n*)(d))->u##n = ((const av_alias##n*)(s))->u##n)
AV_COPY16 AV_COPY(16, d, s)
AV_COPY32 AV_COPY(32, d, s)
AV_COPY64 AV_COPY(64, d, s)
AV_COPY128                    \
while
AV_SWAP FFSWAP(av_alias##n, *(av_alias##n*)(a), *(av_alias##n*)(b))
AV_SWAP64 AV_SWAP(64, a, b)
AV_ZERO (((av_alias##n*)(d))->u##n = 0)
AV_ZERO16 AV_ZERO(16, d)
AV_ZERO32 AV_ZERO(32, d)
AV_ZERO64 AV_ZERO(64, d)
AV_ZERO128         \
while
