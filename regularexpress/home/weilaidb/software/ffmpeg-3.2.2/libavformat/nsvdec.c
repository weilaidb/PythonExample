#define NSV_MAX_RESYNC (500*1024)
#define NSV_MAX_RESYNC_TRIES 300
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKBETAG
MKBETAG
#define NSV_ST_VIDEO 0
#define NSV_ST_AUDIO 1
#define NSV_ST_SUBT 2
enum NSVStatus ;
typedef struct NSVStream  NSVStream;
typedef struct NSVContext  NSVContext;
static const AVCodecTag nsv_codec_video_tags[] = ;
static const AVCodecTag nsv_codec_audio_tags[] = ;
nsv_read_chunk;
print_tag       \
av_log(NULL, AV_LOG_TRACE, , \
str, tag & 0xff,            \
(tag >> 8) & 0xff,          \
(tag >> 16) & 0xff,         \
(tag >> 24) & 0xff);
nsv_resync
nsv_parse_NSVf_header
nsv_parse_NSVs_header
nsv_read_header
nsv_read_chunk
nsv_read_packet
nsv_read_seek
nsv_read_close
nsv_probe
AVInputFormat ff_nsv_demuxer = ;
