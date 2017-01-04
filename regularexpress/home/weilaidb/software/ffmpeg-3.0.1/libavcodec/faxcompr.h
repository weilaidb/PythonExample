#define AVCODEC_FAXCOMPR_H
void ff_ccitt_unpack_init(void);
int ff_ccitt_unpack(AVCodecContext *avctx,
const uint8_t *src, int srcsize,
uint8_t *dst, int height, int stride,
enum TiffCompr compr, int opts);
