typedef struct CmvContext  CmvContext;
static av_cold int cmv_decode_init(AVCodecContext *avctx)
static void cmv_decode_intra(CmvContext * s, AVFrame *frame,
const uint8_t *buf, const uint8_t *buf_end)
static void cmv_motcomp(unsigned char *dst, int dst_stride,
const unsigned char *src, int src_stride,
int x, int y,
int xoffset, int yoffset,
int width, int height)
static void cmv_decode_inter(CmvContext *s, AVFrame *frame, const uint8_t *buf,
const uint8_t *buf_end)
static int cmv_process_header(CmvContext *s, const uint8_t *buf, const uint8_t *buf_end)
#define EA_PREAMBLE_SIZE 8
#define MVIh_TAG MKTAG('M', 'V', 'I', 'h')
static int cmv_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int cmv_decode_end(AVCodecContext *avctx)
AVCodec ff_eacmv_decoder = ;
