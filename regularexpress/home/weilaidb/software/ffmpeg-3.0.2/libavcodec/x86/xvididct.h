#define AVCODEC_X86_XVIDIDCT_H
void ff_xvid_idct_mmx(short *block);
void ff_xvid_idct_mmx_put(uint8_t *dest, int line_size, int16_t *block);
void ff_xvid_idct_mmx_add(uint8_t *dest, int line_size, int16_t *block);
void ff_xvid_idct_mmxext(short *block);
void ff_xvid_idct_mmxext_put(uint8_t *dest, int line_size, int16_t *block);
void ff_xvid_idct_mmxext_add(uint8_t *dest, int line_size, int16_t *block);
void ff_xvid_idct_sse2(short *block);
void ff_xvid_idct_put_sse2(uint8_t *dest, int line_size, short *block);
void ff_xvid_idct_add_sse2(uint8_t *dest, int line_size, short *block);
