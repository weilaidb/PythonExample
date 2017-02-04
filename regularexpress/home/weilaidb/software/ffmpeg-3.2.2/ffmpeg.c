#if HAVE_IO_H
#if HAVE_UNISTD_H
# include
# include
# include
#if HAVE_SYS_RESOURCE_H
#elif HAVE_GETPROCESSTIMES
#if HAVE_GETPROCESSMEMORYINFO
#if HAVE_SETCONSOLECTRLHANDLER
#if HAVE_SYS_SELECT_H
#if HAVE_TERMIOS_H
#elif HAVE_KBHIT
#if HAVE_PTHREADS
const char program_name[] = ;
const int program_birth_year = 2000;
static FILE *vstats_file;
const char *const forced_keyframes_const_names[] = ;
do_video_stats;
getutime;
getmaxrss;
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
free_input_threads;
sub2video_get_blank_frame
sub2video_copy_rect
sub2video_push_ref
sub2video_update
sub2video_heartbeat
sub2video_flush
term_exit_sigsafe
term_exit
static volatile int received_sigterm = 0;
static volatile int received_nb_signals = 0;
static volatile int transcode_init_done = 0;
static volatile int ffmpeg_exited = 0;
static int main_return_code = 0;
sigterm_handler
#if HAVE_SETCONSOLECTRLHANDLER
CtrlHandler
term_init
read_key
decode_interrupt_cb
const AVIOInterruptCB int_cb = ;
ffmpeg_cleanup
remove_avoptions
assert_avoptions
abort_codec_experimental
update_benchmark
close_all_output_streams
write_packet
close_output_stream
output_packet
check_recording_time
do_audio_out
do_subtitle_out
do_video_out
psnr
do_video_stats
finish_output_stream
reap_filters
print_final_stats
print_report
flush_encoders
check_output_constraints
do_streamcopy
guess_input_channel_layout
check_decode_result
decode
decode_audio
decode_video
transcode_subtitles
send_filter_eof
process_input_packet
print_sdp
*get_hwaccel
get_format
get_buffer
init_input_stream
*get_input_stream
compare_int64
check_init_output_file
init_output_bsfs
init_output_stream_streamcopy
init_output_stream
parse_forced_key_frames
report_new_stream
set_encoder_id
transcode_init
need_output
*choose_output
set_tty_echo
check_keyboard_interaction
#if HAVE_PTHREADS
*input_thread
free_input_threads
init_input_threads
get_input_packet_mt
get_input_packet
got_eagain
reset_eagain
duration_max
seek_to_start
process_input
transcode_from_filter
transcode_step
transcode
getutime
getmaxrss
log_callback_null
main
