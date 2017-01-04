#define AVCODEC_MIPS_H264CHROMA_MIPS_H
void ff_put_h264_chroma_mc8_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_put_h264_chroma_mc4_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_put_h264_chroma_mc2_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_avg_h264_chroma_mc8_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_avg_h264_chroma_mc4_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_avg_h264_chroma_mc2_msa(uint8_t *dst, uint8_t *src, int stride,
int height, int x, int y);
void ff_put_h264_chroma_mc8_mmi(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_avg_h264_chroma_mc8_mmi(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_put_h264_chroma_mc4_mmi(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
void ff_avg_h264_chroma_mc4_mmi(uint8_t *dst, uint8_t *src, int stride,
int h, int x, int y);
