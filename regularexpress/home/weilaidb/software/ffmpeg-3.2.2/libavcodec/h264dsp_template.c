op_scale1  block[x] = av_clip_pixel( (block[x]*weight + offset) >> log2_denom )
op_scale2  dst[x] = av_clip_pixel( (src[x]*weights + dst[x]*weightd + offset) >> (log2_denom+1))
H264_WEIGHT \
FUNCC(uint8_t *_block, ptrdiff_t stride, int height, \
int log2_denom, int weight, int offset) \
\
FUNCC(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride, int height, \
int log2_denom, int weightd, int weights, int offset) \
H264_WEIGHT(16)
H264_WEIGHT(8)
H264_WEIGHT(4)
H264_WEIGHT(2)
#undef op_scale1
#undef op_scale2
#undef H264_WEIGHT
FUNCC(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
FUNCC(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
FUNCC(uint8_t *pix, int stride, int alpha, int beta)
