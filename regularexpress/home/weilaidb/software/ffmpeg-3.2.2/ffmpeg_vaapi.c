#if HAVE_VAAPI_X11
#   include <va/va_x11.h>
#if HAVE_VAAPI_DRM
#   include <va/va_drm.h>
static AVClass vaapi_class = ;
#define DEFAULT_SURFACES 20
typedef struct VAAPIDecoderContext  VAAPIDecoderContext;
static int vaapi_get_buffer(AVCodecContext *avctx, AVFrame *frame, int flags)
static int vaapi_retrieve_data(AVCodecContext *avctx, AVFrame *input)
static const struct  vaapi_profile_map[] = ;
static int vaapi_build_decoder_config(VAAPIDecoderContext *ctx,
AVCodecContext *avctx,
int fallback_allowed)
static void vaapi_decode_uninit(AVCodecContext *avctx)
int vaapi_decode_init(AVCodecContext *avctx)
static AVClass *vaapi_log = &vaapi_class;
av_cold int vaapi_device_init(const char *device)
