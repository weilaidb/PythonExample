#if CONFIG_AVFILTER
# include "libavfilter/avfilter.h"
# include "libavfilter/buffersink.h"
# include "libavfilter/buffersrc.h"
const char program_name[] = "ffplay";
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
#define FRAME_QUEUE_SIZE FFMAX(SAMPLE_QUEUE_SIZE, FFMAX(VIDEO_PICTURE_QUEUE_SIZE, SUBPICTURE_QUEUE_SIZE))
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
static int opt_add_vfilter(void *optctx, const char *opt, const char *arg)
static inline
int cmp_audio_fmts(enum AVSampleFormat fmt1, int64_t channel_count1,
enum AVSampleFormat fmt2, int64_t channel_count2)
static inline
int64_t get_valid_channel_layout(int64_t channel_layout, int channels)
static void free_picture(Frame *vp);
static int packet_queue_put_private(PacketQueue *q, AVPacket *pkt)
static int packet_queue_put(PacketQueue *q, AVPacket *pkt)
static int packet_queue_put_nullpacket(PacketQueue *q, int stream_index)
static int packet_queue_init(PacketQueue *q)
static void packet_queue_flush(PacketQueue *q)
static void packet_queue_destroy(PacketQueue *q)
static void packet_queue_abort(PacketQueue *q)
static void packet_queue_start(PacketQueue *q)
static int packet_queue_get(PacketQueue *q, AVPacket *pkt, int block, int *serial)
static void decoder_init(Decoder *d, AVCodecContext *avctx, PacketQueue *queue, SDL_cond *empty_queue_cond)
static int decoder_decode_frame(Decoder *d, AVFrame *frame, AVSubtitle *sub)
static void decoder_destroy(Decoder *d)
static void frame_queue_unref_item(Frame *vp)
static int frame_queue_init(FrameQueue *f, PacketQueue *pktq, int max_size, int keep_last)
static void frame_queue_destory(FrameQueue *f)
static void frame_queue_signal(FrameQueue *f)
static Frame *frame_queue_peek(FrameQueue *f)
static Frame *frame_queue_peek_next(FrameQueue *f)
static Frame *frame_queue_peek_last(FrameQueue *f)
static Frame *frame_queue_peek_writable(FrameQueue *f)
static Frame *frame_queue_peek_readable(FrameQueue *f)
static void frame_queue_push(FrameQueue *f)
static void frame_queue_next(FrameQueue *f)
static int frame_queue_nb_remaining(FrameQueue *f)
static int64_t frame_queue_last_pos(FrameQueue *f)
static void decoder_abort(Decoder *d, FrameQueue *fq)
static inline void fill_rectangle(int x, int y, int w, int h)
static void free_picture(Frame *vp)
static int realloc_texture(SDL_Texture **texture, Uint32 new_format, int new_width, int new_height, SDL_BlendMode blendmode, int init_texture)
static void calculate_display_rect(SDL_Rect *rect,
int scr_xleft, int scr_ytop, int scr_width, int scr_height,
int pic_width, int pic_height, AVRational pic_sar)
static int upload_texture(SDL_Texture *tex, AVFrame *frame, struct SwsContext **img_convert_ctx)
static void video_image_display(VideoState *is)
static inline int compute_mod(int a, int b)
static void video_audio_display(VideoState *s)
static void stream_component_close(VideoState *is, int stream_index)
static void stream_close(VideoState *is)
static void do_exit(VideoState *is)
static void sigterm_handler(int sig)
static void set_default_window_size(int width, int height, AVRational sar)
static int video_open(VideoState *is, Frame *vp)
static void video_display(VideoState *is)
static double get_clock(Clock *c)
static void set_clock_at(Clock *c, double pts, int serial, double time)
static void set_clock(Clock *c, double pts, int serial)
static void set_clock_speed(Clock *c, double speed)
static void init_clock(Clock *c, int *queue_serial)
static void sync_clock_to_slave(Clock *c, Clock *slave)
static int get_master_sync_type(VideoState *is)
static double get_master_clock(VideoState *is)
static void check_external_clock_speed(VideoState *is)
static void stream_seek(VideoState *is, int64_t pos, int64_t rel, int seek_by_bytes)
static void stream_toggle_pause(VideoState *is)
static void toggle_pause(VideoState *is)
static void toggle_mute(VideoState *is)
static void update_volume(VideoState *is, int sign, int step)
static void step_to_next_frame(VideoState *is)
static double compute_target_delay(double delay, VideoState *is)
static double vp_duration(VideoState *is, Frame *vp, Frame *nextvp)
static void update_video_pts(VideoState *is, double pts, int64_t pos, int serial)
static void video_refresh(void *opaque, double *remaining_time)
static void alloc_picture(VideoState *is)
static int queue_picture(VideoState *is, AVFrame *src_frame, double pts, double duration, int64_t pos, int serial)
static int get_video_frame(VideoState *is, AVFrame *frame)
#if CONFIG_AVFILTER
static int configure_filtergraph(AVFilterGraph *graph, const char *filtergraph,
AVFilterContext *source_ctx, AVFilterContext *sink_ctx)
static int configure_video_filters(AVFilterGraph *graph, VideoState *is, const char *vfilters, AVFrame *frame)
static int configure_audio_filters(VideoState *is, const char *afilters, int force_output_format)
static int audio_thread(void *arg)
static int decoder_start(Decoder *d, int (*fn)(void *), void *arg)
static int video_thread(void *arg)
static int subtitle_thread(void *arg)
static void update_sample_display(VideoState *is, short *samples, int samples_size)
static int synchronize_audio(VideoState *is, int nb_samples)
static int audio_decode_frame(VideoState *is)
static void sdl_audio_callback(void *opaque, Uint8 *stream, int len)
static int audio_open(void *opaque, int64_t wanted_channel_layout, int wanted_nb_channels, int wanted_sample_rate, struct AudioParams *audio_hw_params)
static int stream_component_open(VideoState *is, int stream_index)
static int decode_interrupt_cb(void *ctx)
static int stream_has_enough_packets(AVStream *st, int stream_id, PacketQueue *queue)
static int is_realtime(AVFormatContext *s)
static int read_thread(void *arg)
static VideoState *stream_open(const char *filename, AVInputFormat *iformat)
static void stream_cycle_channel(VideoState *is, int codec_type)
static void toggle_full_screen(VideoState *is)
static void toggle_audio_display(VideoState *is)
static void refresh_loop_wait_event(VideoState *is, SDL_Event *event)
static void seek_chapter(VideoState *is, int incr)
static void event_loop(VideoState *cur_stream)
static int opt_frame_size(void *optctx, const char *opt, const char *arg)
static int opt_width(void *optctx, const char *opt, const char *arg)
static int opt_height(void *optctx, const char *opt, const char *arg)
static int opt_format(void *optctx, const char *opt, const char *arg)
static int opt_frame_pix_fmt(void *optctx, const char *opt, const char *arg)
static int opt_sync(void *optctx, const char *opt, const char *arg)
static int opt_seek(void *optctx, const char *opt, const char *arg)
static int opt_duration(void *optctx, const char *opt, const char *arg)
static int opt_show_mode(void *optctx, const char *opt, const char *arg)
static void opt_input_file(void *optctx, const char *filename)
static int opt_codec(void *optctx, const char *opt, const char *arg)
static int dummy;
static const OptionDef options[] = ;
static void show_usage(void)
void show_help_default(const char *opt, const char *arg)
static int lockmgr(void **mtx, enum AVLockOp op)
int main(int argc, char **argv)
