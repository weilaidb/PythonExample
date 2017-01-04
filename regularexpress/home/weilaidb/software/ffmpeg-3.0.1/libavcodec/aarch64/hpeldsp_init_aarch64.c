void     ff_put_pixels16_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels16_x2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels16_y2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_xy2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void      ff_put_pixels8_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_put_pixels8_x2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_put_pixels8_y2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels8_xy2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels16_x2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels16_y2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_xy2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_put_pixels8_x2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_put_pixels8_y2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_put_pixels8_xy2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void     ff_avg_pixels16_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_avg_pixels16_x2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_avg_pixels16_y2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_xy2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void      ff_avg_pixels8_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_avg_pixels8_x2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void   ff_avg_pixels8_y2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_avg_pixels8_xy2_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_avg_pixels16_x2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void  ff_avg_pixels16_y2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_xy2_no_rnd_neon(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
av_cold void ff_hpeldsp_init_aarch64(HpelDSPContext *c, int flags)
