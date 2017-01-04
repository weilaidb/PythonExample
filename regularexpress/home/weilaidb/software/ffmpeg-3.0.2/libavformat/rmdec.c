#define DEINT_ID_GENR MKTAG('g', 'e', 'n', 'r')
#define DEINT_ID_INT0 MKTAG('I', 'n', 't', '0')
#define DEINT_ID_INT4 MKTAG('I', 'n', 't', '4')
#define DEINT_ID_SIPR MKTAG('s', 'i', 'p', 'r')
#define DEINT_ID_VBRF MKTAG('v', 'b', 'r', 'f')
#define DEINT_ID_VBRS MKTAG('v', 'b', 'r', 's')
struct RMStream ;
typedef struct RMDemuxContext  RMDemuxContext;
static int rm_read_close(AVFormatContext *s);
static inline void get_strl(AVIOContext *pb, char *buf, int buf_size, int len)
static void get_str8(AVIOContext *pb, char *buf, int buf_size)
static int rm_read_extradata(AVIOContext *pb, AVCodecContext *avctx, unsigned size)
static void rm_read_metadata(AVFormatContext *s, AVIOContext *pb, int wide)
RMStream *ff_rm_alloc_rmstream (void)
void ff_rm_free_rmstream (RMStream *rms)
static int rm_read_audio_stream_info(AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *ast, int read_all)
int ff_rm_read_mdpr_codecdata(AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *rst,
unsigned int codec_data_size, const uint8_t *mime)
static int rm_read_index(AVFormatContext *s)
static int rm_read_header_old(AVFormatContext *s)
static int rm_read_multi(AVFormatContext *s, AVIOContext *pb,
AVStream *st, char *mime)
static int rm_read_header(AVFormatContext *s)
static int get_num(AVIOContext *pb, int *len)
#define RAW_PACKET_SIZE 1000
static int rm_sync(AVFormatContext *s, int64_t *timestamp, int *flags, int *stream_index, int64_t *pos)
static int rm_assemble_video_frame(AVFormatContext *s, AVIOContext *pb,
RMDemuxContext *rm, RMStream *vst,
AVPacket *pkt, int len, int *pseq,
int64_t *timestamp)
static inline void
rm_ac3_swap_bytes (AVStream *st, AVPacket *pkt)
static int readfull(AVFormatContext *s, AVIOContext *pb, uint8_t *dst, int n)
int
ff_rm_parse_packet (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *ast, int len, AVPacket *pkt,
int *seq, int flags, int64_t timestamp)
int
ff_rm_retrieve_cache (AVFormatContext *s, AVIOContext *pb,
AVStream *st, RMStream *ast, AVPacket *pkt)
static int rm_read_packet(AVFormatContext *s, AVPacket *pkt)
static int rm_read_close(AVFormatContext *s)
static int rm_probe(AVProbeData *p)
static int64_t rm_read_dts(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
static int rm_read_seek(AVFormatContext *s, int stream_index,
int64_t pts, int flags)
AVInputFormat ff_rm_demuxer = ;
AVInputFormat ff_rdt_demuxer = ;
static int ivr_probe(AVProbeData *p)
static int ivr_read_header(AVFormatContext *s)
static int ivr_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_ivr_demuxer = ;
