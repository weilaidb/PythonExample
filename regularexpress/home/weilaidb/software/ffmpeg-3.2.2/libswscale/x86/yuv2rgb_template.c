#undef MOVNTQ
#undef EMMS
#undef SFENCE
#if COMPILE_TEMPLATE_MMXEXT
#define MOVNTQ
#define SFENCE
#define MOVNTQ
#define SFENCE
#define REG_BLUE
#define REG_RED
#define REG_GREEN
#define REG_ALPHA
YUV2RGB_LOOP                                          \
h_size = (c->dstW + 7) & ~7;                                     \
if (h_size * depth > FFABS(dstStride[0]))                        \
h_size -= 8;                                                 \
\
vshift = c->srcFormat != AV_PIX_FMT_YUV422P;                        \
\
__asm__ volatile ();                        \
for (y = 0; y < srcSliceH; y++)                                                              \
#define YUV2RGB_OPERANDS_ALPHA                                    \
:  (image)                              \
: (&c->redDither), \
(pa - 2*index)                  \
NAMED_CONSTRAINTS_ADD(mmx_00ffw)                        \
:                                                 \
);                                                        \
}                                                             \
#define YUV2RGB_ENDFUNC                          \
__asm__ volatile (SFENCE               \
);             \
return srcSliceH;                            \
IF0
IF1 x
RGB_PACK16                  \
\
\
\
\
\
\
IF##is15()            \
\
\
\
\
\
\
\
MOVNTQ              \
MOVNTQ              \
#define DITHER_RGB                               \
\
\
\
#if !COMPILE_TEMPLATE_MMXEXT
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
RGB_PACK24\
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
RGB_PACK24_B
DECLARE_ASM_CONST = ;
DECLARE_ASM_CONST(8, int16_t, mask0010[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask0110[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask1001[4]) = ;
DECLARE_ASM_CONST(8, int16_t, mask0100[4]) = ;
#undef RGB_PACK24_B
#define RGB_PACK24_B\
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
MOVNTQ\
MOVNTQ\
MOVNTQ\
#undef RGB_PACK24_B
#define RGB_PACK24_B\
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
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define SET_EMPTY_ALPHA                                                      \
\
#define LOAD_ALPHA                                   \
\
RGB_PACK32  \
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
MOVNTQ       \
MOVNTQ       \
MOVNTQ       \
MOVNTQ       \
#if !COMPILE_TEMPLATE_MMXEXT
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#if HAVE_7REGS && CONFIG_SWSCALE_ALPHA
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#if HAVE_7REGS && CONFIG_SWSCALE_ALPHA
RENAME(SwsContext *c, const uint8_t *src[],
int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
