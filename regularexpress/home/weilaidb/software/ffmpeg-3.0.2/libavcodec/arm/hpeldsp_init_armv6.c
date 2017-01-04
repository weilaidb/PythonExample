void ff_put_pixels16_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels16_x2_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels16_y2_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels16_x2_no_rnd_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels16_y2_no_rnd_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_avg_pixels16_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels8_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels8_x2_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels8_y2_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels8_x2_no_rnd_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_put_pixels8_y2_no_rnd_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
void ff_avg_pixels8_armv6(uint8_t *, const uint8_t *, ptrdiff_t, int);
av_cold void ff_hpeldsp_init_armv6(HpelDSPContext *c, int flags)
