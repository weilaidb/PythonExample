#define _DEFAULT_SOURCE
#define _SVID_SOURCE
#define _DARWIN_C_SOURCE
#if HAVE_SYS_MMAN_H
defined && !defined(MAP_ANONYMOUS)
#define MAP_ANONYMOUS MAP_ANON
#if HAVE_VIRTUALALLOC
#define WIN32_LEAN_AND_MEAN
#undef attribute_deprecated
#define attribute_deprecated
#if !FF_API_SWS_VECTOR
*sws_getIdentityVec;
sws_addVec;
sws_shiftVec;
sws_printVec2;
handle_formats;
swscale_version
*swscale_configuration
*swscale_license
typedef struct FormatEntry  FormatEntry;
static const FormatEntry format_entries[AV_PIX_FMT_NB] = ;
sws_isSupportedInput
sws_isSupportedOutput
sws_isSupportedEndiannessConversion
getSplineCoeff
get_local_pos
typedef struct  ScaleAlgorithm;
static const ScaleAlgorithm scale_algorithms[] = ;
initFilter
fill_rgb2yuv_table
fill_xyztables
sws_setColorspaceDetails
sws_getColorspaceDetails
handle_jpeg
handle_0alpha
handle_xyz
handle_formats
*sws_alloc_context
alloc_gamma_tbl
alphaless_fmt
sws_init_context
*sws_alloc_set_opts
*sws_getContext
isnan_vec
makenan_vec
*sws_getDefaultFilter
*sws_allocVec
*sws_getGaussianVec
#if !FF_API_SWS_VECTOR
static
*sws_getConstVec
#if !FF_API_SWS_VECTOR
static
*sws_getIdentityVec
sws_dcVec
sws_scaleVec
sws_normalizeVec
#if FF_API_SWS_VECTOR
*sws_getConvVec
*sws_sumVec
#if FF_API_SWS_VECTOR
*sws_diffVec
*sws_getShiftedVec
#if !FF_API_SWS_VECTOR
static
sws_shiftVec
#if !FF_API_SWS_VECTOR
static
sws_addVec
#if FF_API_SWS_VECTOR
sws_subVec
sws_convVec
*sws_cloneVec
#if !FF_API_SWS_VECTOR
static
sws_printVec2
sws_freeVec
sws_freeFilter
sws_freeContext
*sws_getCachedContext
