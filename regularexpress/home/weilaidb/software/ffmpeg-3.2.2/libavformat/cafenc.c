typedef struct  CAFContext;
static uint32_t codec_flags(enum AVCodecID codec_id)
static uint32_t samples_per_packet(enum AVCodecID codec_id, int channels, int block_align)
static int caf_write_header(AVFormatContext *s)
static int caf_write_packet(AVFormatContext *s, AVPacket *pkt)
static int caf_write_trailer(AVFormatContext *s)
AVOutputFormat ff_caf_muxer = ;
