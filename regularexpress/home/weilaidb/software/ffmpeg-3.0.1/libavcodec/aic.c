#define AIC_HDR_SIZE    24
#define AIC_BAND_COEFFS (64 + 32 + 192 + 96)
enum AICBands ;
static const int aic_num_band_coeffs[NUM_BANDS] = ;
static const int aic_band_off[NUM_BANDS] = ;
static const uint8_t aic_quant_matrix[64] = ;
static const uint8_t aic_y_scan[64] = ;
static const uint8_t aic_y_ext_scan[192] = ;
static const uint8_t aic_c_scan[64] = ;
static const uint8_t aic_c_ext_scan[192] = ;
static const uint8_t * const aic_scan[NUM_BANDS] = ;
typedef struct AICContext  AICContext;
static int aic_decode_header(AICContext *ctx, const uint8_t *src, int size)
#define GET_CODE(val, type, add_bits)                         \
do  while (0)
static int aic_decode_coeffs(GetBitContext *gb, int16_t *dst,
int band, int slice_width, int force_chroma)
static void recombine_block(int16_t *dst, const uint8_t *scan,
int16_t **base, int16_t **ext)
static void recombine_block_il(int16_t *dst, const uint8_t *scan,
int16_t **base, int16_t **ext,
int block_no)
static void unquant_block(int16_t *block, int q, uint8_t *quant_matrix)
static int aic_decode_slice(AICContext *ctx, int mb_x, int mb_y,
const uint8_t *src, int src_size)
static int aic_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int aic_decode_init(AVCodecContext *avctx)
static av_cold int aic_decode_close(AVCodecContext *avctx)
AVCodec ff_aic_decoder = ;
