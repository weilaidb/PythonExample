typedef struct TtyDemuxContext  TtyDemuxContext;
static int efi_read(AVFormatContext *avctx, uint64_t start_pos)
static int read_header(AVFormatContext *avctx)
static int read_packet(AVFormatContext *avctx, AVPacket *pkt)
#define OFFSET(x) offsetof(TtyDemuxContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass tty_demuxer_class = ;
AVInputFormat ff_tty_demuxer = ;
