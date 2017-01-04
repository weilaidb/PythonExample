#define AVCODEC_BGMC_H
int ff_bgmc_init(AVCodecContext *avctx, uint8_t **cf_lut, int **cf_lut_status);
void ff_bgmc_end(uint8_t **cf_lut, int **cf_lut_status);
void ff_bgmc_decode_init(GetBitContext *gb,
unsigned int *h, unsigned int *l, unsigned int *v);
void ff_bgmc_decode_end(GetBitContext *gb);
void ff_bgmc_decode(GetBitContext *gb, unsigned int num, int32_t *dst,
int delta, unsigned int sx,
unsigned int *h, unsigned int *l, unsigned int *v,
uint8_t *cf_lut, int *cf_lut_status);
