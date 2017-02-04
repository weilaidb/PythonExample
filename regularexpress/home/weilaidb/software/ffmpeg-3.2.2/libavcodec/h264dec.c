#define UNCHECKED_BITSTREAM_READER 1
h264_decode_end;
const uint16_t ff_h264_mb_sizes[4] = ;
avpriv_h264_has_num_reorder_frames
h264_er_decode_mb[2][4][2],
int mb_x, int mb_y, int mb_intra, int mb_skipped)
ff_h264_draw_horiz_band
ff_h264_free_tables
ff_h264_alloc_tables
ff_h264_slice_context_init
h264_init_context
h264_decode_end
static AVOnce h264_vlc_init = AV_ONCE_INIT;
ff_h264_decode_init
#if HAVE_THREADS
decode_init_thread_copy
decode_postinit
idr
ff_h264_flush_change
flush_dpb
#if FF_API_CAP_VDPAU
static const uint8_t start_code[] = ;
get_last_needed_nal
debug_green_metadata
decode_nal_units
get_consumed_bytes
output_frame
is_extra
h264_decode_frame
OFFSET offsetof(H264Context, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption h264_options[] = ;
static const AVClass h264_class = ;
AVCodec ff_h264_decoder = ;
#if CONFIG_H264_VDPAU_DECODER && FF_API_VDPAU
static const AVClass h264_vdpau_class = ;
AVCodec ff_h264_vdpau_decoder = ;
