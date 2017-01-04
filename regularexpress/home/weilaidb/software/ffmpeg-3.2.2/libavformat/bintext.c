typedef struct  BinDemuxContext;
static AVStream * init_stream(AVFormatContext *s)
#if CONFIG_BINTEXT_DEMUXER | CONFIG_ADF_DEMUXER | CONFIG_IDF_DEMUXER
static void calculate_height(AVCodecParameters *par, uint64_t fsize)
#if CONFIG_BINTEXT_DEMUXER
static const uint8_t next_magic[]=;
static int next_tag_read(AVFormatContext *avctx, uint64_t *fsize)
static void predict_width(AVCodecParameters *par, uint64_t fsize, int got_width)
static int bintext_read_header(AVFormatContext *s)
#if CONFIG_XBIN_DEMUXER
static int xbin_probe(AVProbeData *p)
static int xbin_read_header(AVFormatContext *s)
#if CONFIG_ADF_DEMUXER
static int adf_read_header(AVFormatContext *s)
#if CONFIG_IDF_DEMUXER
static const uint8_t idf_magic[] = ;
static int idf_probe(AVProbeData *p)
static int idf_read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
#define OFFSET(x) offsetof(BinDemuxContext, x)
static const AVOption options[] = ;
#define CLASS(name) \
(const AVClass[1])
#if CONFIG_BINTEXT_DEMUXER
AVInputFormat ff_bintext_demuxer = ;
#if CONFIG_XBIN_DEMUXER
AVInputFormat ff_xbin_demuxer = ;
#if CONFIG_ADF_DEMUXER
AVInputFormat ff_adf_demuxer = ;
#if CONFIG_IDF_DEMUXER
AVInputFormat ff_idf_demuxer = ;
