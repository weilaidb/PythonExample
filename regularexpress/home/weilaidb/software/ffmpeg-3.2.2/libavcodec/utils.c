#if CONFIG_ICONV
# include <iconv.h>
const char av_codec_ffversion[] =  FFMPEG_VERSION;
#if HAVE_PTHREADS || HAVE_W32THREADS || HAVE_OS2THREADS
default_lockmgr_cb
static int (*lockmgr_cb)(void **mutex, enum AVLockOp op) = default_lockmgr_cb;
static int (*lockmgr_cb)(void **mutex, enum AVLockOp op) = NULL;
volatile int ff_avcodec_locked;
static int volatile entangled_thread_counter = 0;
static void *codec_mutex;
static void *avformat_mutex;
av_fast_padded_malloc
av_fast_padded_mallocz
static AVCodec *first_avcodec = NULL;
static AVCodec **last_avcodec = &first_avcodec;
*av_codec_next
avcodec_init
av_codec_is_encoder
av_codec_is_decoder
avcodec_register
#if FF_API_EMU_EDGE
avcodec_get_edge_width
#if FF_API_SET_DIMENSIONS
avcodec_set_dimensions
ff_set_dimensions
ff_set_sar
ff_side_data_update_matrix_encoding
avcodec_align_dimensions2
avcodec_align_dimensions
avcodec_enum_to_chroma_pos
avcodec_chroma_pos_to_enum
avcodec_fill_audio_frame
update_frame_pool
audio_get_buffer
video_get_buffer
ff_color_frame
avcodec_default_get_buffer2
add_metadata_from_side_data
ff_init_buffer_info
ff_decode_frame_props
validate_avframe_allocation
get_buffer_internal
ff_get_buffer
reget_buffer_internal
ff_reget_buffer
avcodec_default_execute(AVCodecContext *c2, void *arg2), void *arg, int *ret, int count, int size)
avcodec_default_execute2(AVCodecContext *c2, void *arg2, int jobnr, int threadnr), void *arg, int *ret, int count)
avpriv_find_pix_fmt
is_hwaccel_pix_fmt
avcodec_default_get_format
*find_hwaccel
setup_hwaccel
ff_get_format
MAKE_ACCESSORS(AVCodecContext, codec, AVRational, pkt_timebase)
MAKE_ACCESSORS(AVCodecContext, codec, const AVCodecDescriptor *, codec_descriptor)
MAKE_ACCESSORS(AVCodecContext, codec, int, lowres)
MAKE_ACCESSORS(AVCodecContext, codec, int, seek_preroll)
MAKE_ACCESSORS(AVCodecContext, codec, uint16_t*, chroma_intra_matrix)
av_codec_get_codec_properties
av_codec_get_max_lowres
avpriv_codec_get_cap_skip_frame_fill_param
get_subtitle_defaults
get_bit_rate
ff_codec_open2_recursive
avcodec_open2
ff_alloc_packet2
ff_alloc_packet
pad_last_frame
avcodec_encode_audio2
avcodec_encode_video2
avcodec_encode_subtitle
guess_correct_pts
apply_param_change
unrefcount_frame
avcodec_decode_video2
avcodec_decode_audio4
#define UTF8_MAX_BYTES 4
recode_subtitle
utf8_check
#if FF_API_ASS_TIMING
insert_ts
convert_sub_to_old_ass_form
avcodec_decode_subtitle2
avsubtitle_free
do_decode
avcodec_send_packet
avcodec_receive_frame
do_encode
avcodec_send_frame
avcodec_receive_packet
avcodec_close
remap_deprecated_codec_id
*find_encdec
*avcodec_find_encoder
*avcodec_find_encoder_by_name
*avcodec_find_decoder
*avcodec_find_decoder_by_name
*avcodec_get_name
av_get_codec_tag_string
avcodec_string
*av_get_profile_name
*avcodec_profile_name
avcodec_version
*avcodec_configuration
*avcodec_license
avcodec_flush_buffers
av_get_exact_bits_per_sample
av_get_pcm_codec
av_get_bits_per_sample
get_audio_frame_duration
av_get_audio_frame_duration
av_get_audio_frame_duration2
#if !HAVE_THREADS
ff_thread_init
av_xiphlacing
uint16_t[2], int size, int a, int b)
#if FF_API_MISSING_SAMPLE
FF_DISABLE_DEPRECATION_WARNINGS
av_log_missing_feature
av_log_ask_for_sample
FF_ENABLE_DEPRECATION_WARNINGS
static AVHWAccel *first_hwaccel = NULL;
static AVHWAccel **last_hwaccel = &first_hwaccel;
av_register_hwaccel
*av_hwaccel_next
av_lockmgr_register(void **mutex, enum AVLockOp op))
ff_lock_avcodec
ff_unlock_avcodec
avpriv_lock_avformat
avpriv_unlock_avformat
avpriv_toupper4
ff_thread_ref_frame
#if !HAVE_THREADS
ff_thread_get_format
ff_thread_get_buffer
ff_thread_release_buffer
ff_thread_finish_setup
ff_thread_report_progress
ff_thread_await_progress
ff_thread_can_start_frame
ff_alloc_entries
ff_reset_entries
ff_thread_await_progress2
ff_thread_report_progress2
avcodec_is_open
avpriv_bprint_to_extradata
*avpriv_find_start_code
*av_cpb_properties_alloc
*ff_add_cpb_side_data
codec_parameters_reset
*avcodec_parameters_alloc
avcodec_parameters_free
avcodec_parameters_copy
avcodec_parameters_from_context
avcodec_parameters_to_context
ff_alloc_a53_sei
