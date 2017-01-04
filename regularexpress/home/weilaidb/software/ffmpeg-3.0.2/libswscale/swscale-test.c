#undef HAVE_AV_CONFIG_H
#define isGray(x)                      \
((x) == AV_PIX_FMT_GRAY8       ||     \
(x) == AV_PIX_FMT_YA8         ||     \
(x) == AV_PIX_FMT_GRAY16BE    ||     \
(x) == AV_PIX_FMT_GRAY16LE    ||     \
(x) == AV_PIX_FMT_YA16BE      ||     \
(x) == AV_PIX_FMT_YA16LE)
#define hasChroma(x)                   \
(!(isGray(x)                ||     \
(x) == AV_PIX_FMT_MONOBLACK ||     \
(x) == AV_PIX_FMT_MONOWHITE))
#define isALPHA(x)                     \
((x) == AV_PIX_FMT_BGR32   ||         \
(x) == AV_PIX_FMT_BGR32_1 ||         \
(x) == AV_PIX_FMT_RGB32   ||         \
(x) == AV_PIX_FMT_RGB32_1 ||         \
(x) == AV_PIX_FMT_YUVA420P)
static uint64_t getSSD(const uint8_t *src1, const uint8_t *src2, int stride1,
int stride2, int w, int h)
struct Results ;
static int doTest(uint8_t *ref[4], int refStride[4], int w, int h,
enum AVPixelFormat srcFormat, enum AVPixelFormat dstFormat,
int srcW, int srcH, int dstW, int dstH, int flags,
struct Results *r)
static void selfTest(uint8_t *ref[4], int refStride[4], int w, int h,
enum AVPixelFormat srcFormat_in,
enum AVPixelFormat dstFormat_in)
static int fileTest(uint8_t *ref[4], int refStride[4], int w, int h, FILE *fp,
enum AVPixelFormat srcFormat_in,
enum AVPixelFormat dstFormat_in)
#define W 96
#define H 96
int main(int argc, char **argv)
