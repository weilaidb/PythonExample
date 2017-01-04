typedef struct GMEContext  GMEContext;
#define OFFSET(x) offsetof(GMEContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static void add_meta(AVFormatContext *s, const char *name, const char *value)
static int load_metadata(AVFormatContext *s)
#define AUDIO_PKT_SIZE 512
static int read_header_gme(AVFormatContext *s)
static int read_packet_gme(AVFormatContext *s, AVPacket *pkt)
static int read_close_gme(AVFormatContext *s)
static int read_seek_gme(AVFormatContext *s, int stream_idx, int64_t ts, int flags)
static int probe_gme(AVProbeData *p)
static const AVClass class_gme = ;
AVInputFormat ff_libgme_demuxer = ;
