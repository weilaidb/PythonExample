#define MAX_PAGE_SIZE 65025
typedef struct OGGPage  OGGPage;
typedef struct OGGStreamContext  OGGStreamContext;
typedef struct OGGPageList  OGGPageList;
typedef struct OGGContext  OGGContext;
#define OFFSET(x) offsetof(OGGContext, x)
#define PARAM AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
#define OGG_CLASS(flavor, name)\
static const AVClass flavor ## _muxer_class = ;
static void ogg_update_checksum(AVFormatContext *s, AVIOContext *pb, int64_t crc_offset)
static int ogg_write_page(AVFormatContext *s, OGGPage *page, int extra_flags)
static int ogg_key_granule(OGGStreamContext *oggstream, int64_t granule)
static int64_t ogg_granule_to_timestamp(OGGStreamContext *oggstream, int64_t granule)
static int ogg_compare_granule(AVFormatContext *s, OGGPage *next, OGGPage *page)
static int ogg_reset_cur_page(OGGStreamContext *oggstream)
static int ogg_buffer_page(AVFormatContext *s, OGGStreamContext *oggstream)
static int ogg_buffer_data(AVFormatContext *s, AVStream *st,
uint8_t *data, unsigned size, int64_t granule,
int header)
static uint8_t *ogg_write_vorbiscomment(int64_t offset, int bitexact,
int *header_len, AVDictionary **m, int framing_bit)
static int ogg_build_flac_headers(AVCodecParameters *par,
OGGStreamContext *oggstream, int bitexact,
AVDictionary **m)
#define SPEEX_HEADER_SIZE 80
static int ogg_build_speex_headers(AVCodecParameters *par,
OGGStreamContext *oggstream, int bitexact,
AVDictionary **m)
#define OPUS_HEADER_SIZE 19
static int ogg_build_opus_headers(AVCodecParameters *par,
OGGStreamContext *oggstream, int bitexact,
AVDictionary **m)
#define VP8_HEADER_SIZE 26
static int ogg_build_vp8_headers(AVFormatContext *s, AVStream *st,
OGGStreamContext *oggstream, int bitexact)
static void ogg_write_pages(AVFormatContext *s, int flush)
static int ogg_write_header(AVFormatContext *s)
static int ogg_write_packet_internal(AVFormatContext *s, AVPacket *pkt)
static int ogg_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ogg_write_trailer(AVFormatContext *s)
#if CONFIG_OGG_MUXER
OGG_CLASS(ogg, Ogg)
AVOutputFormat ff_ogg_muxer = ;
#if CONFIG_OGA_MUXER
OGG_CLASS(oga, Ogg audio)
AVOutputFormat ff_oga_muxer = ;
#if CONFIG_OGV_MUXER
OGG_CLASS(ogv, Ogg video)
AVOutputFormat ff_ogv_muxer = ;
#if CONFIG_SPX_MUXER
OGG_CLASS(spx, Ogg Speex)
AVOutputFormat ff_spx_muxer = ;
#if CONFIG_OPUS_MUXER
OGG_CLASS(opus, Ogg Opus)
AVOutputFormat ff_opus_muxer = ;
