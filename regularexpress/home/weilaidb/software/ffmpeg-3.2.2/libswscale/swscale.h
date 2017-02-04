#define SWSCALE_SWSCALE_H
swscale_version;
*swscale_configuration;
*swscale_license;
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
#define SWS_CS_BT2020         9
*sws_getCoefficients;
typedef struct SwsVector  SwsVector;
typedef struct SwsFilter  SwsFilter;
struct SwsContext;
sws_isSupportedInput;
sws_isSupportedOutput;
sws_isSupportedEndiannessConversion;
*sws_alloc_context;
av_warn_unused_result
sws_init_context;
sws_freeContext;
*sws_getContext;
sws_scale;
sws_setColorspaceDetails;
sws_getColorspaceDetails;
*sws_allocVec;
*sws_getGaussianVec;
sws_scaleVec;
sws_normalizeVec;
#if FF_API_SWS_VECTOR
*sws_getConstVec;
*sws_getIdentityVec;
sws_convVec;
sws_addVec;
sws_subVec;
sws_shiftVec;
*sws_cloneVec;
sws_printVec2;
sws_freeVec;
*sws_getDefaultFilter;
sws_freeFilter;
*sws_getCachedContext;
sws_convertPalette8ToPacked32;
sws_convertPalette8ToPacked24;
*sws_get_class;
