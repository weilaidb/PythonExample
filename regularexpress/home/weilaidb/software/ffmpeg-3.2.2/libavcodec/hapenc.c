#define HAP_MAX_CHUNKS 64
enum HapHeaderLength ;
static void compress_texture(AVCodecContext *avctx, const AVFrame *f)
static void hap_write_section_header(PutByteContext *pbc,
enum HapHeaderLength header_length,
int section_length,
enum HapSectionType section_type)
static int hap_compress_frame(AVCodecContext *avctx, uint8_t *dst)
static int hap_decode_instructions_length(HapContext *ctx)
static int hap_header_length(HapContext *ctx)
static void hap_write_frame_header(HapContext *ctx, uint8_t *dst, int frame_length)
static int hap_encode(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int hap_init(AVCodecContext *avctx)
static av_cold int hap_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(HapContext, x)
#define FLAGS     AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass hapenc_class = ;
AVCodec ff_hap_encoder = ;
