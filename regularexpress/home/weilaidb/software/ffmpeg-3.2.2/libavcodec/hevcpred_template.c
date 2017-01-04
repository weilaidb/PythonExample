#define POS(x, y) src[(x) + stride * (y)]
static av_always_inline void FUNC(intra_pred)(HEVCContext *s, int x0, int y0,
int log2_size, int c_idx)
#define INTRA_PRED(size)                                                            \
static void FUNC(intra_pred_ ## size)(HEVCContext *s, int x0, int y0, int c_idx)    \
INTRA_PRED(2)
INTRA_PRED(3)
INTRA_PRED(4)
INTRA_PRED(5)
#undef INTRA_PRED
static av_always_inline void FUNC(pred_planar)(uint8_t *_src, const uint8_t *_top,
const uint8_t *_left, ptrdiff_t stride,
int trafo_size)
#define PRED_PLANAR(size)\
static void FUNC(pred_planar_ ## size)(uint8_t *src, const uint8_t *top,        \
const uint8_t *left, ptrdiff_t stride)   \
PRED_PLANAR(0)
PRED_PLANAR(1)
PRED_PLANAR(2)
PRED_PLANAR(3)
#undef PRED_PLANAR
static void FUNC(pred_dc)(uint8_t *_src, const uint8_t *_top,
const uint8_t *_left,
ptrdiff_t stride, int log2_size, int c_idx)
static av_always_inline void FUNC(pred_angular)(uint8_t *_src,
const uint8_t *_top,
const uint8_t *_left,
ptrdiff_t stride, int c_idx,
int mode, int size)
static void FUNC(pred_angular_0)(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
static void FUNC(pred_angular_1)(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
static void FUNC(pred_angular_2)(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
static void FUNC(pred_angular_3)(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
#undef EXTEND_LEFT_CIP
#undef EXTEND_RIGHT_CIP
#undef EXTEND_UP_CIP
#undef EXTEND_DOWN_CIP
#undef IS_INTRA
#undef MVF_PU
#undef MVF
#undef PU
#undef EXTEND
#undef MIN_TB_ADDR_ZS
#undef POS
