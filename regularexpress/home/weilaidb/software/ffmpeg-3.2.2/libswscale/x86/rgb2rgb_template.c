#undef PREFETCH
#undef MOVNTQ
#undef EMMS
#undef SFENCE
#undef PAVGB
#if COMPILE_TEMPLATE_AMD3DNOW
#define PREFETCH  "prefetch"
#define PAVGB     "pavgusb"
#elif COMPILE_TEMPLATE_MMXEXT
#define PREFETCH "prefetchnta"
#define PAVGB     "pavgb"
#define PREFETCH  " # nop"
#if COMPILE_TEMPLATE_AMD3DNOW
#define EMMS     "femms"
#define EMMS     "emms"
#if COMPILE_TEMPLATE_MMXEXT
#define MOVNTQ "movntq"
#define SFENCE "sfence"
#define MOVNTQ "movq"
#define SFENCE " # nop"
#if !COMPILE_TEMPLATE_SSE2
#if !COMPILE_TEMPLATE_AMD3DNOW
static inline void RENAME(rgb24tobgr32)(const uint8_t *src, uint8_t *dst, int src_size)
#define STORE_BGR24_MMX \
"psrlq         $8, %%mm2    \n\t" \
"psrlq         $8, %%mm3    \n\t" \
"psrlq         $8, %%mm6    \n\t" \
"psrlq         $8, %%mm7    \n\t" \
"pand "MANGLE(mask24l)", %%mm0\n\t" \
"pand "MANGLE(mask24l)", %%mm1\n\t" \
"pand "MANGLE(mask24l)", %%mm4\n\t" \
"pand "MANGLE(mask24l)", %%mm5\n\t" \
"pand "MANGLE(mask24h)", %%mm2\n\t" \
"pand "MANGLE(mask24h)", %%mm3\n\t" \
"pand "MANGLE(mask24h)", %%mm6\n\t" \
"pand "MANGLE(mask24h)", %%mm7\n\t" \
"por        %%mm2, %%mm0    \n\t" \
"por        %%mm3, %%mm1    \n\t" \
"por        %%mm6, %%mm4    \n\t" \
"por        %%mm7, %%mm5    \n\t" \
\
"movq       %%mm1, %%mm2    \n\t" \
"movq       %%mm4, %%mm3    \n\t" \
"psllq        $48, %%mm2    \n\t" \
"psllq        $32, %%mm3    \n\t" \
"por        %%mm2, %%mm0    \n\t" \
"psrlq        $16, %%mm1    \n\t" \
"psrlq        $32, %%mm4    \n\t" \
"psllq        $16, %%mm5    \n\t" \
"por        %%mm3, %%mm1    \n\t" \
"por        %%mm5, %%mm4    \n\t" \
\
MOVNTQ"     %%mm0,   (%0)    \n\t" \
MOVNTQ"     %%mm1,  8(%0)    \n\t" \
MOVNTQ"     %%mm4, 16(%0)"
static inline void RENAME(rgb32tobgr24)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb15to16)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb16to15)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb32to16)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb32tobgr16)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb32to15)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb32tobgr15)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb24tobgr16)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb24to16)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb24tobgr15)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb24to15)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb15tobgr24)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb16tobgr24)(const uint8_t *src, uint8_t *dst, int src_size)
#define PACK_RGB32 \
"packuswb   %%mm7, %%mm0    \n\t" \
"packuswb   %%mm7, %%mm1    \n\t" \
"packuswb   %%mm7, %%mm2    \n\t" \
"punpcklbw  %%mm1, %%mm0    \n\t" \
"punpcklbw  %%mm6, %%mm2    \n\t" \
"movq       %%mm0, %%mm3    \n\t"                               \
"punpcklwd  %%mm2, %%mm0    \n\t" \
"punpckhwd  %%mm2, %%mm3    \n\t" \
MOVNTQ"     %%mm0,  (%0)    \n\t"                               \
MOVNTQ"     %%mm3, 8(%0)    \n\t"                               \
static inline void RENAME(rgb15to32)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb16to32)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(shuffle_bytes_2103)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(rgb24tobgr24)(const uint8_t *src, uint8_t *dst, int src_size)
static inline void RENAME(yuvPlanartoyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride, int vertLumPerChroma)
static inline void RENAME(yv12toyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
static inline void RENAME(yuvPlanartouyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride, int vertLumPerChroma)
static inline void RENAME(yv12touyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
static inline void RENAME(yuv422ptouyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
static inline void RENAME(yuv422ptoyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
static inline void RENAME(yuy2toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if COMPILE_TEMPLATE_MMXEXT || COMPILE_TEMPLATE_AMD3DNOW
static inline void RENAME(planar2x)(const uint8_t *src, uint8_t *dst, int srcWidth, int srcHeight, int srcStride, int dstStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
static inline void RENAME(uyvytoyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if HAVE_7REGS
static inline void RENAME(rgb24toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride,
int32_t *rgb2yuv)
#if !COMPILE_TEMPLATE_AMD3DNOW && !COMPILE_TEMPLATE_AVX
static void RENAME(interleaveBytes)(const uint8_t *src1, const uint8_t *src2, uint8_t *dest,
int width, int height, int src1Stride,
int src2Stride, int dstStride)
#if !COMPILE_TEMPLATE_AVX || HAVE_AVX_EXTERNAL
#if !COMPILE_TEMPLATE_AMD3DNOW && (ARCH_X86_32 || COMPILE_TEMPLATE_SSE2) && COMPILE_TEMPLATE_MMXEXT == COMPILE_TEMPLATE_SSE2 && HAVE_YASM
void RENAME(ff_nv12ToUV)(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused,
const uint8_t *src1,
const uint8_t *src2,
int w,
uint32_t *unused2);
static void RENAME(deinterleaveBytes)(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride)
#if !COMPILE_TEMPLATE_SSE2
#if !COMPILE_TEMPLATE_AMD3DNOW
static inline void RENAME(vu9_to_vu12)(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2)
static inline void RENAME(yvu9_to_yuy2)(const uint8_t *src1, const uint8_t *src2, const uint8_t *src3,
uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride)
static void RENAME(extract_even)(const uint8_t *src, uint8_t *dst, x86_reg count)
static void RENAME(extract_odd)(const uint8_t *src, uint8_t *dst, x86_reg count)
#if !COMPILE_TEMPLATE_AMD3DNOW
static void RENAME(extract_even2)(const uint8_t *src, uint8_t *dst0, uint8_t *dst1, x86_reg count)
static void RENAME(extract_even2avg)(const uint8_t *src0, const uint8_t *src1, uint8_t *dst0, uint8_t *dst1, x86_reg count)
#if !COMPILE_TEMPLATE_AMD3DNOW
static void RENAME(extract_odd2)(const uint8_t *src, uint8_t *dst0, uint8_t *dst1, x86_reg count)
static void RENAME(extract_odd2avg)(const uint8_t *src0, const uint8_t *src1, uint8_t *dst0, uint8_t *dst1, x86_reg count)
static void RENAME(yuyvtoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
static void RENAME(yuyvtoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
static void RENAME(uyvytoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
static void RENAME(uyvytoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
static av_cold void RENAME(rgb2rgb_init)(void)
