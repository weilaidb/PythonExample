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
idct_row
#define TAN1  0x32EC
#define TAN2  0x6A0A
#define TAN3  0xAB0E
#define SQRT2 0x5A82
MULT  (((c) * (x)) >> (n))
BUTTERFLY     \
(tmp) = (a) + (b);           \
(b)   = (a) - (b);           \
(a)   = (tmp)
LOAD_BUTTERFLY   \
(m1) = (s)[(a)] + (s)[(b)];                \
(m2) = (s)[(a)] - (s)[(b)]
idct_col_8
idct_col_4
idct_col_3
ff_xvid_idct
xvid_idct_put
xvid_idct_add
ff_xvid_idct_init
