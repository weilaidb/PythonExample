#define CDXL_HEADER_SIZE 32
typedef struct CDXLDemuxContext  CDXLDemuxContext;
static int cdxl_read_probe(AVProbeData *p)
static int cdxl_read_header(AVFormatContext *s)
static int cdxl_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(CDXLDemuxContext, x)
static const AVOption cdxl_options[] = ;
static const AVClass cdxl_demuxer_class = ;
AVInputFormat ff_cdxl_demuxer = ;
