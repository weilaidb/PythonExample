#   define RENAME(a) a ## _C
#   define TEMPLATE_PP_C 0
#   define RENAME(a) a ## _altivec
#   define TEMPLATE_PP_ALTIVEC 0
#   define RENAME(a) a ## _MMX
#   define TEMPLATE_PP_MMX 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
#   define RENAME(a) a ## _MMX2
#   define TEMPLATE_PP_MMXEXT 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
#   define RENAME(a) a ## _3DNow
#   define TEMPLATE_PP_3DNOW 0
#   undef  TEMPLATE_PP_MMX
#   define TEMPLATE_PP_MMX 1
#   undef  TEMPLATE_PP_MMXEXT
#   define TEMPLATE_PP_MMXEXT 1
#   define RENAME(a) a ## _SSE2
#   define TEMPLATE_PP_SSE2 0
#undef REAL_PAVGB
#undef PAVGB
#undef PMINUB
#undef PMAXUB
#if   TEMPLATE_PP_MMXEXT
#define REAL_PAVGB(a,b) "pavgb " #a ", " #b " \n\t"
#elif TEMPLATE_PP_3DNOW
#define REAL_PAVGB(a,b) "pavgusb " #a ", " #b " \n\t"
#define PAVGB(a,b)  REAL_PAVGB(a,b)
#if   TEMPLATE_PP_MMXEXT
#define PMINUB(a,b,t) "pminub " #a ", " #b " \n\t"
#elif TEMPLATE_PP_MMX
#define PMINUB(b,a,t) \
"movq " #a ", " #t " \n\t"\
"psubusb " #b ", " #t " \n\t"\
"psubb " #t ", " #a " \n\t"
#if   TEMPLATE_PP_MMXEXT
#define PMAXUB(a,b) "pmaxub " #a ", " #b " \n\t"
#elif TEMPLATE_PP_MMX
#define PMAXUB(a,b) \
"psubusb " #a ", " #b " \n\t"\
"paddb " #a ", " #b " \n\t"
#if TEMPLATE_PP_MMX
static inline int RENAME(vertClassify)(const uint8_t src[], int stride, PPContext *c)
#if !TEMPLATE_PP_ALTIVEC
static inline void RENAME(doVertLowPass)(uint8_t *src, int stride, PPContext *c)
static inline void RENAME(vertX1Filter)(uint8_t *src, int stride, PPContext *co)
#if !TEMPLATE_PP_ALTIVEC
static inline void RENAME(doVertDefFilter)(uint8_t src[], int stride, PPContext *c)
#if !TEMPLATE_PP_ALTIVEC
static inline void RENAME(dering)(uint8_t src[], int stride, PPContext *c)
static inline void RENAME(deInterlaceInterpolateLinear)(uint8_t src[], int stride)
static inline void RENAME(deInterlaceInterpolateCubic)(uint8_t src[], int stride)
static inline void RENAME(deInterlaceFF)(uint8_t src[], int stride, uint8_t *tmp)
static inline void RENAME(deInterlaceL5)(uint8_t src[], int stride, uint8_t *tmp, uint8_t *tmp2)
static inline void RENAME(deInterlaceBlendLinear)(uint8_t src[], int stride, uint8_t *tmp)
static inline void RENAME(deInterlaceMedian)(uint8_t src[], int stride)
#if TEMPLATE_PP_MMX
static inline void RENAME(transpose1)(uint8_t *dst1, uint8_t *dst2, const uint8_t *src, int srcStride)
static inline void RENAME(transpose2)(uint8_t *dst, int dstStride, const uint8_t *src)
#if !TEMPLATE_PP_ALTIVEC
static inline void RENAME(tempNoiseReducer)(uint8_t *src, int stride,
uint8_t *tempBlurred, uint32_t *tempBlurredPast, const int *maxNoise)
#if TEMPLATE_PP_MMX
static av_always_inline void RENAME(do_a_deblock)(uint8_t *src, int step, int stride, const PPContext *c, int mode)
static void RENAME(postProcess)(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c);
#undef REAL_SCALED_CPY
#undef SCALED_CPY
static inline void RENAME(blockCopy)(uint8_t dst[], int dstStride, const uint8_t src[], int srcStride,
int levelFix, int64_t *packedOffsetAndScale)
static inline void RENAME(duplicate)(uint8_t src[], int stride)
#if ARCH_X86 && TEMPLATE_PP_MMXEXT
static inline void RENAME(prefetchnta)(const void *p)
static inline void RENAME(prefetcht0)(const void *p)
static inline void RENAME(prefetcht1)(const void *p)
static inline void RENAME(prefetcht2)(const void *p)
#elif !ARCH_X86 && AV_GCC_VERSION_AT_LEAST(3,2)
static inline void RENAME(prefetchnta)(const void *p)
static inline void RENAME(prefetcht0)(const void *p)
static inline void RENAME(prefetcht1)(const void *p)
static inline void RENAME(prefetcht2)(const void *p)
static inline void RENAME(prefetchnta)(const void *p)
static inline void RENAME(prefetcht0)(const void *p)
static inline void RENAME(prefetcht1)(const void *p)
static inline void RENAME(prefetcht2)(const void *p)
static void RENAME(postProcess)(const uint8_t src[], int srcStride, uint8_t dst[], int dstStride, int width, int height,
const QP_STORE_T QPs[], int QPStride, int isColor, PPContext *c2)
#undef RENAME
#undef TEMPLATE_PP_C
#undef TEMPLATE_PP_ALTIVEC
#undef TEMPLATE_PP_MMX
#undef TEMPLATE_PP_MMXEXT
#undef TEMPLATE_PP_3DNOW
#undef TEMPLATE_PP_SSE2
