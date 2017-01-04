#define AVCODEC_MIPS_PIXBLOCKDSP_MIPS_H
void ff_diff_pixels_msa(int16_t *av_restrict block, const uint8_t *src1,
const uint8_t *src2, int stride);
void ff_get_pixels_16_msa(int16_t *restrict dst, const uint8_t *src,
ptrdiff_t stride);
void ff_get_pixels_8_msa(int16_t *restrict dst, const uint8_t *src,
ptrdiff_t stride);
void ff_get_pixels_8_mmi(int16_t *av_restrict block, const uint8_t *pixels,
ptrdiff_t line_size);
void ff_diff_pixels_mmi(int16_t *av_restrict block, const uint8_t *src1,
const uint8_t *src2, int stride);
