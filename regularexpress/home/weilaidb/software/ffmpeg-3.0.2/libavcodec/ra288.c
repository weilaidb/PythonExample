#define BITSTREAM_READER_LE
#define MAX_BACKWARD_FILTER_ORDER  36
#define MAX_BACKWARD_FILTER_LEN    40
#define MAX_BACKWARD_FILTER_NONREC 35
#define RA288_BLOCK_SIZE        5
#define RA288_BLOCKS_PER_FRAME 32
typedef struct RA288Context  RA288Context;
static av_cold int ra288_decode_close(AVCodecContext *avctx)
static av_cold int ra288_decode_init(AVCodecContext *avctx)
static void convolve(float *tgt, const float *src, int len, int n)
static void decode(RA288Context *ractx, float gain, int cb_coef)
static void do_hybrid_window(RA288Context *ractx,
int order, int n, int non_rec, float *out,
float *hist, float *out2, const float *window)
static void backward_filter(RA288Context *ractx,
float *hist, float *rec, const float *window,
float *lpc, const float *tab,
int order, int n, int non_rec, int move_size)
static int ra288_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_ra_288_decoder = ;
