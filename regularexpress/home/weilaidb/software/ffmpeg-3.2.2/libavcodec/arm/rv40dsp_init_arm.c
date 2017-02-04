DECL_QPEL3 \
void ff_ ## type ## _rv40_qpel ## w ## _mc ## pos ## _neon(uint8_t *dst,       \
const uint8_t *src, \
ptrdiff_t stride)
DECL_QPEL2                      \
DECL_QPEL3(put, w, pos);                    \
DECL_QPEL3(avg, w, pos)
DECL_QPEL_XY                      \
DECL_QPEL2(16, x ## y);                     \
DECL_QPEL2(8,  x ## y)
DECL_QPEL_Y                          \
DECL_QPEL_XY(0, y);                         \
DECL_QPEL_XY(1, y);                         \
DECL_QPEL_XY(2, y);                         \
DECL_QPEL_XY(3, y);                         \
DECL_QPEL_Y(0);
DECL_QPEL_Y(1);
DECL_QPEL_Y(2);
DECL_QPEL_Y(3);
ff_put_rv40_chroma_mc8_neon;
ff_put_rv40_chroma_mc4_neon;
ff_avg_rv40_chroma_mc8_neon;
ff_avg_rv40_chroma_mc4_neon;
ff_rv40_weight_func_16_neon;
ff_rv40_weight_func_8_neon;
ff_rv40_h_loop_filter_strength_neon;
ff_rv40_v_loop_filter_strength_neon;
ff_rv40_h_weak_loop_filter_neon;
ff_rv40_v_weak_loop_filter_neon;
rv40dsp_init_neon
ff_rv40dsp_init_arm
