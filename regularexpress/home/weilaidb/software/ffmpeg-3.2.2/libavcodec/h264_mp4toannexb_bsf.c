typedef struct H264BSFContext  H264BSFContext;
static int alloc_and_copy(AVPacket *out,
const uint8_t *sps_pps, uint32_t sps_pps_size,
const uint8_t *in, uint32_t in_size)
static int h264_extradata_to_annexb(AVBSFContext *ctx, const int padding)
static int h264_mp4toannexb_init(AVBSFContext *ctx)
static int h264_mp4toannexb_filter(AVBSFContext *ctx, AVPacket *out)
static const enum AVCodecID codec_ids[] = ;
const AVBitStreamFilter ff_h264_mp4toannexb_bsf = ;
