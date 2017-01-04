#define DEFAULT_CODEC_ID AV_NE(AV_CODEC_ID_PCM_S16BE, AV_CODEC_ID_PCM_S16LE)
typedef struct PulseData  PulseData;
#define CHECK_SUCCESS_GOTO(rerror, expression, label)        \
do  while (0)
#define CHECK_DEAD_GOTO(p, rerror, label)                               \
do  while (0)
static void context_state_cb(pa_context *c, void *userdata)
static void stream_state_cb(pa_stream *s, void * userdata)
static void stream_request_cb(pa_stream *s, size_t length, void *userdata)
static void stream_latency_update_cb(pa_stream *s, void *userdata)
static av_cold int pulse_close(AVFormatContext *s)
static av_cold int pulse_read_header(AVFormatContext *s)
static int pulse_read_packet(AVFormatContext *s, AVPacket *pkt)
static int pulse_get_device_list(AVFormatContext *h, AVDeviceInfoList *device_list)
#define OFFSET(a) offsetof(PulseData, a)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass pulse_demuxer_class = ;
AVInputFormat ff_pulse_demuxer = ;
