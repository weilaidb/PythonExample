#define BIT_DEPTH 8
#   undef pixel
#   undef pixel2
#   undef pixel4
#   undef dctcoef
#   undef INIT_CLIP
#   undef no_rnd_avg_pixel4
#   undef rnd_avg_pixel4
#   undef AV_RN2P
#   undef AV_RN4P
#   undef AV_RN4PA
#   undef AV_WN2P
#   undef AV_WN4P
#   undef AV_WN4PA
#   undef CLIP
#   undef FUNC
#   undef FUNCC
#   undef av_clip_pixel
#   undef PIXEL_SPLAT_X4
#   define AVCODEC_BIT_DEPTH_TEMPLATE_C
#if BIT_DEPTH > 8
#   define pixel  uint16_t
#   define pixel2 uint32_t
#   define pixel4 uint64_t
#   define dctcoef int32_t
#   define INIT_CLIP
#   define no_rnd_avg_pixel4 no_rnd_avg64
#   define    rnd_avg_pixel4    rnd_avg64
#   define AV_RN2P  AV_RN32
#   define AV_RN4P  AV_RN64
#   define AV_RN4PA AV_RN64A
#   define AV_WN2P  AV_WN32
#   define AV_WN4P  AV_WN64
#   define AV_WN4PA AV_WN64A
#   define PIXEL_SPLAT_X4(x) ((x)*0x0001000100010001ULL)
#   define av_clip_pixel(a) av_clip_uintp2(a, BIT_DEPTH)
#   define CLIP(a)          av_clip_uintp2(a, BIT_DEPTH)
#   define pixel  uint8_t
#   define pixel2 uint16_t
#   define pixel4 uint32_t
#   define dctcoef int16_t
#   define INIT_CLIP
#   define no_rnd_avg_pixel4 no_rnd_avg32
#   define    rnd_avg_pixel4    rnd_avg32
#   define AV_RN2P  AV_RN16
#   define AV_RN4P  AV_RN32
#   define AV_RN4PA AV_RN32A
#   define AV_WN2P  AV_WN16
#   define AV_WN4P  AV_WN32
#   define AV_WN4PA AV_WN32A
#   define PIXEL_SPLAT_X4(x) ((x)*0x01010101U)
#   define av_clip_pixel(a) av_clip_uint8(a)
#   define CLIP(a) av_clip_uint8(a)
#define FUNC3(a, b, c)  a ## _ ## b ## c
#define FUNC2(a, b, c)  FUNC3(a, b, c)
#define FUNC(a)  FUNC2(a, BIT_DEPTH,)
#define FUNCC(a) FUNC2(a, BIT_DEPTH, _c)
