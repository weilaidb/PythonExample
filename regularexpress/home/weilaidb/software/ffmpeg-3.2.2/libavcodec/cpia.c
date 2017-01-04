#define FRAME_HEADER_SIZE 64
#define MAGIC_0         0x19
#define MAGIC_1         0x68
#define SUBSAMPLE_420      0
#define SUBSAMPLE_422      1
#define YUVORDER_YUYV      0
#define YUVORDER_UYVY      1
#define NOT_COMPRESSED     0
#define COMPRESSED         1
#define NO_DECIMATION      0
#define DECIMATION_ENAB    1
#define EOL             0xfd
#define EOI             0xff
typedef struct  CpiaContext;
static int cpia_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket* avpkt)
static av_cold int cpia_decode_init(AVCodecContext *avctx)
static av_cold int cpia_decode_end(AVCodecContext *avctx)
AVCodec ff_cpia_decoder = ;
