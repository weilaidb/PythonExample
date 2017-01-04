#define AVCODEC_DSD_H
#define HTAPS   48
#define FIFOSIZE 16
#define FIFOMASK (FIFOSIZE - 1)
#if FIFOSIZE * 8 < HTAPS * 2
#error "FIFOSIZE too small"
typedef struct DSDContext  DSDContext;
void ff_init_dsd_data(void);
void ff_dsd2pcm_translate(DSDContext* s, size_t samples, int lsbf,
const unsigned char *src, ptrdiff_t src_stride,
float *dst, ptrdiff_t dst_stride);
