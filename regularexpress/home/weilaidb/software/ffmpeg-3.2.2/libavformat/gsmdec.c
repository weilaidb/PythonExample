#define GSM_BLOCK_SIZE    33
#define GSM_BLOCK_SAMPLES 160
#define GSM_SAMPLE_RATE   8000
typedef struct GSMDemuxerContext  GSMDemuxerContext;
static int gsm_probe(AVProbeData *p)
static int gsm_read_packet(AVFormatContext *s, AVPacket *pkt)
static int gsm_read_header(AVFormatContext *s)
static const AVOption options[] = ;
static const AVClass gsm_class = ;
AVInputFormat ff_gsm_demuxer = ;
