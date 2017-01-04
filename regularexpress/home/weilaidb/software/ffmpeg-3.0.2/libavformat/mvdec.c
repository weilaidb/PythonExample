typedef struct MvContext  MvContext;
#define AUDIO_FORMAT_SIGNED 401
static int mv_probe(AVProbeData *p)
static char *var_read_string(AVIOContext *pb, int size)
static int var_read_int(AVIOContext *pb, int size)
static AVRational var_read_float(AVIOContext *pb, int size)
static void var_read_metadata(AVFormatContext *avctx, const char *tag, int size)
static int set_channels(AVFormatContext *avctx, AVStream *st, int channels)
static int parse_global_var(AVFormatContext *avctx, AVStream *st,
const char *name, int size)
static int parse_audio_var(AVFormatContext *avctx, AVStream *st,
const char *name, int size)
static int parse_video_var(AVFormatContext *avctx, AVStream *st,
const char *name, int size)
static int read_table(AVFormatContext *avctx, AVStream *st,
int (*parse)(AVFormatContext *avctx, AVStream *st,
const char *name, int size))
static void read_index(AVIOContext *pb, AVStream *st)
static int mv_read_header(AVFormatContext *avctx)
static int mv_read_packet(AVFormatContext *avctx, AVPacket *pkt)
static int mv_read_seek(AVFormatContext *avctx, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_mv_demuxer = ;
