#define MIN_HEVCC_LENGTH 23
typedef struct HEVCBSFContext  HEVCBSFContext;
static int hevc_extradata_to_annexb(AVBSFContext *ctx)
static int hevc_mp4toannexb_init(AVBSFContext *ctx)
static int hevc_mp4toannexb_filter(AVBSFContext *ctx, AVPacket *out)
static const enum AVCodecID codec_ids[] = ;
const AVBitStreamFilter ff_hevc_mp4toannexb_bsf = ;
