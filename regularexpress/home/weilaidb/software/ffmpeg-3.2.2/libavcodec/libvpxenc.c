#define VPX_DISABLE_CTRL_TYPECHECKS 1
#define VPX_CODEC_DISABLE_COMPAT    1
struct FrameListData ;
typedef struct VPxEncoderContext  VPxContext;
static const char *const ctlidstr[] = ;
log_encoder_error
dump_enc_cfg
coded_frame_add
free_coded_frame
free_frame_list
codecctl_int
vpx_free
#if CONFIG_LIBVPX_VP9_ENCODER
set_pix_fmt
#if VPX_ENCODER_ABI_VERSION > 8
set_colorspace
#if VPX_ENCODER_ABI_VERSION >= 11
set_color_range
vpx_init
cx_pktcpy
storeframe
queue_frames
vpx_encode
OFFSET offsetof(VPxContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
#define VPX_ERROR_RESILIENT_DEFAULT 1
#define VPX_ERROR_RESILIENT_PARTITIONS 2
#define COMMON_OPTIONS \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
#define LEGACY_OPTIONS \
, \
, \
, \
, \
, \
, \
, \
, \
, \
#if CONFIG_LIBVPX_VP8_ENCODER
static const AVOption vp8_options[] = ;
#if CONFIG_LIBVPX_VP9_ENCODER
static const AVOption vp9_options[] = ;
#undef COMMON_OPTIONS
#undef LEGACY_OPTIONS
static const AVCodecDefault defaults[] = ;
#if CONFIG_LIBVPX_VP8_ENCODER
vp8_init
static const AVClass class_vp8 = ;
AVCodec ff_libvpx_vp8_encoder = ;
#if CONFIG_LIBVPX_VP9_ENCODER
vp9_init
static const AVClass class_vp9 = ;
AVCodec ff_libvpx_vp9_encoder = ;
