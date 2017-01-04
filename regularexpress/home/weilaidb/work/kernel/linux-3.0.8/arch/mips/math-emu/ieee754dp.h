#define assert(expr) ((void)0)
#define XDPSRS(v,rs)	\
((rs > (DP_MBITS+3))?1:((v) >> (rs)) | ((v) << (64-(rs)) != 0))
#define XDPSRSX1() \
(xe++, (xm = (xm >> 1) | (xm & 1)))
#define XDPSRS1(v)	\
(((v) >> 1) | ((v) & 1))
#define DPDNORMx(m,e) \
while( (m >> DP_MBITS) == 0)
#define DPDNORMX	DPDNORMx(xm, xe)
#define DPDNORMY	DPDNORMx(ym, ye)
static inline ieee754dp builddp(int s, int bx, u64 m)
extern int ieee754dp_isnan(ieee754dp);
extern int ieee754dp_issnan(ieee754dp);
extern int ieee754si_xcpt(int, const char *, ...);
extern s64 ieee754di_xcpt(s64, const char *, ...);
extern ieee754dp ieee754dp_xcpt(ieee754dp, const char *, ...);
extern ieee754dp ieee754dp_nanxcpt(ieee754dp, const char *, ...);
extern ieee754dp ieee754dp_bestnan(ieee754dp, ieee754dp);
extern ieee754dp ieee754dp_format(int, int, u64);
#define DPNORMRET2(s, e, m, name, a0, a1) \
#define DPNORMRET1(s, e, m, name, a0)  DPNORMRET2(s, e, m, name, a0, a0)
