#define KMVC_KEYFRAME 0x80
#define KMVC_PALETTE  0x40
#define KMVC_METHOD   0x0F
#define MAX_PALSIZE   256
typedef struct KmvcContext  KmvcContext;
typedef struct BitBuf  BitBuf;
#define BLK(data, x, y)  data[av_clip((x) + (y) * 320, 0, 320 * 200 -1)]
#define kmvc_init_getbits(bb, g)  bb.bits = 7; bb.bitbuf = bytestream2_get_byte(g);
#define kmvc_getbit(bb, g, res)
static int kmvc_decode_intra_8x8(KmvcContext * ctx, int w, int h)
static int kmvc_decode_inter_8x8(KmvcContext * ctx, int w, int h)
static int decode_frame(AVCodecContext * avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext * avctx)
AVCodec ff_kmvc_decoder = ;
