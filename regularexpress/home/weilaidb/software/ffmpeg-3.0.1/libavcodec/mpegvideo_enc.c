#define QUANT_BIAS_SHIFT 8
#define QMAT_SHIFT_MMX 16
#define QMAT_SHIFT 21
static int encode_picture(MpegEncContext *s, int picture_number);
static int dct_quantize_refine(MpegEncContext *s, int16_t *block, int16_t *weight, int16_t *orig, int n, int qscale);
static int sse_mb(MpegEncContext *s);
static void denoise_dct_c(MpegEncContext *s, int16_t *block);
static int dct_quantize_trellis_c(MpegEncContext *s, int16_t *block, int n, int qscale, int *overflow);
static uint8_t default_mv_penalty[MAX_FCODE + 1][MAX_DMV * 2 + 1];
static uint8_t default_fcode_tab[MAX_MV * 2 + 1];
const AVOption ff_mpv_generic_options[] = ;
void ff_convert_matrix(MpegEncContext *s, int (*qmat)[64],
uint16_t (*qmat16)[2][64],
const uint16_t *quant_matrix,
int bias, int qmin, int qmax, int intra)
static inline void update_qscale(MpegEncContext *s)
void ff_write_quant_matrix(PutBitContext *pb, uint16_t *matrix)
void ff_init_qscale_tab(MpegEncContext *s)
static void update_duplicate_context_after_me(MpegEncContext *dst,
MpegEncContext *src)
static void mpv_encode_defaults(MpegEncContext *s)
av_cold int ff_dct_encode_init(MpegEncContext *s)
av_cold int ff_mpv_encode_init(AVCodecContext *avctx)
av_cold int ff_mpv_encode_end(AVCodecContext *avctx)
static int get_sae(uint8_t *src, int ref, int stride)
static int get_intra_count(MpegEncContext *s, uint8_t *src,
uint8_t *ref, int stride)
static int alloc_picture(MpegEncContext *s, Picture *pic, int shared)
static int load_input_picture(MpegEncContext *s, const AVFrame *pic_arg)
static int skip_check(MpegEncContext *s, Picture *p, Picture *ref)
static int encode_frame(AVCodecContext *c, AVFrame *frame)
static int estimate_best_b_count(MpegEncContext *s)
static int select_input_picture(MpegEncContext *s)
static void frame_end(MpegEncContext *s)
static void update_noise_reduction(MpegEncContext *s)
static int frame_start(MpegEncContext *s)
int ff_mpv_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic_arg, int *got_packet)
static inline void dct_single_coeff_elimination(MpegEncContext *s,
int n, int threshold)
static inline void clip_coeffs(MpegEncContext *s, int16_t *block,
int last_index)
static void get_visual_weight(int16_t *weight, uint8_t *ptr, int stride)
static av_always_inline void encode_mb_internal(MpegEncContext *s,
int motion_x, int motion_y,
int mb_block_height,
int mb_block_width,
int mb_block_count)
static av_always_inline void encode_mb(MpegEncContext *s, int motion_x, int motion_y)
static inline void copy_context_before_encode(MpegEncContext *d, MpegEncContext *s, int type)
static inline void copy_context_after_encode(MpegEncContext *d, MpegEncContext *s, int type)
static inline void encode_mb_hq(MpegEncContext *s, MpegEncContext *backup, MpegEncContext *best, int type,
PutBitContext pb[2], PutBitContext pb2[2], PutBitContext tex_pb[2],
int *dmin, int *next_block, int motion_x, int motion_y)
static int sse(MpegEncContext *s, uint8_t *src1, uint8_t *src2, int w, int h, int stride)
static int sse_mb(MpegEncContext *s)
static int pre_estimate_motion_thread(AVCodecContext *c, void *arg)
static int estimate_motion_thread(AVCodecContext *c, void *arg)
static int mb_var_thread(AVCodecContext *c, void *arg)
static void write_slice_end(MpegEncContext *s)
static void write_mb_info(MpegEncContext *s)
static void update_mb_info(MpegEncContext *s, int startcode)
int ff_mpv_reallocate_putbitbuffer(MpegEncContext *s, size_t threshold, size_t size_increase)
static int encode_thread(AVCodecContext *c, void *arg)
#define MERGE(field) dst->field += src->field; src->field=0
static void merge_context_after_me(MpegEncContext *dst, MpegEncContext *src)
static void merge_context_after_encode(MpegEncContext *dst, MpegEncContext *src)
static int estimate_qp(MpegEncContext *s, int dry_run)
static void set_frame_distances(MpegEncContext * s)
static int encode_picture(MpegEncContext *s, int picture_number)
static void denoise_dct_c(MpegEncContext *s, int16_t *block)
static int dct_quantize_trellis_c(MpegEncContext *s,
int16_t *block, int n,
int qscale, int *overflow)
static int16_t basis[64][64];
static void build_basis(uint8_t *perm)
static int dct_quantize_refine(MpegEncContext *s,
int16_t *block, int16_t *weight, int16_t *orig,
int n, int qscale)
void ff_block_permute(int16_t *block, uint8_t *permutation,
const uint8_t *scantable, int last)
int ff_dct_quantize_c(MpegEncContext *s,
int16_t *block, int n,
int qscale, int *overflow)
#define OFFSET(x) offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption h263_options[] = ;
static const AVClass h263_class = ;
AVCodec ff_h263_encoder = ;
static const AVOption h263p_options[] = ;
static const AVClass h263p_class = ;
AVCodec ff_h263p_encoder = ;
static const AVClass msmpeg4v2_class = ;
AVCodec ff_msmpeg4v2_encoder = ;
static const AVClass msmpeg4v3_class = ;
AVCodec ff_msmpeg4v3_encoder = ;
static const AVClass wmv1_class = ;
AVCodec ff_wmv1_encoder = ;
