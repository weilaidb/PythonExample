#define DEFAULT_PASS_LOGFILENAME_PREFIX
MATCH_PER_STREAM_OPT\
MATCH_PER_TYPE_OPT\
const HWAccel hwaccels[] = ;
int hwaccel_lax_profile_check = 0;
AVBufferRef *hw_device_ctx;
char *vstats_filename;
char *sdp_filename;
float audio_drift_threshold = 0.1;
float dts_delta_threshold   = 10;
float dts_error_threshold   = 3600*30;
int audio_volume      = 256;
int audio_sync_method = 0;
int video_sync_method = VSYNC_AUTO;
float frame_drop_threshold = 0;
int do_deinterlace    = 0;
int do_benchmark      = 0;
int do_benchmark_all  = 0;
int do_hex_dump       = 0;
int do_pkt_dump       = 0;
int copy_ts           = 0;
int start_at_zero     = 0;
int copy_tb           = -1;
int debug_ts          = 0;
int exit_on_error     = 0;
int abort_on_flags    = 0;
int print_stats       = -1;
int qp_hist           = 0;
int stdin_interaction = 1;
int frame_bits_per_raw_sample = 0;
float max_error_rate  = 2.0/3;
static int intra_only         = 0;
static int file_overwrite     = 0;
static int no_file_overwrite  = 0;
static int do_psnr            = 0;
static int input_sync;
static int override_ffserver  = 0;
static int input_stream_potentially_available = 0;
static int ignore_unknown_streams = 0;
static int copy_unknown_streams = 0;
uninit_options
init_options
show_hwaccels
*strip_specifiers
opt_abort_on
opt_sameq
opt_video_channel
opt_video_standard
opt_audio_codec
opt_video_codec
opt_subtitle_codec
opt_data_codec
opt_map
opt_attach
opt_map_channel
opt_sdp_file
#if CONFIG_VAAPI
opt_vaapi_device
parse_meta_type
copy_metadata
opt_recording_timestamp
*find_codec_or_die
*choose_decoder
add_input_streams
assert_file_overwrite
dump_attachment
open_input_file
*get_line
get_preset_file_2
choose_encoder
*new_output_stream
parse_matrix_coeffs
*read_file
*get_ost_filters
check_streamcopy_filters
*new_video_stream
*new_audio_stream
*new_data_stream
*new_unknown_stream
*new_attachment_stream
*new_subtitle_stream
opt_streamid
copy_chapters
read_ffserver_streams
init_output_filter
init_complex_filters
configure_complex_filters
open_output_file
opt_target
opt_vstats_file
opt_vstats
opt_video_frames
opt_audio_frames
opt_data_frames
opt_default_new
opt_preset
opt_old2new
opt_bitrate
opt_qscale
opt_profile
opt_video_filters
opt_audio_filters
opt_vsync
opt_timecode
opt_channel_layout
opt_audio_qscale
opt_filter_complex
opt_filter_complex_script
show_help_default
show_usage
enum OptGroup ;
static const OptionGroupDef groups[] = ;
open_files(OptionsContext*, const char*))
ffmpeg_parse_options
opt_progress
OFFSET offsetof(OptionsContext, x)
const OptionDef options[] = ;
