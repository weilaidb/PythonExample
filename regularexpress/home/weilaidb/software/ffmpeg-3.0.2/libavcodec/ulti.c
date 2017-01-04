typedef struct UltimotionDecodeContext  UltimotionDecodeContext;
static av_cold int ulti_decode_init(AVCodecContext *avctx)
static av_cold int ulti_decode_end(AVCodecContext *avctx)
static const int block_coords[8] =
;
static const int angle_by_index[4] = ;
static const uint8_t ulti_lumas[64] =
;
static const uint8_t ulti_chromas[16] =
;
static void ulti_convert_yuv(AVFrame *frame, int x, int y,
uint8_t *luma,int chroma)
static void ulti_pattern(AVFrame *frame, int x, int y,
int f0, int f1, int Y0, int Y1, int chroma)
static void ulti_grad(AVFrame *frame, int x, int y, uint8_t *Y, int chroma, int angle)
static int ulti_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_ulti_decoder = ;
