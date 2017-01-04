#define AVCODEC_INTRAX8_H
typedef struct IntraX8Context  IntraX8Context;
int ff_intrax8_common_init(AVCodecContext *avctx,
IntraX8Context *w, IDCTDSPContext *idsp,
int16_t (*block)[64],
int block_last_index[12],
int mb_width, int mb_height);
void ff_intrax8_common_end(IntraX8Context *w);
int ff_intrax8_decode_picture(IntraX8Context *w, Picture *pict,
GetBitContext *gb, int *mb_x, int *mb_y,
int quant, int halfpq,
int loopfilter, int lowdelay);
