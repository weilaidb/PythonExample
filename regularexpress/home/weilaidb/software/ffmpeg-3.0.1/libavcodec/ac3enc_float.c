#define CONFIG_AC3ENC_FLOAT 1
#define AC3ENC_TYPE AC3ENC_TYPE_AC3
static const AVClass ac3enc_class = ;
av_cold void ff_ac3_float_mdct_end(AC3EncodeContext *s)
av_cold int ff_ac3_float_mdct_init(AC3EncodeContext *s)
static int normalize_samples(AC3EncodeContext *s)
static void scale_coefficients(AC3EncodeContext *s)
static void sum_square_butterfly(AC3EncodeContext *s, float sum[4],
const float *coef0, const float *coef1,
int len)
static void clip_coefficients(AudioDSPContext *adsp, float *coef,
unsigned int len)
static CoefType calc_cpl_coord(CoefSumType energy_ch, CoefSumType energy_cpl)
av_cold int ff_ac3_float_encode_init(AVCodecContext *avctx)
AVCodec ff_ac3_encoder = ;
