typedef struct DXVContext  DXVContext;
static int decompress_texture_thread(AVCodecContext *avctx, void *arg,
int slice, int thread_nb)
#define CHECKPOINT(x)                                                         \
do  while(0)
static int dxv_decompress_dxt1(AVCodecContext *avctx)
static int dxv_decompress_dxt5(AVCodecContext *avctx)
static int dxv_decompress_lzf(AVCodecContext *avctx)
static int dxv_decompress_raw(AVCodecContext *avctx)
static int dxv_decode(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static int dxv_init(AVCodecContext *avctx)
static int dxv_close(AVCodecContext *avctx)
AVCodec ff_dxv_decoder = ;
