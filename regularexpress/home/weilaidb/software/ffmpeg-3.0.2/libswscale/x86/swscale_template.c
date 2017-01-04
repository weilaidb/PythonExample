#undef REAL_MOVNTQ
#undef MOVNTQ
#undef MOVNTQ2
#undef PREFETCH
#if COMPILE_TEMPLATE_MMXEXT
#define REAL_MOVNTQ(a,b) "movntq " #a ", " #b " \n\t"
#define MOVNTQ2 "movntq "
#define REAL_MOVNTQ(a,b) "movq " #a ", " #b " \n\t"
#define MOVNTQ2 "movq "
#define MOVNTQ(a,b)  REAL_MOVNTQ(a,b)
#if !COMPILE_TEMPLATE_MMXEXT
static av_always_inline void
dither_8to16(const uint8_t *srcDither, int rot)
static void RENAME(yuv2yuvX)(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset)
#define YSCALEYUV2PACKEDX_UV \
__asm__ volatile(\
"xor                   %%"REG_a", %%"REG_a"     \n\t"\
".p2align                      4                \n\t"\
"nop                                            \n\t"\
"1:                                             \n\t"\
"lea "CHR_MMX_FILTER_OFFSET"(%0), %%"REG_d"     \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"movq      "VROUNDER_OFFSET"(%0), %%mm3         \n\t"\
"movq                      %%mm3, %%mm4         \n\t"\
".p2align                      4                \n\t"\
"2:                                             \n\t"\
"movq               8(%%"REG_d"), %%mm0         \n\t"\
"movq     (%%"REG_S", %%"REG_a"), %%mm2         \n\t"\
"add                          %6, %%"REG_S"     \n\t" \
"movq     (%%"REG_S", %%"REG_a"), %%mm5         \n\t"\
"add                         $16, %%"REG_d"     \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"pmulhw                    %%mm0, %%mm2         \n\t"\
"pmulhw                    %%mm0, %%mm5         \n\t"\
"paddw                     %%mm2, %%mm3         \n\t"\
"paddw                     %%mm5, %%mm4         \n\t"\
"test                  %%"REG_S", %%"REG_S"     \n\t"\
" jnz                         2b                \n\t"\
#define YSCALEYUV2PACKEDX_YA(offset,coeff,src1,src2,dst1,dst2) \
"lea                "offset"(%0), %%"REG_d"     \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"movq      "VROUNDER_OFFSET"(%0), "#dst1"       \n\t"\
"movq                    "#dst1", "#dst2"       \n\t"\
".p2align                      4                \n\t"\
"2:                                             \n\t"\
"movq               8(%%"REG_d"), "#coeff"      \n\t"\
"movq  (%%"REG_S", %%"REG_a", 2), "#src1"       \n\t"\
"movq 8(%%"REG_S", %%"REG_a", 2), "#src2"       \n\t"\
"add                         $16, %%"REG_d"            \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"pmulhw                 "#coeff", "#src1"       \n\t"\
"pmulhw                 "#coeff", "#src2"       \n\t"\
"paddw                   "#src1", "#dst1"       \n\t"\
"paddw                   "#src2", "#dst2"       \n\t"\
"test                  %%"REG_S", %%"REG_S"     \n\t"\
" jnz                         2b                \n\t"\
#define YSCALEYUV2PACKEDX \
YSCALEYUV2PACKEDX_UV \
YSCALEYUV2PACKEDX_YA(LUM_MMX_FILTER_OFFSET,%%mm0,%%mm2,%%mm5,%%mm1,%%mm7) \
#define YSCALEYUV2PACKEDX_END                     \
:: "r" (&c->redDither),                   \
"m" (dummy), "m" (dummy), "m" (dummy),\
"r" (dest), "m" (dstW_reg), "m"(uv_off) \
NAMED_CONSTRAINTS_ADD(bF8,bFC) \
: "%"REG_a, "%"REG_d, "%"REG_S            \
);
#define YSCALEYUV2PACKEDX_ACCURATE_UV \
__asm__ volatile(\
"xor %%"REG_a", %%"REG_a"                       \n\t"\
".p2align                      4                \n\t"\
"nop                                            \n\t"\
"1:                                             \n\t"\
"lea "CHR_MMX_FILTER_OFFSET"(%0), %%"REG_d"     \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"pxor                      %%mm4, %%mm4         \n\t"\
"pxor                      %%mm5, %%mm5         \n\t"\
"pxor                      %%mm6, %%mm6         \n\t"\
"pxor                      %%mm7, %%mm7         \n\t"\
".p2align                      4                \n\t"\
"2:                                             \n\t"\
"movq     (%%"REG_S", %%"REG_a"), %%mm0         \n\t"\
"add                          %6, %%"REG_S"      \n\t" \
"movq     (%%"REG_S", %%"REG_a"), %%mm2         \n\t"\
"mov "STR(APCK_PTR2)"(%%"REG_d"), %%"REG_S"     \n\t"\
"movq     (%%"REG_S", %%"REG_a"), %%mm1         \n\t"\
"movq                      %%mm0, %%mm3         \n\t"\
"punpcklwd                 %%mm1, %%mm0         \n\t"\
"punpckhwd                 %%mm1, %%mm3         \n\t"\
"movq "STR(APCK_COEF)"(%%"REG_d"),%%mm1         \n\t"\
"pmaddwd                   %%mm1, %%mm0         \n\t"\
"pmaddwd                   %%mm1, %%mm3         \n\t"\
"paddd                     %%mm0, %%mm4         \n\t"\
"paddd                     %%mm3, %%mm5         \n\t"\
"add                          %6, %%"REG_S"      \n\t" \
"movq     (%%"REG_S", %%"REG_a"), %%mm3         \n\t"\
"mov "STR(APCK_SIZE)"(%%"REG_d"), %%"REG_S"     \n\t"\
"add           $"STR(APCK_SIZE)", %%"REG_d"     \n\t"\
"test                  %%"REG_S", %%"REG_S"     \n\t"\
"movq                      %%mm2, %%mm0         \n\t"\
"punpcklwd                 %%mm3, %%mm2         \n\t"\
"punpckhwd                 %%mm3, %%mm0         \n\t"\
"pmaddwd                   %%mm1, %%mm2         \n\t"\
"pmaddwd                   %%mm1, %%mm0         \n\t"\
"paddd                     %%mm2, %%mm6         \n\t"\
"paddd                     %%mm0, %%mm7         \n\t"\
" jnz                         2b                \n\t"\
"psrad                       $16, %%mm4         \n\t"\
"psrad                       $16, %%mm5         \n\t"\
"psrad                       $16, %%mm6         \n\t"\
"psrad                       $16, %%mm7         \n\t"\
"movq      "VROUNDER_OFFSET"(%0), %%mm0         \n\t"\
"packssdw                  %%mm5, %%mm4         \n\t"\
"packssdw                  %%mm7, %%mm6         \n\t"\
"paddw                     %%mm0, %%mm4         \n\t"\
"paddw                     %%mm0, %%mm6         \n\t"\
"movq                      %%mm4, "U_TEMP"(%0)  \n\t"\
"movq                      %%mm6, "V_TEMP"(%0)  \n\t"\
#define YSCALEYUV2PACKEDX_ACCURATE_YA(offset) \
"lea                "offset"(%0), %%"REG_d"     \n\t"\
"mov                 (%%"REG_d"), %%"REG_S"     \n\t"\
"pxor                      %%mm1, %%mm1         \n\t"\
"pxor                      %%mm5, %%mm5         \n\t"\
"pxor                      %%mm7, %%mm7         \n\t"\
"pxor                      %%mm6, %%mm6         \n\t"\
".p2align                      4                \n\t"\
"2:                                             \n\t"\
"movq  (%%"REG_S", %%"REG_a", 2), %%mm0         \n\t"\
"movq 8(%%"REG_S", %%"REG_a", 2), %%mm2         \n\t"\
"mov "STR(APCK_PTR2)"(%%"REG_d"), %%"REG_S"     \n\t"\
"movq  (%%"REG_S", %%"REG_a", 2), %%mm4         \n\t"\
"movq                      %%mm0, %%mm3         \n\t"\
"punpcklwd                 %%mm4, %%mm0         \n\t"\
"punpckhwd                 %%mm4, %%mm3         \n\t"\
"movq "STR(APCK_COEF)"(%%"REG_d"), %%mm4         \n\t"\
"pmaddwd                   %%mm4, %%mm0         \n\t"\
"pmaddwd                   %%mm4, %%mm3         \n\t"\
"paddd                     %%mm0, %%mm1         \n\t"\
"paddd                     %%mm3, %%mm5         \n\t"\
"movq 8(%%"REG_S", %%"REG_a", 2), %%mm3         \n\t"\
"mov "STR(APCK_SIZE)"(%%"REG_d"), %%"REG_S"     \n\t"\
"add           $"STR(APCK_SIZE)", %%"REG_d"     \n\t"\
"test                  %%"REG_S", %%"REG_S"     \n\t"\
"movq                      %%mm2, %%mm0         \n\t"\
"punpcklwd                 %%mm3, %%mm2         \n\t"\
"punpckhwd                 %%mm3, %%mm0         \n\t"\
"pmaddwd                   %%mm4, %%mm2         \n\t"\
"pmaddwd                   %%mm4, %%mm0         \n\t"\
"paddd                     %%mm2, %%mm7         \n\t"\
"paddd                     %%mm0, %%mm6         \n\t"\
" jnz                         2b                \n\t"\
"psrad                       $16, %%mm1         \n\t"\
"psrad                       $16, %%mm5         \n\t"\
"psrad                       $16, %%mm7         \n\t"\
"psrad                       $16, %%mm6         \n\t"\
"movq      "VROUNDER_OFFSET"(%0), %%mm0         \n\t"\
"packssdw                  %%mm5, %%mm1         \n\t"\
"packssdw                  %%mm6, %%mm7         \n\t"\
"paddw                     %%mm0, %%mm1         \n\t"\
"paddw                     %%mm0, %%mm7         \n\t"\
"movq               "U_TEMP"(%0), %%mm3         \n\t"\
"movq               "V_TEMP"(%0), %%mm4         \n\t"\
#define YSCALEYUV2PACKEDX_ACCURATE \
YSCALEYUV2PACKEDX_ACCURATE_UV \
YSCALEYUV2PACKEDX_ACCURATE_YA(LUM_MMX_FILTER_OFFSET)
#define YSCALEYUV2RGBX \
"psubw  "U_OFFSET"(%0), %%mm3       \n\t"\
"psubw  "V_OFFSET"(%0), %%mm4       \n\t"\
"movq            %%mm3, %%mm2       \n\t"\
"movq            %%mm4, %%mm5       \n\t"\
"pmulhw "UG_COEFF"(%0), %%mm3       \n\t"\
"pmulhw "VG_COEFF"(%0), %%mm4       \n\t"\\
"pmulhw "UB_COEFF"(%0), %%mm2       \n\t"\
"pmulhw "VR_COEFF"(%0), %%mm5       \n\t"\
"psubw  "Y_OFFSET"(%0), %%mm1       \n\t"\
"psubw  "Y_OFFSET"(%0), %%mm7       \n\t"\
"pmulhw  "Y_COEFF"(%0), %%mm1       \n\t"\
"pmulhw  "Y_COEFF"(%0), %%mm7       \n\t"\\
"paddw           %%mm3, %%mm4       \n\t"\
"movq            %%mm2, %%mm0       \n\t"\
"movq            %%mm5, %%mm6       \n\t"\
"movq            %%mm4, %%mm3       \n\t"\
"punpcklwd       %%mm2, %%mm2       \n\t"\
"punpcklwd       %%mm5, %%mm5       \n\t"\
"punpcklwd       %%mm4, %%mm4       \n\t"\
"paddw           %%mm1, %%mm2       \n\t"\
"paddw           %%mm1, %%mm5       \n\t"\
"paddw           %%mm1, %%mm4       \n\t"\
"punpckhwd       %%mm0, %%mm0       \n\t"\
"punpckhwd       %%mm6, %%mm6       \n\t"\
"punpckhwd       %%mm3, %%mm3       \n\t"\
"paddw           %%mm7, %%mm0       \n\t"\
"paddw           %%mm7, %%mm6       \n\t"\
"paddw           %%mm7, %%mm3       \n\t"\\
"packuswb        %%mm0, %%mm2       \n\t"\
"packuswb        %%mm6, %%mm5       \n\t"\
"packuswb        %%mm3, %%mm4       \n\t"\
#define REAL_WRITEBGR32(dst, dstw, index, b, g, r, a, q0, q2, q3, t) \
"movq       "#b", "#q2"     \n\t"\
"movq       "#r", "#t"      \n\t"\
"punpcklbw  "#g", "#b"      \n\t"\
"punpcklbw  "#a", "#r"      \n\t"\
"punpckhbw  "#g", "#q2"     \n\t"\
"punpckhbw  "#a", "#t"      \n\t"\
"movq       "#b", "#q0"     \n\t"\
"movq      "#q2", "#q3"     \n\t"\
"punpcklwd  "#r", "#q0"     \n\t"\
"punpckhwd  "#r", "#b"      \n\t"\
"punpcklwd  "#t", "#q2"     \n\t"\
"punpckhwd  "#t", "#q3"     \n\t"\
\
MOVNTQ(   q0,   (dst, index, 4))\
MOVNTQ(    b,  8(dst, index, 4))\
MOVNTQ(   q2, 16(dst, index, 4))\
MOVNTQ(   q3, 24(dst, index, 4))\
\
"add      $8, "#index"      \n\t"\
"cmp  "dstw", "#index"      \n\t"\
" jb      1b                \n\t"
#define WRITEBGR32(dst, dstw, index, b, g, r, a, q0, q2, q3, t)  REAL_WRITEBGR32(dst, dstw, index, b, g, r, a, q0, q2, q3, t)
static void RENAME(yuv2rgb32_X_ar)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2rgb32_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2bgr32_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
#define REAL_WRITERGB16(dst, dstw, index) \
"pand "MANGLE(bF8)", %%mm2  \n\t"\
"pand "MANGLE(bFC)", %%mm4  \n\t"\
"pand "MANGLE(bF8)", %%mm5  \n\t"\
"psrlq           $3, %%mm2  \n\t"\
\
"movq         %%mm2, %%mm1  \n\t"\
"movq         %%mm4, %%mm3  \n\t"\
\
"punpcklbw    %%mm7, %%mm3  \n\t"\
"punpcklbw    %%mm5, %%mm2  \n\t"\
"punpckhbw    %%mm7, %%mm4  \n\t"\
"punpckhbw    %%mm5, %%mm1  \n\t"\
\
"psllq           $3, %%mm3  \n\t"\
"psllq           $3, %%mm4  \n\t"\
\
"por          %%mm3, %%mm2  \n\t"\
"por          %%mm4, %%mm1  \n\t"\
\
MOVNTQ(%%mm2,  (dst, index, 2))\
MOVNTQ(%%mm1, 8(dst, index, 2))\
\
"add             $8, "#index"   \n\t"\
"cmp         "dstw", "#index"   \n\t"\
" jb             1b             \n\t"
#define WRITERGB16(dst, dstw, index)  REAL_WRITERGB16(dst, dstw, index)
static void RENAME(yuv2rgb565_X_ar)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2rgb565_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
#define REAL_WRITERGB15(dst, dstw, index) \
"pand "MANGLE(bF8)", %%mm2  \n\t"\
"pand "MANGLE(bF8)", %%mm4  \n\t"\
"pand "MANGLE(bF8)", %%mm5  \n\t"\
"psrlq           $3, %%mm2  \n\t"\
"psrlq           $1, %%mm5  \n\t"\
\
"movq         %%mm2, %%mm1  \n\t"\
"movq         %%mm4, %%mm3  \n\t"\
\
"punpcklbw    %%mm7, %%mm3  \n\t"\
"punpcklbw    %%mm5, %%mm2  \n\t"\
"punpckhbw    %%mm7, %%mm4  \n\t"\
"punpckhbw    %%mm5, %%mm1  \n\t"\
\
"psllq           $2, %%mm3  \n\t"\
"psllq           $2, %%mm4  \n\t"\
\
"por          %%mm3, %%mm2  \n\t"\
"por          %%mm4, %%mm1  \n\t"\
\
MOVNTQ(%%mm2,  (dst, index, 2))\
MOVNTQ(%%mm1, 8(dst, index, 2))\
\
"add             $8, "#index"   \n\t"\
"cmp         "dstw", "#index"   \n\t"\
" jb             1b             \n\t"
#define WRITERGB15(dst, dstw, index)  REAL_WRITERGB15(dst, dstw, index)
static void RENAME(yuv2rgb555_X_ar)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2rgb555_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
#define WRITEBGR24MMX(dst, dstw, index) \\
"movq      %%mm2, %%mm1     \n\t"\
"movq      %%mm5, %%mm6     \n\t"\
"punpcklbw %%mm4, %%mm2     \n\t"\
"punpcklbw %%mm7, %%mm5     \n\t"\
"punpckhbw %%mm4, %%mm1     \n\t"\
"punpckhbw %%mm7, %%mm6     \n\t"\
"movq      %%mm2, %%mm0     \n\t"\
"movq      %%mm1, %%mm3     \n\t"\
"punpcklwd %%mm5, %%mm0     \n\t"\
"punpckhwd %%mm5, %%mm2     \n\t"\
"punpcklwd %%mm6, %%mm1     \n\t"\
"punpckhwd %%mm6, %%mm3     \n\t"\
\
"movq      %%mm0, %%mm4     \n\t"\
"movq      %%mm2, %%mm6     \n\t"\
"movq      %%mm1, %%mm5     \n\t"\
"movq      %%mm3, %%mm7     \n\t"\
\
"psllq       $40, %%mm0     \n\t"\
"psllq       $40, %%mm2     \n\t"\
"psllq       $40, %%mm1     \n\t"\
"psllq       $40, %%mm3     \n\t"\
\
"punpckhdq %%mm4, %%mm0     \n\t"\
"punpckhdq %%mm6, %%mm2     \n\t"\
"punpckhdq %%mm5, %%mm1     \n\t"\
"punpckhdq %%mm7, %%mm3     \n\t"\
\
"psrlq        $8, %%mm0     \n\t"\
"movq      %%mm2, %%mm6     \n\t"\
"psllq       $40, %%mm2     \n\t"\
"por       %%mm2, %%mm0     \n\t"\
MOVNTQ(%%mm0, (dst))\
\
"psrlq       $24, %%mm6     \n\t"\
"movq      %%mm1, %%mm5     \n\t"\
"psllq       $24, %%mm1     \n\t"\
"por       %%mm1, %%mm6     \n\t"\
MOVNTQ(%%mm6, 8(dst))\
\
"psrlq       $40, %%mm5     \n\t"\
"psllq        $8, %%mm3     \n\t"\
"por       %%mm3, %%mm5     \n\t"\
MOVNTQ(%%mm5, 16(dst))\
\
"add         $24, "#dst"    \n\t"\
\
"add          $8, "#index"  \n\t"\
"cmp      "dstw", "#index"  \n\t"\
" jb          1b            \n\t"
#define WRITEBGR24MMXEXT(dst, dstw, index) \\
"movq "MANGLE(ff_M24A)", %%mm0 \n\t"\
"movq "MANGLE(ff_M24C)", %%mm7 \n\t"\
"pshufw $0x50, %%mm2, %%mm1 \n\t"\
"pshufw $0x50, %%mm4, %%mm3 \n\t"\
"pshufw $0x00, %%mm5, %%mm6 \n\t"\
\
"pand   %%mm0, %%mm1        \n\t"\
"pand   %%mm0, %%mm3        \n\t"\
"pand   %%mm7, %%mm6        \n\t"\
\
"psllq     $8, %%mm3        \n\t"\
"por    %%mm1, %%mm6        \n\t"\
"por    %%mm3, %%mm6        \n\t"\
MOVNTQ(%%mm6, (dst))\
\
"psrlq     $8, %%mm4        \n\t"\
"pshufw $0xA5, %%mm2, %%mm1 \n\t"\
"pshufw $0x55, %%mm4, %%mm3 \n\t"\
"pshufw $0xA5, %%mm5, %%mm6 \n\t"\
\
"pand "MANGLE(ff_M24B)", %%mm1 \n\t"\
"pand   %%mm7, %%mm3        \n\t"\
"pand   %%mm0, %%mm6        \n\t"\
\
"por    %%mm1, %%mm3        \n\t"\
"por    %%mm3, %%mm6        \n\t"\
MOVNTQ(%%mm6, 8(dst))\
\
"pshufw $0xFF, %%mm2, %%mm1 \n\t"\
"pshufw $0xFA, %%mm4, %%mm3 \n\t"\
"pshufw $0xFA, %%mm5, %%mm6 \n\t"\
\
"pand   %%mm7, %%mm1        \n\t"\
"pand   %%mm0, %%mm3        \n\t"\
"pand "MANGLE(ff_M24B)", %%mm6 \n\t"\
\
"por    %%mm1, %%mm3        \n\t"\
"por    %%mm3, %%mm6        \n\t"\
MOVNTQ(%%mm6, 16(dst))\
\
"add      $24, "#dst"       \n\t"\
\
"add       $8, "#index"     \n\t"\
"cmp   "dstw", "#index"     \n\t"\
" jb       1b               \n\t"
#if COMPILE_TEMPLATE_MMXEXT
#undef WRITEBGR24
#define WRITEBGR24(dst, dstw, index)  WRITEBGR24MMXEXT(dst, dstw, index)
#undef WRITEBGR24
#define WRITEBGR24(dst, dstw, index)  WRITEBGR24MMX(dst, dstw, index)
#if HAVE_6REGS
static void RENAME(yuv2bgr24_X_ar)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2bgr24_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
#define REAL_WRITEYUY2(dst, dstw, index) \
"packuswb  %%mm3, %%mm3     \n\t"\
"packuswb  %%mm4, %%mm4     \n\t"\
"packuswb  %%mm7, %%mm1     \n\t"\
"punpcklbw %%mm4, %%mm3     \n\t"\
"movq      %%mm1, %%mm7     \n\t"\
"punpcklbw %%mm3, %%mm1     \n\t"\
"punpckhbw %%mm3, %%mm7     \n\t"\
\
MOVNTQ(%%mm1, (dst, index, 2))\
MOVNTQ(%%mm7, 8(dst, index, 2))\
\
"add          $8, "#index"  \n\t"\
"cmp      "dstw", "#index"  \n\t"\
" jb          1b            \n\t"
#define WRITEYUY2(dst, dstw, index)  REAL_WRITEYUY2(dst, dstw, index)
static void RENAME(yuv2yuyv422_X_ar)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
static void RENAME(yuv2yuyv422_X)(SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter, const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize, const int16_t **alpSrc,
uint8_t *dest, int dstW, int dstY)
#define REAL_YSCALEYUV2RGB_UV(index, c) \
"xor            "#index", "#index"  \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm2     \n\t"\
"movq     (%3, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm5     \n\t"\
"movq     (%3, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"psubw             %%mm3, %%mm2     \n\t"\
"psubw             %%mm4, %%mm5     \n\t"\
"movq "CHR_MMX_FILTER_OFFSET"+8("#c"), %%mm0    \n\t"\
"pmulhw            %%mm0, %%mm2     \n\t"\
"pmulhw            %%mm0, %%mm5     \n\t"\
"psraw                $4, %%mm3     \n\t"\
"psraw                $4, %%mm4     \n\t"\
"paddw             %%mm2, %%mm3     \n\t"\
"paddw             %%mm5, %%mm4     \n\t"\
"psubw  "U_OFFSET"("#c"), %%mm3     \n\t"\
"psubw  "V_OFFSET"("#c"), %%mm4     \n\t"\
"movq              %%mm3, %%mm2     \n\t"\
"movq              %%mm4, %%mm5     \n\t"\
"pmulhw "UG_COEFF"("#c"), %%mm3     \n\t"\
"pmulhw "VG_COEFF"("#c"), %%mm4     \n\t"\\
#define REAL_YSCALEYUV2RGB_YA(index, c, b1, b2) \
"movq  ("#b1", "#index", 2), %%mm0     \n\t"\
"movq  ("#b2", "#index", 2), %%mm1     \n\t"\
"movq 8("#b1", "#index", 2), %%mm6     \n\t"\
"movq 8("#b2", "#index", 2), %%mm7     \n\t"\
"psubw             %%mm1, %%mm0     \n\t"\
"psubw             %%mm7, %%mm6     \n\t"\
"pmulhw "LUM_MMX_FILTER_OFFSET"+8("#c"), %%mm0  \n\t"\
"pmulhw "LUM_MMX_FILTER_OFFSET"+8("#c"), %%mm6  \n\t"\
"psraw                $4, %%mm1     \n\t"\
"psraw                $4, %%mm7     \n\t"\
"paddw             %%mm0, %%mm1     \n\t"\
"paddw             %%mm6, %%mm7     \n\t"\
#define REAL_YSCALEYUV2RGB_COEFF(c) \
"pmulhw "UB_COEFF"("#c"), %%mm2     \n\t"\
"pmulhw "VR_COEFF"("#c"), %%mm5     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm1     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm7     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm1     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm7     \n\t"\\
"paddw             %%mm3, %%mm4     \n\t"\
"movq              %%mm2, %%mm0     \n\t"\
"movq              %%mm5, %%mm6     \n\t"\
"movq              %%mm4, %%mm3     \n\t"\
"punpcklwd         %%mm2, %%mm2     \n\t"\
"punpcklwd         %%mm5, %%mm5     \n\t"\
"punpcklwd         %%mm4, %%mm4     \n\t"\
"paddw             %%mm1, %%mm2     \n\t"\
"paddw             %%mm1, %%mm5     \n\t"\
"paddw             %%mm1, %%mm4     \n\t"\
"punpckhwd         %%mm0, %%mm0     \n\t"\
"punpckhwd         %%mm6, %%mm6     \n\t"\
"punpckhwd         %%mm3, %%mm3     \n\t"\
"paddw             %%mm7, %%mm0     \n\t"\
"paddw             %%mm7, %%mm6     \n\t"\
"paddw             %%mm7, %%mm3     \n\t"\\
"packuswb          %%mm0, %%mm2     \n\t"\
"packuswb          %%mm6, %%mm5     \n\t"\
"packuswb          %%mm3, %%mm4     \n\t"\
#define YSCALEYUV2RGB_YA(index, c, b1, b2) REAL_YSCALEYUV2RGB_YA(index, c, b1, b2)
#define YSCALEYUV2RGB(index, c) \
REAL_YSCALEYUV2RGB_UV(index, c) \
REAL_YSCALEYUV2RGB_YA(index, c, %0, %1) \
REAL_YSCALEYUV2RGB_COEFF(c)
static void RENAME(yuv2rgb32_2)(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
static void RENAME(yuv2bgr24_2)(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
static void RENAME(yuv2rgb555_2)(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
static void RENAME(yuv2rgb565_2)(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
#define REAL_YSCALEYUV2PACKED(index, c) \
"movq "CHR_MMX_FILTER_OFFSET"+8("#c"), %%mm0              \n\t"\
"movq "LUM_MMX_FILTER_OFFSET"+8("#c"), %%mm1              \n\t"\
"psraw                $3, %%mm0                           \n\t"\
"psraw                $3, %%mm1                           \n\t"\
"movq              %%mm0, "CHR_MMX_FILTER_OFFSET"+8("#c") \n\t"\
"movq              %%mm1, "LUM_MMX_FILTER_OFFSET"+8("#c") \n\t"\
"xor            "#index", "#index"                        \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm2     \n\t"\
"movq     (%3, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm5     \n\t"\
"movq     (%3, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"psubw             %%mm3, %%mm2     \n\t"\
"psubw             %%mm4, %%mm5     \n\t"\
"movq "CHR_MMX_FILTER_OFFSET"+8("#c"), %%mm0    \n\t"\
"pmulhw            %%mm0, %%mm2     \n\t"\
"pmulhw            %%mm0, %%mm5     \n\t"\
"psraw                $7, %%mm3     \n\t"\
"psraw                $7, %%mm4     \n\t"\
"paddw             %%mm2, %%mm3     \n\t"\
"paddw             %%mm5, %%mm4     \n\t"\
"movq  (%0, "#index", 2), %%mm0     \n\t"\
"movq  (%1, "#index", 2), %%mm1     \n\t"\
"movq 8(%0, "#index", 2), %%mm6     \n\t"\
"movq 8(%1, "#index", 2), %%mm7     \n\t"\
"psubw             %%mm1, %%mm0     \n\t"\
"psubw             %%mm7, %%mm6     \n\t"\
"pmulhw "LUM_MMX_FILTER_OFFSET"+8("#c"), %%mm0  \n\t"\
"pmulhw "LUM_MMX_FILTER_OFFSET"+8("#c"), %%mm6  \n\t"\
"psraw                $7, %%mm1     \n\t"\
"psraw                $7, %%mm7     \n\t"\
"paddw             %%mm0, %%mm1     \n\t"\
"paddw             %%mm6, %%mm7     \n\t"\
#define YSCALEYUV2PACKED(index, c)  REAL_YSCALEYUV2PACKED(index, c)
static void RENAME(yuv2yuyv422_2)(SwsContext *c, const int16_t *buf[2],
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf[2], uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y)
#define REAL_YSCALEYUV2RGB1(index, c) \
"xor            "#index", "#index"  \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"psraw                $4, %%mm3     \n\t"\
"psraw                $4, %%mm4     \n\t"\
"psubw  "U_OFFSET"("#c"), %%mm3     \n\t"\
"psubw  "V_OFFSET"("#c"), %%mm4     \n\t"\
"movq              %%mm3, %%mm2     \n\t"\
"movq              %%mm4, %%mm5     \n\t"\
"pmulhw "UG_COEFF"("#c"), %%mm3     \n\t"\
"pmulhw "VG_COEFF"("#c"), %%mm4     \n\t"\\
"movq  (%0, "#index", 2), %%mm1     \n\t"\
"movq 8(%0, "#index", 2), %%mm7     \n\t"\
"psraw                $4, %%mm1     \n\t"\
"psraw                $4, %%mm7     \n\t"\
"pmulhw "UB_COEFF"("#c"), %%mm2     \n\t"\
"pmulhw "VR_COEFF"("#c"), %%mm5     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm1     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm7     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm1     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm7     \n\t"\\
"paddw             %%mm3, %%mm4     \n\t"\
"movq              %%mm2, %%mm0     \n\t"\
"movq              %%mm5, %%mm6     \n\t"\
"movq              %%mm4, %%mm3     \n\t"\
"punpcklwd         %%mm2, %%mm2     \n\t"\
"punpcklwd         %%mm5, %%mm5     \n\t"\
"punpcklwd         %%mm4, %%mm4     \n\t"\
"paddw             %%mm1, %%mm2     \n\t"\
"paddw             %%mm1, %%mm5     \n\t"\
"paddw             %%mm1, %%mm4     \n\t"\
"punpckhwd         %%mm0, %%mm0     \n\t"\
"punpckhwd         %%mm6, %%mm6     \n\t"\
"punpckhwd         %%mm3, %%mm3     \n\t"\
"paddw             %%mm7, %%mm0     \n\t"\
"paddw             %%mm7, %%mm6     \n\t"\
"paddw             %%mm7, %%mm3     \n\t"\\
"packuswb          %%mm0, %%mm2     \n\t"\
"packuswb          %%mm6, %%mm5     \n\t"\
"packuswb          %%mm3, %%mm4     \n\t"\
#define YSCALEYUV2RGB1(index, c)  REAL_YSCALEYUV2RGB1(index, c)
#define REAL_YSCALEYUV2RGB1b(index, c) \
"xor            "#index", "#index"  \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm2     \n\t"\
"movq     (%3, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm5     \n\t"\
"movq     (%3, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"paddw             %%mm2, %%mm3     \n\t"\
"paddw             %%mm5, %%mm4     \n\t"\
"psrlw                $5, %%mm3     \n\t"\
"psrlw                $5, %%mm4     \n\t"\
"psubw  "U_OFFSET"("#c"), %%mm3     \n\t"\
"psubw  "V_OFFSET"("#c"), %%mm4     \n\t"\
"movq              %%mm3, %%mm2     \n\t"\
"movq              %%mm4, %%mm5     \n\t"\
"pmulhw "UG_COEFF"("#c"), %%mm3     \n\t"\
"pmulhw "VG_COEFF"("#c"), %%mm4     \n\t"\\
"movq  (%0, "#index", 2), %%mm1     \n\t"\
"movq 8(%0, "#index", 2), %%mm7     \n\t"\
"psraw                $4, %%mm1     \n\t"\
"psraw                $4, %%mm7     \n\t"\
"pmulhw "UB_COEFF"("#c"), %%mm2     \n\t"\
"pmulhw "VR_COEFF"("#c"), %%mm5     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm1     \n\t"\
"psubw  "Y_OFFSET"("#c"), %%mm7     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm1     \n\t"\
"pmulhw  "Y_COEFF"("#c"), %%mm7     \n\t"\\
"paddw             %%mm3, %%mm4     \n\t"\
"movq              %%mm2, %%mm0     \n\t"\
"movq              %%mm5, %%mm6     \n\t"\
"movq              %%mm4, %%mm3     \n\t"\
"punpcklwd         %%mm2, %%mm2     \n\t"\
"punpcklwd         %%mm5, %%mm5     \n\t"\
"punpcklwd         %%mm4, %%mm4     \n\t"\
"paddw             %%mm1, %%mm2     \n\t"\
"paddw             %%mm1, %%mm5     \n\t"\
"paddw             %%mm1, %%mm4     \n\t"\
"punpckhwd         %%mm0, %%mm0     \n\t"\
"punpckhwd         %%mm6, %%mm6     \n\t"\
"punpckhwd         %%mm3, %%mm3     \n\t"\
"paddw             %%mm7, %%mm0     \n\t"\
"paddw             %%mm7, %%mm6     \n\t"\
"paddw             %%mm7, %%mm3     \n\t"\\
"packuswb          %%mm0, %%mm2     \n\t"\
"packuswb          %%mm6, %%mm5     \n\t"\
"packuswb          %%mm3, %%mm4     \n\t"\
#define YSCALEYUV2RGB1b(index, c)  REAL_YSCALEYUV2RGB1b(index, c)
#define REAL_YSCALEYUV2RGB1_ALPHA(index) \
"movq  (%1, "#index", 2), %%mm7     \n\t"\
"movq 8(%1, "#index", 2), %%mm1     \n\t"\
"psraw                $7, %%mm7     \n\t"\
"psraw                $7, %%mm1     \n\t"\
"packuswb          %%mm1, %%mm7     \n\t"
#define YSCALEYUV2RGB1_ALPHA(index) REAL_YSCALEYUV2RGB1_ALPHA(index)
static void RENAME(yuv2rgb32_1)(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
static void RENAME(yuv2bgr24_1)(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
static void RENAME(yuv2rgb555_1)(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
static void RENAME(yuv2rgb565_1)(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
#define REAL_YSCALEYUV2PACKED1(index, c) \
"xor            "#index", "#index"  \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"psraw                $7, %%mm3     \n\t" \
"psraw                $7, %%mm4     \n\t" \
"movq  (%0, "#index", 2), %%mm1     \n\t"\
"movq 8(%0, "#index", 2), %%mm7     \n\t"\
"psraw                $7, %%mm1     \n\t" \
"psraw                $7, %%mm7     \n\t" \
#define YSCALEYUV2PACKED1(index, c)  REAL_YSCALEYUV2PACKED1(index, c)
#define REAL_YSCALEYUV2PACKED1b(index, c) \
"xor "#index", "#index"             \n\t"\
".p2align              4            \n\t"\
"1:                                 \n\t"\
"movq     (%2, "#index"), %%mm2     \n\t"\
"movq     (%3, "#index"), %%mm3     \n\t"\
"add "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"movq     (%2, "#index"), %%mm5     \n\t"\
"movq     (%3, "#index"), %%mm4     \n\t"\
"sub "UV_OFF_BYTE"("#c"), "#index"  \n\t" \
"paddw             %%mm2, %%mm3     \n\t"\
"paddw             %%mm5, %%mm4     \n\t"\
"psrlw                $8, %%mm3     \n\t" \
"psrlw                $8, %%mm4     \n\t" \
"movq  (%0, "#index", 2), %%mm1     \n\t"\
"movq 8(%0, "#index", 2), %%mm7     \n\t"\
"psraw                $7, %%mm1     \n\t" \
"psraw                $7, %%mm7     \n\t"
#define YSCALEYUV2PACKED1b(index, c)  REAL_YSCALEYUV2PACKED1b(index, c)
static void RENAME(yuv2yuyv422_1)(SwsContext *c, const int16_t *buf0,
const int16_t *ubuf[2], const int16_t *vbuf[2],
const int16_t *abuf0, uint8_t *dest,
int dstW, int uvalpha, int y)
static av_cold void RENAME(sws_init_swscale)(SwsContext *c)
