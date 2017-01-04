#define SWSCALE_SWSCALE_H
unsigned swscale_version(void);
const char *swscale_configuration(void);
const char *swscale_license(void);
#define SWS_FAST_BILINEAR     1
#define SWS_BILINEAR          2
#define SWS_BICUBIC           4
#define SWS_X                 8
#define SWS_POINT          0x10
#define SWS_AREA           0x20
#define SWS_BICUBLIN       0x40
#define SWS_GAUSS          0x80
#define SWS_SINC          0x100
#define SWS_LANCZOS       0x200
#define SWS_SPLINE        0x400
#define SWS_SRC_V_CHR_DROP_MASK     0x30000
#define SWS_SRC_V_CHR_DROP_SHIFT    16
#define SWS_PARAM_DEFAULT           123456
#define SWS_PRINT_INFO              0x1000
#define SWS_FULL_CHR_H_INT    0x2000
#define SWS_FULL_CHR_H_INP    0x4000
#define SWS_DIRECT_BGR        0x8000
#define SWS_ACCURATE_RND      0x40000
#define SWS_BITEXACT          0x80000
#define SWS_ERROR_DIFFUSION  0x800000
#define SWS_MAX_REDUCE_CUTOFF 0.002
#define SWS_CS_ITU709         1
#define SWS_CS_FCC            4
#define SWS_CS_ITU601         5
#define SWS_CS_ITU624         5
#define SWS_CS_SMPTE170M      5
#define SWS_CS_SMPTE240M      7
#define SWS_CS_DEFAULT        5
const int *sws_getCoefficients(int colorspace);
typedef struct SwsVector  SwsVector;
typedef struct SwsFilter  SwsFilter;
struct SwsContext;
int sws_isSupportedInput(enum AVPixelFormat pix_fmt);
int sws_isSupportedOutput(enum AVPixelFormat pix_fmt);
int sws_isSupportedEndiannessConversion(enum AVPixelFormat pix_fmt);
struct SwsContext *sws_alloc_context(void);
av_warn_unused_result
int sws_init_context(struct SwsContext *sws_context, SwsFilter *srcFilter, SwsFilter *dstFilter);
void sws_freeContext(struct SwsContext *swsContext);
struct SwsContext *sws_getContext(int srcW, int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH, enum AVPixelFormat dstFormat,
int flags, SwsFilter *srcFilter,
SwsFilter *dstFilter, const double *param);
int sws_scale(struct SwsContext *c, const uint8_t *const srcSlice[],
const int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *const dst[], const int dstStride[]);
int sws_setColorspaceDetails(struct SwsContext *c, const int inv_table[4],
int srcRange, const int table[4], int dstRange,
int brightness, int contrast, int saturation);
int sws_getColorspaceDetails(struct SwsContext *c, int **inv_table,
int *srcRange, int **table, int *dstRange,
int *brightness, int *contrast, int *saturation);
SwsVector *sws_allocVec(int length);
SwsVector *sws_getGaussianVec(double variance, double quality);
SwsVector *sws_getConstVec(double c, int length);
SwsVector *sws_getIdentityVec(void);
void sws_scaleVec(SwsVector *a, double scalar);
void sws_normalizeVec(SwsVector *a, double height);
void sws_convVec(SwsVector *a, SwsVector *b);
void sws_addVec(SwsVector *a, SwsVector *b);
void sws_subVec(SwsVector *a, SwsVector *b);
void sws_shiftVec(SwsVector *a, int shift);
SwsVector *sws_cloneVec(SwsVector *a);
void sws_printVec2(SwsVector *a, AVClass *log_ctx, int log_level);
void sws_freeVec(SwsVector *a);
SwsFilter *sws_getDefaultFilter(float lumaGBlur, float chromaGBlur,
float lumaSharpen, float chromaSharpen,
float chromaHShift, float chromaVShift,
int verbose);
void sws_freeFilter(SwsFilter *filter);
struct SwsContext *sws_getCachedContext(struct SwsContext *context,
int srcW, int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH, enum AVPixelFormat dstFormat,
int flags, SwsFilter *srcFilter,
SwsFilter *dstFilter, const double *param);
void sws_convertPalette8ToPacked32(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);
void sws_convertPalette8ToPacked24(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);
const AVClass *sws_get_class(void);
