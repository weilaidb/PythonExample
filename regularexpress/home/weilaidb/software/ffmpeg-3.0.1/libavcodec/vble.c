#define BITSTREAM_READER_LE
typedef struct VBLEContext  VBLEContext;
static int vble_unpack(VBLEContext *ctx, GetBitContext *gb)
static void vble_restore_plane(VBLEContext *ctx, AVFrame *pic,
GetBitContext *gb, int plane,
int offset, int width, int height)
static int vble_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int vble_decode_close(AVCodecContext *avctx)
static av_cold int vble_decode_init(AVCodecContext *avctx)
AVCodec ff_vble_decoder = ;
