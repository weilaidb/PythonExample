#define MAX_HUFF_CODES 16
typedef struct HuffCode  HuffCode;
typedef struct MotionPixelsContext  MotionPixelsContext;
static av_cold int mp_decode_end(AVCodecContext *avctx)
static av_cold int mp_decode_init(AVCodecContext *avctx)
static void mp_read_changes_map(MotionPixelsContext *mp, GetBitContext *gb, int count, int bits_len, int read_color)
static int mp_get_code(MotionPixelsContext *mp, GetBitContext *gb, int size, int code)
static int mp_read_codes_table(MotionPixelsContext *mp, GetBitContext *gb)
static int mp_gradient(MotionPixelsContext *mp, int component, int v)
static YuvPixel mp_get_yuv_from_rgb(MotionPixelsContext *mp, int x, int y)
static void mp_set_rgb_from_yuv(MotionPixelsContext *mp, int x, int y, const YuvPixel *p)
static int mp_get_vlc(MotionPixelsContext *mp, GetBitContext *gb)
static void mp_decode_line(MotionPixelsContext *mp, GetBitContext *gb, int y)
static void mp_decode_frame_helper(MotionPixelsContext *mp, GetBitContext *gb)
static int mp_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_motionpixels_decoder = ;
