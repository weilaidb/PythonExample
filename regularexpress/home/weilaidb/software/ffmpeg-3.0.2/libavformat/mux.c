#if CONFIG_NETWORK
static void frac_init(FFFrac *f, int64_t val, int64_t num, int64_t den)
static void frac_add(FFFrac *f, int64_t incr)
AVRational ff_choose_timebase(AVFormatContext *s, AVStream *st, int min_precision)
enum AVChromaLocation ff_choose_chroma_location(AVFormatContext *s, AVStream *st)
int avformat_alloc_output_context2(AVFormatContext **avctx, AVOutputFormat *oformat,
const char *format, const char *filename)
static int validate_codec_tag(AVFormatContext *s, AVStream *st)
static int init_muxer(AVFormatContext *s, AVDictionary **options)
static int init_pts(AVFormatContext *s)
int avformat_write_header(AVFormatContext *s, AVDictionary **options)
#define AV_PKT_FLAG_UNCODED_FRAME 0x2000
#define UNCODED_FRAME_PACKET_SIZE (INT_MIN / 3 * 2 + (int)sizeof(AVFrame))
#if FF_API_COMPUTE_PKT_FIELDS2
static int compute_muxer_pkt_fields(AVFormatContext *s, AVStream *st, AVPacket *pkt)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int check_packet(AVFormatContext *s, AVPacket *pkt)
static int prepare_input_packet(AVFormatContext *s, AVPacket *pkt)
int av_write_frame(AVFormatContext *s, AVPacket *pkt)
#define CHUNK_START 0x1000
int ff_interleave_add_packet(AVFormatContext *s, AVPacket *pkt,
int (*compare)(AVFormatContext *, AVPacket *, AVPacket *))
static int interleave_compare_dts(AVFormatContext *s, AVPacket *next,
AVPacket *pkt)
int ff_interleave_packet_per_dts(AVFormatContext *s, AVPacket *out,
AVPacket *pkt, int flush)
static int interleave_packet(AVFormatContext *s, AVPacket *out, AVPacket *in, int flush)
int av_interleaved_write_frame(AVFormatContext *s, AVPacket *pkt)
int av_write_trailer(AVFormatContext *s)
int av_get_output_timestamp(struct AVFormatContext *s, int stream,
int64_t *dts, int64_t *wall)
int ff_write_chained(AVFormatContext *dst, int dst_stream, AVPacket *pkt,
AVFormatContext *src, int interleave)
static int av_write_uncoded_frame_internal(AVFormatContext *s, int stream_index,
AVFrame *frame, int interleaved)
int av_write_uncoded_frame(AVFormatContext *s, int stream_index,
AVFrame *frame)
int av_interleaved_write_uncoded_frame(AVFormatContext *s, int stream_index,
AVFrame *frame)
int av_write_uncoded_frame_query(AVFormatContext *s, int stream_index)
