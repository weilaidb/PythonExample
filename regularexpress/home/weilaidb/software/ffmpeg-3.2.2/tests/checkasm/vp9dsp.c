static const uint32_t pixel_mask[3] = ;
#define SIZEOF_PIXEL ((bit_depth + 7) / 8)
randomize_buffers                                        \
do  while (0)
check_ipred
#undef randomize_buffers
randomize_buffers \
while
fwht_1d
fdct_1d
fadst4_1d
fadst_1d
typedef void (*ftx1d_fn)(double *out, const double *in, int sz);
ftx_2d
ftx
copy_subcoefs
iszero
#define SIZEOF_COEF (2 * ((bit_depth + 7) / 8))
check_itxfm
#undef randomize_buffers
setpx \
do  while (0)
setdx setpx(a,b,c-(d)+(rnd()%((d)*2+1)))
setsx setdx(a,b,c,(d) << (bit_depth - 8))
randomize_loopfilter_buffers
randomize_buffers \
randomize_loopfilter_buffers(bidx, lineoff, str, bit_depth, dir, \
E, F, H, I, buf0, buf1)
check_loopfilter
#undef setsx
#undef setpx
#undef setdx
#undef randomize_buffers
#define DST_BUF_SIZE (size * size * SIZEOF_PIXEL)
#define SRC_BUF_STRIDE 72
#define SRC_BUF_SIZE ((size + 7) * SRC_BUF_STRIDE * SIZEOF_PIXEL)
#define src (buf + 3 * SIZEOF_PIXEL * (SRC_BUF_STRIDE + 1))
randomize_buffers                               \
do  while (0)
check_mc
checkasm_check_vp9dsp
