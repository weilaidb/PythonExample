#define AVCODEC_LIBWEBPENC_COMMON_H
typedef struct LibWebPContextCommon  LibWebPContextCommon;
int ff_libwebp_error_to_averror(int err);
av_cold int ff_libwebp_encode_init_common(AVCodecContext *avctx);
int ff_libwebp_get_frame(AVCodecContext *avctx, LibWebPContextCommon *s,
const AVFrame *frame, AVFrame **alt_frame_ptr,
WebPPicture **pic_ptr);
#define OFFSET(x) offsetof(LibWebPContextCommon, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVCodecDefault libwebp_defaults[] = ;
