#define FPS_TAG MKTAG('F', 'P', 'S', 'x')
#define VLC_BITS 11
typedef struct FrapsContext  FrapsContext;
static av_cold int decode_init(AVCodecContext *avctx)
static int huff_cmp(const void *va, const void *vb)
static int fraps2_decode_plane(FrapsContext *s, uint8_t *dst, int stride, int w,
int h, const uint8_t *src, int size, int Uoff,
const int step)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_fraps_decoder = ;
