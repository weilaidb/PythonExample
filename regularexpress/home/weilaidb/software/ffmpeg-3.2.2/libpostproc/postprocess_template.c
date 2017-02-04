RENAME a ## _C
#   define TEMPLATE_PP_C 0
RENAME a ## _altivec
#   define TEMPLATE_PP_ALTIVEC 0
RENAME a ## _MMX
#   define TEMPLATE_PP_MMX 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
RENAME a ## _MMX2
#   define TEMPLATE_PP_MMXEXT 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
RENAME a ## _3DNow
#   define TEMPLATE_PP_3DNOW 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
#   undef  TEMPLATE_PP_MMXEXT
#   define TEMPLATE_PP_MMXEXT 1
RENAME a ## _SSE2
#   define TEMPLATE_PP_SSE2 0
#undef REAL_PAVGB
#undef PAVGB
#undef PMINUB
#undef PMAXUB
#if   TEMPLATE_PP_MMXEXT
REAL_PAVGB
#elif TEMPLATE_PP_3DNOW
REAL_PAVGB
PAVGB  REAL_PAVGB(a,b)
#if   TEMPLATE_PP_MMXEXT
PMINUB
#elif TEMPLATE_PP_MMX
PMINUB \
\
\
#if   TEMPLATE_PP_MMXEXT
PMAXUB
#elif TEMPLATE_PP_MMX
PMAXUB \
\
#if TEMPLATE_PP_MMX
RENAME(const uint8_t src[], int stride, PPContext *c)
#if !TEMPLATE_PP_ALTIVEC
RENAME(uint8_t *src, int stride, PPContext *c)
RENAME(uint8_t *src, int stride, PPContext *co)
#if !TEMPLATE_PP_ALTIVEC
RENAME(uint8_t src[], int stride, PPContext *c)
#if !TEMPLATE_PP_ALTIVEC
RENAME(uint8_t src[], int stride, PPContext *c)
RENAME(uint8_t src[], int stride)
RENAME(uint8_t src[], int stride)
RENAME(uint8_t src[], int stride, uint8_t *tmp)
RENAME(uint8_t src[], int stride, uint8_t *tmp, uint8_t *tmp2)
RENAME(uint8_t src[], int stride, uint8_t *tmp)
RENAME(uint8_t src[], int stride)
#if TEMPLATE_PP_MMX
RENAME(uint8_t *dst1, uint8_t *dst2, const uint8_t *src, int srcStride)
RENAME(uint8_t *dst, int dstStride, const uint8_t *src)
#if !TEMPLATE_PP_ALTIVEC
RENAME(uint8_t *src, int stride,
uint8_t *tempBlurred, uint32_t *tempBlurredPast, const int *maxNoise)
#if TEMPLATE_PP_MMX
RENAME(uint8_t *src, int step, int stride, const PPContext *c, int mode)
RENAME(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c);
#undef REAL_SCALED_CPY
#undef SCALED_CPY
RENAME(uint8_t dst[], int dstStride, const uint8_t src[], int srcStride,
int levelFix, int64_t *packedOffsetAndScale)
RENAME(uint8_t src[], int stride)
#if ARCH_X86 && TEMPLATE_PP_MMXEXT
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
AV_GCC_VERSION_AT_LEAST
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const void *p)
RENAME(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c2)
#undef RENAME
#undef TEMPLATE_PP_C
#undef TEMPLATE_PP_ALTIVEC
#undef TEMPLATE_PP_MMX
#undef TEMPLATE_PP_MMXEXT
#undef TEMPLATE_PP_3DNOW
#undef TEMPLATE_PP_SSE2
