#define MTV_ASUBCHUNK_DATA_SIZE 500
#define MTV_HEADER_SIZE 512
#define MTV_AUDIO_PADDING_SIZE 12
#define MTV_IMAGE_DEFAULT_BPP 16
#define MTV_AUDIO_SAMPLING_RATE 44100
typedef struct MTVDemuxContext  MTVDemuxContext;
static int mtv_probe(AVProbeData *p)
static int mtv_read_header(AVFormatContext *s)
static int mtv_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_mtv_demuxer = ;
