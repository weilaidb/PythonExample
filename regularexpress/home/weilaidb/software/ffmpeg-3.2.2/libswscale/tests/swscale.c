#undef HAVE_AV_CONFIG_H
isGray                      \
((x) == AV_PIX_FMT_GRAY8       ||     \
(x) == AV_PIX_FMT_YA8         ||     \
(x) == AV_PIX_FMT_GRAY16BE    ||     \
(x) == AV_PIX_FMT_GRAY16LE    ||     \
(x) == AV_PIX_FMT_YA16BE      ||     \
(x) == AV_PIX_FMT_YA16LE)
hasChroma                   \
(!(isGray(x)                ||     \
(x) == AV_PIX_FMT_MONOBLACK ||     \
(x) == AV_PIX_FMT_MONOWHITE))
isALPHA                     \
((x) == AV_PIX_FMT_BGR32   ||         \
(x) == AV_PIX_FMT_BGR32_1 ||         \
(x) == AV_PIX_FMT_RGB32   ||         \
(x) == AV_PIX_FMT_RGB32_1 ||         \
(x) == AV_PIX_FMT_YUVA420P)
getSSD
struct Results ;
doTest
selfTest
fileTest
#define W 96
#define H 96
main
