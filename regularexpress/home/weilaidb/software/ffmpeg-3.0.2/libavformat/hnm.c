#define HNM4_TAG MKTAG('H', 'N', 'M', '4')
#define HNM4_SAMPLE_RATE 22050
#define HNM4_FRAME_FPS 24
#define HNM4_CHUNK_ID_PL 19536
#define HNM4_CHUNK_ID_IZ 23113
#define HNM4_CHUNK_ID_IU 21833
#define HNM4_CHUNK_ID_SD 17491
typedef struct Hnm4DemuxContext  Hnm4DemuxContext;
static int hnm_probe(AVProbeData *p)
static int hnm_read_header(AVFormatContext *s)
static int hnm_read_packet(AVFormatContext *s, AVPacket *pkt)
static int hnm_read_close(AVFormatContext *s)
AVInputFormat ff_hnm_demuxer = ;
