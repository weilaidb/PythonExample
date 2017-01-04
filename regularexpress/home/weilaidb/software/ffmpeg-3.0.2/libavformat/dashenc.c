#if HAVE_UNISTD_H
typedef enum  DASHTmplId;
typedef struct Segment  Segment;
typedef struct OutputStream  OutputStream;
typedef struct DASHContext  DASHContext;
static int dash_write(void *opaque, uint8_t *buf, int buf_size)
static void set_codec_str(AVFormatContext *s, AVCodecContext *codec,
char *str, int size)
static void dash_free(AVFormatContext *s)
static void output_segment_list(OutputStream *os, AVIOContext *out, DASHContext *c)
static DASHTmplId dash_read_tmpl_id(const char *identifier, char *format_tag,
size_t format_tag_size, const char **ptr)
static void dash_fill_tmpl_params(char *dst, size_t buffer_size,
const char *template, int rep_id,
int number, int bit_rate,
int64_t time)
static char *xmlescape(const char *str)
static void write_time(AVIOContext *out, int64_t time)
static void format_date_now(char *buf, int size)
static int write_manifest(AVFormatContext *s, int final)
static int dash_write_header(AVFormatContext *s)
static int add_segment(OutputStream *os, const char *file,
int64_t time, int duration,
int64_t start_pos, int64_t range_length,
int64_t index_length)
static void write_styp(AVIOContext *pb)
static void find_index_range(AVFormatContext *s, const char *full_path,
int64_t pos, int *index_length)
static int update_stream_extradata(AVFormatContext *s, OutputStream *os,
AVCodecContext *codec)
static int dash_flush(AVFormatContext *s, int final, int stream)
static int dash_write_packet(AVFormatContext *s, AVPacket *pkt)
static int dash_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(DASHContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass dash_class = ;
AVOutputFormat ff_dash_muxer = ;
