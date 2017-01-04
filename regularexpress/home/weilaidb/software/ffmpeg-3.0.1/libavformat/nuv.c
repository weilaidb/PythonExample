static const AVCodecTag nuv_audio_tags[] = ;
typedef struct NUVContext  NUVContext;
typedef enum  nuv_frametype;
static int nuv_probe(AVProbeData *p)
#define PKTSIZE(s) (s &  0xffffff)
static int get_codec_data(AVIOContext *pb, AVStream *vst,
AVStream *ast, int myth)
static int nuv_header(AVFormatContext *s)
#define HDRSIZE 12
static int nuv_packet(AVFormatContext *s, AVPacket *pkt)
static int nuv_resync(AVFormatContext *s, int64_t pos_limit)
static int64_t nuv_read_dts(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
AVInputFormat ff_nuv_demuxer = ;
