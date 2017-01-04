typedef struct AVIIentry  AVIIentry;
#define AVI_INDEX_CLUSTER_SIZE 16384
typedef struct AVIIndex  AVIIndex;
typedef struct AVIContext  AVIContext;
typedef struct AVIStream  AVIStream;
static int avi_write_packet_internal(AVFormatContext *s, AVPacket *pkt);
static inline AVIIentry *avi_get_ientry(const AVIIndex *idx, int ent_id)
static int avi_add_ientry(AVFormatContext *s, int stream_index, char *tag,
unsigned int flags, unsigned int size)
static int64_t avi_start_new_riff(AVFormatContext *s, AVIOContext *pb,
const char *riff_tag, const char *list_tag)
static char *avi_stream2fourcc(char *tag, int index, enum AVMediaType type)
static int avi_write_counters(AVFormatContext *s, int riff_id)
static void write_odml_master(AVFormatContext *s, int stream_index)
static int avi_write_header(AVFormatContext *s)
static void update_odml_entry(AVFormatContext *s, int stream_index, int64_t ix, int size)
static int avi_write_ix(AVFormatContext *s)
static int avi_write_idx1(AVFormatContext *s)
static int write_skip_frames(AVFormatContext *s, int stream_index, int64_t dts)
static int avi_write_packet(AVFormatContext *s, AVPacket *pkt)
static int avi_write_packet_internal(AVFormatContext *s, AVPacket *pkt)
static int avi_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(AVIContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass avi_muxer_class = ;
AVOutputFormat ff_avi_muxer = ;
