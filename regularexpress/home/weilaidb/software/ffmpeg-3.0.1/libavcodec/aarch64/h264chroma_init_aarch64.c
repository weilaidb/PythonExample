void ff_put_h264_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_put_h264_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_put_h264_chroma_mc2_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_avg_h264_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_avg_h264_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_avg_h264_chroma_mc2_neon(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
av_cold void ff_h264chroma_init_aarch64(H264ChromaContext *c, int bit_depth)
