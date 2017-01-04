typedef struct MPJPEGDemuxContext  MPJPEGDemuxContext;
static void trim_right(char *p)
static int get_line(AVIOContext *pb, char *line, int line_size)
static int split_tag_value(char **tag, char **value, char *line)
static int parse_multipart_header(AVIOContext *pb,
int* size,
const char* expected_boundary,
void *log_ctx);
static int mpjpeg_read_close(AVFormatContext *s)
static int mpjpeg_read_probe(AVProbeData *p)
static int mpjpeg_read_header(AVFormatContext *s)
static int parse_content_length(const char *value)
static int parse_multipart_header(AVIOContext *pb,
int* size,
const char* expected_boundary,
void *log_ctx)
static char* mpjpeg_get_boundary(AVIOContext* pb)
static int mpjpeg_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(MPJPEGDemuxContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
const AVOption mpjpeg_options[] = ;
static const AVClass mpjpeg_demuxer_class = ;
AVInputFormat ff_mpjpeg_demuxer = ;
