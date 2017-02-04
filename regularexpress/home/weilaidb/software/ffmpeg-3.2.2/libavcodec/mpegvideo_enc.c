#define QUANT_BIAS_SHIFT 8
#define QMAT_SHIFT_MMX 16
#define QMAT_SHIFT 21
encode_picture;
dct_quantize_refine;
sse_mb;
denoise_dct_c;
dct_quantize_trellis_c;
static uint8_t default_mv_penalty[MAX_FCODE + 1][MAX_DMV * 2 + 1];
static uint8_t default_fcode_tab[MAX_MV * 2 + 1];
const AVOption ff_mpv_generic_options[] = ;
ff_convert_matrix[64],
uint16_t (*qmat16)[2][64],
const uint16_t *quant_matrix,
int bias, int qmin, int qmax, int intra)
update_qscale
ff_write_quant_matrix
ff_init_qscale_tab
update_duplicate_context_after_me
mpv_encode_defaults
ff_dct_encode_init
ff_mpv_encode_init
ff_mpv_encode_end
get_sae
get_intra_count
alloc_picture
load_input_picture
skip_check
encode_frame
estimate_best_b_count
select_input_picture
frame_end
update_noise_reduction
frame_start
ff_mpv_encode_picture
dct_single_coeff_elimination
clip_coeffs
get_visual_weight
encode_mb_internal
encode_mb
copy_context_before_encode
copy_context_after_encode
encode_mb_hq
sse
sse_mb
pre_estimate_motion_thread
estimate_motion_thread
mb_var_thread
write_slice_end
write_mb_info
update_mb_info
ff_mpv_reallocate_putbitbuffer
encode_thread
MERGE dst->field += src->field; src->field=0
merge_context_after_me
merge_context_after_encode
estimate_qp
set_frame_distances
encode_picture
denoise_dct_c
dct_quantize_trellis_c
static int16_t basis[64][64];
build_basis
dct_quantize_refine
ff_block_permute
ff_dct_quantize_c
OFFSET offsetof(MpegEncContext, x)
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
