#define MIN_HEVCC_LENGTH 23
typedef struct HEVCBSFContext  HEVCBSFContext;
static int hevc_extradata_to_annexb(HEVCBSFContext* ctx, AVCodecContext *avctx)
static int hevc_mp4toannexb_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size,
int keyframe)
static void hevc_mp4toannexb_close(AVBitStreamFilterContext *bsfc)
AVBitStreamFilter ff_hevc_mp4toannexb_bsf = ;
