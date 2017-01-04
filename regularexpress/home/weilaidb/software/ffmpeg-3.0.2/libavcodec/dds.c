#define DDPF_FOURCC    (1 <<  2)
#define DDPF_PALETTE   (1 <<  5)
#define DDPF_NORMALMAP (1 << 31)
enum DDSPostProc ;
enum DDSDXGIFormat ;
typedef struct DDSContext  DDSContext;
static int parse_pixel_format(AVCodecContext *avctx)
static int decompress_texture_thread(AVCodecContext *avctx, void *arg,
int slice, int thread_nb)
static void do_swizzle(AVFrame *frame, int x, int y)
static void run_postproc(AVCodecContext *avctx, AVFrame *frame)
static int dds_decode(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_dds_decoder = ;
