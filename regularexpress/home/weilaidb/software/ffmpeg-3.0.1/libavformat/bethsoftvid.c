#define BVID_PALETTE_SIZE 3 * 256
#define DEFAULT_SAMPLE_RATE 11111
typedef struct BVID_DemuxContext
BVID_DemuxContext;
static int vid_probe(AVProbeData *p)
static int vid_read_header(AVFormatContext *s)
#define BUFFER_PADDING_SIZE 1000
static int read_frame(BVID_DemuxContext *vid, AVIOContext *pb, AVPacket *pkt,
uint8_t block_type, AVFormatContext *s)
static int vid_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int vid_read_close(AVFormatContext *s)
AVInputFormat ff_bethsoftvid_demuxer = ;
