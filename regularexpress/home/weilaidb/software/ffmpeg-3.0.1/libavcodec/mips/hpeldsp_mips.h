#define AVCODEC_MIPS_HPELDSP_MIPS_H
void ff_put_pixels16_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels16_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels8_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels4_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels4_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels4_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_pixels4_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels16_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_put_no_rnd_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels16_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels16_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels16_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels16_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels8_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels8_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels8_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels8_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels4_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels4_x2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels4_y2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
void ff_avg_pixels4_xy2_msa(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int32_t h);
