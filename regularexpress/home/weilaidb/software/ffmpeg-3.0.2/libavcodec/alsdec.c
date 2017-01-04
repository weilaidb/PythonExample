static const int8_t parcor_rice_table[3][20][2] = ;
static const int16_t parcor_scaled_values[] = ;
static const uint8_t ltp_gain_values [4][4] = ;
static const int16_t mcc_weightings[] = ;
static const uint8_t tail_code[16][6] = ;
enum RA_Flag ;
typedef struct ALSSpecificConfig  ALSSpecificConfig;
typedef struct ALSChannelData  ALSChannelData;
typedef struct ALSDecContext  ALSDecContext;
typedef struct ALSBlockData  ALSBlockData;
static av_cold void dprint_specific_config(ALSDecContext *ctx)
static av_cold int read_specific_config(ALSDecContext *ctx)
static int check_specific_config(ALSDecContext *ctx)
static void parse_bs_info(const uint32_t bs_info, unsigned int n,
unsigned int div, unsigned int **div_blocks,
unsigned int *num_blocks)
static int32_t decode_rice(GetBitContext *gb, unsigned int k)
static void parcor_to_lpc(unsigned int k, const int32_t *par, int32_t *cof)
static void get_block_sizes(ALSDecContext *ctx, unsigned int *div_blocks,
uint32_t *bs_info)
static int read_const_block_data(ALSDecContext *ctx, ALSBlockData *bd)
static void decode_const_block_data(ALSDecContext *ctx, ALSBlockData *bd)
static int read_var_block_data(ALSDecContext *ctx, ALSBlockData *bd)
static int decode_var_block_data(ALSDecContext *ctx, ALSBlockData *bd)
static int read_block(ALSDecContext *ctx, ALSBlockData *bd)
static int decode_block(ALSDecContext *ctx, ALSBlockData *bd)
static int read_decode_block(ALSDecContext *ctx, ALSBlockData *bd)
static void zero_remaining(unsigned int b, unsigned int b_max,
const unsigned int *div_blocks, int32_t *buf)
static int decode_blocks_ind(ALSDecContext *ctx, unsigned int ra_frame,
unsigned int c, const unsigned int *div_blocks,
unsigned int *js_blocks)
static int decode_blocks(ALSDecContext *ctx, unsigned int ra_frame,
unsigned int c, const unsigned int *div_blocks,
unsigned int *js_blocks)
static inline int als_weighting(GetBitContext *gb, int k, int off)
static int read_channel_data(ALSDecContext *ctx, ALSChannelData *cd, int c)
static int revert_channel_correlation(ALSDecContext *ctx, ALSBlockData *bd,
ALSChannelData **cd, int *reverted,
unsigned int offset, int c)
static int read_frame_data(ALSDecContext *ctx, unsigned int ra_frame)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame_ptr,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold void flush(AVCodecContext *avctx)
AVCodec ff_als_decoder = ;
