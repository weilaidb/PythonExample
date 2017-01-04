#define MAX_EXTRADATA_SIZE 1024
typedef struct LATMContext  LATMContext;
static const AVOption options[] = ;
static const AVClass latm_muxer_class = ;
static int latm_decode_extradata(LATMContext *ctx, uint8_t *buf, int size)
static int latm_write_header(AVFormatContext *s)
static void latm_write_frame_header(AVFormatContext *s, PutBitContext *bs)
static int latm_write_packet(AVFormatContext *s, AVPacket *pkt)
AVOutputFormat ff_latm_muxer = ;
