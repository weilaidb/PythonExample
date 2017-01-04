typedef struct QtrleContext  QtrleContext;
#define CHECK_PIXEL_PTR(n)                                                            \
if ((pixel_ptr + n > pixel_limit) || (pixel_ptr + n < 0))                                                                                  \
static void qtrle_decode_1bpp(QtrleContext *s, int row_ptr, int lines_to_change)
static inline void qtrle_decode_2n4bpp(QtrleContext *s, int row_ptr,
int lines_to_change, int bpp)
static void qtrle_decode_8bpp(QtrleContext *s, int row_ptr, int lines_to_change)
static void qtrle_decode_16bpp(QtrleContext *s, int row_ptr, int lines_to_change)
static void qtrle_decode_24bpp(QtrleContext *s, int row_ptr, int lines_to_change)
static void qtrle_decode_32bpp(QtrleContext *s, int row_ptr, int lines_to_change)
static av_cold int qtrle_decode_init(AVCodecContext *avctx)
static int qtrle_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int qtrle_decode_end(AVCodecContext *avctx)
AVCodec ff_qtrle_decoder = ;
