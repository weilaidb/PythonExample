#define assert(expr) ((void)0)
#define SPXSRSXn(rs) \
(xe += rs, \
xm = (rs > (SP_MBITS+3))?1:((xm) >> (rs)) | ((xm) << (32-(rs)) != 0))
#define SPXSRSX1() \
(xe++, (xm = (xm >> 1) | (xm & 1)))
#define SPXSRSYn(rs) \
(ye+=rs, \
ym = (rs > (SP_MBITS+3))?1:((ym) >> (rs)) | ((ym) << (32-(rs)) != 0))
#define SPXSRSY1() \
(ye++, (ym = (ym >> 1) | (ym & 1)))
#define SPDNORMx(m,e) \
while( (m >> SP_MBITS) == 0)
#define SPDNORMX	SPDNORMx(xm, xe)
#define SPDNORMY	SPDNORMx(ym, ye)
static inline ieee754sp buildsp(int s, int bx, unsigned m)
extern int ieee754sp_isnan(ieee754sp);
extern int ieee754sp_issnan(ieee754sp);
extern int ieee754si_xcpt(int, const char *, ...);
extern s64 ieee754di_xcpt(s64, const char *, ...);
extern ieee754sp ieee754sp_xcpt(ieee754sp, const char *, ...);
extern ieee754sp ieee754sp_nanxcpt(ieee754sp, const char *, ...);
extern ieee754sp ieee754sp_bestnan(ieee754sp, ieee754sp);
extern ieee754sp ieee754sp_format(int, int, unsigned);
#define SPNORMRET2(s, e, m, name, a0, a1) \
#define SPNORMRET1(s, e, m, name, a0)  SPNORMRET2(s, e, m, name, a0, a0)
