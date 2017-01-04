#define VPX_DISABLE_CTRL_TYPECHECKS 1
#define VPX_CODEC_DISABLE_COMPAT    1
struct FrameListData ;
typedef struct VP8EncoderContext  VP8Context;
static const char *const ctlidstr[] = ;
static av_cold void log_encoder_error(AVCodecContext *avctx, const char *desc)
static av_cold void dump_enc_cfg(AVCodecContext *avctx,
const struct vpx_codec_enc_cfg *cfg)
static void coded_frame_add(void *list, struct FrameListData *cx_frame)
static av_cold void free_coded_frame(struct FrameListData *cx_frame)
static av_cold void free_frame_list(struct FrameListData *list)
static av_cold int codecctl_int(AVCodecContext *avctx,
enum vp8e_enc_control_id id, int val)
static av_cold int vp8_free(AVCodecContext *avctx)
#if CONFIG_LIBVPX_VP9_ENCODER
static int set_pix_fmt(AVCodecContext *avctx, vpx_codec_caps_t codec_caps,
struct vpx_codec_enc_cfg *enccfg, vpx_codec_flags_t *flags,
vpx_img_fmt_t *img_fmt)
#if VPX_ENCODER_ABI_VERSION > 8
static void set_colorspace(AVCodecContext *avctx)
#if VPX_ENCODER_ABI_VERSION >= 11
static void set_color_range(AVCodecContext *avctx)
static av_cold int vpx_init(AVCodecContext *avctx,
const struct vpx_codec_iface *iface)
static inline void cx_pktcpy(struct FrameListData *dst,
const struct vpx_codec_cx_pkt *src,
const struct vpx_codec_cx_pkt *src_alpha,
VP8Context *ctx)
static int storeframe(AVCodecContext *avctx, struct FrameListData *cx_frame,
AVPacket *pkt)
static int queue_frames(AVCodecContext *avctx, AVPacket *pkt_out)
static int vp8_encode(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
#define OFFSET(x) offsetof(VP8Context, x)
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
static av_cold int vp8_init(AVCodecContext *avctx)
static const AVClass class_vp8 = ;
AVCodec ff_libvpx_vp8_encoder = ;
#if CONFIG_LIBVPX_VP9_ENCODER
static av_cold int vp9_init(AVCodecContext *avctx)
static const AVClass class_vp9 = ;
AVCodec ff_libvpx_vp9_encoder = ;
