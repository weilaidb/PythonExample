#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
vs16   ((vector signed short) (v))
vs32     ((vector signed int) (v))
vu8  ((vector unsigned char) (v))
vu16 ((vector unsigned short) (v))
vu32   ((vector unsigned int) (v))
#define C1     0.98078528040323044912618224
#define C2     0.92387953251128675612818319
#define C3     0.83146961230254523707878838
#define C4     0.70710678118654752440084436
#define C5     0.55557023301960222474283081
#define C6     0.38268343236508977172845998
#define C7     0.19509032201612826784828487
#define W0 -(2 * C2)
#define W1  (2 * C6)
#define W2 (M_SQRT2 * C6)
#define W3 (M_SQRT2 * C3)
#define W4 (M_SQRT2 * (-C1 + C3 + C5 - C7))
#define W5 (M_SQRT2 *  (C1 + C3 - C5 + C7))
#define W6 (M_SQRT2 *  (C1 + C3 + C5 - C7))
#define W7 (M_SQRT2 *  (C1 + C3 - C5 - C7))
#define W8 (M_SQRT2 *  (C7 - C3))
#define W9 (M_SQRT2 * (-C1 - C3))
#define WA (M_SQRT2 * (-C3 - C5))
#define WB (M_SQRT2 *  (C5 - C3))
static const vector float fdctconsts[3] = ;
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
vec_splat
FDCTROW           \
x0 = vec_add(b0, b7);         \
x7 = vec_sub(b0, b7);         \
x1 = vec_add(b1, b6);         \
x6 = vec_sub(b1, b6);         \
x2 = vec_add(b2, b5);         \
x5 = vec_sub(b2, b5);         \
x3 = vec_add(b3, b4);         \
x4 = vec_sub(b3, b4);         \
\
b7 = vec_add(x0, x3);         \
b1 = vec_add(x1, x2);         \
b0 = vec_add(b7, b1);         \
b4 = vec_sub(b7, b1);         \
\
b2   = vec_sub(x0, x3);         \
b6   = vec_sub(x1, x2);         \
b5   = vec_add(b6, b2);         \
cnst = LD_W2;                                                   \
b5   = vec_madd(cnst, b5, mzero);         \
cnst = LD_W1;                                                   \
b2   = vec_madd(cnst, b2, b5);    \
cnst = LD_W0;                                                   \
b6   = vec_madd(cnst, b6, b5);    \
\
x0   = vec_add(x4, x7);         \
x1   = vec_add(x5, x6);         \
x2   = vec_add(x4, x6);         \
x3   = vec_add(x5, x7);         \
x8   = vec_add(x2, x3);         \
cnst = LD_W3;                                                   \
x8   = vec_madd(cnst, x8, mzero);         \
\
cnst = LD_W8;                                                   \
x0   = vec_madd(cnst, x0, mzero);             \
cnst = LD_W9;                                                   \
x1   = vec_madd(cnst, x1, mzero);             \
cnst = LD_WA;                                                   \
x2   = vec_madd(cnst, x2, x8);    \
cnst = LD_WB;                                                   \
x3   = vec_madd(cnst, x3, x8);    \
\
cnst = LD_W4;                                                   \
b7   = vec_madd(cnst, x4, x0);    \
cnst = LD_W5;                                                   \
b5   = vec_madd(cnst, x5, x1);    \
cnst = LD_W6;                                                   \
b3   = vec_madd(cnst, x6, x1);    \
cnst = LD_W7;                                                   \
b1   = vec_madd(cnst, x7, x0);    \
\
b7 = vec_add(b7, x2);         \
b5 = vec_add(b5, x3);         \
b3 = vec_add(b3, x2);         \
b1 = vec_add(b1, x3)         \
FDCTCOL           \
x0 = vec_add(b0, b7);         \
x7 = vec_sub(b0, b7);         \
x1 = vec_add(b1, b6);         \
x6 = vec_sub(b1, b6);         \
x2 = vec_add(b2, b5);         \
x5 = vec_sub(b2, b5);         \
x3 = vec_add(b3, b4);         \
x4 = vec_sub(b3, b4);         \
\
b7 = vec_add(x0, x3);         \
b1 = vec_add(x1, x2);         \
b0 = vec_add(b7, b1);         \
b4 = vec_sub(b7, b1);         \
\
b2   = vec_sub(x0, x3);         \
b6   = vec_sub(x1, x2);         \
b5   = vec_add(b6, b2);         \
cnst = LD_W2;                                                   \
b5   = vec_madd(cnst, b5, mzero);         \
cnst = LD_W1;                                                   \
b2   = vec_madd(cnst, b2, b5);    \
cnst = LD_W0;                                                   \
b6   = vec_madd(cnst, b6, b5);    \
\
x0   = vec_add(x4, x7);         \
x1   = vec_add(x5, x6);         \
x2   = vec_add(x4, x6);         \
x3   = vec_add(x5, x7);         \
x8   = vec_add(x2, x3);         \
cnst = LD_W3;                                                   \
x8   = vec_madd(cnst, x8, mzero);         \
\
cnst = LD_W8;                                                   \
x0   = vec_madd(cnst, x0, mzero);             \
cnst = LD_W9;                                                   \
x1   = vec_madd(cnst, x1, mzero);             \
cnst = LD_WA;                                                   \
x2   = vec_madd(cnst, x2, x8);    \
cnst = LD_WB;                                                   \
x3   = vec_madd(cnst, x3, x8);    \
\
cnst = LD_W4;                                                   \
b7   = vec_madd(cnst, x4, x0);    \
cnst = LD_W5;                                                   \
b5   = vec_madd(cnst, x5, x1);    \
cnst = LD_W6;                                                   \
b3   = vec_madd(cnst, x6, x1);    \
cnst = LD_W7;                                                   \
b1   = vec_madd(cnst, x7, x0);    \
\
b7 = vec_add(b7, x2);             \
b5 = vec_add(b5, x3);             \
b3 = vec_add(b3, x2);             \
b1 = vec_add(b1, x3)             \
ff_fdct_altivec
ff_fdctdsp_init_ppc
