#define BITSTREAM_READER_LE
#define CNG_RANDOM_SEED 12345
static av_cold int g723_1_decode_init(AVCodecContext *avctx)
static int unpack_bitstream(G723_1_Context *p, const uint8_t *buf,
int buf_size)
static int16_t square_root(unsigned val)
static void gen_fcb_excitation(int16_t *vector, G723_1_Subframe *subfrm,
enum Rate cur_rate, int pitch_lag, int index)
static int autocorr_max(const int16_t *buf, int offset, int *ccr_max,
int pitch_lag, int length, int dir)
static void comp_ppf_gains(int lag, PPFParam *ppf, enum Rate cur_rate,
int tgt_eng, int ccr, int res_eng)
static void comp_ppf_coeff(G723_1_Context *p, int offset, int pitch_lag,
PPFParam *ppf, enum Rate cur_rate)
static int comp_interp_index(G723_1_Context *p, int pitch_lag,
int *exc_eng, int *scale)
static void residual_interp(int16_t *buf, int16_t *out, int lag,
int gain, int *rseed)
#define iir_filter(fir_coef, iir_coef, src, dest, width)\
static void gain_scale(G723_1_Context *p, int16_t * buf, int energy)
static void formant_postfilter(G723_1_Context *p, int16_t *lpc,
int16_t *buf, int16_t *dst)
static int sid_gain_to_lsp_index(int gain)
static inline int cng_rand(int *state, int base)
static int estimate_sid_gain(G723_1_Context *p)
static void generate_noise(G723_1_Context *p)
static int g723_1_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define OFFSET(x) offsetof(G723_1_Context, x)
#define AD     AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass g723_1dec_class = ;
AVCodec ff_g723_1_decoder = ;
