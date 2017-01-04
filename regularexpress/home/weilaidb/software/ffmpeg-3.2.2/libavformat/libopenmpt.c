typedef struct OpenMPTContext  OpenMPTContext;
#define OFFSET(x) offsetof(OpenMPTContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static void openmpt_logfunc(const char *message, void *userdata)
#define add_meta(s, name, meta)                    \
do  while(0)
static int read_header_openmpt(AVFormatContext *s)
#define AUDIO_PKT_SIZE 2048
static int read_packet_openmpt(AVFormatContext *s, AVPacket *pkt)
static int read_close_openmpt(AVFormatContext *s)
static int read_seek_openmpt(AVFormatContext *s, int stream_idx, int64_t ts, int flags)
static const AVClass class_openmpt = ;
AVInputFormat ff_libopenmpt_demuxer = ;
