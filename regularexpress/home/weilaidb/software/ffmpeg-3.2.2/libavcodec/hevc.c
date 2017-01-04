const uint8_t ff_hevc_pel_weight[65] = ;
static void pic_arrays_free(HEVCContext *s)
static int pic_arrays_init(HEVCContext *s, const HEVCSPS *sps)
static void pred_weight_table(HEVCContext *s, GetBitContext *gb)
static int decode_lt_rps(HEVCContext *s, LongTermRPS *rps, GetBitContext *gb)
static void export_stream_params(AVCodecContext *avctx, const HEVCParamSets *ps,
const HEVCSPS *sps)
static int set_sps(HEVCContext *s, const HEVCSPS *sps, enum AVPixelFormat pix_fmt)
static int hls_slice_header(HEVCContext *s)
#define CTB(tab, x, y) ((tab)[(y) * s->ps.sps->ctb_width + (x)])
#define SET_SAO(elem, value)                            \
do  while (0)
static void hls_sao_param(HEVCContext *s, int rx, int ry)
#undef SET_SAO
#undef CTB
static int hls_cross_component_pred(HEVCContext *s, int idx)
static int hls_transform_unit(HEVCContext *s, int x0, int y0,
int xBase, int yBase, int cb_xBase, int cb_yBase,
int log2_cb_size, int log2_trafo_size,
int blk_idx, int cbf_luma, int *cbf_cb, int *cbf_cr)
static void set_deblocking_bypass(HEVCContext *s, int x0, int y0, int log2_cb_size)
static int hls_transform_tree(HEVCContext *s, int x0, int y0,
int xBase, int yBase, int cb_xBase, int cb_yBase,
int log2_cb_size, int log2_trafo_size,
int trafo_depth, int blk_idx,
const int *base_cbf_cb, const int *base_cbf_cr)
static int hls_pcm_sample(HEVCContext *s, int x0, int y0, int log2_cb_size)
static void luma_mc_uni(HEVCContext *s, uint8_t *dst, ptrdiff_t dststride,
AVFrame *ref, const Mv *mv, int x_off, int y_off,
int block_w, int block_h, int luma_weight, int luma_offset)
static void luma_mc_bi(HEVCContext *s, uint8_t *dst, ptrdiff_t dststride,
AVFrame *ref0, const Mv *mv0, int x_off, int y_off,
int block_w, int block_h, AVFrame *ref1, const Mv *mv1, struct MvField *current_mv)
static void chroma_mc_uni(HEVCContext *s, uint8_t *dst0,
ptrdiff_t dststride, uint8_t *src0, ptrdiff_t srcstride, int reflist,
int x_off, int y_off, int block_w, int block_h, struct MvField *current_mv, int chroma_weight, int chroma_offset)
static void chroma_mc_bi(HEVCContext *s, uint8_t *dst0, ptrdiff_t dststride, AVFrame *ref0, AVFrame *ref1,
int x_off, int y_off, int block_w, int block_h, struct MvField *current_mv, int cidx)
static void hevc_await_progress(HEVCContext *s, HEVCFrame *ref,
const Mv *mv, int y0, int height)
static void hevc_luma_mv_mvp_mode(HEVCContext *s, int x0, int y0, int nPbW,
int nPbH, int log2_cb_size, int part_idx,
int merge_idx, MvField *mv)
static void hls_prediction_unit(HEVCContext *s, int x0, int y0,
int nPbW, int nPbH,
int log2_cb_size, int partIdx, int idx)
static int luma_intra_pred_mode(HEVCContext *s, int x0, int y0, int pu_size,
int prev_intra_luma_pred_flag)
static av_always_inline void set_ct_depth(HEVCContext *s, int x0, int y0,
int log2_cb_size, int ct_depth)
static const uint8_t tab_mode_idx[] = ;
static void intra_prediction_unit(HEVCContext *s, int x0, int y0,
int log2_cb_size)
static void intra_prediction_unit_default_value(HEVCContext *s,
int x0, int y0,
int log2_cb_size)
static int hls_coding_unit(HEVCContext *s, int x0, int y0, int log2_cb_size)
static int hls_coding_quadtree(HEVCContext *s, int x0, int y0,
int log2_cb_size, int cb_depth)
static void hls_decode_neighbour(HEVCContext *s, int x_ctb, int y_ctb,
int ctb_addr_ts)
static int hls_decode_entry(AVCodecContext *avctxt, void *isFilterThread)
static int hls_slice_data(HEVCContext *s)
static int hls_decode_entry_wpp(AVCodecContext *avctxt, void *input_ctb_row, int job, int self_id)
static int hls_slice_data_wpp(HEVCContext *s, const H2645NAL *nal)
static int set_side_data(HEVCContext *s)
static int hevc_frame_start(HEVCContext *s)
static int decode_nal_unit(HEVCContext *s, const H2645NAL *nal)
static int decode_nal_units(HEVCContext *s, const uint8_t *buf, int length)
static void print_md5(void *log_ctx, int level, uint8_t md5[16])
static int verify_md5(HEVCContext *s, AVFrame *frame)
static int hevc_decode_frame(AVCodecContext *avctx, void *data, int *got_output,
AVPacket *avpkt)
static int hevc_ref_frame(HEVCContext *s, HEVCFrame *dst, HEVCFrame *src)
static av_cold int hevc_decode_free(AVCodecContext *avctx)
static av_cold int hevc_init_context(AVCodecContext *avctx)
static int hevc_update_thread_context(AVCodecContext *dst,
const AVCodecContext *src)
static int hevc_decode_extradata(HEVCContext *s)
static av_cold int hevc_decode_init(AVCodecContext *avctx)
static av_cold int hevc_init_thread_copy(AVCodecContext *avctx)
static void hevc_decode_flush(AVCodecContext *avctx)
#define OFFSET(x) offsetof(HEVCContext, x)
#define PAR (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption options[] = ;
static const AVClass hevc_decoder_class = ;
AVCodec ff_hevc_decoder = ;
