enum BMVFlags;
#define SCREEN_WIDE 640
#define SCREEN_HIGH 429
typedef struct BMVDecContext  BMVDecContext;
#define NEXT_BYTE(v) (v) = forward ? (v) + 1 : (v) - 1;
static int decode_bmv_frame(const uint8_t *source, int src_len, uint8_t *frame, int frame_off)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *pkt)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_bmv_video_decoder = ;
