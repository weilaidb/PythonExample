static const uint32_t pixel_mask[3] = ;
#define SIZEOF_PIXEL ((bit_depth + 7) / 8)
#define randomize_buffers()                                        \
do  while (0)
static void check_ipred(void)
#undef randomize_buffers
#define randomize_buffers() \
do  while(0)
static void fwht_1d(double *out, const double *in, int sz)
static void fdct_1d(double *out, const double *in, int sz)
static void fadst4_1d(double *out, const double *in, int sz)
static void fadst_1d(double *out, const double *in, int sz)
typedef void (*ftx1d_fn)(double *out, const double *in, int sz);
static void ftx_2d(double *out, const double *in, enum TxfmMode tx,
enum TxfmType txtp, int sz)
static void ftx(int16_t *buf, enum TxfmMode tx,
enum TxfmType txtp, int sz, int bit_depth)
static int copy_subcoefs(int16_t *out, const int16_t *in, enum TxfmMode tx,
enum TxfmType txtp, int sz, int sub, int bit_depth)
static int iszero(const int16_t *c, int sz)
#define SIZEOF_COEF (2 * ((bit_depth + 7) / 8))
static void check_itxfm(void)
#undef randomize_buffers
#define setpx(a,b,c) \
do  while (0)
#define setdx(a,b,c,d) setpx(a,b,c-(d)+(rnd()%((d)*2+1)))
#define setsx(a,b,c,d) setdx(a,b,c,(d) << (bit_depth - 8))
static void randomize_loopfilter_buffers(int bidx, int lineoff, int str,
int bit_depth, int dir, const int *E,
const int *F, const int *H, const int *I,
uint8_t *buf0, uint8_t *buf1)
#define randomize_buffers(bidx, lineoff, str) \
randomize_loopfilter_buffers(bidx, lineoff, str, bit_depth, dir, \
E, F, H, I, buf0, buf1)
static void check_loopfilter(void)
#undef setsx
#undef setpx
#undef setdx
#undef randomize_buffers
#define DST_BUF_SIZE (size * size * SIZEOF_PIXEL)
#define SRC_BUF_STRIDE 72
#define SRC_BUF_SIZE ((size + 7) * SRC_BUF_STRIDE * SIZEOF_PIXEL)
#define src (buf + 3 * SIZEOF_PIXEL * (SRC_BUF_STRIDE + 1))
#define randomize_buffers()                               \
do  while (0)
static void check_mc(void)
void checkasm_check_vp9dsp(void)
