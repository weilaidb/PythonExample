static const uint8_t alpha_tab[64] = ;
static const uint8_t beta_tab[64] = ;
static const uint8_t tc_tab[64] = ;
static const cavs_vector un_mv = ;
static const int8_t left_modifier_l[8] = ;
static const int8_t top_modifier_l[8]  = ;
static const int8_t left_modifier_c[7] = ;
static const int8_t top_modifier_c[7]  = ;
static inline int get_bs(cavs_vector *mvP, cavs_vector *mvQ, int b)
#define SET_PARAMS                                                \
alpha = alpha_tab[av_clip_uintp2(qp_avg + h->alpha_offset, 6)];  \
beta  =  beta_tab[av_clip_uintp2(qp_avg + h->beta_offset,  6)];  \
tc    =    tc_tab[av_clip_uintp2(qp_avg + h->alpha_offset, 6)];
void ff_cavs_filter(AVSContext *h, enum cavs_mb mb_type)
#undef SET_PARAMS
void ff_cavs_load_intra_pred_luma(AVSContext *h, uint8_t *top,
uint8_t **left, int block)
void ff_cavs_load_intra_pred_chroma(AVSContext *h)
static void intra_pred_vert(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_horiz(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_dc_128(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_plane(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
#define LOWPASS(ARRAY, INDEX)                                           \
((ARRAY[(INDEX) - 1] + 2 * ARRAY[(INDEX)] + ARRAY[(INDEX) + 1] + 2) >> 2)
static void intra_pred_lp(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_down_left(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_down_right(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_lp_left(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
static void intra_pred_lp_top(uint8_t *d, uint8_t *top, uint8_t *left, int stride)
#undef LOWPASS
static inline void modify_pred(const int8_t *mod_table, int *mode)
void ff_cavs_modify_mb_i(AVSContext *h, int *pred_mode_uv)
static inline void mc_dir_part(AVSContext *h, AVFrame *pic, int chroma_height,
int delta, int list, uint8_t *dest_y,
uint8_t *dest_cb, uint8_t *dest_cr,
int src_x_offset, int src_y_offset,
qpel_mc_func *qpix_op,
h264_chroma_mc_func chroma_op, cavs_vector *mv)
static inline void mc_part_std(AVSContext *h, int chroma_height, int delta,
uint8_t *dest_y,
uint8_t *dest_cb,
uint8_t *dest_cr,
int x_offset, int y_offset,
qpel_mc_func *qpix_put,
h264_chroma_mc_func chroma_put,
qpel_mc_func *qpix_avg,
h264_chroma_mc_func chroma_avg,
cavs_vector *mv)
void ff_cavs_inter(AVSContext *h, enum cavs_mb mb_type)
static inline void scale_mv(AVSContext *h, int *d_x, int *d_y,
cavs_vector *src, int distp)
static inline void mv_pred_median(AVSContext *h,
cavs_vector *mvP,
cavs_vector *mvA,
cavs_vector *mvB,
cavs_vector *mvC)
void ff_cavs_mv(AVSContext *h, enum cavs_mv_loc nP, enum cavs_mv_loc nC,
enum cavs_mv_pred mode, enum cavs_block size, int ref)
void ff_cavs_init_mb(AVSContext *h)
int ff_cavs_next_mb(AVSContext *h)
int ff_cavs_init_pic(AVSContext *h)
int ff_cavs_init_top_lines(AVSContext *h)
av_cold int ff_cavs_init(AVCodecContext *avctx)
av_cold int ff_cavs_end(AVCodecContext *avctx)
