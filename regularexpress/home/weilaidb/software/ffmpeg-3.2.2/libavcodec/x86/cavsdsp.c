#if HAVE_MMX_INLINE
SUMSUB_BA \
\
\
cavs_idct8_1d
SBUTTERFLY\
\
\
\
TRANSPOSE4\
SBUTTERFLY(a,b,t,wd,q)\
SBUTTERFLY(c,d,b,wd,q)\
SBUTTERFLY(a,c,d,dq,q)\
SBUTTERFLY(t,b,c,dq,q)
cavs_idct8_add_mmx
#if (HAVE_MMXEXT_INLINE || HAVE_AMD3DNOW_INLINE)
QPEL_CAVSV1 \
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
OP(%%mm6, (%1), A, d)            \
QPEL_CAVSV2 \
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
OP(%%mm6, (%1), A, d)            \
QPEL_CAVSV3 \
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
OP(%%mm6, (%1), A, d)            \
QPEL_CAVSVNUM\
int w= 2;\
src -= 2*srcStride;\
\
while(w--)
QPEL_CAVS\
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
CAVS_MC \
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
PUT_OP
AVG_3DNOW_OP \
\
\
AVG_MMXEXT_OP \
\
\
#if HAVE_MMX_EXTERNAL
put_cavs_qpel8_mc00_mmx
avg_cavs_qpel8_mc00_mmx
avg_cavs_qpel8_mc00_mmxext
put_cavs_qpel16_mc00_mmx
avg_cavs_qpel16_mc00_mmx
avg_cavs_qpel16_mc00_mmxext
put_cavs_qpel16_mc00_sse2
avg_cavs_qpel16_mc00_sse2
cavsdsp_init_mmx
DSPFUNC                                                       \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 2] = PFX ## _cavs_qpel ## NUM ## _mc20_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 4] = PFX ## _cavs_qpel ## NUM ## _mc01_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][ 8] = PFX ## _cavs_qpel ## NUM ## _mc02_ ## EXT; \
c->PFX ## _cavs_qpel_pixels_tab[IDX][12] = PFX ## _cavs_qpel ## NUM ## _mc03_ ## EXT; \
QPEL_CAVS
QPEL_CAVS(avg_, AVG_MMXEXT_OP, mmxext)
CAVS_MC(put_,  8, mmxext)
CAVS_MC(put_, 16, mmxext)
CAVS_MC(avg_,  8, mmxext)
CAVS_MC(avg_, 16, mmxext)
QPEL_CAVS
QPEL_CAVS(avg_, AVG_3DNOW_OP, 3dnow)
CAVS_MC(put_, 8, 3dnow)
CAVS_MC(put_, 16,3dnow)
CAVS_MC(avg_, 8, 3dnow)
CAVS_MC(avg_, 16,3dnow)
cavsdsp_init_3dnow
ff_cavsdsp_init_x86
