#define AVCODEC_X86_SIMPLE_IDCT_H
void ff_simple_idct_mmx(int16_t *block);
void ff_simple_idct_add_mmx(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_put_mmx(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct10_sse2(int16_t *block);
void ff_simple_idct10_avx(int16_t *block);
void ff_simple_idct10_put_sse2(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct10_put_avx(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct12_sse2(int16_t *block);
void ff_simple_idct12_avx(int16_t *block);
void ff_simple_idct12_put_sse2(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct12_put_avx(uint8_t *dest, int line_size, int16_t *block);
