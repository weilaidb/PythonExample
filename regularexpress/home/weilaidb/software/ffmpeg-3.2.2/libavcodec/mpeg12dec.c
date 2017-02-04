#define UNCHECKED_BITSTREAM_READER 1
typedef struct Mpeg1Context  Mpeg1Context;
#define MB_TYPE_ZERO_MV   0x20000000
static const uint32_t ptype2mb_type[7] = ;
static const uint32_t btype2mb_type[11] = ;
mpeg_decode_motion
#define MAX_INDEX (64 - 1)
check_scantable_index                                         \
do  while (0)
mpeg1_decode_block_inter
mpeg1_fast_decode_block_inter
mpeg2_decode_block_non_intra
mpeg2_fast_decode_block_non_intra
mpeg2_decode_block_intra
mpeg2_fast_decode_block_intra
get_dmv
get_qscale
#define MT_FIELD 1
#define MT_FRAME 2
#define MT_16X8  2
#define MT_DMV   3
mpeg_decode_mb
mpeg_decode_init
#if HAVE_THREADS
mpeg_decode_update_thread_context
quant_matrix_rebuild
static const enum AVPixelFormat mpeg1_hwaccel_pixfmt_list_420[] = ;
static const enum AVPixelFormat mpeg2_hwaccel_pixfmt_list_420[] = ;
static const enum AVPixelFormat mpeg12_pixfmt_list_422[] = ;
static const enum AVPixelFormat mpeg12_pixfmt_list_444[] = ;
#if FF_API_VDPAU
uses_vdpau
mpeg_get_pixelformat
setup_hwaccel_for_pixfmt
mpeg_decode_postinit
mpeg1_decode_picture
mpeg_decode_sequence_extension
mpeg_decode_sequence_display_extension
mpeg_decode_picture_display_extension
load_matrix
mpeg_decode_quant_matrix_extension
mpeg_decode_picture_coding_extension
mpeg_field_start
#define DECODE_SLICE_ERROR -1
#define DECODE_SLICE_OK     0
mpeg_decode_slice
slice_decode_thread
slice_end
mpeg1_decode_sequence
vcr2_init_sequence
mpeg_decode_a53_cc
mpeg_decode_user_data
mpeg_decode_gop
decode_chunks
mpeg_decode_frame
flush
mpeg_decode_end
AVCodec ff_mpeg1video_decoder = ;
AVCodec ff_mpeg2video_decoder = ;
AVCodec ff_mpegvideo_decoder = ;
#if FF_API_XVMC
#if CONFIG_MPEG_XVMC_DECODER
FF_DISABLE_DEPRECATION_WARNINGS
mpeg_mc_decode_init
AVCodec ff_mpeg_xvmc_decoder = ;
FF_ENABLE_DEPRECATION_WARNINGS
#if CONFIG_MPEG_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_mpeg_vdpau_decoder = ;
#if CONFIG_MPEG1_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_mpeg1_vdpau_decoder = ;
