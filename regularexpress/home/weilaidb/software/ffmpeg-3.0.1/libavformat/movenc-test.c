#if HAVE_UNISTD_H
#if !HAVE_GETOPT
#define HASH_SIZE 16
static const uint8_t h264_extradata[] = ;
static const uint8_t aac_extradata[] = ;
static const char *format = "mp4";
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
int num_warnings;
int check_faults;
static void count_warnings(void *avcl, int level, const char *fmt, va_list vl)
static void init_count_warnings(void)
static void reset_count_warnings(void)
static int io_write(void *opaque, uint8_t *buf, int size)
static void init_out(const char *name)
static void close_out(void)
static void check_func(int value, int line, const char *msg, ...)
#define check(value, ...) check_func(value, __LINE__, __VA_ARGS__)
static void init_fps(int bf, int audio_preroll, int fps)
static void init(int bf, int audio_preroll)
static void mux_frames(int n)
static void mux_gops(int n)
static void skip_gops(int n)
static void signal_init_ts(void)
static void finish(void)
static void help(void)
int main(int argc, char **argv)
