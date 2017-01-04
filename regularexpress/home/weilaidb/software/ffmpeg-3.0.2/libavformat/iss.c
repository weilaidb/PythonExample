#define ISS_SIG "IMA_ADPCM_Sound"
#define ISS_SIG_LEN 15
#define MAX_TOKEN_SIZE 20
typedef struct IssDemuxContext  IssDemuxContext;
static void get_token(AVIOContext *s, char *buf, int maxlen)
static int iss_probe(AVProbeData *p)
static av_cold int iss_read_header(AVFormatContext *s)
static int iss_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_iss_demuxer = ;
