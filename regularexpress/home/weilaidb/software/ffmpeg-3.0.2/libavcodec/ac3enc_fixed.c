#define FFT_FLOAT 0
#undef CONFIG_AC3ENC_FLOAT
#define AC3ENC_TYPE AC3ENC_TYPE_AC3_FIXED
static const AVClass ac3enc_class = ;
av_cold void AC3_NAME(mdct_end)(AC3EncodeContext *s)
av_cold int AC3_NAME(mdct_init)(AC3EncodeContext *s)
static int normalize_samples(AC3EncodeContext *s)
static void scale_coefficients(AC3EncodeContext *s)
static void sum_square_butterfly(AC3EncodeContext *s, int64_t sum[4],
const int32_t *coef0, const int32_t *coef1,
int len)
static void clip_coefficients(AudioDSPContext *adsp, int32_t *coef,
unsigned int len)
static CoefType calc_cpl_coord(CoefSumType energy_ch, CoefSumType energy_cpl)
static av_cold int ac3_fixed_encode_init(AVCodecContext *avctx)
AVCodec ff_ac3_fixed_encoder = ;
