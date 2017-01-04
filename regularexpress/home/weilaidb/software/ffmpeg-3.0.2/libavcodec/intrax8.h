#define AVCODEC_INTRAX8_H
typedef struct IntraX8Context  IntraX8Context;
void ff_intrax8_common_init(IntraX8Context * w, MpegEncContext * const s);
void ff_intrax8_common_end(IntraX8Context * w);
int  ff_intrax8_decode_picture(IntraX8Context * w, int quant, int halfpq);
