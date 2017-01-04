typedef struct  LavfiContext;
static int *create_all_formats(int n)
av_cold static int lavfi_read_close(AVFormatContext *avctx)
static int create_subcc_streams(AVFormatContext *avctx)
av_cold static int lavfi_read_header(AVFormatContext *avctx)
static int create_subcc_packet(AVFormatContext *avctx, AVFrame *frame,
int sink_idx)
static int lavfi_read_packet(AVFormatContext *avctx, AVPacket *pkt)
#define OFFSET(x) offsetof(LavfiContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass lavfi_class = ;
AVInputFormat ff_lavfi_demuxer = ;
