typedef struct XFaceContext  XFaceContext;
static int all_same(char *bitmap, int w, int h)
static int all_black(char *bitmap, int w, int h)
static int all_white(char *bitmap, int w, int h)
typedef struct  ProbRangesQueue;
static inline int pq_push(ProbRangesQueue *pq, const ProbRange *p)
static void push_greys(ProbRangesQueue *pq, char *bitmap, int w, int h)
static void encode_block(char *bitmap, int w, int h, int level, ProbRangesQueue *pq)
static void push_integer(BigInt *b, const ProbRange *prange)
static int xface_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_xface_encoder = ;
