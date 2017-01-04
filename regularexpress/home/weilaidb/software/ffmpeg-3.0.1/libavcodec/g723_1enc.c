#define BITSTREAM_WRITER_LE
static av_cold int g723_1_encode_init(AVCodecContext *avctx)
static void highpass_filter(int16_t *buf, int16_t *fir, int *iir)
static void comp_autocorr(int16_t *buf, int16_t *autocorr)
static void levinson_durbin(int16_t *lpc, int16_t *autocorr, int16_t error)
static void comp_lpc_coeff(int16_t *buf, int16_t *lpc)
static void lpc2lsp(int16_t *lpc, int16_t *prev_lsp, int16_t *lsp)
#define get_index(num, offset, size)                                          \
static void lsp_quantize(uint8_t *lsp_index, int16_t *lsp, int16_t *prev_lsp)
static void iir_filter(int16_t *fir_coef, int16_t *iir_coef,
int16_t *src, int16_t *dest)
static void perceptual_filter(G723_1_Context *p, int16_t *flt_coef,
int16_t *unq_lpc, int16_t *buf)
static int estimate_pitch(int16_t *buf, int start)
static void comp_harmonic_coeff(int16_t *buf, int16_t pitch_lag, HFParam *hf)
static void harmonic_filter(HFParam *hf, const int16_t *src, int16_t *dest)
static void harmonic_noise_sub(HFParam *hf, const int16_t *src, int16_t *dest)
static void synth_percept_filter(int16_t *qnt_lpc, int16_t *perf_lpc,
int16_t *perf_fir, int16_t *perf_iir,
const int16_t *src, int16_t *dest, int scale)
static void acb_search(G723_1_Context *p, int16_t *residual,
int16_t *impulse_resp, const int16_t *buf,
int index)
static void sub_acb_contrib(const int16_t *residual, const int16_t *impulse_resp,
int16_t *buf)
static void get_fcb_param(FCBParam *optim, int16_t *impulse_resp,
int16_t *buf, int pulse_cnt, int pitch_lag)
static void pack_fcb_param(G723_1_Subframe *subfrm, FCBParam *optim,
int16_t *buf, int pulse_cnt)
static void fcb_search(G723_1_Context *p, int16_t *impulse_resp,
int16_t *buf, int index)
static int pack_bitstream(G723_1_Context *p, AVPacket *avpkt)
static int g723_1_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_g723_1_encoder = ;
