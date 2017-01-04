#define DP_EBIAS	1023
#define DP_EMIN		(-1022)
#define DP_EMAX		1023
#define SP_EBIAS	127
#define SP_EMIN		(-126)
#define SP_EMAX		127
#if (defined(BYTE_ORDER) && BYTE_ORDER == LITTLE_ENDIAN) || defined(__MIPSEL__)
#define SPSTR(s, b, m)
#define DPSTR(s, b, mh, ml)
#define SPSTR(s, b, m)
#define DPSTR(s, b, mh, ml)
const struct ieee754dp_konst __ieee754dp_spcvals[] = ;
const struct ieee754sp_konst __ieee754sp_spcvals[] = ;
int ieee754si_xcpt(int r, const char *op, ...)
s64 ieee754di_xcpt(s64 r, const char *op, ...)
