#define BITSTREAM_READER_LE
#define MAX_SUBFRAME_COUNT   5
typedef struct SiprModeParam  SiprModeParam;
static const SiprModeParam modes[MODE_COUNT] = ;
const float ff_pow_0_5[] = ;
static void dequant(float *out, const int *idx, const float * const cbs[])
static void lsf_decode_fp(float *lsfnew, float *lsf_history,
const SiprParameters *parm)
static void pitch_sharpening(int pitch_lag_int, float beta,
float *fixed_vector)
static void decode_parameters(SiprParameters* parms, GetBitContext *pgb,
const SiprModeParam *p)
static void sipr_decode_lp(float *lsfnew, const float *lsfold, float *Az,
int num_subfr)
static void eval_ir(const float *Az, int pitch_lag, float *freq,
float pitch_sharp_factor)
static void convolute_with_sparse(float *out, const AMRFixed *pulses,
const float *shape, int length)
static void postfilter_5k0(SiprContext *ctx, const float *lpc, float *samples)
static void decode_fixed_sparse(AMRFixed *fixed_sparse, const int16_t *pulses,
SiprMode mode, int low_gain)
static void decode_frame(SiprContext *ctx, SiprParameters *params,
float *out_data)
static av_cold int sipr_decoder_init(AVCodecContext * avctx)
static int sipr_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_sipr_decoder = ;
