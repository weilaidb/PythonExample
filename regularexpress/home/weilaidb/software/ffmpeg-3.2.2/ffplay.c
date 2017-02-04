#if CONFIG_AVFILTER
# include
# include
# include
const char program_name[] = ;
const int program_birth_year = 2003;
#define MAX_QUEUE_SIZE (15 * 1024 * 1024)
#define MIN_FRAMES 25
#define EXTERNAL_CLOCK_MIN_FRAMES 2
#define EXTERNAL_CLOCK_MAX_FRAMES 10
#define SDL_AUDIO_MIN_BUFFER_SIZE 512
#define SDL_AUDIO_MAX_CALLBACKS_PER_SEC 30
#define SDL_VOLUME_STEP (SDL_MIX_MAXVOLUME / 50)
#define AV_SYNC_THRESHOLD_MIN 0.04
#define AV_SYNC_THRESHOLD_MAX 0.1
#define AV_SYNC_FRAMEDUP_THRESHOLD 0.1
#define AV_NOSYNC_THRESHOLD 10.0
#define SAMPLE_CORRECTION_PERCENT_MAX 10
#define EXTERNAL_CLOCK_SPEED_MIN  0.900
#define EXTERNAL_CLOCK_SPEED_MAX  1.010
#define EXTERNAL_CLOCK_SPEED_STEP 0.001
#define AUDIO_DIFF_AVG_NB   20
#define REFRESH_RATE 0.01
#define SAMPLE_ARRAY_SIZE (8 * 65536)
#define CURSOR_HIDE_DELAY 1000000
#define USE_ONEPASS_SUBTITLE_RENDER 1
static unsigned sws_flags = SWS_BICUBIC;
typedef struct MyAVPacketList  MyAVPacketList;
typedef struct PacketQueue  PacketQueue;
#define VIDEO_PICTURE_QUEUE_SIZE 3
#define SUBPICTURE_QUEUE_SIZE 16
#define SAMPLE_QUEUE_SIZE 9
FFMAX)
typedef struct AudioParams  AudioParams;
typedef struct Clock  Clock;
typedef struct Frame  Frame;
typedef struct FrameQueue  FrameQueue;
enum ;
typedef struct Decoder  Decoder;
typedef struct VideoState  VideoState;
static AVInputFormat *file_iformat;
static const char *input_filename;
static const char *window_title;
static int default_width  = 640;
static int default_height = 480;
static int screen_width  = 0;
static int screen_height = 0;
static int audio_disable;
static int video_disable;
static int subtitle_disable;
static const char* wanted_stream_spec[AVMEDIA_TYPE_NB] = ;
static int seek_by_bytes = -1;
static int display_disable;
static int show_status = 1;
static int av_sync_type = AV_SYNC_AUDIO_MASTER;
static int64_t start_time = AV_NOPTS_VALUE;
static int64_t duration = AV_NOPTS_VALUE;
static int fast = 0;
static int genpts = 0;
static int lowres = 0;
static int decoder_reorder_pts = -1;
static int autoexit;
static int exit_on_keydown;
static int exit_on_mousedown;
static int loop = 1;
static int framedrop = -1;
static int infinite_buffer = -1;
static enum ShowMode show_mode = SHOW_MODE_NONE;
static const char *audio_codec_name;
static const char *subtitle_codec_name;
static const char *video_codec_name;
double rdftspeed = 0.02;
static int64_t cursor_last_shown;
static int cursor_hidden = 0;
#if CONFIG_AVFILTER
static const char **vfilters_list = NULL;
static int nb_vfilters = 0;
static char *afilters = NULL;
static int autorotate = 1;
static int is_full_screen;
static int64_t audio_callback_time;
static AVPacket flush_pkt;
#define FF_ALLOC_EVENT   (SDL_USEREVENT)
#define FF_QUIT_EVENT    (SDL_USEREVENT + 2)
static SDL_Window *window;
static SDL_Renderer *renderer;
#if CONFIG_AVFILTER
opt_add_vfilter
static inline
cmp_audio_fmts
static inline
get_valid_channel_layout
free_picture;
packet_queue_put_private
packet_queue_put
packet_queue_put_nullpacket
packet_queue_init
packet_queue_flush
packet_queue_destroy
packet_queue_abort
packet_queue_start
packet_queue_get
decoder_init
decoder_decode_frame
decoder_destroy
frame_queue_unref_item
frame_queue_init
frame_queue_destory
frame_queue_signal
*frame_queue_peek
*frame_queue_peek_next
*frame_queue_peek_last
*frame_queue_peek_writable
*frame_queue_peek_readable
frame_queue_push
frame_queue_next
frame_queue_nb_remaining
frame_queue_last_pos
decoder_abort
fill_rectangle
free_picture
realloc_texture
calculate_display_rect
upload_texture
video_image_display
compute_mod
video_audio_display
stream_component_close
stream_close
do_exit
sigterm_handler
set_default_window_size
video_open
video_display
get_clock
set_clock_at
set_clock
set_clock_speed
init_clock
sync_clock_to_slave
get_master_sync_type
get_master_clock
check_external_clock_speed
stream_seek
stream_toggle_pause
toggle_pause
toggle_mute
update_volume
step_to_next_frame
compute_target_delay
vp_duration
update_video_pts
video_refresh
alloc_picture
queue_picture
get_video_frame
#if CONFIG_AVFILTER
configure_filtergraph
configure_video_filters
configure_audio_filters
audio_thread
decoder_start(void *), void *arg)
video_thread
subtitle_thread
update_sample_display
synchronize_audio
audio_decode_frame
sdl_audio_callback
audio_open
stream_component_open
decode_interrupt_cb
stream_has_enough_packets
is_realtime
read_thread
*stream_open
stream_cycle_channel
toggle_full_screen
toggle_audio_display
refresh_loop_wait_event
seek_chapter
event_loop
opt_frame_size
opt_width
opt_height
opt_format
opt_frame_pix_fmt
opt_sync
opt_seek
opt_duration
opt_show_mode
opt_input_file
opt_codec
static int dummy;
static const OptionDef options[] = ;
show_usage
show_help_default
lockmgr
main
