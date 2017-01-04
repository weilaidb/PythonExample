#undef MOVNTQ
#undef EMMS
#undef SFENCE
#if COMPILE_TEMPLATE_MMXEXT
#define MOVNTQ "movntq"
#define SFENCE "sfence"
#define MOVNTQ "movq"
#define SFENCE " # nop"
#define REG_BLUE  "0"
#define REG_RED   "1"
#define REG_GREEN "2"
#define REG_ALPHA "3"
#define YUV2RGB_LOOP(depth)                                          \
h_size = (c->dstW + 7) & ~7;                                     \
if (h_size * depth > FFABS(dstStride[0]))                        \
h_size -= 8;                                                 \
\
vshift = c->srcFormat != AV_PIX_FMT_YUV422P;                        \
\
__asm__ volatile ("pxor %mm4, %mm4\n\t");                        \
for (y = 0; y < srcSliceH; y++)                                                              \
#define YUV2RGB_OPERANDS_ALPHA                                    \
: "+r" (index), "+r" (image)                              \
: "r" (pu - index), "r" (pv - index), "r"(&c->redDither), \
"r" (py - 2*index), "r" (pa - 2*index)                  \
NAMED_CONSTRAINTS_ADD(mmx_00ffw)                        \
: "memory"                                                \
);                                                        \
}                                                             \
#define YUV2RGB_ENDFUNC                          \
__asm__ volatile (SFENCE"\n\t"               \
"emms    \n\t");             \
return srcSliceH;                            \
#define IF0(x)
#define IF1(x) x
#define RGB_PACK16(gmask, is15)                  \
"pand      "MANGLE(mmx_redmask)", %%mm0\n\t" \
"pand      "MANGLE(mmx_redmask)", %%mm1\n\t" \
"movq      %%mm2,     %%mm3\n\t"             \
"psllw   $"AV_STRINGIFY(3-is15)", %%mm2\n\t" \
"psrlw   $"AV_STRINGIFY(5+is15)", %%mm3\n\t" \
"psrlw     $3,        %%mm0\n\t"             \
IF##is15("psrlw  $1,  %%mm1\n\t")            \
"pand "MANGLE(pb_e0)", %%mm2\n\t"            \
"pand "MANGLE(gmask)", %%mm3\n\t"            \
"por       %%mm2,     %%mm0\n\t"             \
"por       %%mm3,     %%mm1\n\t"             \
"movq      %%mm0,     %%mm2\n\t"             \
"punpcklbw %%mm1,     %%mm0\n\t"             \
"punpckhbw %%mm1,     %%mm2\n\t"             \
MOVNTQ "   %%mm0,      (%1)\n\t"             \
MOVNTQ "   %%mm2,     8(%1)\n\t"             \
#define DITHER_RGB                               \
"paddusb "BLUE_DITHER"(%4),  %%mm0\n\t"      \
"paddusb "GREEN_DITHER"(%4), %%mm2\n\t"      \
"paddusb "RED_DITHER"(%4),   %%mm1\n\t"      \
#if !COMPILE_TEMPLATE_MMXEXT
static inline int RENAME(yuv420_rgb15)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static inline int RENAME(yuv420_rgb16)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define RGB_PACK24(blue, red)\
"packuswb  %%mm3,      %%mm0 \n"\
"packuswb  %%mm5,      %%mm1 \n"\
"packuswb  %%mm7,      %%mm2 \n"\
"movq      %%mm"red",  %%mm3 \n"\
"movq      %%mm"blue", %%mm6 \n"\
"psrlq     $32,        %%mm"red" \n"\
"punpcklbw %%mm2,      %%mm3 \n"\
"punpcklbw %%mm"red",  %%mm6 \n"\
"movq      %%mm3,      %%mm5 \n"\
"punpckhbw %%mm"blue", %%mm2 \n"\
"punpcklwd %%mm6,      %%mm3 \n"\
"punpckhwd %%mm6,      %%mm5 \n"\
RGB_PACK24_B
#if COMPILE_TEMPLATE_MMXEXT
DECLARE_ASM_CONST(8, int16_t, mask1101[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask0010[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask0110[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask1001[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask0100[4]) = ;
#undef RGB_PACK24_B
#define RGB_PACK24_B\
"pshufw    $0xc6,  %%mm2, %%mm1 \n"\
"pshufw    $0x84,  %%mm3, %%mm6 \n"\
"pshufw    $0x38,  %%mm5, %%mm7 \n"\
"pand "MANGLE(mask1101)", %%mm6 \n"\
"movq      %%mm1,         %%mm0 \n"\
"pand "MANGLE(mask0110)", %%mm7 \n"\
"movq      %%mm1,         %%mm2 \n"\
"pand "MANGLE(mask0100)", %%mm1 \n"\
"psrlq       $48,         %%mm3 \n"\
"pand "MANGLE(mask0010)", %%mm0 \n"\
"psllq       $32,         %%mm5 \n"\
"pand "MANGLE(mask1001)", %%mm2 \n"\
"por       %%mm3,         %%mm1 \n"\
"por       %%mm6,         %%mm0 \n"\
"por       %%mm5,         %%mm1 \n"\
"por       %%mm7,         %%mm2 \n"\
MOVNTQ"    %%mm0,          (%1) \n"\
MOVNTQ"    %%mm1,         8(%1) \n"\
MOVNTQ"    %%mm2,        16(%1) \n"\
#undef RGB_PACK24_B
#define RGB_PACK24_B\
"movd      %%mm3,       (%1) \n"\
"movd      %%mm2,      4(%1) \n"\
"psrlq     $32,        %%mm3 \n"\
"psrlq     $16,        %%mm2 \n"\
"movd      %%mm3,      6(%1) \n"\
"movd      %%mm2,     10(%1) \n"\
"psrlq     $16,        %%mm2 \n"\
"movd      %%mm5,     12(%1) \n"\
"movd      %%mm2,     16(%1) \n"\
"psrlq     $32,        %%mm5 \n"\
"movd      %%mm2,     20(%1) \n"\
"movd      %%mm5,     18(%1) \n"\
static inline int RENAME(yuv420_rgb24)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static inline int RENAME(yuv420_bgr24)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define SET_EMPTY_ALPHA                                                      \
"pcmpeqd   %%mm"REG_ALPHA", %%mm"REG_ALPHA"\n\t" \
#define LOAD_ALPHA                                   \
"movq      (%6, %0, 2),     %%mm"REG_ALPHA"\n\t" \
#define RGB_PACK32(red, green, blue, alpha)  \
"movq      %%mm"blue",  %%mm5\n\t"       \
"movq      %%mm"red",   %%mm6\n\t"       \
"punpckhbw %%mm"green", %%mm5\n\t"       \
"punpcklbw %%mm"green", %%mm"blue"\n\t"  \
"punpckhbw %%mm"alpha", %%mm6\n\t"       \
"punpcklbw %%mm"alpha", %%mm"red"\n\t"   \
"movq      %%mm"blue",  %%mm"green"\n\t" \
"movq      %%mm5,       %%mm"alpha"\n\t" \
"punpcklwd %%mm"red",   %%mm"blue"\n\t"  \
"punpckhwd %%mm"red",   %%mm"green"\n\t" \
"punpcklwd %%mm6,       %%mm5\n\t"       \
"punpckhwd %%mm6,       %%mm"alpha"\n\t" \
MOVNTQ "   %%mm"blue",   0(%1)\n\t"      \
MOVNTQ "   %%mm"green",  8(%1)\n\t"      \
MOVNTQ "   %%mm5,       16(%1)\n\t"      \
MOVNTQ "   %%mm"alpha", 24(%1)\n\t"      \
#if !COMPILE_TEMPLATE_MMXEXT
static inline int RENAME(yuv420_rgb32)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#if HAVE_7REGS && CONFIG_SWSCALE_ALPHA
static inline int RENAME(yuva420_rgb32)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static inline int RENAME(yuv420_bgr32)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#if HAVE_7REGS && CONFIG_SWSCALE_ALPHA
static inline int RENAME(yuva420_bgr32)(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
