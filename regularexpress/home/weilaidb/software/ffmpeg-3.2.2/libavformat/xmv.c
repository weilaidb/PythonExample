#define XMV_MIN_HEADER_SIZE 36
#define XMV_AUDIO_ADPCM51_FRONTLEFTRIGHT 1
#define XMV_AUDIO_ADPCM51_FRONTCENTERLOW 2
#define XMV_AUDIO_ADPCM51_REARLEFTRIGHT  4
#define XMV_AUDIO_ADPCM51 (XMV_AUDIO_ADPCM51_FRONTLEFTRIGHT | \
XMV_AUDIO_ADPCM51_FRONTCENTERLOW | \
XMV_AUDIO_ADPCM51_REARLEFTRIGHT)
#define XMV_BLOCK_ALIGN_SIZE 36
typedef struct XMVVideoPacket  XMVVideoPacket;
typedef struct XMVAudioPacket  XMVAudioPacket;
typedef struct XMVDemuxContext  XMVDemuxContext;
static int xmv_probe(AVProbeData *p)
static int xmv_read_close(AVFormatContext *s)
static int xmv_read_header(AVFormatContext *s)
static void xmv_read_extradata(uint8_t *extradata, AVIOContext *pb)
static int xmv_process_packet_header(AVFormatContext *s)
static int xmv_fetch_new_packet(AVFormatContext *s)
static int xmv_fetch_audio_packet(AVFormatContext *s,
AVPacket *pkt, uint32_t stream)
static int xmv_fetch_video_packet(AVFormatContext *s,
AVPacket *pkt)
static int xmv_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_xmv_demuxer = ;
