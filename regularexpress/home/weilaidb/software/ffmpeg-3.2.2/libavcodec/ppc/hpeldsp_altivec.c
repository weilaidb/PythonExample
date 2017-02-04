#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
ff_put_pixels16_altivec
op_avg  a = ( ((a)|(b)) - ((((a)^(b))&0xFEFEFEFEUL)>>1) )
ff_avg_pixels16_altivec
avg_pixels8_altivec
put_pixels8_xy2_altivec
put_no_rnd_pixels8_xy2_altivec
put_pixels16_xy2_altivec
put_no_rnd_pixels16_xy2_altivec
avg_pixels8_xy2_altivec
ff_hpeldsp_init_ppc
