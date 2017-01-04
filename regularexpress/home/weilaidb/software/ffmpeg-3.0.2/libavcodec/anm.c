typedef struct AnmContext  AnmContext;
static av_cold int decode_init(AVCodecContext *avctx)
static inline int op(uint8_t **dst, const uint8_t *dst_end,
GetByteContext *gb,
int pixel, int count,
int *x, int width, int linesize)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_anm_decoder = ;
