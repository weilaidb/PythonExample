enum BinkAudFlags ;
#define BINK_EXTRADATA_SIZE     1
#define BINK_MAX_AUDIO_TRACKS   256
#define BINK_MAX_WIDTH          7680
#define BINK_MAX_HEIGHT         4800
typedef struct BinkDemuxContext  BinkDemuxContext;
static int probe(AVProbeData *p)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_bink_demuxer = ;
