#undef REAL_MOVNTQ
#undef MOVNTQ
#undef MOVNTQ2
#undef PREFETCH
#if COMPILE_TEMPLATE_MMXEXT
REAL_MOVNTQ
#define MOVNTQ2
REAL_MOVNTQ
#define MOVNTQ2
MOVNTQ  REAL_MOVNTQ(a,b)
#if !COMPILE_TEMPLATE_MMXEXT
dither_8to16
RENAME(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset)
#define YSCALEYUV2PACKEDX_UV \
volatile \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
#define YSCALEYUV2PACKEDX \
YSCALEYUV2PACKEDX_UV \
YSCALEYUV2PACKEDX_YA(LUM_MMX_FILTER_OFFSET,%%mm0,%%mm2,%%mm5,%%mm1,%%mm7) \
#define YSCALEYUV2PACKEDX_END                     \
::  (&c->redDither),                   \
(dummy),\
(uv_off) \
NAMED_CONSTRAINTS_ADD(bF8,bFC) \
: FF_REG_S            \
);
#define YSCALEYUV2PACKEDX_ACCURATE_UV \
volatile \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
#define YSCALEYUV2PACKEDX_ACCURATE \
YSCALEYUV2PACKEDX_ACCURATE_UV \
YSCALEYUV2PACKEDX_ACCURATE_YA(LUM_MMX_FILTER_OFFSET)
#define YSCALEYUV2RGBX \
\
\
\
\
\
\\
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
REAL_WRITEBGR32 \
\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(   q0,   (dst, index, 4))\
MOVNTQ(    b,  8(dst, index, 4))\
MOVNTQ(   q2, 16(dst, index, 4))\
MOVNTQ(   q3, 24(dst, index, 4))\
\
\
\
WRITEBGR32  REAL_WRITEBGR32(dst, dstw, index, b, g, r, a, q0, q2, q3, t)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
REAL_WRITERGB16 \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm2,  (dst, index, 2))\
MOVNTQ(%%mm1, 8(dst, index, 2))\
\
\
\
WRITERGB16  REAL_WRITERGB16(dst, dstw, index)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
REAL_WRITERGB15 \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm2,  (dst, index, 2))\
MOVNTQ(%%mm1, 8(dst, index, 2))\
\
\
\
WRITERGB15  REAL_WRITERGB15(dst, dstw, index)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
WRITEBGR24MMX \\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm0, (dst))\
\
\
\
\
\
MOVNTQ(%%mm6, 8(dst))\
\
\
\
\
MOVNTQ(%%mm5, 16(dst))\
\
\
\
\
\
WRITEBGR24MMXEXT \\
\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm6, (dst))\
\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm6, 8(dst))\
\
\
\
\
\
\
\
\
\
\
\
MOVNTQ(%%mm6, 16(dst))\
\
\
\
\
\
#if COMPILE_TEMPLATE_MMXEXT
#undef WRITEBGR24
WRITEBGR24  WRITEBGR24MMXEXT(dst, dstw, index)
#undef WRITEBGR24
WRITEBGR24  WRITEBGR24MMX(dst, dstw, index)
#if HAVE_6REGS
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
REAL_WRITEYUY2 \
\
\
\
\
\
\
\
\
MOVNTQ(%%mm1, (dst, index, 2))\
MOVNTQ(%%mm7, 8(dst, index, 2))\
\
\
\
WRITEYUY2  REAL_WRITEYUY2(dst, dstw, index)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
RENAME(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
REAL_YSCALEYUV2RGB_UV \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
REAL_YSCALEYUV2RGB_YA \
\
\
\
\
\
\
\
\
\
\
\
\
REAL_YSCALEYUV2RGB_COEFF \
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
YSCALEYUV2RGB_YA REAL_YSCALEYUV2RGB_YA(index, c, b1, b2)
YSCALEYUV2RGB \
REAL_YSCALEYUV2RGB_UV(index, c) \
REAL_YSCALEYUV2RGB_YA(index, c, %0, %1) \
REAL_YSCALEYUV2RGB_COEFF(c)
RENAME(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
REAL_YSCALEYUV2PACKED \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
YSCALEYUV2PACKED  REAL_YSCALEYUV2PACKED(index, c)
RENAME(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
REAL_YSCALEYUV2RGB1 \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
YSCALEYUV2RGB1  REAL_YSCALEYUV2RGB1(index, c)
REAL_YSCALEYUV2RGB1b \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\\
\
\
\
YSCALEYUV2RGB1b  REAL_YSCALEYUV2RGB1b(index, c)
REAL_YSCALEYUV2RGB1_ALPHA \
\
\
\
\
YSCALEYUV2RGB1_ALPHA REAL_YSCALEYUV2RGB1_ALPHA(index)
RENAME(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
RENAME(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
REAL_YSCALEYUV2PACKED1 \
\
\
\
\
\
\
\
\
\
\
\
\
\
YSCALEYUV2PACKED1  REAL_YSCALEYUV2PACKED1(index, c)
REAL_YSCALEYUV2PACKED1b \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
YSCALEYUV2PACKED1b  REAL_YSCALEYUV2PACKED1b(index, c)
RENAME(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
RENAME(SwsContext *c)
