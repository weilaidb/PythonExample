#if !defined(AVCODEC_DCT_H) && (!defined(FFT_FLOAT) || FFT_FLOAT)
#define AVCODEC_DCT_H
struct DCTContext ;
int  ff_dct_init(DCTContext *s, int nbits, enum DCTTransformType type);
void ff_dct_end (DCTContext *s);
void ff_dct_init_x86(DCTContext *s);
void ff_fdct_ifast(int16_t *data);
void ff_fdct_ifast248(int16_t *data);
void ff_jpeg_fdct_islow_8(int16_t *data);
void ff_jpeg_fdct_islow_10(int16_t *data);
void ff_fdct248_islow_8(int16_t *data);
void ff_fdct248_islow_10(int16_t *data);
void ff_j_rev_dct(int16_t *data);
void ff_j_rev_dct4(int16_t *data);
void ff_j_rev_dct2(int16_t *data);
void ff_j_rev_dct1(int16_t *data);
void ff_jref_idct_put(uint8_t *dest, int line_size, int16_t *block);
void ff_jref_idct_add(uint8_t *dest, int line_size, int16_t *block);
