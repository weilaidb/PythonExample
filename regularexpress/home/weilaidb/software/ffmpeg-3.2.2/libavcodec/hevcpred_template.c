POS src[(x) + stride * (y)]
FUNC(HEVCContext *s, int x0, int y0,
int log2_size, int c_idx)
INTRA_PRED                                                            \
FUNC(HEVCContext *s, int x0, int y0, int c_idx)    \
INTRA_PRED(2)
INTRA_PRED(3)
INTRA_PRED(4)
INTRA_PRED(5)
#undef INTRA_PRED
FUNC(uint8_t *_src, const uint8_t *_top,
const uint8_t *_left, ptrdiff_t stride,
int trafo_size)
PRED_PLANAR\
FUNC(uint8_t *src, const uint8_t *top,        \
const uint8_t *left, ptrdiff_t stride)   \
PRED_PLANAR(0)
PRED_PLANAR(1)
PRED_PLANAR(2)
PRED_PLANAR(3)
#undef PRED_PLANAR
FUNC(uint8_t *_src, const uint8_t *_top,
const uint8_t *_left,
ptrdiff_t stride, int log2_size, int c_idx)
FUNC(uint8_t *_src,
const uint8_t *_top,
const uint8_t *_left,
ptrdiff_t stride, int c_idx,
int mode, int size)
FUNC(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
FUNC(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
FUNC(uint8_t *src, const uint8_t *top,
const uint8_t *left,
ptrdiff_t stride, int c_idx, int mode)
FUNC(uint8_t *src, const uint8_t *top,
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
