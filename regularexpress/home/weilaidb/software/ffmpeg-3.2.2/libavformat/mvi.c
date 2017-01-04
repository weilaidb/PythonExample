#define MVI_FRAC_BITS 10
#define MVI_AUDIO_STREAM_INDEX 0
#define MVI_VIDEO_STREAM_INDEX 1
typedef struct MviDemuxContext  MviDemuxContext;
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_mvi_demuxer = ;
