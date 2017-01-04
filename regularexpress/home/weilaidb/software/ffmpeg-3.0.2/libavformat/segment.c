typedef struct SegmentListEntry  SegmentListEntry;
typedef enum  ListType;
#define SEGMENT_LIST_FLAG_CACHE 1
#define SEGMENT_LIST_FLAG_LIVE  2
typedef struct SegmentContext  SegmentContext;
static void print_csv_escaped_str(AVIOContext *ctx, const char *str)
static int segment_mux_init(AVFormatContext *s)
static int set_segment_filename(AVFormatContext *s)
static int segment_start(AVFormatContext *s, int write_header)
static int segment_list_open(AVFormatContext *s)
static void segment_list_print_entry(AVIOContext      *list_ioctx,
ListType          list_type,
const SegmentListEntry *list_entry,
void *log_ctx)
static int segment_end(AVFormatContext *s, int write_trailer, int is_last)
static int parse_times(void *log_ctx, int64_t **times, int *nb_times,
const char *times_str)
static int parse_frames(void *log_ctx, int **frames, int *nb_frames,
const char *frames_str)
static int open_null_ctx(AVIOContext **ctx)
static void close_null_ctxp(AVIOContext **pb)
static int select_reference_stream(AVFormatContext *s)
static void seg_free_context(SegmentContext *seg)
static int seg_write_header(AVFormatContext *s)
static int seg_write_packet(AVFormatContext *s, AVPacket *pkt)
static int seg_write_trailer(struct AVFormatContext *s)
#define OFFSET(x) offsetof(SegmentContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass seg_class = ;
AVOutputFormat ff_segment_muxer = ;
static const AVClass sseg_class = ;
AVOutputFormat ff_stream_segment_muxer = ;
