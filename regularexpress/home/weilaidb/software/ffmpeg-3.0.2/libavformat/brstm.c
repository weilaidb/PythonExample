typedef struct BRSTMDemuxContext  BRSTMDemuxContext;
static int probe(AVProbeData *p)
static int probe_bfstm(AVProbeData *p)
static int read_close(AVFormatContext *s)
static av_always_inline unsigned int read16(AVFormatContext *s)
static av_always_inline unsigned int read32(AVFormatContext *s)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_brstm_demuxer = ;
AVInputFormat ff_bfstm_demuxer = ;
