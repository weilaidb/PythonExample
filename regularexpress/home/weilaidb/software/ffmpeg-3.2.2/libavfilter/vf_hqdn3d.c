#define LUT_BITS (depth==16 ? 8 : 4)
LOAD (((depth == 8 ? src[x] : AV_RN16A(src + (x) * 2)) << (16 - depth))\
+ (((1 << (16 - depth)) - 1) >> 1))
STORE (depth == 8 ? dst[x] = (val) >> (16 - depth) : \
AV_WN16A(dst + (x) * 2, (val) >> (16 - depth)))
av_always_inline
lowpass
av_always_inline
denoise_temporal
av_always_inline
denoise_spatial
av_always_inline
denoise_depth
denoise                                                          \
do  while (0)
*precalc_coefs
#define PARAM1_DEFAULT 4.0
#define PARAM2_DEFAULT 3.0
#define PARAM3_DEFAULT 6.0
init
uninit
query_formats
config_input
filter_frame
OFFSET offsetof(HQDN3DContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption hqdn3d_options[] = ;
AVFILTER_DEFINE_CLASS(hqdn3d);
static const AVFilterPad avfilter_vf_hqdn3d_inputs[] = ;
static const AVFilterPad avfilter_vf_hqdn3d_outputs[] = ;
AVFilter ff_vf_hqdn3d = ;
