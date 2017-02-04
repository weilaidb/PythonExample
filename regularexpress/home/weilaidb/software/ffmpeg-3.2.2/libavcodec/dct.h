#if !defined(AVCODEC_DCT_H) && (!defined(FFT_FLOAT) || FFT_FLOAT)
#define AVCODEC_DCT_H
struct DCTContext ;
ff_dct_init;
void ff_dct_end (DCTContext *s);
ff_dct_init_x86;
ff_fdct_ifast;
ff_fdct_ifast248;
ff_jpeg_fdct_islow_8;
ff_jpeg_fdct_islow_10;
ff_fdct248_islow_8;
ff_fdct248_islow_10;
ff_j_rev_dct;
ff_j_rev_dct4;
ff_j_rev_dct2;
ff_j_rev_dct1;
ff_jref_idct_put;
ff_jref_idct_add;
