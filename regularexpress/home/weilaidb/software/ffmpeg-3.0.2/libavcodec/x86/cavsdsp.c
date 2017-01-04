#if HAVE_MMX_INLINE
#define SUMSUB_BA( a, b ) \
"paddw "#b", "#a" \n\t"\
"paddw "#b", "#b" \n\t"\
"psubw "#a", "#b" \n\t"
static inline void cavs_idct8_1d(int16_t *block, uint64_t bias)
#define SBUTTERFLY(a,b,t,n,m)\
"mov" #m " " #a ", " #t "         \n\t"\
"punpckl" #n " " #b ", " #a "     \n\t"\
"punpckh" #n " " #b ", " #t "     \n\t"\
#define TRANSPOSE4(a,b,c,d,t)\
SBUTTERFLY(a,b,t,wd,q)\
SBUTTERFLY(c,d,b,wd,q)\
SBUTTERFLY(a,c,d,dq,q)\
SBUTTERFLY(t,b,c,dq,q)
static void cavs_idct8_add_mmx(uint8_t *dst, int16_t *block, int stride)
#if (HAVE_MMXEXT_INLINE || HAVE_AMD3DNOW_INLINE)
#define QPEL_CAVSV1(A,B,C,D,E,F,OP,ADD, MUL1, MUL2) \
"movd (%0), "#F"            \n\t"\
"movq "#C", %%mm6           \n\t"\
"pmullw "MANGLE(MUL1)", %%mm6\n\t"\
"movq "#D", %%mm7           \n\t"\
"pmullw "MANGLE(MUL2)", %%mm7\n\t"\
"psllw $3, "#E"             \n\t"\
"psubw "#E", %%mm6          \n\t"\
"psraw $3, "#E"             \n\t"\
"paddw %%mm7, %%mm6         \n\t"\
"paddw "#E", %%mm6          \n\t"\
"paddw "#B", "#B"           \n\t"\
"pxor %%mm7, %%mm7          \n\t"\
"add %2, %0                 \n\t"\
"punpcklbw %%mm7, "#F"      \n\t"\
"psubw "#B", %%mm6          \n\t"\
"psraw $1, "#B"             \n\t"\
"psubw "#A", %%mm6          \n\t"\
"paddw "MANGLE(ADD)", %%mm6 \n\t"\
"psraw $7, %%mm6            \n\t"\
"packuswb %%mm6, %%mm6      \n\t"\
OP(%%mm6, (%1), A, d)            \
"add %3, %1                 \n\t"
#define QPEL_CAVSV2(A,B,C,D,E,F,OP,ADD, MUL1, MUL2) \
"movd (%0), "#F"            \n\t"\
"movq "#C", %%mm6           \n\t"\
"paddw "#D", %%mm6          \n\t"\
"pmullw "MANGLE(MUL1)", %%mm6\n\t"\
"add %2, %0                 \n\t"\
"punpcklbw %%mm7, "#F"      \n\t"\
"psubw "#B", %%mm6          \n\t"\
"psubw "#E", %%mm6          \n\t"\
"paddw "MANGLE(ADD)", %%mm6 \n\t"\
"psraw $3, %%mm6            \n\t"\
"packuswb %%mm6, %%mm6      \n\t"\
OP(%%mm6, (%1), A, d)            \
"add %3, %1                 \n\t"
#define QPEL_CAVSV3(A,B,C,D,E,F,OP,ADD, MUL1, MUL2) \
"movd (%0), "#F"            \n\t"\
"movq "#C", %%mm6           \n\t"\
"pmullw "MANGLE(MUL2)", %%mm6\n\t"\
"movq "#D", %%mm7           \n\t"\
"pmullw "MANGLE(MUL1)", %%mm7\n\t"\
"psllw $3, "#B"             \n\t"\
"psubw "#B", %%mm6          \n\t"\
"psraw $3, "#B"             \n\t"\
"paddw %%mm7, %%mm6         \n\t"\
"paddw "#B", %%mm6          \n\t"\
"paddw "#E", "#E"           \n\t"\
"pxor %%mm7, %%mm7          \n\t"\
"add %2, %0                 \n\t"\
"punpcklbw %%mm7, "#F"      \n\t"\
"psubw "#E", %%mm6          \n\t"\
"psraw $1, "#E"             \n\t"\
"psubw "#F", %%mm6          \n\t"\
"paddw "MANGLE(ADD)", %%mm6 \n\t"\
"psraw $7, %%mm6            \n\t"\
"packuswb %%mm6, %%mm6      \n\t"\
OP(%%mm6, (%1), A, d)            \
"add %3, %1                 \n\t"
#define QPEL_CAVSVNUM(VOP,OP,ADD,MUL1,MUL2)\
int w= 2;\
src -= 2*srcStride;\
\
while(w--)
#define QPEL_CAVS(OPNAME, OP, MMX)\
static void OPNAME ## cavs_qpel8_h_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static inline void OPNAME ## cavs_qpel8or16_v1_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)\
\
static inline void OPNAME ## cavs_qpel8or16_v2_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)\
\
static inline void OPNAME ## cavs_qpel8or16_v3_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)\
\
static void OPNAME ## cavs_qpel8_v1_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
static void OPNAME ## cavs_qpel16_v1_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_qpel8_v2_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
static void OPNAME ## cavs_qpel16_v2_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_qpel8_v3_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
static void OPNAME ## cavs_qpel16_v3_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_qpel16_h_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
#define CAVS_MC(OPNAME, SIZE, MMX) \
static void OPNAME ## cavs_qpel ## SIZE ## _mc20_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc01_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc02_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc03_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
#define PUT_OP(a,b,temp, size) "mov" #size " " #a ", " #b "    \n\t"
#define AVG_3DNOW_OP(a,b,temp, size) \
"mov" #size " " #b ", " #temp "   \n\t"\
"pavgusb " #temp ", " #a "        \n\t"\
"mov" #size " " #a ", " #b "      \n\t"
#define AVG_MMXEXT_OP(a, b, temp, size) \
"mov" #size " " #b ", " #temp "   \n\t"\
"pavgb " #temp ", " #a "          \n\t"\
"mov" #size " " #a ", " #b "      \n\t"
#if HAVE_MMX_EXTERNAL
static void put_cavs_qpel8_mc00_mmx(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_cavs_qpel8_mc00_mmx(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_cavs_qpel8_mc00_mmxext(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void put_cavs_qpel16_mc00_mmx(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_cavs_qpel16_mc00_mmx(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_cavs_qpel16_mc00_mmxext(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void put_cavs_qpel16_mc00_sse2(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_cavs_qpel16_mc00_sse2(uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static av_cold void cavsdsp_init_mmx(CAVSDSPContext *c,
AVCodecContext *avctx)
#define DSPFUNC(PFX, IDX, NUM, EXT)                                                       \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 2] = PFX ## _cavs_qpel ## NUM ## _mc20_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 4] = PFX ## _cavs_qpel ## NUM ## _mc01_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 8] = PFX ## _cavs_qpel ## NUM ## _mc02_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][12] = PFX ## _cavs_qpel ## NUM ## _mc03_ ## EXT; \
#if HAVE_MMXEXT_INLINE
QPEL_CAVS(put_,        PUT_OP, mmxext)
QPEL_CAVS(avg_, AVG_MMXEXT_OP, mmxext)
CAVS_MC(put_,  8, mmxext)
CAVS_MC(put_, 16, mmxext)
CAVS_MC(avg_,  8, mmxext)
CAVS_MC(avg_, 16, mmxext)
#if HAVE_AMD3DNOW_INLINE
QPEL_CAVS(put_,       PUT_OP, 3dnow)
QPEL_CAVS(avg_, AVG_3DNOW_OP, 3dnow)
CAVS_MC(put_, 8, 3dnow)
CAVS_MC(put_, 16,3dnow)
CAVS_MC(avg_, 8, 3dnow)
CAVS_MC(avg_, 16,3dnow)
static av_cold void cavsdsp_init_3dnow(CAVSDSPContext *c,
AVCodecContext *avctx)
av_cold void ff_cavsdsp_init_x86(CAVSDSPContext *c, AVCodecContext *avctx)
