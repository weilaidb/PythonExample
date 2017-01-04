#define DP_EBIAS	1023
#define DP_EMIN		(-1022)
#define DP_EMAX		1023
#define DP_MBITS	52
#define SP_EBIAS	127
#define SP_EMIN		(-126)
#define SP_EMAX		127
#define SP_MBITS	23
#define DP_MBIT(x)	((u64)1 << (x))
#define DP_HIDDEN_BIT	DP_MBIT(DP_MBITS)
#define DP_SIGN_BIT	DP_MBIT(63)
#define SP_MBIT(x)	((u32)1 << (x))
#define SP_HIDDEN_BIT	SP_MBIT(SP_MBITS)
#define SP_SIGN_BIT	SP_MBIT(31)
#define SPSIGN(sp)	(sp.parts.sign)
#define SPBEXP(sp)	(sp.parts.bexp)
#define SPMANT(sp)	(sp.parts.mant)
#define DPSIGN(dp)	(dp.parts.sign)
#define DPBEXP(dp)	(dp.parts.bexp)
#define DPMANT(dp)	(dp.parts.mant)
#define CLPAIR(x, y)	((x)*6+(y))
#define CLEARCX	\
(ieee754_csr.cx = 0)
#define SETCX(x) \
(ieee754_csr.cx |= (x), ieee754_csr.sx |= (x))
#define SETANDTESTCX(x) \
(SETCX(x), ieee754_csr.mx & (x))
#define TSTX()	\
(ieee754_csr.cx & ieee754_csr.mx)
#define COMPXSP \
unsigned xm; int xe; int xs __maybe_unused; int xc
#define COMPYSP \
unsigned ym; int ye; int ys; int yc
#define EXPLODESP(v, vc, vs, ve, vm) \
#define EXPLODEXSP EXPLODESP(x, xc, xs, xe, xm)
#define EXPLODEYSP EXPLODESP(y, yc, ys, ye, ym)
#define COMPXDP \
u64 xm; int xe; int xs __maybe_unused; int xc
#define COMPYDP \
u64 ym; int ye; int ys; int yc
#define EXPLODEDP(v, vc, vs, ve, vm) \
#define EXPLODEXDP EXPLODEDP(x, xc, xs, xe, xm)
#define EXPLODEYDP EXPLODEDP(y, yc, ys, ye, ym)
#define FLUSHDP(v, vc, vs, ve, vm) \
if(vc==IEEE754_CLASS_DNORM)
#define FLUSHSP(v, vc, vs, ve, vm) \
if(vc==IEEE754_CLASS_DNORM)
#define FLUSHXDP FLUSHDP(x, xc, xs, xe, xm)
#define FLUSHYDP FLUSHDP(y, yc, ys, ye, ym)
#define FLUSHXSP FLUSHSP(x, xc, xs, xe, xm)
#define FLUSHYSP FLUSHSP(y, yc, ys, ye, ym)
