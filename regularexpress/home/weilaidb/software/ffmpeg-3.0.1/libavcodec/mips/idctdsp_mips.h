#define AVCODEC_MIPS_IDCTDSP_MIPS_H
void ff_put_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size);
void ff_put_signed_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size);
void ff_add_pixels_clamped_msa(const int16_t *block,
uint8_t *av_restrict pixels,
ptrdiff_t line_size);
void ff_j_rev_dct_msa(int16_t *data);
void ff_jref_idct_put_msa(uint8_t *dest, int32_t stride, int16_t *block);
void ff_jref_idct_add_msa(uint8_t *dest, int32_t stride, int16_t *block);
void ff_simple_idct_msa(int16_t *block);
void ff_simple_idct_put_msa(uint8_t *dest, int32_t stride_dst, int16_t *block);
void ff_simple_idct_add_msa(uint8_t *dest, int32_t stride_dst, int16_t *block);
void ff_put_pixels_clamped_mmi(const int16_t *block,
uint8_t *av_restrict pixels, ptrdiff_t line_size);
void ff_put_signed_pixels_clamped_mmi(const int16_t *block,
uint8_t *av_restrict pixels, ptrdiff_t line_size);
void ff_add_pixels_clamped_mmi(const int16_t *block,
uint8_t *av_restrict pixels, ptrdiff_t line_size);
void ff_simple_idct_mmi(int16_t *block);
void ff_simple_idct_put_mmi(uint8_t *dest, int32_t line_size, int16_t *block);
void ff_simple_idct_add_mmi(uint8_t *dest, int32_t line_size, int16_t *block);
