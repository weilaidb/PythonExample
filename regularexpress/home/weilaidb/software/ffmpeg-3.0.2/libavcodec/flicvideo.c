#define FLI_256_COLOR 4
#define FLI_DELTA     7
#define FLI_COLOR     11
#define FLI_LC        12
#define FLI_BLACK     13
#define FLI_BRUN      15
#define FLI_COPY      16
#define FLI_MINI      18
#define FLI_DTA_BRUN  25
#define FLI_DTA_COPY  26
#define FLI_DTA_LC    27
#define FLI_TYPE_CODE     (0xAF11)
#define FLC_FLX_TYPE_CODE (0xAF12)
#define FLC_DTA_TYPE_CODE (0xAF44)
#define FLC_MAGIC_CARPET_SYNTHETIC_TYPE_CODE (0xAF13)
#define CHECK_PIXEL_PTR(n) \
if (pixel_ptr + n > pixel_limit)  \
typedef struct FlicDecodeContext  FlicDecodeContext;
static av_cold int flic_decode_init(AVCodecContext *avctx)
static int flic_decode_frame_8BPP(AVCodecContext *avctx,
void *data, int *got_frame,
const uint8_t *buf, int buf_size)
static int flic_decode_frame_15_16BPP(AVCodecContext *avctx,
void *data, int *got_frame,
const uint8_t *buf, int buf_size)
static int flic_decode_frame_24BPP(AVCodecContext *avctx,
void *data, int *got_frame,
const uint8_t *buf, int buf_size)
static int flic_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int flic_decode_end(AVCodecContext *avctx)
AVCodec ff_flic_decoder = ;
