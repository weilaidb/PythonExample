#define AU_UNKNOWN_SIZE ((uint32_t)(~0))
static int sol_probe(AVProbeData *p)
#define SOL_DPCM    1
#define SOL_16BIT   4
#define SOL_STEREO 16
static enum AVCodecID sol_codec_id(int magic, int type)
static int sol_codec_type(int magic, int type)
static int sol_channels(int magic, int type)
static int sol_read_header(AVFormatContext *s)
#define MAX_SIZE 4096
static int sol_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_sol_demuxer = ;
