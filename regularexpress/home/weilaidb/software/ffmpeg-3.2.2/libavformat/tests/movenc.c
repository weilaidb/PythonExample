#if HAVE_UNISTD_H
#if !HAVE_GETOPT
#define HASH_SIZE 16
static const uint8_t h264_extradata[] = ;
static const uint8_t aac_extradata[] = ;
static const char *format = ;
AVFormatContext *ctx;
uint8_t iobuf[32768];
AVDictionary *opts;
int write_file;
const char *cur_name;
FILE* out;
int out_size;
struct AVMD5* md5;
uint8_t hash[HASH_SIZE];
AVStream *video_st, *audio_st;
int64_t audio_dts, video_dts;
int bframes;
int64_t duration;
int64_t audio_duration;
int frames;
int gop_size;
int64_t next_p_pts;
enum AVPictureType last_picture;
int skip_write;
int skip_write_audio;
int clear_duration;
int force_iobuf_size;
int do_interleave;
int fake_pkt_duration;
int num_warnings;
int check_faults;
count_warnings
init_count_warnings
reset_count_warnings
io_write
io_write_data_type
init_out
close_out
check_func
check check_func(value, __LINE__, __VA_ARGS__)
init_fps
init
mux_frames
mux_gops
skip_gops
signal_init_ts
finish
help
main
