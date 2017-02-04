#if ARCH_ARM
#   include
#if CONFIG_VP7_DECODER && CONFIG_VP8_DECODER
VPX (vp7 ? vp7_ ## f : vp8_ ## f)
#elif CONFIG_VP7_DECODER
VPX vp7_ ## f
VPX vp8_ ## f
free_buffers
vp8_alloc_frame
vp8_release_frame
#if CONFIG_VP8_DECODER
vp8_ref_frame
vp8_decode_flush_impl
vp8_decode_flush
*vp8_find_free_buffer
static av_always_inline
update_dimensions
vp7_update_dimensions
vp8_update_dimensions
parse_segment_info
update_lf_deltas
setup_partitions
vp7_get_quants
vp8_get_quants
ref_to_update
vp78_reset_probability_tables
vp78_update_probability_tables
#define VP7_MVC_SIZE 17
#define VP8_MVC_SIZE 19
vp78_update_pred16x16_pred8x8_mvc_probabilities
update_refs
copy_chroma
fade
vp7_fade_frame
vp7_decode_frame_header
vp8_decode_frame_header
static av_always_inline
clamp_mv
read_mv_component
vp7_read_mv_component
vp8_read_mv_component
static av_always_inline
*get_submv_prob
static av_always_inline
decode_splitmvs
vp7_calculate_mb_offset
*get_bmv_ptr
static av_always_inline
vp7_decode_mvs
static av_always_inline
vp8_decode_mvs
static av_always_inline
decode_intra4x4_modes
static av_always_inline
decode_mb_mode
static av_always_inline
decode_block_coeffs_internal
static av_always_inline
inter_predict_dc
vp7_decode_block_coeffs_internal
vp8_decode_block_coeffs_internal
static av_always_inline
decode_block_coeffs
static av_always_inline
decode_mb_coeffs
static av_always_inline
backup_mb_border
static av_always_inline
xchg_mb_border
static av_always_inline
check_dc_pred8x8_mode
static av_always_inline
check_tm_pred8x8_mode
static av_always_inline
check_intra_pred8x8_mode_emuedge
static av_always_inline
check_tm_pred4x4_mode
static av_always_inline
check_intra_pred4x4_mode_emuedge
static av_always_inline
intra_predict
static const uint8_t subpel_idx[3][8] = ;
static av_always_inline
vp8_mc_luma
static av_always_inline
vp8_mc_chroma
static av_always_inline
vp8_mc_part
static av_always_inline
prefetch_motion
static av_always_inline
inter_predict
static av_always_inline
idct_mb
static av_always_inline
filter_level_for_mb
static av_always_inline
filter_mb
static av_always_inline
filter_mb_simple
#define MARGIN (16 << 2)
static av_always_inline
vp78_decode_mv_mb_modes
vp7_decode_mv_mb_modes
vp8_decode_mv_mb_modes
#if HAVE_THREADS
check_thread_pos                     \
do  while (0)
update_pos                                            \
do  while (0)
check_thread_pos while(0)
update_pos while(0)
decode_mb_row_no_filter
vp7_decode_mb_row_no_filter
vp8_decode_mb_row_no_filter
filter_mb_row
vp7_filter_mb_row
vp8_filter_mb_row
static av_always_inline
vp78_decode_mb_row_sliced
vp7_decode_mb_row_sliced
vp8_decode_mb_row_sliced
static av_always_inline
vp78_decode_frame
ff_vp8_decode_frame
#if CONFIG_VP7_DECODER
vp7_decode_frame
ff_vp8_decode_free
vp8_init_frames
static av_always_inline
vp78_decode_init
#if CONFIG_VP7_DECODER
vp7_decode_init
ff_vp8_decode_init
#if CONFIG_VP8_DECODER
#if HAVE_THREADS
vp8_decode_init_thread_copy
REBASE ((pic) ? (pic) - &s_src->frames[0] + &s->frames[0] : NULL)
vp8_decode_update_thread_context
#if CONFIG_VP7_DECODER
AVCodec ff_vp7_decoder = ;
#if CONFIG_VP8_DECODER
AVCodec ff_vp8_decoder = ;
