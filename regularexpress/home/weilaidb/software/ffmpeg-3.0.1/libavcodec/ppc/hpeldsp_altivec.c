#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
void ff_put_pixels16_altivec(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h)
#define op_avg(a,b)  a = ( ((a)|(b)) - ((((a)^(b))&0xFEFEFEFEUL)>>1) )
void ff_avg_pixels16_altivec(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h)
static void avg_pixels8_altivec(uint8_t * block, const uint8_t * pixels, ptrdiff_t line_size, int h)
static void put_pixels8_xy2_altivec(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h)
static void put_no_rnd_pixels8_xy2_altivec(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h)
static void put_pixels16_xy2_altivec(uint8_t * block, const uint8_t * pixels, ptrdiff_t line_size, int h)
static void put_no_rnd_pixels16_xy2_altivec(uint8_t * block, const uint8_t * pixels, ptrdiff_t line_size, int h)
static void avg_pixels8_xy2_altivec(uint8_t *block, const uint8_t *pixels, ptrdiff_t line_size, int h)
av_cold void ff_hpeldsp_init_ppc(HpelDSPContext *c, int flags)
