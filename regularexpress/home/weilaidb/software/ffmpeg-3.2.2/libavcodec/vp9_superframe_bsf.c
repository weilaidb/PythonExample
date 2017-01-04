#define MAX_CACHE 8
typedef struct VP9BSFContext  VP9BSFContext;
static void stats(const struct CachedBuf *in, int n_in,
unsigned *_max, unsigned *_sum)
static int merge_superframe(const struct CachedBuf *in, int n_in, AVPacket *out)
static int vp9_superframe_filter(AVBSFContext *ctx, AVPacket *out)
static void vp9_superframe_close(AVBSFContext *ctx)
static const enum AVCodecID codec_ids[] = ;
const AVBitStreamFilter ff_vp9_superframe_bsf = ;
