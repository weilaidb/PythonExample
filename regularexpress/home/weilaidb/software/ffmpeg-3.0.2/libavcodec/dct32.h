#define AVCODEC_DCT32_H
void ff_dct32_float(float *dst, const float *src);
void ff_dct32_fixed(int *dst, const int *src);
