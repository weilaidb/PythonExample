static void FUNCC(pred4x4_vertical)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_horizontal)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_left_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_top_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_128_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_127_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_129_dc)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
#define LOAD_TOP_RIGHT_EDGE\
const unsigned av_unused t4 = topright[0];\
const unsigned av_unused t5 = topright[1];\
const unsigned av_unused t6 = topright[2];\
const unsigned av_unused t7 = topright[3];\
#define LOAD_DOWN_LEFT_EDGE\
const unsigned av_unused l4 = src[-1+4*stride];\
const unsigned av_unused l5 = src[-1+5*stride];\
const unsigned av_unused l6 = src[-1+6*stride];\
const unsigned av_unused l7 = src[-1+7*stride];\
#define LOAD_LEFT_EDGE\
const unsigned av_unused l0 = src[-1+0*stride];\
const unsigned av_unused l1 = src[-1+1*stride];\
const unsigned av_unused l2 = src[-1+2*stride];\
const unsigned av_unused l3 = src[-1+3*stride];\
#define LOAD_TOP_EDGE\
const unsigned av_unused t0 = src[ 0-1*stride];\
const unsigned av_unused t1 = src[ 1-1*stride];\
const unsigned av_unused t2 = src[ 2-1*stride];\
const unsigned av_unused t3 = src[ 3-1*stride];\
static void FUNCC(pred4x4_down_right)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_down_left)(uint8_t *_src, const uint8_t *_topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_vertical_right)(uint8_t *_src,
const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_vertical_left)(uint8_t *_src,
const uint8_t *_topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_horizontal_up)(uint8_t *_src, const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred4x4_horizontal_down)(uint8_t *_src,
const uint8_t *topright,
ptrdiff_t _stride)
static void FUNCC(pred16x16_vertical)(uint8_t *_src, ptrdiff_t _stride)
static void FUNCC(pred16x16_horizontal)(uint8_t *_src, ptrdiff_t stride)
#define PREDICT_16x16_DC(v)\
for(i=0; i<16; i++)
static void FUNCC(pred16x16_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred16x16_left_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred16x16_top_dc)(uint8_t *_src, ptrdiff_t stride)
#define PRED16x16_X(n, v) \
static void FUNCC(pred16x16_##n##_dc)(uint8_t *_src, ptrdiff_t stride)\
PRED16x16_X(127, (1<<(BIT_DEPTH-1))-1)
PRED16x16_X(128, (1<<(BIT_DEPTH-1))+0)
PRED16x16_X(129, (1<<(BIT_DEPTH-1))+1)
static inline void FUNCC(pred16x16_plane_compat)(uint8_t *_src,
ptrdiff_t _stride,
const int svq3,
const int rv40)
static void FUNCC(pred16x16_plane)(uint8_t *src, ptrdiff_t stride)
static void FUNCC(pred8x8_vertical)(uint8_t *_src, ptrdiff_t _stride)
static void FUNCC(pred8x16_vertical)(uint8_t *_src, ptrdiff_t _stride)
static void FUNCC(pred8x8_horizontal)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x16_horizontal)(uint8_t *_src, ptrdiff_t stride)
#define PRED8x8_X(n, v)\
static void FUNCC(pred8x8_##n##_dc)(uint8_t *_src, ptrdiff_t stride)\
PRED8x8_X(127, (1<<(BIT_DEPTH-1))-1)
PRED8x8_X(128, (1<<(BIT_DEPTH-1))+0)
PRED8x8_X(129, (1<<(BIT_DEPTH-1))+1)
static void FUNCC(pred8x16_128_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x8_left_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x16_left_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x8_top_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x16_top_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x8_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNCC(pred8x16_dc)(uint8_t *_src, ptrdiff_t stride)
static void FUNC(pred8x8_mad_cow_dc_l0t)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x16_mad_cow_dc_l0t)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x8_mad_cow_dc_0lt)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x16_mad_cow_dc_0lt)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x8_mad_cow_dc_l00)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x16_mad_cow_dc_l00)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x8_mad_cow_dc_0l0)(uint8_t *src, ptrdiff_t stride)
static void FUNC(pred8x16_mad_cow_dc_0l0)(uint8_t *src, ptrdiff_t stride)
static void FUNCC(pred8x8_plane)(uint8_t *_src, ptrdiff_t _stride)
static void FUNCC(pred8x16_plane)(uint8_t *_src, ptrdiff_t _stride)
#define SRC(x,y) src[(x)+(y)*stride]
#define PL(y) \
const int l##y = (SRC(-1,y-1) + 2*SRC(-1,y) + SRC(-1,y+1) + 2) >> 2;
#define PREDICT_8x8_LOAD_LEFT \
const int l0 = ((has_topleft ? SRC(-1,-1) : SRC(-1,0)) \
+ 2*SRC(-1,0) + SRC(-1,1) + 2) >> 2; \
PL(1) PL(2) PL(3) PL(4) PL(5) PL(6) \
const int l7 av_unused = (SRC(-1,6) + 3*SRC(-1,7) + 2) >> 2
#define PT(x) \
const int t##x = (SRC(x-1,-1) + 2*SRC(x,-1) + SRC(x+1,-1) + 2) >> 2;
#define PREDICT_8x8_LOAD_TOP \
const int t0 = ((has_topleft ? SRC(-1,-1) : SRC(0,-1)) \
+ 2*SRC(0,-1) + SRC(1,-1) + 2) >> 2; \
PT(1) PT(2) PT(3) PT(4) PT(5) PT(6) \
const int t7 av_unused = ((has_topright ? SRC(8,-1) : SRC(7,-1)) \
+ 2*SRC(7,-1) + SRC(6,-1) + 2) >> 2
#define PTR(x) \
t##x = (SRC(x-1,-1) + 2*SRC(x,-1) + SRC(x+1,-1) + 2) >> 2;
#define PREDICT_8x8_LOAD_TOPRIGHT \
int t8, t9, t10, t11, t12, t13, t14, t15; \
if(has_topright)  else t8=t9=t10=t11=t12=t13=t14=t15= SRC(7,-1);
#define PREDICT_8x8_LOAD_TOPLEFT \
const int lt = (SRC(-1,0) + 2*SRC(-1,-1) + SRC(0,-1) + 2) >> 2
#define PREDICT_8x8_DC(v) \
int y; \
for( y = 0; y < 8; y++ )
static void FUNCC(pred8x8l_128_dc)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_left_dc)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_top_dc)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_dc)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_horizontal)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_vertical)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_down_left)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_down_right)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_vertical_right)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_horizontal_down)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_vertical_left)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_horizontal_up)(uint8_t *_src, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_vertical_filter_add)(uint8_t *_src, int16_t *_block, int has_topleft,
int has_topright, ptrdiff_t _stride)
static void FUNCC(pred8x8l_horizontal_filter_add)(uint8_t *_src, int16_t *_block, int has_topleft,
int has_topright, ptrdiff_t _stride)
#undef PREDICT_8x8_LOAD_LEFT
#undef PREDICT_8x8_LOAD_TOP
#undef PREDICT_8x8_LOAD_TOPLEFT
#undef PREDICT_8x8_LOAD_TOPRIGHT
#undef PREDICT_8x8_DC
#undef PTR
#undef PT
#undef PL
#undef SRC
static void FUNCC(pred4x4_vertical_add)(uint8_t *_pix, int16_t *_block,
ptrdiff_t stride)
static void FUNCC(pred4x4_horizontal_add)(uint8_t *_pix, int16_t *_block,
ptrdiff_t stride)
static void FUNCC(pred8x8l_vertical_add)(uint8_t *_pix, int16_t *_block,
ptrdiff_t stride)
static void FUNCC(pred8x8l_horizontal_add)(uint8_t *_pix, int16_t *_block,
ptrdiff_t stride)
static void FUNCC(pred16x16_vertical_add)(uint8_t *pix, const int *block_offset,
int16_t *block,
ptrdiff_t stride)
static void FUNCC(pred16x16_horizontal_add)(uint8_t *pix,
const int *block_offset,
int16_t *block,
ptrdiff_t stride)
static void FUNCC(pred8x8_vertical_add)(uint8_t *pix, const int *block_offset,
int16_t *block, ptrdiff_t stride)
static void FUNCC(pred8x16_vertical_add)(uint8_t *pix, const int *block_offset,
int16_t *block, ptrdiff_t stride)
static void FUNCC(pred8x8_horizontal_add)(uint8_t *pix, const int *block_offset,
int16_t *block,
ptrdiff_t stride)
static void FUNCC(pred8x16_horizontal_add)(uint8_t *pix,
const int *block_offset,
int16_t *block, ptrdiff_t stride)
