typedef struct EightSvxContext  EightSvxContext;
static const int8_t fibonacci[16]   = ;
static const int8_t exponential[16] = ;
#define MAX_FRAME_SIZE 2048
static void delta_decode(uint8_t *dst, const uint8_t *src, int src_size,
uint8_t *state, const int8_t *table)
static int eightsvx_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int eightsvx_decode_init(AVCodecContext *avctx)
static av_cold int eightsvx_decode_close(AVCodecContext *avctx)
#if CONFIG_EIGHTSVX_FIB_DECODER
AVCodec ff_eightsvx_fib_decoder = ;
#if CONFIG_EIGHTSVX_EXP_DECODER
AVCodec ff_eightsvx_exp_decoder = ;
