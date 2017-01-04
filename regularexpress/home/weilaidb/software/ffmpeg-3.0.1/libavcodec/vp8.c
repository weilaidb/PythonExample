#if ARCH_ARM
#   include "arm/vp8.h"
#if CONFIG_VP7_DECODER && CONFIG_VP8_DECODER
#define VPX(vp7, f) (vp7 ? vp7_ ## f : vp8_ ## f)
#elif CONFIG_VP7_DECODER
#define VPX(vp7, f) vp7_ ## f
#define VPX(vp7, f) vp8_ ## f
static void free_buffers(VP8Context *s)
static int vp8_alloc_frame(VP8Context *s, VP8Frame *f, int ref)
static void vp8_release_frame(VP8Context *s, VP8Frame *f)
#if CONFIG_VP8_DECODER
static int vp8_ref_frame(VP8Context *s, VP8Frame *dst, VP8Frame *src)
static void vp8_decode_flush_impl(AVCodecContext *avctx, int free_mem)
static void vp8_decode_flush(AVCodecContext *avctx)
static VP8Frame *vp8_find_free_buffer(VP8Context *s)
static av_always_inline
int update_dimensions(VP8Context *s, int width, int height, int is_vp7)
static int vp7_update_dimensions(VP8Context *s, int width, int height)
static int vp8_update_dimensions(VP8Context *s, int width, int height)
static void parse_segment_info(VP8Context *s)
static void update_lf_deltas(VP8Context *s)
static int setup_partitions(VP8Context *s, const uint8_t *buf, int buf_size)
static void vp7_get_quants(VP8Context *s)
static void vp8_get_quants(VP8Context *s)
static VP56Frame ref_to_update(VP8Context *s, int update, VP56Frame ref)
static void vp78_reset_probability_tables(VP8Context *s)
static void vp78_update_probability_tables(VP8Context *s)
#define VP7_MVC_SIZE 17
#define VP8_MVC_SIZE 19
static void vp78_update_pred16x16_pred8x8_mvc_probabilities(VP8Context *s,
int mvc_size)
static void update_refs(VP8Context *s)
static void copy_chroma(AVFrame *dst, AVFrame *src, int width, int height)
static void fade(uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int width, int height,
int alpha, int beta)
static int vp7_fade_frame(VP8Context *s, VP56RangeCoder *c)
static int vp7_decode_frame_header(VP8Context *s, const uint8_t *buf, int buf_size)
static int vp8_decode_frame_header(VP8Context *s, const uint8_t *buf, int buf_size)
static av_always_inline
void clamp_mv(VP8Context *s, VP56mv *dst, const VP56mv *src)
static av_always_inline int read_mv_component(VP56RangeCoder *c, const uint8_t *p, int vp7)
static int vp7_read_mv_component(VP56RangeCoder *c, const uint8_t *p)
static int vp8_read_mv_component(VP56RangeCoder *c, const uint8_t *p)
static av_always_inline
const uint8_t *get_submv_prob(uint32_t left, uint32_t top, int is_vp7)
static av_always_inline
int decode_splitmvs(VP8Context *s, VP56RangeCoder *c, VP8Macroblock *mb,
int layout, int is_vp7)
static int vp7_calculate_mb_offset(int mb_x, int mb_y, int mb_width,
int xoffset, int yoffset, int boundary,
int *edge_x, int *edge_y)
static const VP56mv *get_bmv_ptr(const VP8Macroblock *mb, int subblock)
static av_always_inline
void vp7_decode_mvs(VP8Context *s, VP8Macroblock *mb,
int mb_x, int mb_y, int layout)
static av_always_inline
void vp8_decode_mvs(VP8Context *s, VP8Macroblock *mb,
int mb_x, int mb_y, int layout)
static av_always_inline
void decode_intra4x4_modes(VP8Context *s, VP56RangeCoder *c, VP8Macroblock *mb,
int mb_x, int keyframe, int layout)
static av_always_inline
void decode_mb_mode(VP8Context *s, VP8Macroblock *mb, int mb_x, int mb_y,
uint8_t *segment, uint8_t *ref, int layout, int is_vp7)
static av_always_inline
int decode_block_coeffs_internal(VP56RangeCoder *r, int16_t block[16],
uint8_t probs[16][3][NUM_DCT_TOKENS - 1],
int i, uint8_t *token_prob, int16_t qmul[2],
const uint8_t scan[16], int vp7)
static av_always_inline
int inter_predict_dc(int16_t block[16], int16_t pred[2])
static int vp7_decode_block_coeffs_internal(VP56RangeCoder *r,
int16_t block[16],
uint8_t probs[16][3][NUM_DCT_TOKENS - 1],
int i, uint8_t *token_prob,
int16_t qmul[2],
const uint8_t scan[16])
static int vp8_decode_block_coeffs_internal(VP56RangeCoder *r,
int16_t block[16],
uint8_t probs[16][3][NUM_DCT_TOKENS - 1],
int i, uint8_t *token_prob,
int16_t qmul[2])
static av_always_inline
int decode_block_coeffs(VP56RangeCoder *c, int16_t block[16],
uint8_t probs[16][3][NUM_DCT_TOKENS - 1],
int i, int zero_nhood, int16_t qmul[2],
const uint8_t scan[16], int vp7)
static av_always_inline
void decode_mb_coeffs(VP8Context *s, VP8ThreadData *td, VP56RangeCoder *c,
VP8Macroblock *mb, uint8_t t_nnz[9], uint8_t l_nnz[9],
int is_vp7)
static av_always_inline
void backup_mb_border(uint8_t *top_border, uint8_t *src_y,
uint8_t *src_cb, uint8_t *src_cr,
int linesize, int uvlinesize, int simple)
static av_always_inline
void xchg_mb_border(uint8_t *top_border, uint8_t *src_y, uint8_t *src_cb,
uint8_t *src_cr, int linesize, int uvlinesize, int mb_x,
int mb_y, int mb_width, int simple, int xchg)
static av_always_inline
int check_dc_pred8x8_mode(int mode, int mb_x, int mb_y)
static av_always_inline
int check_tm_pred8x8_mode(int mode, int mb_x, int mb_y, int vp7)
static av_always_inline
int check_intra_pred8x8_mode_emuedge(int mode, int mb_x, int mb_y, int vp7)
static av_always_inline
int check_tm_pred4x4_mode(int mode, int mb_x, int mb_y, int vp7)
static av_always_inline
int check_intra_pred4x4_mode_emuedge(int mode, int mb_x, int mb_y,
int *copy_buf, int vp7)
static av_always_inline
void intra_predict(VP8Context *s, VP8ThreadData *td, uint8_t *dst[3],
VP8Macroblock *mb, int mb_x, int mb_y, int is_vp7)
static const uint8_t subpel_idx[3][8] = ;
static av_always_inline
void vp8_mc_luma(VP8Context *s, VP8ThreadData *td, uint8_t *dst,
ThreadFrame *ref, const VP56mv *mv,
int x_off, int y_off, int block_w, int block_h,
int width, int height, ptrdiff_t linesize,
vp8_mc_func mc_func[3][3])
static av_always_inline
void vp8_mc_chroma(VP8Context *s, VP8ThreadData *td, uint8_t *dst1,
uint8_t *dst2, ThreadFrame *ref, const VP56mv *mv,
int x_off, int y_off, int block_w, int block_h,
int width, int height, ptrdiff_t linesize,
vp8_mc_func mc_func[3][3])
static av_always_inline
void vp8_mc_part(VP8Context *s, VP8ThreadData *td, uint8_t *dst[3],
ThreadFrame *ref_frame, int x_off, int y_off,
int bx_off, int by_off, int block_w, int block_h,
int width, int height, VP56mv *mv)
static av_always_inline
void prefetch_motion(VP8Context *s, VP8Macroblock *mb, int mb_x, int mb_y,
int mb_xy, int ref)
static av_always_inline
void inter_predict(VP8Context *s, VP8ThreadData *td, uint8_t *dst[3],
VP8Macroblock *mb, int mb_x, int mb_y)
static av_always_inline
void idct_mb(VP8Context *s, VP8ThreadData *td, uint8_t *dst[3], VP8Macroblock *mb)
static av_always_inline
void filter_level_for_mb(VP8Context *s, VP8Macroblock *mb,
VP8FilterStrength *f, int is_vp7)
static av_always_inline
void filter_mb(VP8Context *s, uint8_t *dst[3], VP8FilterStrength *f,
int mb_x, int mb_y, int is_vp7)
static av_always_inline
void filter_mb_simple(VP8Context *s, uint8_t *dst, VP8FilterStrength *f,
int mb_x, int mb_y)
#define MARGIN (16 << 2)
static av_always_inline
void vp78_decode_mv_mb_modes(AVCodecContext *avctx, VP8Frame *curframe,
VP8Frame *prev_frame, int is_vp7)
static void vp7_decode_mv_mb_modes(AVCodecContext *avctx, VP8Frame *cur_frame,
VP8Frame *prev_frame)
static void vp8_decode_mv_mb_modes(AVCodecContext *avctx, VP8Frame *cur_frame,
VP8Frame *prev_frame)
#if HAVE_THREADS
#define check_thread_pos(td, otd, mb_x_check, mb_y_check)                     \
do  while (0)
#define update_pos(td, mb_y, mb_x)                                            \
do  while (0)
#define check_thread_pos(td, otd, mb_x_check, mb_y_check) while(0)
#define update_pos(td, mb_y, mb_x) while(0)
static av_always_inline void decode_mb_row_no_filter(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr, int is_vp7)
static void vp7_decode_mb_row_no_filter(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static void vp8_decode_mb_row_no_filter(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static av_always_inline void filter_mb_row(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr, int is_vp7)
static void vp7_filter_mb_row(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static void vp8_filter_mb_row(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static av_always_inline
int vp78_decode_mb_row_sliced(AVCodecContext *avctx, void *tdata, int jobnr,
int threadnr, int is_vp7)
static int vp7_decode_mb_row_sliced(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static int vp8_decode_mb_row_sliced(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static av_always_inline
int vp78_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt, int is_vp7)
int ff_vp8_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_VP7_DECODER
static int vp7_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
av_cold int ff_vp8_decode_free(AVCodecContext *avctx)
static av_cold int vp8_init_frames(VP8Context *s)
static av_always_inline
int vp78_decode_init(AVCodecContext *avctx, int is_vp7)
#if CONFIG_VP7_DECODER
static int vp7_decode_init(AVCodecContext *avctx)
av_cold int ff_vp8_decode_init(AVCodecContext *avctx)
#if CONFIG_VP8_DECODER
#if HAVE_THREADS
static av_cold int vp8_decode_init_thread_copy(AVCodecContext *avctx)
#define REBASE(pic) ((pic) ? (pic) - &s_src->frames[0] + &s->frames[0] : NULL)
static int vp8_decode_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
#if CONFIG_VP7_DECODER
AVCodec ff_vp7_decoder = ;
#if CONFIG_VP8_DECODER
AVCodec ff_vp8_decoder = ;
