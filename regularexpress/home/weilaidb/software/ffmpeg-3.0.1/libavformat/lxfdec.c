#define LXF_MAX_PACKET_HEADER_SIZE 256
#define LXF_HEADER_DATA_SIZE    120
#define LXF_IDENT               "LEITCH\0"
#define LXF_IDENT_LENGTH        8
#define LXF_SAMPLERATE          48000
static const AVCodecTag lxf_tags[] = ;
typedef struct LXFDemuxContext  LXFDemuxContext;
static int lxf_probe(AVProbeData *p)
static int check_checksum(const uint8_t *header, int size)
static int lxf_sync(AVFormatContext *s, uint8_t *header)
static int get_packet_header(AVFormatContext *s)
static int lxf_read_header(AVFormatContext *s)
static int lxf_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_lxf_demuxer = ;
