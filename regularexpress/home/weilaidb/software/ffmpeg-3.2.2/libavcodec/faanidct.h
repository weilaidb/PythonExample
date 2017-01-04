#define AVCODEC_FAANIDCT_H
void ff_faanidct(int16_t block[64]);
void ff_faanidct_add(uint8_t *dest, int line_size, int16_t block[64]);
void ff_faanidct_put(uint8_t *dest, int line_size, int16_t block[64]);
