#if CONFIG_OMX_RPI
#define OMX_SKIP64BIT
static OMX_TICKS to_omx_ticks(int64_t value)
static int64_t from_omx_ticks(OMX_TICKS value)
#define to_omx_ticks(x) (x)
#define from_omx_ticks(x) (x)
#define INIT_STRUCT(x) do  while (0)
#define CHECK(x) do  while (0)
typedef struct OMXContext  OMXContext;
static av_cold void *dlsym_prefixed(void *handle, const char *symbol, const char *prefix)
static av_cold int omx_try_load(OMXContext *s, void *logctx,
const char *libname, const char *prefix,
const char *libname2)
static av_cold OMXContext *omx_init(void *logctx, const char *libname, const char *prefix)
static av_cold void omx_deinit(OMXContext *omx_context)
typedef struct OMXCodecContext  OMXCodecContext;
static void append_buffer(pthread_mutex_t *mutex, pthread_cond_t *cond,
int* array_size, OMX_BUFFERHEADERTYPE **array,
OMX_BUFFERHEADERTYPE *buffer)
static OMX_BUFFERHEADERTYPE *get_buffer(pthread_mutex_t *mutex, pthread_cond_t *cond,
int* array_size, OMX_BUFFERHEADERTYPE **array,
int wait)
static OMX_ERRORTYPE event_handler(OMX_HANDLETYPE component, OMX_PTR app_data, OMX_EVENTTYPE event,
OMX_U32 data1, OMX_U32 data2, OMX_PTR event_data)
static OMX_ERRORTYPE empty_buffer_done(OMX_HANDLETYPE component, OMX_PTR app_data,
OMX_BUFFERHEADERTYPE *buffer)
static OMX_ERRORTYPE fill_buffer_done(OMX_HANDLETYPE component, OMX_PTR app_data,
OMX_BUFFERHEADERTYPE *buffer)
static const OMX_CALLBACKTYPE callbacks = ;
static av_cold int find_component(OMXContext *omx_context, void *logctx,
const char *role, char *str, int str_size)
static av_cold int wait_for_state(OMXCodecContext *s, OMX_STATETYPE state)
static av_cold int omx_component_init(AVCodecContext *avctx, const char *role)
static av_cold void cleanup(OMXCodecContext *s)
static av_cold int omx_encode_init(AVCodecContext *avctx)
static int omx_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int omx_encode_end(AVCodecContext *avctx)
#define OFFSET(x) offsetof(OMXCodecContext, x)
#define VDE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_ENCODING_PARAM
#define VE  AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const enum AVPixelFormat omx_encoder_pix_fmts[] = ;
static const AVClass omx_mpeg4enc_class = ;
AVCodec ff_mpeg4_omx_encoder = ;
static const AVClass omx_h264enc_class = ;
AVCodec ff_h264_omx_encoder = ;
