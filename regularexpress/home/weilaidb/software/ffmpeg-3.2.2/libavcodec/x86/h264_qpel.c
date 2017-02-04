#if HAVE_YASM
ff_put_pixels4_l2_mmxext;
ff_avg_pixels4_l2_mmxext;
ff_put_pixels8_l2_mmxext;
ff_avg_pixels8_l2_mmxext;
ff_put_pixels16_l2_mmxext;
ff_avg_pixels16_l2_mmxext;
#define ff_put_pixels8_l2_sse2  ff_put_pixels8_l2_mmxext
#define ff_avg_pixels8_l2_sse2  ff_avg_pixels8_l2_mmxext
#define ff_put_pixels16_l2_sse2 ff_put_pixels16_l2_mmxext
#define ff_avg_pixels16_l2_sse2 ff_avg_pixels16_l2_mmxext
#define ff_put_pixels16_mmxext  ff_put_pixels16_mmx
#define ff_put_pixels8_mmxext   ff_put_pixels8_mmx
#define ff_put_pixels4_mmxext   ff_put_pixels4_mmx
DEF_QPEL\
void ff_ ## OPNAME ## _h264_qpel4_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride);\
void ff_ ## OPNAME ## _h264_qpel8_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride);\
void ff_ ## OPNAME ## _h264_qpel8_h_lowpass_ssse3(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride);\
void ff_ ## OPNAME ## _h264_qpel4_h_lowpass_l2_mmxext(uint8_t *dst, const uint8_t *src, const uint8_t *src2, int dstStride, int src2Stride);\
void ff_ ## OPNAME ## _h264_qpel8_h_lowpass_l2_mmxext(uint8_t *dst, const uint8_t *src, const uint8_t *src2, int dstStride, int src2Stride);\
void ff_ ## OPNAME ## _h264_qpel8_h_lowpass_l2_ssse3(uint8_t *dst, const uint8_t *src, const uint8_t *src2, int dstStride, int src2Stride);\
void ff_ ## OPNAME ## _h264_qpel4_v_lowpass_mmxext(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride);\
void ff_ ## OPNAME ## _h264_qpel8or16_v_lowpass_op_mmxext(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h);\
void ff_ ## OPNAME ## _h264_qpel8or16_v_lowpass_sse2(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h);\
void ff_ ## OPNAME ## _h264_qpel4_hv_lowpass_v_mmxext(const uint8_t *src, int16_t *tmp, int srcStride);\
void ff_ ## OPNAME ## _h264_qpel4_hv_lowpass_h_mmxext(int16_t *tmp, uint8_t *dst, int dstStride);\
void ff_ ## OPNAME ## _h264_qpel8or16_hv1_lowpass_op_mmxext(const uint8_t *src, int16_t *tmp, int srcStride, int size);\
void ff_ ## OPNAME ## _h264_qpel8or16_hv1_lowpass_op_sse2(const uint8_t *src, int16_t *tmp, int srcStride, int size);\
void ff_ ## OPNAME ## _h264_qpel8or16_hv2_lowpass_op_mmxext(uint8_t *dst, int16_t *tmp, int dstStride, int unused, int h);\
void ff_ ## OPNAME ## _h264_qpel8or16_hv2_lowpass_ssse3(uint8_t *dst, int16_t *tmp, int dstStride, int tmpStride, int size);\
void ff_ ## OPNAME ## _pixels4_l2_shift5_mmxext(uint8_t *dst, const int16_t *src16, const uint8_t *src8, int dstStride, int src8Stride, int h);\
void ff_ ## OPNAME ## _pixels8_l2_shift5_mmxext(uint8_t *dst, const int16_t *src16, const uint8_t *src8, int dstStride, int src8Stride, int h);
DEF_QPEL(avg)
DEF_QPEL(put)
QPEL_H264\
static av_always_inline void ff_ ## OPNAME ## h264_qpel4_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8or16_v_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8or16_hv1_lowpass_ ## MMX(int16_t *tmp, const uint8_t *src, int tmpStride, int srcStride, int size)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8or16_hv2_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, int dstStride, int tmpStride, int size)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8_v_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_v_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_h_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_h_lowpass_l2_ ## MMX(uint8_t *dst, const uint8_t *src, const uint8_t *src2, int dstStride, int src2Stride)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8or16_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride, int size)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
\
static av_always_inline void ff_ ## OPNAME ## pixels16_l2_shift5_ ## MMX(uint8_t *dst, const int16_t *src16, const uint8_t *src8, int dstStride, int src8Stride, int h)\
\
#if ARCH_X86_64
QPEL_H264_H16_XMM\
ff_avg_h264_qpel16_h_lowpass_l2_ssse3;
ff_put_h264_qpel16_h_lowpass_l2_ssse3;
QPEL_H264_H16_XMM\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_h_lowpass_l2_ ## MMX(uint8_t *dst, const uint8_t *src, const uint8_t *src2, int dstStride, int src2Stride)
QPEL_H264_H_XMM\
QPEL_H264_H16_XMM(OPNAME, OP, MMX)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_h_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
QPEL_H264_V_XMM\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8_v_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_v_lowpass_ ## MMX(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)
put_h264_qpel8or16_hv1_lowpass_sse2
QPEL_H264_HV_XMM\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8or16_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride, int size)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel8_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
static av_always_inline void ff_ ## OPNAME ## h264_qpel16_hv_lowpass_ ## MMX(uint8_t *dst, int16_t *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
#define ff_put_h264_qpel8_h_lowpass_l2_sse2  ff_put_h264_qpel8_h_lowpass_l2_mmxext
#define ff_avg_h264_qpel8_h_lowpass_l2_sse2  ff_avg_h264_qpel8_h_lowpass_l2_mmxext
#define ff_put_h264_qpel16_h_lowpass_l2_sse2 ff_put_h264_qpel16_h_lowpass_l2_mmxext
#define ff_avg_h264_qpel16_h_lowpass_l2_sse2 ff_avg_h264_qpel16_h_lowpass_l2_mmxext
#define ff_put_h264_qpel8_v_lowpass_ssse3  ff_put_h264_qpel8_v_lowpass_sse2
#define ff_avg_h264_qpel8_v_lowpass_ssse3  ff_avg_h264_qpel8_v_lowpass_sse2
#define ff_put_h264_qpel16_v_lowpass_ssse3 ff_put_h264_qpel16_v_lowpass_sse2
#define ff_avg_h264_qpel16_v_lowpass_ssse3 ff_avg_h264_qpel16_v_lowpass_sse2
#define ff_put_h264_qpel8or16_hv2_lowpass_sse2 ff_put_h264_qpel8or16_hv2_lowpass_mmxext
#define ff_avg_h264_qpel8or16_hv2_lowpass_sse2 ff_avg_h264_qpel8or16_hv2_lowpass_mmxext
H264_MC \
H264_MC_C(OPNAME, SIZE, MMX, ALIGN)\
H264_MC_V(OPNAME, SIZE, MMX, ALIGN)\
H264_MC_H(OPNAME, SIZE, MMX, ALIGN)\
H264_MC_HV(OPNAME, SIZE, MMX, ALIGN)\
static void put_h264_qpel16_mc00_sse2 (uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
static void avg_h264_qpel16_mc00_sse2 (uint8_t *dst, const uint8_t *src,
ptrdiff_t stride)
#define put_h264_qpel8_mc00_sse2 put_h264_qpel8_mc00_mmxext
#define avg_h264_qpel8_mc00_sse2 avg_h264_qpel8_mc00_mmxext
H264_MC_C \
static void OPNAME ## h264_qpel ## SIZE ## _mc00_ ## MMX (uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
H264_MC_H \
static void OPNAME ## h264_qpel ## SIZE ## _mc10_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc20_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc30_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
H264_MC_V \
static void OPNAME ## h264_qpel ## SIZE ## _mc01_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc02_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc03_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
H264_MC_HV \
static void OPNAME ## h264_qpel ## SIZE ## _mc11_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc31_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc13_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc33_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc22_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc21_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc23_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc12_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## h264_qpel ## SIZE ## _mc32_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
H264_MC_4816\
H264_MC(put_, 4, MMX, 8)\
H264_MC(put_, 8, MMX, 8)\
H264_MC(put_, 16,MMX, 8)\
H264_MC(avg_, 4, MMX, 8)\
H264_MC(avg_, 8, MMX, 8)\
H264_MC(avg_, 16,MMX, 8)\
H264_MC_816\
QPEL(put_, 8, XMM, 16)\
QPEL(put_, 16,XMM, 16)\
QPEL(avg_, 8, XMM, 16)\
QPEL(avg_, 16,XMM, 16)\
QPEL_H264(put_,        PUT_OP, mmxext)
QPEL_H264(avg_, AVG_MMXEXT_OP, mmxext)
QPEL_H264_V_XMM(put_,       PUT_OP, sse2)
QPEL_H264_V_XMM(avg_,AVG_MMXEXT_OP, sse2)
QPEL_H264_HV_XMM(put_,       PUT_OP, sse2)
QPEL_H264_HV_XMM(avg_,AVG_MMXEXT_OP, sse2)
QPEL_H264_H_XMM(put_,       PUT_OP, ssse3)
QPEL_H264_H_XMM(avg_,AVG_MMXEXT_OP, ssse3)
QPEL_H264_HV_XMM(put_,       PUT_OP, ssse3)
QPEL_H264_HV_XMM(avg_,AVG_MMXEXT_OP, ssse3)
H264_MC_4816(mmxext)
H264_MC_816(H264_MC_V, sse2)
H264_MC_816(H264_MC_HV, sse2)
H264_MC_816(H264_MC_H, ssse3)
H264_MC_816(H264_MC_HV, ssse3)
LUMA_MC_OP \
void ff_ ## OP ## _h264_qpel ## NUM ## _ ## TYPE ## _ ## DEPTH ## _ ## OPT \
(uint8_t *dst, const uint8_t *src, ptrdiff_t stride);
LUMA_MC_ALL \
LUMA_MC_OP(put,  4, DEPTH, TYPE, OPT) \
LUMA_MC_OP(avg,  4, DEPTH, TYPE, OPT) \
LUMA_MC_OP(put,  8, DEPTH, TYPE, OPT) \
LUMA_MC_OP(avg,  8, DEPTH, TYPE, OPT) \
LUMA_MC_OP(put, 16, DEPTH, TYPE, OPT) \
LUMA_MC_OP(avg, 16, DEPTH, TYPE, OPT)
LUMA_MC_816 \
LUMA_MC_OP(put,  8, DEPTH, TYPE, OPT) \
LUMA_MC_OP(avg,  8, DEPTH, TYPE, OPT) \
LUMA_MC_OP(put, 16, DEPTH, TYPE, OPT) \
LUMA_MC_OP(avg, 16, DEPTH, TYPE, OPT)
LUMA_MC_ALL(10, mc00, mmxext)
LUMA_MC_ALL(10, mc10, mmxext)
LUMA_MC_ALL(10, mc20, mmxext)
LUMA_MC_ALL(10, mc30, mmxext)
LUMA_MC_ALL(10, mc01, mmxext)
LUMA_MC_ALL(10, mc11, mmxext)
LUMA_MC_ALL(10, mc21, mmxext)
LUMA_MC_ALL(10, mc31, mmxext)
LUMA_MC_ALL(10, mc02, mmxext)
LUMA_MC_ALL(10, mc12, mmxext)
LUMA_MC_ALL(10, mc22, mmxext)
LUMA_MC_ALL(10, mc32, mmxext)
LUMA_MC_ALL(10, mc03, mmxext)
LUMA_MC_ALL(10, mc13, mmxext)
LUMA_MC_ALL(10, mc23, mmxext)
LUMA_MC_ALL(10, mc33, mmxext)
LUMA_MC_816(10, mc00, sse2)
LUMA_MC_816(10, mc10, sse2)
LUMA_MC_816(10, mc10, sse2_cache64)
LUMA_MC_816(10, mc10, ssse3_cache64)
LUMA_MC_816(10, mc20, sse2)
LUMA_MC_816(10, mc20, sse2_cache64)
LUMA_MC_816(10, mc20, ssse3_cache64)
LUMA_MC_816(10, mc30, sse2)
LUMA_MC_816(10, mc30, sse2_cache64)
LUMA_MC_816(10, mc30, ssse3_cache64)
LUMA_MC_816(10, mc01, sse2)
LUMA_MC_816(10, mc11, sse2)
LUMA_MC_816(10, mc21, sse2)
LUMA_MC_816(10, mc31, sse2)
LUMA_MC_816(10, mc02, sse2)
LUMA_MC_816(10, mc12, sse2)
LUMA_MC_816(10, mc22, sse2)
LUMA_MC_816(10, mc32, sse2)
LUMA_MC_816(10, mc03, sse2)
LUMA_MC_816(10, mc13, sse2)
LUMA_MC_816(10, mc23, sse2)
LUMA_MC_816(10, mc33, sse2)
QPEL16_OPMC\
void ff_ ## OP ## _h264_qpel16_ ## MC ## _10_ ## MMX(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
QPEL16_OP\
QPEL16_OPMC(put, MC, MMX)\
QPEL16_OPMC(avg, MC, MMX)
QPEL16\
QPEL16_OP(mc00, MMX)\
QPEL16_OP(mc01, MMX)\
QPEL16_OP(mc02, MMX)\
QPEL16_OP(mc03, MMX)\
QPEL16_OP(mc10, MMX)\
QPEL16_OP(mc11, MMX)\
QPEL16_OP(mc12, MMX)\
QPEL16_OP(mc13, MMX)\
QPEL16_OP(mc20, MMX)\
QPEL16_OP(mc21, MMX)\
QPEL16_OP(mc22, MMX)\
QPEL16_OP(mc23, MMX)\
QPEL16_OP(mc30, MMX)\
QPEL16_OP(mc31, MMX)\
QPEL16_OP(mc32, MMX)\
QPEL16_OP(mc33, MMX)
QPEL16
SET_QPEL_FUNCS                          \
do  while (0)
H264_QPEL_FUNCS                                                            \
do  while (0)
H264_QPEL_FUNCS_10                                                               \
do  while (0)
ff_h264qpel_init_x86
