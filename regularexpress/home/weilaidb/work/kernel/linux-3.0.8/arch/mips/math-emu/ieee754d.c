#define DP_EBIAS	1023
#define DP_EMIN		(-1022)
#define DP_EMAX		1023
#define DP_FBITS	52
#define SP_EBIAS	127
#define SP_EMIN		(-126)
#define SP_EMAX		127
#define SP_FBITS	23
#define DP_MBIT(x)	((u64)1 << (x))
#define DP_HIDDEN_BIT	DP_MBIT(DP_FBITS)
#define DP_SIGN_BIT	DP_MBIT(63)
#define SP_MBIT(x)	((u32)1 << (x))
#define SP_HIDDEN_BIT	SP_MBIT(SP_FBITS)
#define SP_SIGN_BIT	SP_MBIT(31)
#define SPSIGN(sp)	(sp.parts.sign)
#define SPBEXP(sp)	(sp.parts.bexp)
#define SPMANT(sp)	(sp.parts.mant)
#define DPSIGN(dp)	(dp.parts.sign)
#define DPBEXP(dp)	(dp.parts.bexp)
#define DPMANT(dp)	(dp.parts.mant)
ieee754dp ieee754dp_dump(char *m, ieee754dp x)
ieee754sp ieee754sp_dump(char *m, ieee754sp x)
