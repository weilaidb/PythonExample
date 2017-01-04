#define _DEFAULT_SOURCE
#define _SVID_SOURCE
#define _DARWIN_C_SOURCE
#if HAVE_SYS_MMAN_H
#if defined(MAP_ANON) && !defined(MAP_ANONYMOUS)
#define MAP_ANONYMOUS MAP_ANON
#if HAVE_VIRTUALALLOC
#define WIN32_LEAN_AND_MEAN
#undef attribute_deprecated
#define attribute_deprecated
#if !FF_API_SWS_VECTOR
static SwsVector *sws_getIdentityVec(void);
static void sws_addVec(SwsVector *a, SwsVector *b);
static void sws_shiftVec(SwsVector *a, int shift);
static void sws_printVec2(SwsVector *a, AVClass *log_ctx, int log_level);
static void handle_formats(SwsContext *c);
unsigned swscale_version(void)
const char *swscale_configuration(void)
const char *swscale_license(void)
typedef struct FormatEntry  FormatEntry;
static const FormatEntry format_entries[AV_PIX_FMT_NB] = ;
int sws_isSupportedInput(enum AVPixelFormat pix_fmt)
int sws_isSupportedOutput(enum AVPixelFormat pix_fmt)
int sws_isSupportedEndiannessConversion(enum AVPixelFormat pix_fmt)
static double getSplineCoeff(double a, double b, double c, double d,
double dist)
static av_cold int get_local_pos(SwsContext *s, int chr_subsample, int pos, int dir)
typedef struct  ScaleAlgorithm;
static const ScaleAlgorithm scale_algorithms[] = ;
static av_cold int initFilter(int16_t **outFilter, int32_t **filterPos,
int *outFilterSize, int xInc, int srcW,
int dstW, int filterAlign, int one,
int flags, int cpu_flags,
SwsVector *srcFilter, SwsVector *dstFilter,
double param[2], int srcPos, int dstPos)
static void fill_rgb2yuv_table(SwsContext *c, const int table[4], int dstRange)
static void fill_xyztables(struct SwsContext *c)
int sws_setColorspaceDetails(struct SwsContext *c, const int inv_table[4],
int srcRange, const int table[4], int dstRange,
int brightness, int contrast, int saturation)
int sws_getColorspaceDetails(struct SwsContext *c, int **inv_table,
int *srcRange, int **table, int *dstRange,
int *brightness, int *contrast, int *saturation)
static int handle_jpeg(enum AVPixelFormat *format)
static int handle_0alpha(enum AVPixelFormat *format)
static int handle_xyz(enum AVPixelFormat *format)
static void handle_formats(SwsContext *c)
SwsContext *sws_alloc_context(void)
static uint16_t * alloc_gamma_tbl(double e)
static enum AVPixelFormat alphaless_fmt(enum AVPixelFormat fmt)
av_cold int sws_init_context(SwsContext *c, SwsFilter *srcFilter,
SwsFilter *dstFilter)
SwsContext *sws_alloc_set_opts(int srcW, int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH, enum AVPixelFormat dstFormat,
int flags, const double *param)
SwsContext *sws_getContext(int srcW, int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH, enum AVPixelFormat dstFormat,
int flags, SwsFilter *srcFilter,
SwsFilter *dstFilter, const double *param)
static int isnan_vec(SwsVector *a)
static void makenan_vec(SwsVector *a)
SwsFilter *sws_getDefaultFilter(float lumaGBlur, float chromaGBlur,
float lumaSharpen, float chromaSharpen,
float chromaHShift, float chromaVShift,
int verbose)
SwsVector *sws_allocVec(int length)
SwsVector *sws_getGaussianVec(double variance, double quality)
#if !FF_API_SWS_VECTOR
static
SwsVector *sws_getConstVec(double c, int length)
#if !FF_API_SWS_VECTOR
static
SwsVector *sws_getIdentityVec(void)
static double sws_dcVec(SwsVector *a)
void sws_scaleVec(SwsVector *a, double scalar)
void sws_normalizeVec(SwsVector *a, double height)
#if FF_API_SWS_VECTOR
static SwsVector *sws_getConvVec(SwsVector *a, SwsVector *b)
static SwsVector *sws_sumVec(SwsVector *a, SwsVector *b)
#if FF_API_SWS_VECTOR
static SwsVector *sws_diffVec(SwsVector *a, SwsVector *b)
static SwsVector *sws_getShiftedVec(SwsVector *a, int shift)
#if !FF_API_SWS_VECTOR
static
void sws_shiftVec(SwsVector *a, int shift)
#if !FF_API_SWS_VECTOR
static
void sws_addVec(SwsVector *a, SwsVector *b)
#if FF_API_SWS_VECTOR
void sws_subVec(SwsVector *a, SwsVector *b)
void sws_convVec(SwsVector *a, SwsVector *b)
SwsVector *sws_cloneVec(SwsVector *a)
#if !FF_API_SWS_VECTOR
static
void sws_printVec2(SwsVector *a, AVClass *log_ctx, int log_level)
void sws_freeVec(SwsVector *a)
void sws_freeFilter(SwsFilter *filter)
void sws_freeContext(SwsContext *c)
struct SwsContext *sws_getCachedContext(struct SwsContext *context, int srcW,
int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH,
enum AVPixelFormat dstFormat, int flags,
SwsFilter *srcFilter,
SwsFilter *dstFilter,
const double *param)
