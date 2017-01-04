#if HAVE_UNISTD_H
#define KEYSIZE 16
#define LINE_BUFFER_SIZE 1024
typedef struct HLSSegment  HLSSegment;
typedef enum HLSFlags  HLSFlags;
typedef enum  PlaylistType;
typedef struct HLSContext  HLSContext;
static int mkdir_p(const char *path)
static int hls_delete_old_segments(HLSContext *hls)
static int hls_encryption_start(AVFormatContext *s)
static int read_chomp_line(AVIOContext *s, char *buf, int maxlen)
static int hls_mux_init(AVFormatContext *s)
static int hls_append_segment(struct AVFormatContext *s, HLSContext *hls, double duration,
int64_t pos, int64_t size)
static int parse_playlist(AVFormatContext *s, const char *url)
static void hls_free_segments(HLSSegment *p)
static void set_http_options(AVDictionary **options, HLSContext *c)
static int hls_window(AVFormatContext *s, int last)
static int hls_start(AVFormatContext *s)
static int hls_write_header(AVFormatContext *s)
static int hls_write_packet(AVFormatContext *s, AVPacket *pkt)
static int hls_write_trailer(struct AVFormatContext *s)
#define OFFSET(x) offsetof(HLSContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass hls_class = ;
AVOutputFormat ff_hls_muxer = ;
