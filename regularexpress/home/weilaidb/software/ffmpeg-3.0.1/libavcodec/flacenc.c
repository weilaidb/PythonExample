#define FLAC_SUBFRAME_CONSTANT  0
#define FLAC_SUBFRAME_VERBATIM  1
#define FLAC_SUBFRAME_FIXED     8
#define FLAC_SUBFRAME_LPC      32
#define MAX_FIXED_ORDER     4
#define MAX_PARTITION_ORDER 8
#define MAX_PARTITIONS     (1 << MAX_PARTITION_ORDER)
#define MAX_LPC_PRECISION  15
#define MAX_LPC_SHIFT      15
enum CodingMode ;
typedef struct CompressionOptions  CompressionOptions;
typedef struct RiceContext  RiceContext;
typedef struct FlacSubframe  FlacSubframe;
typedef struct FlacFrame  FlacFrame;
typedef struct FlacEncodeContext  FlacEncodeContext;
static void write_streaminfo(FlacEncodeContext *s, uint8_t *header)
static int select_blocksize(int samplerate, int block_time_ms)
static av_cold void dprint_compression_options(FlacEncodeContext *s)
static av_cold int flac_encode_init(AVCodecContext *avctx)
static void init_frame(FlacEncodeContext *s, int nb_samples)
static void copy_samples(FlacEncodeContext *s, const void *samples)
static uint64_t rice_count_exact(const int32_t *res, int n, int k)
static uint64_t subframe_count_exact(FlacEncodeContext *s, FlacSubframe *sub,
int pred_order)
#define rice_encode_count(sum, n, k) (((n)*((k)+1))+((sum-(n>>1))>>(k)))
static int find_optimal_param(uint64_t sum, int n, int max_param)
static int find_optimal_param_exact(uint64_t sums[32][MAX_PARTITIONS], int i, int max_param)
static uint64_t calc_optimal_rice_params(RiceContext *rc, int porder,
uint64_t sums[32][MAX_PARTITIONS],
int n, int pred_order, int max_param, int exact)
static void calc_sum_top(int pmax, int kmax, const uint32_t *data, int n, int pred_order,
uint64_t sums[32][MAX_PARTITIONS])
static void calc_sum_next(int level, uint64_t sums[32][MAX_PARTITIONS], int kmax)
static uint64_t calc_rice_params(RiceContext *rc,
uint32_t udata[FLAC_MAX_BLOCKSIZE],
uint64_t sums[32][MAX_PARTITIONS],
int pmin, int pmax,
const int32_t *data, int n, int pred_order, int exact)
static int get_max_p_order(int max_porder, int n, int order)
static uint64_t find_subframe_rice_params(FlacEncodeContext *s,
FlacSubframe *sub, int pred_order)
static void encode_residual_fixed(int32_t *res, const int32_t *smp, int n,
int order)
static int encode_residual_ch(FlacEncodeContext *s, int ch)
static int count_frame_header(FlacEncodeContext *s)
static int encode_frame(FlacEncodeContext *s)
static void remove_wasted_bits(FlacEncodeContext *s)
static int estimate_stereo_mode(const int32_t *left_ch, const int32_t *right_ch, int n,
int max_rice_param)
static void channel_decorrelation(FlacEncodeContext *s)
static void write_utf8(PutBitContext *pb, uint32_t val)
static void write_frame_header(FlacEncodeContext *s)
static void write_subframes(FlacEncodeContext *s)
static void write_frame_footer(FlacEncodeContext *s)
static int write_frame(FlacEncodeContext *s, AVPacket *avpkt)
static int update_md5_sum(FlacEncodeContext *s, const void *samples)
static int flac_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
{
FlacEncodeContext *s;
int frame_bytes, out_bytes, ret;
s = avctx->priv_data;
if (!frame)
static av_cold int flac_encode_close(AVCodecContext *avctx)
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass flac_encoder_class = ;
AVCodec ff_flac_encoder = ;
