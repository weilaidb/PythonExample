#define ROW_SHIFT 11
#define COL_SHIFT  6
#define RND0 65536
#define RND1 3597
#define RND2 2260
#define RND3 1203
#define RND4 0
#define RND5 120
#define RND6 512
#define RND7 512
static const int TAB04[] = ;
static const int TAB17[] = ;
static const int TAB26[] = ;
static const int TAB35[] = ;
static int idct_row(short *in, const int *const tab, int rnd)
#define TAN1  0x32EC
#define TAN2  0x6A0A
#define TAN3  0xAB0E
#define SQRT2 0x5A82
#define MULT(c, x, n)  (((c) * (x)) >> (n))
#define BUTTERFLY(a, b, tmp)     \
(tmp) = (a) + (b);           \
(b)   = (a) - (b);           \
(a)   = (tmp)
#define LOAD_BUTTERFLY(m1, m2, a, b, tmp, s)   \
(m1) = (s)[(a)] + (s)[(b)];                \
(m2) = (s)[(a)] - (s)[(b)]
static void idct_col_8(short *const in)
static void idct_col_4(short *const in)
static void idct_col_3(short *const in)
void ff_xvid_idct(int16_t *const in)
static void xvid_idct_put(uint8_t *dest, int line_size, int16_t *block)
static void xvid_idct_add(uint8_t *dest, int line_size, int16_t *block)
av_cold void ff_xvid_idct_init(IDCTDSPContext *c, AVCodecContext *avctx)
