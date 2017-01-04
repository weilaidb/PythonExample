#define VP9_SYNCCODE 0x498342
struct VP9Filter ;
typedef struct VP9Block  VP9Block;
typedef struct VP9Context  VP9Context;
static const uint8_t bwh_tab[2][N_BS_SIZES][2] = ;
static void vp9_unref_frame(AVCodecContext *ctx, VP9Frame *f)
static int vp9_alloc_frame(AVCodecContext *ctx, VP9Frame *f)
static int vp9_ref_frame(AVCodecContext *ctx, VP9Frame *dst, VP9Frame *src)
static int update_size(AVCodecContext *ctx, int w, int h)
static int update_block_buffers(AVCodecContext *ctx)
static av_always_inline int get_sbits_inv(GetBitContext *gb, int n)
static av_always_inline int inv_recenter_nonneg(int v, int m)
static int update_prob(VP56RangeCoder *c, int p)
static int read_colorspace_details(AVCodecContext *ctx)
static int decode_frame_header(AVCodecContext *ctx,
const uint8_t *data, int size, int *ref)
static av_always_inline void clamp_mv(VP56mv *dst, const VP56mv *src,
VP9Context *s)
static void find_ref_mvs(VP9Context *s,
VP56mv *pmv, int ref, int z, int idx, int sb)
static av_always_inline int read_mv_component(VP9Context *s, int idx, int hp)
static void fill_mv(VP9Context *s,
VP56mv *mv, int mode, int sb)
static av_always_inline void setctx_2d(uint8_t *ptr, int w, int h,
ptrdiff_t stride, int v)
static void decode_mode(AVCodecContext *ctx)
static av_always_inline int
decode_coeffs_b_generic(VP56RangeCoder *c, int16_t *coef, int n_coeffs,
int is_tx32x32, int is8bitsperpixel, int bpp, unsigned (*cnt)[6][3],
unsigned (*eob)[6][2], uint8_t (*p)[6][11],
int nnz, const int16_t *scan, const int16_t (*nb)[2],
const int16_t *band_counts, const int16_t *qmul)
static int decode_coeffs_b_8bpp(VP9Context *s, int16_t *coef, int n_coeffs,
unsigned (*cnt)[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
static int decode_coeffs_b32_8bpp(VP9Context *s, int16_t *coef, int n_coeffs,
unsigned (*cnt)[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
static int decode_coeffs_b_16bpp(VP9Context *s, int16_t *coef, int n_coeffs,
unsigned (*cnt)[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
static int decode_coeffs_b32_16bpp(VP9Context *s, int16_t *coef, int n_coeffs,
unsigned (*cnt)[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
static av_always_inline int decode_coeffs(AVCodecContext *ctx, int is8bitsperpixel)
static int decode_coeffs_8bpp(AVCodecContext *ctx)
static int decode_coeffs_16bpp(AVCodecContext *ctx)
static av_always_inline int check_intra_mode(VP9Context *s, int mode, uint8_t **a,
uint8_t *dst_edge, ptrdiff_t stride_edge,
uint8_t *dst_inner, ptrdiff_t stride_inner,
uint8_t *l, int col, int x, int w,
int row, int y, enum TxfmMode tx,
int p, int ss_h, int ss_v, int bytesperpixel)
static av_always_inline void intra_recon(AVCodecContext *ctx, ptrdiff_t y_off,
ptrdiff_t uv_off, int bytesperpixel)
static void intra_recon_8bpp(AVCodecContext *ctx, ptrdiff_t y_off, ptrdiff_t uv_off)
static void intra_recon_16bpp(AVCodecContext *ctx, ptrdiff_t y_off, ptrdiff_t uv_off)
static av_always_inline void mc_luma_unscaled(VP9Context *s, vp9_mc_func (*mc)[2],
uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *mv,
int bw, int bh, int w, int h, int bytesperpixel)
static av_always_inline void mc_chroma_unscaled(VP9Context *s, vp9_mc_func (*mc)[2],
uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t dst_stride,
const uint8_t *ref_u, ptrdiff_t src_stride_u,
const uint8_t *ref_v, ptrdiff_t src_stride_v,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *mv,
int bw, int bh, int w, int h, int bytesperpixel)
#define mc_luma_dir(s, mc, dst, dst_ls, src, src_ls, tref, row, col, mv, \
px, py, pw, ph, bw, bh, w, h, i) \
mc_luma_unscaled(s, s->dsp.mc, dst, dst_ls, src, src_ls, tref, row, col, \
mv, bw, bh, w, h, bytesperpixel)
#define mc_chroma_dir(s, mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, px, py, pw, ph, bw, bh, w, h, i) \
mc_chroma_unscaled(s, s->dsp.mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, bw, bh, w, h, bytesperpixel)
#define SCALED 0
#define FN(x) x##_8bpp
#define BYTES_PER_PIXEL 1
#undef FN
#undef BYTES_PER_PIXEL
#define FN(x) x##_16bpp
#define BYTES_PER_PIXEL 2
#undef mc_luma_dir
#undef mc_chroma_dir
#undef FN
#undef BYTES_PER_PIXEL
#undef SCALED
static av_always_inline void mc_luma_scaled(VP9Context *s, vp9_scaled_mc_func smc,
vp9_mc_func (*mc)[2],
uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *in_mv,
int px, int py, int pw, int ph,
int bw, int bh, int w, int h, int bytesperpixel,
const uint16_t *scale, const uint8_t *step)
static av_always_inline void mc_chroma_scaled(VP9Context *s, vp9_scaled_mc_func smc,
vp9_mc_func (*mc)[2],
uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t dst_stride,
const uint8_t *ref_u, ptrdiff_t src_stride_u,
const uint8_t *ref_v, ptrdiff_t src_stride_v,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *in_mv,
int px, int py, int pw, int ph,
int bw, int bh, int w, int h, int bytesperpixel,
const uint16_t *scale, const uint8_t *step)
#define mc_luma_dir(s, mc, dst, dst_ls, src, src_ls, tref, row, col, mv, \
px, py, pw, ph, bw, bh, w, h, i) \
mc_luma_scaled(s, s->dsp.s##mc, s->dsp.mc, dst, dst_ls, src, src_ls, tref, row, col, \
mv, px, py, pw, ph, bw, bh, w, h, bytesperpixel, \
s->mvscale[b->ref[i]], s->mvstep[b->ref[i]])
#define mc_chroma_dir(s, mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, px, py, pw, ph, bw, bh, w, h, i) \
mc_chroma_scaled(s, s->dsp.s##mc, s->dsp.mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, px, py, pw, ph, bw, bh, w, h, bytesperpixel, \
s->mvscale[b->ref[i]], s->mvstep[b->ref[i]])
#define SCALED 1
#define FN(x) x##_scaled_8bpp
#define BYTES_PER_PIXEL 1
#undef FN
#undef BYTES_PER_PIXEL
#define FN(x) x##_scaled_16bpp
#define BYTES_PER_PIXEL 2
#undef mc_luma_dir
#undef mc_chroma_dir
#undef FN
#undef BYTES_PER_PIXEL
#undef SCALED
static av_always_inline void inter_recon(AVCodecContext *ctx, int bytesperpixel)
static void inter_recon_8bpp(AVCodecContext *ctx)
static void inter_recon_16bpp(AVCodecContext *ctx)
static av_always_inline void mask_edges(uint8_t (*mask)[8][4], int ss_h, int ss_v,
int row_and_7, int col_and_7,
int w, int h, int col_end, int row_end,
enum TxfmMode tx, int skip_inter)
static void decode_b(AVCodecContext *ctx, int row, int col,
struct VP9Filter *lflvl, ptrdiff_t yoff, ptrdiff_t uvoff,
enum BlockLevel bl, enum BlockPartition bp)
static void decode_sb(AVCodecContext *ctx, int row, int col, struct VP9Filter *lflvl,
ptrdiff_t yoff, ptrdiff_t uvoff, enum BlockLevel bl)
static void decode_sb_mem(AVCodecContext *ctx, int row, int col, struct VP9Filter *lflvl,
ptrdiff_t yoff, ptrdiff_t uvoff, enum BlockLevel bl)
static av_always_inline void filter_plane_cols(VP9Context *s, int col, int ss_h, int ss_v,
uint8_t *lvl, uint8_t (*mask)[4],
uint8_t *dst, ptrdiff_t ls)
static av_always_inline void filter_plane_rows(VP9Context *s, int row, int ss_h, int ss_v,
uint8_t *lvl, uint8_t (*mask)[4],
uint8_t *dst, ptrdiff_t ls)
static void loopfilter_sb(AVCodecContext *ctx, struct VP9Filter *lflvl,
int row, int col, ptrdiff_t yoff, ptrdiff_t uvoff)
static void set_tile_offset(int *start, int *end, int idx, int log2_n, int n)
static av_always_inline void adapt_prob(uint8_t *p, unsigned ct0, unsigned ct1,
int max_count, int update_factor)
static void adapt_probs(VP9Context *s)
static void free_buffers(VP9Context *s)
static av_cold int vp9_decode_free(AVCodecContext *ctx)
static int vp9_decode_frame(AVCodecContext *ctx, void *frame,
int *got_frame, AVPacket *pkt)
static void vp9_decode_flush(AVCodecContext *ctx)
static int init_frames(AVCodecContext *ctx)
static av_cold int vp9_decode_init(AVCodecContext *ctx)
#if HAVE_THREADS
static av_cold int vp9_decode_init_thread_copy(AVCodecContext *avctx)
static int vp9_decode_update_thread_context(AVCodecContext *dst, const AVCodecContext *src)
AVCodec ff_vp9_decoder = ;
