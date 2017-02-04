FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, int h)
H264_LOWPASS \
FUNC(uint8_t *p_dst, const uint8_t *p_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
FUNC(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
\
FUNC(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, const uint8_t *_src, int dstStride, int srcStride)\
\
FUNC(uint8_t *_dst, pixeltmp *tmp, const uint8_t *_src, int dstStride, int tmpStride, int srcStride)\
\
FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
FUNC(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
FUNC(uint8_t *dst, pixeltmp *tmp, const uint8_t *src, int dstStride, int tmpStride, int srcStride)\
H264_MC \
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
FUNCC(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
op_avg  a = (((a)+CLIP(((b) + 16)>>5)+1)>>1)
op_put  a = CLIP(((b) + 16)>>5)
op2_avg  a = (((a)+CLIP(((b) + 512)>>10)+1)>>1)
op2_put  a = CLIP(((b) + 512)>>10)
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
