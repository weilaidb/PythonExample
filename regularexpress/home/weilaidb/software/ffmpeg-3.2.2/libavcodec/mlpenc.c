#define MAJOR_HEADER_INTERVAL 16
#define MLP_MIN_LPC_ORDER      1
#define MLP_MAX_LPC_ORDER      8
#define MLP_MIN_LPC_SHIFT      8
#define MLP_MAX_LPC_SHIFT     15
typedef struct  RestartHeader;
typedef struct  MatrixParams;
enum ParamFlags ;
typedef struct  DecodingParams;
typedef struct BestOffset  BestOffset;
#define HUFF_OFFSET_MIN    -16384
#define HUFF_OFFSET_MAX     16383
#define NUM_CODEBOOKS       4
typedef struct  MLPEncodeContext;
static ChannelParams   restart_channel_params[MAX_CHANNELS];
static DecodingParams  restart_decoding_params[MAX_SUBSTREAMS];
static BestOffset      restart_best_offset[NUM_CODEBOOKS] = ;
#define SYNC_MAJOR      0xf8726f
#define MAJOR_SYNC_INFO_SIGNATURE   0xB752
#define SYNC_MLP        0xbb
#define SYNC_TRUEHD     0xba
#define FLAGS_DVDA      0x4000
#define FLAGS_CONST     0x8000
#define SUBSTREAM_INFO_MAX_2_CHAN   0x01
#define SUBSTREAM_INFO_HIGH_RATE    0x02
#define SUBSTREAM_INFO_ALWAYS_SET   0x04
#define SUBSTREAM_INFO_2_SUBSTREAMS 0x08
static int compare_filter_params(const ChannelParams *prev_cp, const ChannelParams *cp, int filter)
static int compare_matrix_params(MLPEncodeContext *ctx, const MatrixParams *prev, const MatrixParams *mp)
static int compare_decoding_params(MLPEncodeContext *ctx)
static void copy_filter_params(ChannelParams *dst_cp, ChannelParams *src_cp, int filter)
static void copy_matrix_params(MatrixParams *dst, MatrixParams *src)
static void copy_restart_frame_params(MLPEncodeContext *ctx,
unsigned int substr)
static void clear_decoding_params(MLPEncodeContext *ctx, DecodingParams decoding_params[MAX_SUBSTREAMS])
static void clear_channel_params(MLPEncodeContext *ctx, ChannelParams channel_params[MAX_CHANNELS])
static void default_decoding_params(MLPEncodeContext *ctx,
DecodingParams decoding_params[MAX_SUBSTREAMS])
static int inline number_sbits(int number)
enum InputBitDepth ;
static int mlp_peak_bitrate(int peak_bitrate, int sample_rate)
static av_cold int mlp_encode_init(AVCodecContext *avctx)
static void write_major_sync(MLPEncodeContext *ctx, uint8_t *buf, int buf_size)
static void write_restart_header(MLPEncodeContext *ctx, PutBitContext *pb)
static void write_matrix_params(MLPEncodeContext *ctx, PutBitContext *pb)
static void write_filter_params(MLPEncodeContext *ctx, PutBitContext *pb,
unsigned int channel, unsigned int filter)
static void write_decoding_params(MLPEncodeContext *ctx, PutBitContext *pb,
int params_changed)
static void write_block_data(MLPEncodeContext *ctx, PutBitContext *pb)
static uint8_t *write_substrs(MLPEncodeContext *ctx, uint8_t *buf, int buf_size,
int restart_frame,
uint16_t substream_data_len[MAX_SUBSTREAMS])
static void write_frame_headers(MLPEncodeContext *ctx, uint8_t *frame_header,
uint8_t *substream_headers, unsigned int length,
int restart_frame,
uint16_t substream_data_len[MAX_SUBSTREAMS])
static unsigned int write_access_unit(MLPEncodeContext *ctx, uint8_t *buf,
int buf_size, int restart_frame)
static void input_data_internal(MLPEncodeContext *ctx, const uint8_t *samples,
int is24)
static void input_data(MLPEncodeContext *ctx, void *samples)
static void input_to_sample_buffer(MLPEncodeContext *ctx)
static int number_trailing_zeroes(int32_t sample)
static void determine_quant_step_size(MLPEncodeContext *ctx)
static void code_filter_coeffs(MLPEncodeContext *ctx, FilterParams *fp, int32_t *fcoeff)
static void set_filter_params(MLPEncodeContext *ctx,
unsigned int channel, unsigned int filter,
int clear_filter)
static void determine_filters(MLPEncodeContext *ctx)
enum MLPChMode ;
static enum MLPChMode estimate_stereo_mode(MLPEncodeContext *ctx)
static void code_matrix_coeffs(MLPEncodeContext *ctx, unsigned int mat)
static void lossless_matrix_coeffs(MLPEncodeContext *ctx)
static const int codebook_extremes[3][2] = ;
static void no_codebook_bits_offset(MLPEncodeContext *ctx,
unsigned int channel, int16_t offset,
int32_t min, int32_t max,
BestOffset *bo)
static void no_codebook_bits(MLPEncodeContext *ctx,
unsigned int channel,
int32_t min, int32_t max,
BestOffset *bo)
static inline void codebook_bits_offset(MLPEncodeContext *ctx,
unsigned int channel, int codebook,
int32_t sample_min, int32_t sample_max,
int16_t offset, BestOffset *bo)
static inline void codebook_bits(MLPEncodeContext *ctx,
unsigned int channel, int codebook,
int offset, int32_t min, int32_t max,
BestOffset *bo, int direction)
static void determine_bits(MLPEncodeContext *ctx)
#define SAMPLE_MAX(bitdepth) ((1 << (bitdepth - 1)) - 1)
#define SAMPLE_MIN(bitdepth) (~SAMPLE_MAX(bitdepth))
#define MSB_MASK(bits)  (-1u << bits)
static int apply_filter(MLPEncodeContext *ctx, unsigned int channel)
static void apply_filters(MLPEncodeContext *ctx)
static void generate_2_noise_channels(MLPEncodeContext *ctx)
static void rematrix_channels(MLPEncodeContext *ctx)
typedef struct  PathCounter;
static const char *path_counter_codebook[] = ;
#define ZERO_PATH               '0'
#define CODEBOOK_CHANGE_BITS    21
static void clear_path_counter(PathCounter *path_counter)
static int compare_best_offset(BestOffset *prev, BestOffset *cur)
static int best_codebook_path_cost(MLPEncodeContext *ctx, unsigned int channel,
PathCounter *src, int cur_codebook)
static void set_best_codebook(MLPEncodeContext *ctx)
static void set_major_params(MLPEncodeContext *ctx)
static void analyze_sample_buffer(MLPEncodeContext *ctx)
static void process_major_frame(MLPEncodeContext *ctx)
static int mlp_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet)
static av_cold int mlp_encode_close(AVCodecContext *avctx)
#if CONFIG_MLP_ENCODER
AVCodec ff_mlp_encoder = ;
#if CONFIG_TRUEHD_ENCODER
AVCodec ff_truehd_encoder = ;
