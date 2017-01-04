void ff_put_h264_chroma_mc8_rnd_mmx  (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc8_rnd_mmxext(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc8_rnd_3dnow(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_put_h264_chroma_mc4_mmx      (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc4_mmxext   (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc4_3dnow    (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_put_h264_chroma_mc2_mmxext   (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc2_mmxext   (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_put_h264_chroma_mc8_rnd_ssse3(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_put_h264_chroma_mc4_ssse3    (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc8_rnd_ssse3(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_h264_chroma_mc4_ssse3    (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
#define CHROMA_MC(OP, NUM, DEPTH, OPT)                                  \
void ff_ ## OP ## _h264_chroma_mc ## NUM ## _ ## DEPTH ## _ ## OPT      \
(uint8_t *dst, uint8_t *src,      \
int stride, int h, int x, int y);
CHROMA_MC(put, 2, 10, mmxext)
CHROMA_MC(avg, 2, 10, mmxext)
CHROMA_MC(put, 4, 10, mmxext)
CHROMA_MC(avg, 4, 10, mmxext)
CHROMA_MC(put, 8, 10, sse2)
CHROMA_MC(avg, 8, 10, sse2)
CHROMA_MC(put, 8, 10, avx)
CHROMA_MC(avg, 8, 10, avx)
av_cold void ff_h264chroma_init_x86(H264ChromaContext *c, int bit_depth)
