enum ;
#define TMV_TAG MKTAG('T', 'M', 'A', 'V')
typedef struct TMVContext  TMVContext;
#define TMV_HEADER_SIZE       12
#define PROBE_MIN_SAMPLE_RATE 5000
#define PROBE_MAX_FPS         120
#define PROBE_MIN_AUDIO_SIZE  (PROBE_MIN_SAMPLE_RATE / PROBE_MAX_FPS)
static int tmv_probe(AVProbeData *p)
static int tmv_read_header(AVFormatContext *s)
static int tmv_read_packet(AVFormatContext *s, AVPacket *pkt)
static int tmv_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_tmv_demuxer = ;
