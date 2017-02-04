#define VP9_SYNCCODE 0x498342
struct VP9Filter ;
typedef struct VP9Block  VP9Block;
typedef struct VP9Context  VP9Context;
static const uint8_t bwh_tab[2][N_BS_SIZES][2] = ;
vp9_unref_frame
vp9_alloc_frame
vp9_ref_frame
update_size
update_block_buffers
get_sbits_inv
inv_recenter_nonneg
update_prob
read_colorspace_details
decode_frame_header
clamp_mv
find_ref_mvs
read_mv_component
fill_mv
setctx_2d
decode_mode
decode_coeffs_b_generic[6][3],
unsigned (*eob)[6][2], uint8_t (*p)[6][11],
int nnz, const int16_t *scan, const int16_t (*nb)[2],
const int16_t *band_counts, const int16_t *qmul)
decode_coeffs_b_8bpp[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
decode_coeffs_b32_8bpp[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
decode_coeffs_b_16bpp[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
decode_coeffs_b32_16bpp[6][3], unsigned (*eob)[6][2],
uint8_t (*p)[6][11], int nnz, const int16_t *scan,
const int16_t (*nb)[2], const int16_t *band_counts,
const int16_t *qmul)
decode_coeffs
decode_coeffs_8bpp
decode_coeffs_16bpp
check_intra_mode
intra_recon
intra_recon_8bpp
intra_recon_16bpp
mc_luma_unscaled[2],
uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *mv,
int bw, int bh, int w, int h, int bytesperpixel)
mc_chroma_unscaled[2],
uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t dst_stride,
const uint8_t *ref_u, ptrdiff_t src_stride_u,
const uint8_t *ref_v, ptrdiff_t src_stride_v,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *mv,
int bw, int bh, int w, int h, int bytesperpixel)
mc_luma_dir \
mc_luma_unscaled(s, s->dsp.mc, dst, dst_ls, src, src_ls, tref, row, col, \
mv, bw, bh, w, h, bytesperpixel)
mc_chroma_dir \
mc_chroma_unscaled(s, s->dsp.mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, bw, bh, w, h, bytesperpixel)
#define SCALED 0
FN x##_8bpp
#define BYTES_PER_PIXEL 1
#undef FN
#undef BYTES_PER_PIXEL
FN x##_16bpp
#define BYTES_PER_PIXEL 2
#undef mc_luma_dir
#undef mc_chroma_dir
#undef FN
#undef BYTES_PER_PIXEL
#undef SCALED
mc_luma_scaled[2],
uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *in_mv,
int px, int py, int pw, int ph,
int bw, int bh, int w, int h, int bytesperpixel,
const uint16_t *scale, const uint8_t *step)
mc_chroma_scaled[2],
uint8_t *dst_u, uint8_t *dst_v,
ptrdiff_t dst_stride,
const uint8_t *ref_u, ptrdiff_t src_stride_u,
const uint8_t *ref_v, ptrdiff_t src_stride_v,
ThreadFrame *ref_frame,
ptrdiff_t y, ptrdiff_t x, const VP56mv *in_mv,
int px, int py, int pw, int ph,
int bw, int bh, int w, int h, int bytesperpixel,
const uint16_t *scale, const uint8_t *step)
mc_luma_dir \
mc_luma_scaled(s, s->dsp.s##mc, s->dsp.mc, dst, dst_ls, src, src_ls, tref, row, col, \
mv, px, py, pw, ph, bw, bh, w, h, bytesperpixel, \
s->mvscale[b->ref[i]], s->mvstep[b->ref[i]])
mc_chroma_dir \
mc_chroma_scaled(s, s->dsp.s##mc, s->dsp.mc, dstu, dstv, dst_ls, srcu, srcu_ls, srcv, srcv_ls, tref, \
row, col, mv, px, py, pw, ph, bw, bh, w, h, bytesperpixel, \
s->mvscale[b->ref[i]], s->mvstep[b->ref[i]])
#define SCALED 1
FN x##_scaled_8bpp
#define BYTES_PER_PIXEL 1
#undef FN
#undef BYTES_PER_PIXEL
FN x##_scaled_16bpp
#define BYTES_PER_PIXEL 2
#undef mc_luma_dir
#undef mc_chroma_dir
#undef FN
#undef BYTES_PER_PIXEL
#undef SCALED
inter_recon
inter_recon_8bpp
inter_recon_16bpp
mask_edges[8][4], int ss_h, int ss_v,
int row_and_7, int col_and_7,
int w, int h, int col_end, int row_end,
enum TxfmMode tx, int skip_inter)
decode_b
decode_sb
decode_sb_mem
filter_plane_cols[4],
uint8_t *dst, ptrdiff_t ls)
filter_plane_rows[4],
uint8_t *dst, ptrdiff_t ls)
loopfilter_sb
set_tile_offset
adapt_prob
adapt_probs
free_buffers
vp9_decode_free
vp9_decode_frame
vp9_decode_flush
init_frames
vp9_decode_init
#if HAVE_THREADS
vp9_decode_init_thread_copy
vp9_decode_update_thread_context
AVCodec ff_vp9_decoder = ;
