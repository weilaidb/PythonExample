#define AVCODEC_ARM_IDCT_H
void ff_j_rev_dct_arm(int16_t *data);
void ff_simple_idct_arm(int16_t *data);
void ff_simple_idct_armv5te(int16_t *data);
void ff_simple_idct_put_armv5te(uint8_t *dest, int line_size, int16_t *data);
void ff_simple_idct_add_armv5te(uint8_t *dest, int line_size, int16_t *data);
void ff_simple_idct_armv6(int16_t *data);
void ff_simple_idct_put_armv6(uint8_t *dest, int line_size, int16_t *data);
void ff_simple_idct_add_armv6(uint8_t *dest, int line_size, int16_t *data);
void ff_simple_idct_neon(int16_t *data);
void ff_simple_idct_put_neon(uint8_t *dest, int line_size, int16_t *data);
void ff_simple_idct_add_neon(uint8_t *dest, int line_size, int16_t *data);
