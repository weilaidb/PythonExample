#if !defined(XMACROS_H)
#define XMACROS_H
#define XDL_MIN(a, b) ((a) < (b) ? (a): (b))
#define XDL_MAX(a, b) ((a) > (b) ? (a): (b))
#define XDL_ABS(v) ((v) >= 0 ? (v): -(v))
#define XDL_ISDIGIT(c) ((c) >= '0' && (c) <= '9')
#define XDL_ISSPACE(c) (isspace((unsigned char)(c)))
#define XDL_ADDBITS(v,b)	((v) + ((v) >> (b)))
#define XDL_MASKBITS(b)		((1UL << (b)) - 1)
#define XDL_HASHLONG(v,b)	(XDL_ADDBITS((unsigned long)(v), b) & XDL_MASKBITS(b))
#define XDL_PTRFREE(p) do  while (0)
#define XDL_LE32_PUT(p, v) \
do  while (0)
#define XDL_LE32_GET(p, v) \
do  while (0)
