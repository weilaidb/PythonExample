#if CONFIG_OMX_RPI
#define OMX_SKIP64BIT
to_omx_ticks
from_omx_ticks
to_omx_ticks (x)
from_omx_ticks (x)
INIT_STRUCT do  while (0)
CHECK do  while (0)
typedef struct OMXContext  OMXContext;
*dlsym_prefixed
omx_try_load
*omx_init
omx_deinit
typedef struct OMXCodecContext  OMXCodecContext;
append_buffer
*get_buffer
event_handler
empty_buffer_done
fill_buffer_done
static const OMX_CALLBACKTYPE callbacks = ;
find_component
wait_for_state
omx_component_init
cleanup
omx_encode_init
omx_encode_frame
omx_encode_end
OFFSET offsetof(OMXCodecContext, x)
#define VDE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_ENCODING_PARAM
#define VE  AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const enum AVPixelFormat omx_encoder_pix_fmts[] = ;
static const AVClass omx_mpeg4enc_class = ;
AVCodec ff_mpeg4_omx_encoder = ;
static const AVClass omx_h264enc_class = ;
AVCodec ff_h264_omx_encoder = ;
