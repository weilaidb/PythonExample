#if HAVE_UNISTD_H
typedef struct Fragment  Fragment;
typedef struct OutputStream  OutputStream;
typedef struct HDSContext  HDSContext;
static int parse_header(OutputStream *os, const uint8_t *buf, int buf_size)
static int hds_write(void *opaque, uint8_t *buf, int buf_size)
static void hds_free(AVFormatContext *s)
static int write_manifest(AVFormatContext *s, int final)
static void update_size(AVIOContext *out, int64_t pos)
static int write_abst(AVFormatContext *s, OutputStream *os, int final)
static int init_file(AVFormatContext *s, OutputStream *os, int64_t start_ts)
static void close_file(AVFormatContext *s, OutputStream *os)
static int hds_write_header(AVFormatContext *s)
static int add_fragment(OutputStream *os, const char *file,
int64_t start_time, int64_t duration)
static int hds_flush(AVFormatContext *s, OutputStream *os, int final,
int64_t end_ts)
static int hds_write_packet(AVFormatContext *s, AVPacket *pkt)
static int hds_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(HDSContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass hds_class = ;
AVOutputFormat ff_hds_muxer = ;
