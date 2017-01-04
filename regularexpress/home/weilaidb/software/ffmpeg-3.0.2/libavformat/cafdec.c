typedef struct CafContext  CafContext;
static int probe(AVProbeData *p)
static int read_desc_chunk(AVFormatContext *s)
static int read_kuki_chunk(AVFormatContext *s, int64_t size)
static int read_pakt_chunk(AVFormatContext *s, int64_t size)
static void read_info_chunk(AVFormatContext *s, int64_t size)
static int read_header(AVFormatContext *s)
#define CAF_MAX_PKT_SIZE 4096
static int read_packet(AVFormatContext *s, AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_caf_demuxer = ;
