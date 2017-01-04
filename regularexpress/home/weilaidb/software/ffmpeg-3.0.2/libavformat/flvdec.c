#define VALIDATE_INDEX_TS_THRESH 2500
#define RESYNC_BUFFER_SIZE (1<<20)
typedef struct FLVContext  FLVContext;
static int probe(AVProbeData *p, int live)
static int flv_probe(AVProbeData *p)
static int live_flv_probe(AVProbeData *p)
static AVStream *create_stream(AVFormatContext *s, int codec_type)
static int flv_same_audio_codec(AVCodecContext *acodec, int flags)
static void flv_set_audio_codec(AVFormatContext *s, AVStream *astream,
AVCodecContext *acodec, int flv_codecid)
static int flv_same_video_codec(AVCodecContext *vcodec, int flags)
static int flv_set_video_codec(AVFormatContext *s, AVStream *vstream,
int flv_codecid, int read)
static int amf_get_string(AVIOContext *ioc, char *buffer, int buffsize)
static int parse_keyframes_index(AVFormatContext *s, AVIOContext *ioc,
AVStream *vstream, int64_t max_pos)
static int amf_parse_object(AVFormatContext *s, AVStream *astream,
AVStream *vstream, const char *key,
int64_t max_pos, int depth)
#define TYPE_ONTEXTDATA 1
#define TYPE_ONCAPTION 2
#define TYPE_ONCAPTIONINFO 3
#define TYPE_UNKNOWN 9
static int flv_read_metabody(AVFormatContext *s, int64_t next_pos)
static int flv_read_header(AVFormatContext *s)
static int flv_read_close(AVFormatContext *s)
static int flv_get_extradata(AVFormatContext *s, AVStream *st, int size)
static int flv_queue_extradata(FLVContext *flv, AVIOContext *pb, int stream,
int size)
static void clear_index_entries(AVFormatContext *s, int64_t pos)
static int amf_skip_tag(AVIOContext *pb, AMFDataType type)
static int flv_data_packet(AVFormatContext *s, AVPacket *pkt,
int64_t dts, int64_t next)
static int resync(AVFormatContext *s)
static int flv_read_packet(AVFormatContext *s, AVPacket *pkt)
static int flv_read_seek(AVFormatContext *s, int stream_index,
int64_t ts, int flags)
#define OFFSET(x) offsetof(FLVContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass flv_class = ;
AVInputFormat ff_flv_demuxer = ;
static const AVClass live_flv_class = ;
AVInputFormat ff_live_flv_demuxer = ;
