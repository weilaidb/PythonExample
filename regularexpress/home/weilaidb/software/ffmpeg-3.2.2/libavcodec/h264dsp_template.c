#define op_scale1(x)  block[x] = av_clip_pixel( (block[x]*weight + offset) >> log2_denom )
#define op_scale2(x)  dst[x] = av_clip_pixel( (src[x]*weights + dst[x]*weightd + offset) >> (log2_denom+1))
#define H264_WEIGHT(W) \
static void FUNCC(weight_h264_pixels ## W)(uint8_t *_block, ptrdiff_t stride, int height, \
int log2_denom, int weight, int offset) \
\
static void FUNCC(biweight_h264_pixels ## W)(uint8_t *_dst, uint8_t *_src, ptrdiff_t stride, int height, \
int log2_denom, int weightd, int weights, int offset) \
H264_WEIGHT(16)
H264_WEIGHT(8)
H264_WEIGHT(4)
H264_WEIGHT(2)
#undef op_scale1
#undef op_scale2
#undef H264_WEIGHT
static av_always_inline av_flatten void FUNCC(h264_loop_filter_luma)(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_v_loop_filter_luma)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_luma)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_luma_mbaff)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static av_always_inline av_flatten void FUNCC(h264_loop_filter_luma_intra)(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta)
static void FUNCC(h264_v_loop_filter_luma_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_luma_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_luma_mbaff_intra)(uint8_t *pix, int stride, int alpha, int beta)
static av_always_inline av_flatten void FUNCC(h264_loop_filter_chroma)(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_v_loop_filter_chroma)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_chroma)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_chroma_mbaff)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_chroma422)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static void FUNCC(h264_h_loop_filter_chroma422_mbaff)(uint8_t *pix, int stride, int alpha, int beta, int8_t *tc0)
static av_always_inline av_flatten void FUNCC(h264_loop_filter_chroma_intra)(uint8_t *p_pix, int xstride, int ystride, int inner_iters, int alpha, int beta)
static void FUNCC(h264_v_loop_filter_chroma_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_chroma_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_chroma_mbaff_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_chroma422_intra)(uint8_t *pix, int stride, int alpha, int beta)
static void FUNCC(h264_h_loop_filter_chroma422_mbaff_intra)(uint8_t *pix, int stride, int alpha, int beta)
