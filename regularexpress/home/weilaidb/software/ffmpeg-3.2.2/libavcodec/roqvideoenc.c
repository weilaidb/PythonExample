#define CHROMA_BIAS 1
#define MAX_CBS_4x4 256
#define MAX_CBS_2x2 256
#define ROQ_LAMBDA_SCALE ((uint64_t) FF_LAMBDA_SCALE)
static void unpack_roq_cell(roq_cell *cell, uint8_t u[4*3])
static void unpack_roq_qcell(uint8_t cb2[], roq_qcell *qcell, uint8_t u[4*4*3])
static void enlarge_roq_mb4(uint8_t base[3*16], uint8_t u[3*64])
static inline int square(int x)
static inline int eval_sse(const uint8_t *a, const uint8_t *b, int count)
static int block_sse(uint8_t * const *buf1, uint8_t * const *buf2, int x1, int y1,
int x2, int y2, const int *stride1, const int *stride2, int size)
static int eval_motion_dist(RoqContext *enc, int x, int y, motion_vect vect,
int size)
static inline int squared_diff_macroblock(uint8_t a[], uint8_t b[], int size)
typedef struct SubcelEvaluation  SubcelEvaluation;
typedef struct CelEvaluation  CelEvaluation;
typedef struct RoqCodebooks  RoqCodebooks;
typedef struct RoqTempData
RoqTempdata;
static int create_cel_evals(RoqContext *enc, RoqTempdata *tempData)
static void get_frame_mb(const AVFrame *frame, int x, int y, uint8_t mb[], int dim)
static int index_mb(uint8_t cluster[], uint8_t cb[], int numCB,
int *outIndex, int dim)
#define EVAL_MOTION(MOTION) \
do  while(0)
static void motion_search(RoqContext *enc, int blocksize)
static void gather_data_for_subcel(SubcelEvaluation *subcel, int x,
int y, RoqContext *enc, RoqTempdata *tempData)
static void gather_data_for_cel(CelEvaluation *cel, RoqContext *enc,
RoqTempdata *tempData)
static void remap_codebooks(RoqContext *enc, RoqTempdata *tempData)
static void write_codebooks(RoqContext *enc, RoqTempdata *tempData)
static inline uint8_t motion_arg(motion_vect mot)
typedef struct CodingSpool  CodingSpool;
static void write_typecode(CodingSpool *s, uint8_t type)
static void reconstruct_and_encode_image(RoqContext *enc, RoqTempdata *tempData, int w, int h, int numBlocks)
static inline void frame_block_to_cell(uint8_t *block, uint8_t * const *data,
int top, int left, const int *stride)
static void create_clusters(const AVFrame *frame, int w, int h, uint8_t *yuvClusters)
static int generate_codebook(RoqContext *enc, RoqTempdata *tempdata,
int *points, int inputCount, roq_cell *results,
int size, int cbsize)
static int generate_new_codebooks(RoqContext *enc, RoqTempdata *tempData)
static int roq_encode_video(RoqContext *enc)
static av_cold int roq_encode_end(AVCodecContext *avctx)
static av_cold int roq_encode_init(AVCodecContext *avctx)
static void roq_write_video_info_chunk(RoqContext *enc)
static int roq_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
#define OFFSET(x) offsetof(RoqContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass roq_class = ;
AVCodec ff_roq_encoder = ;
