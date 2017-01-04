#define CHUNK_SIZE 512
#define RIFF_TAG MKTAG('R','I','F','F')
#define WAVE_TAG MKTAG('W','A','V','E')
typedef struct ACTContext;
static int probe(AVProbeData *p)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_act_demuxer = ;
