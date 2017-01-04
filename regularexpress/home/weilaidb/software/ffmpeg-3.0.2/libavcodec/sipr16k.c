static void lsf2lsp(const float *lsf, double *lsp)
static void dequant(float *out, const int *idx, const float * const cbs[])
static void lsf_decode_fp_16k(float* lsf_history, float* isp_new,
const int* parm, int ma_pred)
static int dec_delay3_1st(int index)
static int dec_delay3_2nd(int index, int pit_min, int pit_max,
int pitch_lag_prev)
static void postfilter(float *out_data, float* synth, float* iir_mem,
float* filt_mem[2], float* mem_preemph)
static void acelp_lp_decodef(float *lp_1st, float *lp_2nd,
const double *lsp_2nd, const double *lsp_prev)
static float acelp_decode_gain_codef(float gain_corr_factor, const float *fc_v,
float mr_energy, const float *quant_energy,
const float *ma_prediction_coeff,
int subframe_size, int ma_pred_order)
#define DIVIDE_BY_3(x) ((x) * 10923 >> 15)
void ff_sipr_decode_frame_16k(SiprContext *ctx, SiprParameters *params,
float *out_data)
av_cold void ff_sipr_init_16k(SiprContext *ctx)
