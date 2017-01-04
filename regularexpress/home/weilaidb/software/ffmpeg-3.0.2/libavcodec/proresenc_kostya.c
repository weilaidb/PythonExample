#define CFACTOR_Y422 2
#define CFACTOR_Y444 3
#define MAX_MBS_PER_SLICE 8
#define MAX_PLANES 4
enum ;
enum ;
static const uint8_t prores_quant_matrices[][64] = ;
#define NUM_MB_LIMITS 4
static const int prores_mb_limits[NUM_MB_LIMITS] = ;
static const struct prores_profile  prores_profile_info[5] = ;
#define TRELLIS_WIDTH 16
#define SCORE_LIMIT   INT_MAX / 2
struct TrellisNode ;
#define MAX_STORED_Q 16
typedef struct ProresThreadData  ProresThreadData;
typedef struct ProresContext  ProresContext;
static void get_slice_data(ProresContext *ctx, const uint16_t *src,
int linesize, int x, int y, int w, int h,
int16_t *blocks, uint16_t *emu_buf,
int mbs_per_slice, int blocks_per_mb, int is_chroma)
static void get_alpha_data(ProresContext *ctx, const uint16_t *src,
int linesize, int x, int y, int w, int h,
int16_t *blocks, int mbs_per_slice, int abits)
static inline void encode_vlc_codeword(PutBitContext *pb, unsigned codebook, int val)
#define GET_SIGN(x)  ((x) >> 31)
#define MAKE_CODE(x) (((x) << 1) ^ GET_SIGN(x))
static void encode_dcs(PutBitContext *pb, int16_t *blocks,
int blocks_per_slice, int scale)
static void encode_acs(PutBitContext *pb, int16_t *blocks,
int blocks_per_slice,
int plane_size_factor,
const uint8_t *scan, const int16_t *qmat)
static int encode_slice_plane(ProresContext *ctx, PutBitContext *pb,
const uint16_t *src, int linesize,
int mbs_per_slice, int16_t *blocks,
int blocks_per_mb, int plane_size_factor,
const int16_t *qmat)
static void put_alpha_diff(PutBitContext *pb, int cur, int prev, int abits)
static void put_alpha_run(PutBitContext *pb, int run)
static int encode_alpha_plane(ProresContext *ctx, PutBitContext *pb,
int mbs_per_slice, uint16_t *blocks,
int quant)
static int encode_slice(AVCodecContext *avctx, const AVFrame *pic,
PutBitContext *pb,
int sizes[4], int x, int y, int quant,
int mbs_per_slice)
static inline int estimate_vlc(unsigned codebook, int val)
static int estimate_dcs(int *error, int16_t *blocks, int blocks_per_slice,
int scale)
static int estimate_acs(int *error, int16_t *blocks, int blocks_per_slice,
int plane_size_factor,
const uint8_t *scan, const int16_t *qmat)
static int estimate_slice_plane(ProresContext *ctx, int *error, int plane,
const uint16_t *src, int linesize,
int mbs_per_slice,
int blocks_per_mb, int plane_size_factor,
const int16_t *qmat, ProresThreadData *td)
static int est_alpha_diff(int cur, int prev, int abits)
static int estimate_alpha_plane(ProresContext *ctx, int *error,
const uint16_t *src, int linesize,
int mbs_per_slice, int quant,
int16_t *blocks)
static int find_slice_quant(AVCodecContext *avctx,
int trellis_node, int x, int y, int mbs_per_slice,
ProresThreadData *td)
static int find_quant_thread(AVCodecContext *avctx, void *arg,
int jobnr, int threadnr)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
static av_cold int encode_close(AVCodecContext *avctx)
static void prores_fdct(FDCTDSPContext *fdsp, const uint16_t *src,
int linesize, int16_t *block)
static av_cold int encode_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(ProresContext, x)
#define VE     AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass proresenc_class = ;
AVCodec ff_prores_ks_encoder = ;
