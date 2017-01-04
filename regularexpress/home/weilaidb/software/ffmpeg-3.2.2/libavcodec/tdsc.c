#define BITMAPINFOHEADER_SIZE 0x28
#define TDSF_HEADER_SIZE      0x56
#define TDSB_HEADER_SIZE      0x08
typedef struct TDSCContext  TDSCContext;
enum TDSCCursorFormat ;
static av_cold int tdsc_close(AVCodecContext *avctx)
static av_cold int tdsc_init(AVCodecContext *avctx)
#define APPLY_ALPHA(src, new, alpha) \
src = (src * (256 - alpha) + new * alpha) >> 8
static void tdsc_paint_cursor(AVCodecContext *avctx, uint8_t *dst, int stride)
static int tdsc_load_cursor(AVCodecContext *avctx)
static inline void tdsc_yuv2rgb(uint8_t *out, int Y, int U, int V)
static av_always_inline void tdsc_blit(uint8_t *dst, int dst_stride,
const uint8_t *srcy, int srcy_stride,
const uint8_t *srcu, const uint8_t *srcv,
int srcuv_stride, int width, int height)
static int tdsc_decode_jpeg_tile(AVCodecContext *avctx, int tile_size,
int x, int y, int w, int h)
static int tdsc_decode_tiles(AVCodecContext *avctx, int number_tiles)
static int tdsc_parse_tdsf(AVCodecContext *avctx, int number_tiles)
static int tdsc_parse_dtsm(AVCodecContext *avctx)
static int tdsc_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_tdsc_decoder = ;
