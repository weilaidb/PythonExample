#if HAVE_UNISTD_H
typedef struct Fragment  Fragment;
typedef struct OutputStream  OutputStream;
typedef struct SmoothStreamingContext  SmoothStreamingContext;
static int ism_write(void *opaque, uint8_t *buf, int buf_size)
static int64_t ism_seek(void *opaque, int64_t offset, int whence)
static void get_private_data(OutputStream *os)
static void ism_free(AVFormatContext *s)
static void output_chunk_list(OutputStream *os, AVIOContext *out, int final, int skip, int window_size)
static int write_manifest(AVFormatContext *s, int final)
static int ism_write_header(AVFormatContext *s)
static int parse_fragment(AVFormatContext *s, const char *filename, int64_t *start_ts, int64_t *duration, int64_t *moof_size, int64_t size)
static int add_fragment(OutputStream *os, const char *file, const char *infofile, int64_t start_time, int64_t duration, int64_t start_pos, int64_t size)
static int copy_moof(AVFormatContext *s, const char* infile, const char *outfile, int64_t size)
static int ism_flush(AVFormatContext *s, int final)
static int ism_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ism_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(SmoothStreamingContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ism_class = ;
AVOutputFormat ff_smoothstreaming_muxer = ;
