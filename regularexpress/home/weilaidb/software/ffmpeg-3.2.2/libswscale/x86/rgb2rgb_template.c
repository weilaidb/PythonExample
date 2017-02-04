#undef PREFETCH
#undef MOVNTQ
#undef EMMS
#undef SFENCE
#undef PAVGB
#if COMPILE_TEMPLATE_AMD3DNOW
#define PREFETCH
#define PAVGB
#elif COMPILE_TEMPLATE_MMXEXT
#define PREFETCH
#define PAVGB
#define PREFETCH
#if COMPILE_TEMPLATE_AMD3DNOW
#define EMMS
#define EMMS
#if COMPILE_TEMPLATE_MMXEXT
#define MOVNTQ
#define SFENCE
#define MOVNTQ
#define SFENCE
#if !COMPILE_TEMPLATE_SSE2
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
#define STORE_BGR24_MMX \
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
MOVNTQ \
MOVNTQ \
MOVNTQ
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
#define PACK_RGB32 \
\
\
\
\
\
\
\
\
MOVNTQ                               \
MOVNTQ                               \
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *src, uint8_t *dst, int src_size)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride, int vertLumPerChroma)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride, int vertLumPerChroma)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
RENAME(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride)
RENAME(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if COMPILE_TEMPLATE_MMXEXT || COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src, uint8_t *dst, int srcWidth, int srcHeight, int srcStride, int dstStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if HAVE_7REGS
RENAME(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride,
int32_t *rgb2yuv)
#if !COMPILE_TEMPLATE_AMD3DNOW && !COMPILE_TEMPLATE_AVX
RENAME(const uint8_t *src1, const uint8_t *src2, uint8_t *dest,
int width, int height, int src1Stride,
int src2Stride, int dstStride)
#if !COMPILE_TEMPLATE_AVX || HAVE_AVX_EXTERNAL
#if !COMPILE_TEMPLATE_AMD3DNOW && (ARCH_X86_32 || COMPILE_TEMPLATE_SSE2) && COMPILE_TEMPLATE_MMXEXT == COMPILE_TEMPLATE_SSE2 && HAVE_YASM
RENAME(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused,
const uint8_t *src1,
const uint8_t *src2,
int w,
uint32_t *unused2);
RENAME(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride)
#if !COMPILE_TEMPLATE_SSE2
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2)
RENAME(const uint8_t *src1, const uint8_t *src2, const uint8_t *src3,
uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride)
RENAME(const uint8_t *src, uint8_t *dst, x86_reg count)
RENAME(const uint8_t *src, uint8_t *dst, x86_reg count)
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src, uint8_t *dst0, uint8_t *dst1, x86_reg count)
RENAME(const uint8_t *src0, const uint8_t *src1, uint8_t *dst0, uint8_t *dst1, x86_reg count)
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(const uint8_t *src, uint8_t *dst0, uint8_t *dst1, x86_reg count)
RENAME(const uint8_t *src0, const uint8_t *src1, uint8_t *dst0, uint8_t *dst1, x86_reg count)
RENAME(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
RENAME(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
#if !COMPILE_TEMPLATE_AMD3DNOW
RENAME(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride)
RENAME(void)
