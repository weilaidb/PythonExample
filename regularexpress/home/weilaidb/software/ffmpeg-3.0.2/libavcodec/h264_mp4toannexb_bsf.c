typedef struct H264BSFContext  H264BSFContext;
static int alloc_and_copy(uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *sps_pps, uint32_t sps_pps_size,
const uint8_t *in, uint32_t in_size)
static int h264_extradata_to_annexb(H264BSFContext *ctx, AVCodecContext *avctx, const int padding)
static int h264_mp4toannexb_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size,
int keyframe)
static void h264_mp4toannexb_filter_close(AVBitStreamFilterContext *bsfc)
AVBitStreamFilter ff_h264_mp4toannexb_bsf = ;
