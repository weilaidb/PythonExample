#if HAVE_IO_H
#if HAVE_UNISTD_H
# include "libavfilter/avfilter.h"
# include "libavfilter/buffersrc.h"
# include "libavfilter/buffersink.h"
#if HAVE_SYS_RESOURCE_H
#elif HAVE_GETPROCESSTIMES
#if HAVE_GETPROCESSMEMORYINFO
#if HAVE_SETCONSOLECTRLHANDLER
#if HAVE_SYS_SELECT_H
#if HAVE_TERMIOS_H
#elif HAVE_KBHIT
#if HAVE_PTHREADS
const char program_name[] = "ffmpeg";
const int program_birth_year = 2000;
static FILE *vstats_file;
const char *const forced_keyframes_const_names[] = ;
static void do_video_stats(OutputStream *ost, int frame_size);
static int64_t getutime(void);
static int64_t getmaxrss(void);
static int run_as_daemon  = 0;
static int nb_frames_dup = 0;
static int nb_frames_drop = 0;
static int64_t decode_error_stat[2];
static int want_sdp = 1;
static int current_time;
AVIOContext *progress_avio = NULL;
static uint8_t *subtitle_out;
InputStream **input_streams = NULL;
int        nb_input_streams = 0;
InputFile   **input_files   = NULL;
int        nb_input_files   = 0;
OutputStream **output_streams = NULL;
int         nb_output_streams = 0;
OutputFile   **output_files   = NULL;
int         nb_output_files   = 0;
FilterGraph **filtergraphs;
int        nb_filtergraphs;
#if HAVE_TERMIOS_H
static struct termios oldtty;
static int restore_tty;
#if HAVE_PTHREADS
static void free_input_threads(void);
static int sub2video_get_blank_frame(InputStream *ist)
static void sub2video_copy_rect(uint8_t *dst, int dst_linesize, int w, int h,
AVSubtitleRect *r)
static void sub2video_push_ref(InputStream *ist, int64_t pts)
static void sub2video_update(InputStream *ist, AVSubtitle *sub)
static void sub2video_heartbeat(InputStream *ist, int64_t pts)
static void sub2video_flush(InputStream *ist)
static void term_exit_sigsafe(void)
void term_exit(void)
static volatile int received_sigterm = 0;
static volatile int received_nb_signals = 0;
static volatile int transcode_init_done = 0;
static volatile int ffmpeg_exited = 0;
static int main_return_code = 0;
static void
sigterm_handler(int sig)
#if HAVE_SETCONSOLECTRLHANDLER
static BOOL WINAPI CtrlHandler(DWORD fdwCtrlType)
void term_init(void)
static int read_key(void)
static int decode_interrupt_cb(void *ctx)
const AVIOInterruptCB int_cb = ;
static void ffmpeg_cleanup(int ret)
void remove_avoptions(AVDictionary **a, AVDictionary *b)
void assert_avoptions(AVDictionary *m)
static void abort_codec_experimental(AVCodec *c, int encoder)
static void update_benchmark(const char *fmt, ...)
static void close_all_output_streams(OutputStream *ost, OSTFinished this_stream, OSTFinished others)
static void write_packet(OutputFile *of, AVPacket *pkt, OutputStream *ost)
static void close_output_stream(OutputStream *ost)
static void output_packet(OutputFile *of, AVPacket *pkt, OutputStream *ost)
static int check_recording_time(OutputStream *ost)
static void do_audio_out(OutputFile *of, OutputStream *ost,
AVFrame *frame)
static void do_subtitle_out(OutputFile *of,
OutputStream *ost,
AVSubtitle *sub)
static void do_video_out(OutputFile *of,
OutputStream *ost,
AVFrame *next_picture,
double sync_ipts)
static double psnr(double d)
static void do_video_stats(OutputStream *ost, int frame_size)
static void finish_output_stream(OutputStream *ost)
static int reap_filters(int flush)
static void print_final_stats(int64_t total_size)
static void print_report(int is_last_report, int64_t timer_start, int64_t cur_time)
static void flush_encoders(void)
static int check_output_constraints(InputStream *ist, OutputStream *ost)
static void do_streamcopy(InputStream *ist, OutputStream *ost, const AVPacket *pkt)
int guess_input_channel_layout(InputStream *ist)
static void check_decode_result(InputStream *ist, int *got_output, int ret)
static int decode(AVCodecContext *avctx, AVFrame *frame, int *got_frame, AVPacket *pkt)
static int decode_audio(InputStream *ist, AVPacket *pkt, int *got_output)
static int decode_video(InputStream *ist, AVPacket *pkt, int *got_output, int eof)
static int transcode_subtitles(InputStream *ist, AVPacket *pkt, int *got_output)
static int send_filter_eof(InputStream *ist)
static int process_input_packet(InputStream *ist, const AVPacket *pkt, int no_eof)
static void print_sdp(void)
static const HWAccel *get_hwaccel(enum AVPixelFormat pix_fmt)
static enum AVPixelFormat get_format(AVCodecContext *s, const enum AVPixelFormat *pix_fmts)
static int get_buffer(AVCodecContext *s, AVFrame *frame, int flags)
static int init_input_stream(int ist_index, char *error, int error_len)
static InputStream *get_input_stream(OutputStream *ost)
static int compare_int64(const void *a, const void *b)
static int check_init_output_file(OutputFile *of, int file_index)
static int init_output_bsfs(OutputStream *ost)
static int init_output_stream_streamcopy(OutputStream *ost)
static int init_output_stream(OutputStream *ost, char *error, int error_len)
static void parse_forced_key_frames(char *kf, OutputStream *ost,
AVCodecContext *avctx)
static void report_new_stream(int input_index, AVPacket *pkt)
static void set_encoder_id(OutputFile *of, OutputStream *ost)
static int transcode_init(void)
static int need_output(void)
static OutputStream *choose_output(void)
static void set_tty_echo(int on)
static int check_keyboard_interaction(int64_t cur_time)
#if HAVE_PTHREADS
static void *input_thread(void *arg)
static void free_input_threads(void)
static int init_input_threads(void)
static int get_input_packet_mt(InputFile *f, AVPacket *pkt)
static int get_input_packet(InputFile *f, AVPacket *pkt)
static int got_eagain(void)
static void reset_eagain(void)
static AVRational duration_max(int64_t tmp, int64_t *duration, AVRational tmp_time_base,
AVRational time_base)
static int seek_to_start(InputFile *ifile, AVFormatContext *is)
static int process_input(int file_index)
static int transcode_from_filter(FilterGraph *graph, InputStream **best_ist)
static int transcode_step(void)
static int transcode(void)
static int64_t getutime(void)
static int64_t getmaxrss(void)
static void log_callback_null(void *ptr, int level, const char *fmt, va_list vl)
int main(int argc, char **argv)
