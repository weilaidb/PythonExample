typedef struct MMFContext  MMFContext;
static const int mmf_rates[] = ;
static int mmf_rate(int code)
#if CONFIG_MMF_MUXER
static int mmf_rate_code(int rate)
static void end_tag_be(AVIOContext *pb, int64_t start)
static int mmf_write_header(AVFormatContext *s)
static void put_varlength(AVIOContext *pb, int val)
static int mmf_write_trailer(AVFormatContext *s)
static int mmf_probe(AVProbeData *p)
static int mmf_read_header(AVFormatContext *s)
#define MAX_SIZE 4096
static int mmf_read_packet(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_MMF_DEMUXER
AVInputFormat ff_mmf_demuxer = ;
#if CONFIG_MMF_MUXER
AVOutputFormat ff_mmf_muxer = ;
