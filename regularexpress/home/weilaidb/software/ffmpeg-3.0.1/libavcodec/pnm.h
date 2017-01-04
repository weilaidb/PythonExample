#define AVCODEC_PNM_H
typedef struct PNMContext  PNMContext;
int ff_pnm_decode_header(AVCodecContext *avctx, PNMContext * const s);
