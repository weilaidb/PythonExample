#define HUFFMAN_TABLE_SIZE (64 * 1024)
#define IDCIN_FPS 14
typedef struct IdcinDemuxContext  IdcinDemuxContext;
static int idcin_probe(AVProbeData *p)
static int idcin_read_header(AVFormatContext *s)
static int idcin_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int idcin_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_idcin_demuxer = ;
