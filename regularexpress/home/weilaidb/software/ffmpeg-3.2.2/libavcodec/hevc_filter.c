#define LUMA 0
#define CB 1
#define CR 2
static const uint8_t tctable[54] = ;
static const uint8_t betatable[52] = ;
static int chroma_tc(HEVCContext *s, int qp_y, int c_idx, int tc_offset)
static int get_qPy_pred(HEVCContext *s, int xBase, int yBase, int log2_cb_size)
void ff_hevc_set_qPy(HEVCContext *s, int xBase, int yBase, int log2_cb_size)
static int get_qPy(HEVCContext *s, int xC, int yC)
static void copy_CTB(uint8_t *dst, const uint8_t *src, int width, int height,
intptr_t stride_dst, intptr_t stride_src)
static void copy_pixel(uint8_t *dst, const uint8_t *src, int pixel_shift)
static void copy_vert(uint8_t *dst, const uint8_t *src,
int pixel_shift, int height,
int stride_dst, int stride_src)
static void copy_CTB_to_hv(HEVCContext *s, const uint8_t *src,
int stride_src, int x, int y, int width, int height,
int c_idx, int x_ctb, int y_ctb)
static void restore_tqb_pixels(HEVCContext *s,
uint8_t *src1, const uint8_t *dst1,
ptrdiff_t stride_src, ptrdiff_t stride_dst,
int x0, int y0, int width, int height, int c_idx)
#define CTB(tab, x, y) ((tab)[(y) * s->ps.sps->ctb_width + (x)])
static void sao_filter_CTB(HEVCContext *s, int x, int y)
static int get_pcm(HEVCContext *s, int x, int y)
#define TC_CALC(qp, bs)                                                 \
tctable[av_clip((qp) + DEFAULT_INTRA_TC_OFFSET * ((bs) - 1) +       \
(tc_offset >> 1 << 1),                              \
0, MAX_QP + DEFAULT_INTRA_TC_OFFSET)]
static void deblocking_filter_CTB(HEVCContext *s, int x0, int y0)
static int boundary_strength(HEVCContext *s, MvField *curr, MvField *neigh,
RefPicList *neigh_refPicList)
void ff_hevc_deblocking_boundary_strengths(HEVCContext *s, int x0, int y0,
int log2_trafo_size)
#undef LUMA
#undef CB
#undef CR
void ff_hevc_hls_filter(HEVCContext *s, int x, int y, int ctb_size)
void ff_hevc_hls_filters(HEVCContext *s, int x_ctb, int y_ctb, int ctb_size)
