static inline void FUNC(copy_block2)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
static inline void FUNC(copy_block4)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
static inline void FUNC(copy_block8)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
static inline void FUNC(copy_block16)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
#define H264_LOWPASS(OPNAME, OP, OP2) \
static av_unused void FUNC(OPNAME ## h264_qpel2_h_lowpass)(uint8_t *p_dst, const uint8_t *p_src, int dstStride, int srcStride)\
\
static av_unused void FUNC(OPNAME ## h264_qpel2_v_lowpass)(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
static av_unused void FUNC(OPNAME ## h264_qpel2_hv_lowpass)(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
static void FUNC(OPNAME ## h264_qpel4_h_lowpass)(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel4_v_lowpass)(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel4_hv_lowpass)(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel8_h_lowpass)(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel8_v_lowpass)(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel8_hv_lowpass)(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel16_v_lowpass)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel16_h_lowpass)(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void FUNC(OPNAME ## h264_qpel16_hv_lowpass)(uint8_t *dst, pixeltmp *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
#define H264_MC(OPNAME, SIZE) \
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc00)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc10)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc20)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc30)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc01)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc02)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc03)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc11)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc31)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc13)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc33)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc22)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc21)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc23)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc12)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void FUNCC(OPNAME ## h264_qpel ## SIZE ## _mc32)(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
#define op_avg(a, b)  a = (((a)+CLIP(((b) + 16)>>5)+1)>>1)
#define op_put(a, b)  a = CLIP(((b) + 16)>>5)
#define op2_avg(a, b)  a = (((a)+CLIP(((b) + 512)>>10)+1)>>1)
#define op2_put(a, b)  a = CLIP(((b) + 512)>>10)
H264_LOWPASS(put_       , op_put, op2_put)
H264_LOWPASS(avg_       , op_avg, op2_avg)
H264_MC(put_, 2)
H264_MC(put_, 4)
H264_MC(put_, 8)
H264_MC(put_, 16)
H264_MC(avg_, 4)
H264_MC(avg_, 8)
H264_MC(avg_, 16)
#undef op_avg
#undef op_put
#undef op2_avg
#undef op2_put
