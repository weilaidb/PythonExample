#define DNX10BIT_QMAT_SHIFT 18
#define RC_VARIANCE 1
#define LAMBDA_FRAC_BITS 10
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass dnxhd_class = ;
dnxhd_8bit_get_pixels_8x4_sym
static av_always_inline
dnxhd_10bit_get_pixels_8x4_sym
dnxhd_10bit_dct_quantize
dnxhd_init_vlc
dnxhd_init_qmat
dnxhd_init_rc
dnxhd_get_hr_frame_size
dnxhd_encode_init
dnxhd_write_header
dnxhd_encode_dc
static av_always_inline
dnxhd_encode_block
static av_always_inline
dnxhd_unquantize_c
dnxhd_ssd_block
static av_always_inline
dnxhd_calc_ac_bits
static av_always_inline
dnxhd_get_blocks
static av_always_inline
dnxhd_switch_matrix
dnxhd_calc_bits_thread
dnxhd_encode_thread
dnxhd_setup_threads_slices
dnxhd_mb_var_thread
dnxhd_encode_rdo
dnxhd_find_qscale
#define BUCKET_BITS 8
#define RADIX_PASSES 4
#define NBUCKETS (1 << BUCKET_BITS)
get_bucket
radix_count
radix_sort_pass
radix_sort
dnxhd_encode_fast
dnxhd_load_picture
dnxhd_encode_picture
dnxhd_encode_end
static const AVCodecDefault dnxhd_defaults[] = ;
AVCodec ff_dnxhd_encoder = ;
