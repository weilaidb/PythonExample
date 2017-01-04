#define AVCODEC_MSRLEDEC_H
int ff_msrle_decode(AVCodecContext *avctx, AVFrame *pic,
int depth, GetByteContext *gb);
