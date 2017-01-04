typedef struct FlashSVContext  FlashSVContext;
static int copy_region_enc(uint8_t *sptr, uint8_t *dptr, int dx, int dy,
int h, int w, int stride, uint8_t *pfptr)
static av_cold int flashsv_encode_end(AVCodecContext *avctx)
static av_cold int flashsv_encode_init(AVCodecContext *avctx)
static int encode_bitstream(FlashSVContext *s, const AVFrame *p, uint8_t *buf,
int buf_size, int block_width, int block_height,
uint8_t *previous_frame, int *I_frame)
static int flashsv_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
AVCodec ff_flashsv_encoder = ;
