#define AVCODEC_SIMPLE_IDCT_H
void ff_simple_idct_put_8(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_add_8(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_8(int16_t *block);
void ff_simple_idct_put_10(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_add_10(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_10(int16_t *block);
void ff_simple_idct_put_12(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_add_12(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct_12(int16_t *block);
void ff_prores_idct(int16_t *block, const int16_t *qmat);
void ff_simple_idct248_put(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct84_add(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct48_add(uint8_t *dest, int line_size, int16_t *block);
void ff_simple_idct44_add(uint8_t *dest, int line_size, int16_t *block);
