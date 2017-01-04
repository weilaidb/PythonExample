static int msrle_decode_pal4(AVCodecContext *avctx, AVFrame *pic,
GetByteContext *gb)
static int msrle_decode_8_16_24_32(AVCodecContext *avctx, AVFrame *pic,
int depth, GetByteContext *gb)
int ff_msrle_decode(AVCodecContext *avctx, AVFrame *pic,
int depth, GetByteContext *gb)
