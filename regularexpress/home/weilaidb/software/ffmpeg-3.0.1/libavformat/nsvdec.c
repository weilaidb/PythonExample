#define NSV_MAX_RESYNC (500*1024)
#define NSV_MAX_RESYNC_TRIES 300
#define T_NSVF MKTAG('N', 'S', 'V', 'f')
#define T_NSVS MKTAG('N', 'S', 'V', 's')
#define T_TOC2 MKTAG('T', 'O', 'C', '2')
#define T_NONE MKTAG('N', 'O', 'N', 'E')
#define T_SUBT MKTAG('S', 'U', 'B', 'T')
#define T_ASYN MKTAG('A', 'S', 'Y', 'N')
#define T_KEYF MKTAG('K', 'E', 'Y', 'F')
#define TB_NSVF MKBETAG('N', 'S', 'V', 'f')
#define TB_NSVS MKBETAG('N', 'S', 'V', 's')
#define NSV_ST_VIDEO 0
#define NSV_ST_AUDIO 1
#define NSV_ST_SUBT 2
enum NSVStatus ;
typedef struct NSVStream  NSVStream;
typedef struct NSVContext  NSVContext;
static const AVCodecTag nsv_codec_video_tags[] = ;
static const AVCodecTag nsv_codec_audio_tags[] = ;
static int nsv_read_chunk(AVFormatContext *s, int fill_header);
#define print_tag(str, tag, size)       \
av_log(NULL, AV_LOG_TRACE, "%s: tag=%c%c%c%c\n", \
str, tag & 0xff,            \
(tag >> 8) & 0xff,          \
(tag >> 16) & 0xff,         \
(tag >> 24) & 0xff);
static int nsv_resync(AVFormatContext *s)
static int nsv_parse_NSVf_header(AVFormatContext *s)
static int nsv_parse_NSVs_header(AVFormatContext *s)
static int nsv_read_header(AVFormatContext *s)
static int nsv_read_chunk(AVFormatContext *s, int fill_header)
static int nsv_read_packet(AVFormatContext *s, AVPacket *pkt)
static int nsv_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
static int nsv_read_close(AVFormatContext *s)
static int nsv_probe(AVProbeData *p)
AVInputFormat ff_nsv_demuxer = ;
