#define AVCODEC_IMDCT15_H
typedef struct IMDCT15Context  IMDCT15Context;
int ff_imdct15_init(IMDCT15Context **s, int N);
void ff_imdct15_uninit(IMDCT15Context **s);
void ff_imdct15_init_aarch64(IMDCT15Context *s);
