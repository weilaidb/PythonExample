typedef struct IVFEncContext  IVFEncContext;
static int ivf_write_header(AVFormatContext *s)
static int ivf_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ivf_write_trailer(AVFormatContext *s)
static int ivf_check_bitstream(struct AVFormatContext *s, const AVPacket *pkt)
static const AVCodecTag codec_ivf_tags[] = ;
AVOutputFormat ff_ivf_muxer = ;
