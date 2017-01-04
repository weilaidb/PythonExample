typedef struct JPEGLSContext  JPEGLSContext;
static inline void ls_encode_regular(JLSState *state, PutBitContext *pb, int Q,
int err)
static inline void ls_encode_runterm(JLSState *state, PutBitContext *pb,
int RItype, int err, int limit_add)
static inline void ls_encode_run(JLSState *state, PutBitContext *pb, int run,
int comp, int trail)
static inline void ls_encode_line(JLSState *state, PutBitContext *pb,
void *last, void *cur, int last2, int w,
int stride, int comp, int bits)
static void ls_store_lse(JLSState *state, PutBitContext *pb)
static int encode_picture_ls(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_init_ls(AVCodecContext *ctx)
#define OFFSET(x) offsetof(JPEGLSContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass jpegls_class = ;
AVCodec ff_jpegls_encoder = ;
