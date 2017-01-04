#define AVCODEC_X86_FDCT_H
void ff_fdct_mmx(int16_t *block);
void ff_fdct_mmxext(int16_t *block);
void ff_fdct_sse2(int16_t *block);
