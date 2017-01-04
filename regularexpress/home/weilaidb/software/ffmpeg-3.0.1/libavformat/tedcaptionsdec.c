typedef struct  TEDCaptionsDemuxer;
static const AVOption tedcaptions_options[] = ;
static const AVClass tedcaptions_demuxer_class = ;
#define BETWEEN(a, amin, amax) ((unsigned)((a) - (amin)) <= (amax) - (amin))
#define HEX_DIGIT_TEST(c) (BETWEEN(c, '0', '9') || BETWEEN((c) | 32, 'a', 'z'))
#define HEX_DIGIT_VAL(c) ((c) <= '9' ? (c) - '0' : ((c) | 32) - 'a' + 10)
#define ERR_CODE(c) ((c) < 0 ? (c) : AVERROR_INVALIDDATA)
static void av_bprint_utf8(AVBPrint *bp, unsigned c)
static void next_byte(AVIOContext *pb, int *cur_byte)
static void skip_spaces(AVIOContext *pb, int *cur_byte)
static int expect_byte(AVIOContext *pb, int *cur_byte, uint8_t c)
static int parse_string(AVIOContext *pb, int *cur_byte, AVBPrint *bp, int full)
static int parse_label(AVIOContext *pb, int *cur_byte, AVBPrint *bp)
static int parse_boolean(AVIOContext *pb, int *cur_byte, int *result)
static int parse_int(AVIOContext *pb, int *cur_byte, int64_t *result)
static int parse_file(AVIOContext *pb, FFDemuxSubtitlesQueue *subs)
static av_cold int tedcaptions_read_header(AVFormatContext *avf)
static int tedcaptions_read_packet(AVFormatContext *avf, AVPacket *packet)
static int tedcaptions_read_close(AVFormatContext *avf)
static av_cold int tedcaptions_read_probe(AVProbeData *p)
{
static const char *const tags[] = ;
unsigned i, count = 0;
const char *t;
if (p->buf[strspn(p->buf, " \t\r\n")] != '
static int tedcaptions_read_seek(AVFormatContext *avf, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts,
int flags)
AVInputFormat ff_tedcaptions_demuxer = ;
