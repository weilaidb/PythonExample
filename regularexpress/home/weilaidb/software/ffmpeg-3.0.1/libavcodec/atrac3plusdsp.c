const uint16_t ff_atrac3p_qu_to_spec_pos[33] = ;
const float ff_atrac3p_sf_tab[64] = ;
const float ff_atrac3p_mant_tab[8] = ;
#define ATRAC3P_MDCT_SIZE (ATRAC3P_SUBBAND_SAMPLES * 2)
av_cold void ff_atrac3p_init_imdct(AVCodecContext *avctx, FFTContext *mdct_ctx)
#define TWOPI (2 * M_PI)
#define DEQUANT_PHASE(ph) (((ph) & 0x1F) << 6)
static DECLARE_ALIGNED(32, float, sine_table)[2048];
static DECLARE_ALIGNED(32, float, hann_window)[256];
static float amp_sf_tab[64];
av_cold void ff_atrac3p_init_wave_synth(void)
static void waves_synth(Atrac3pWaveSynthParams *synth_param,
Atrac3pWavesData *waves_info,
Atrac3pWaveEnvelope *envelope,
AVFloatDSPContext *fdsp,
int invert_phase, int reg_offset, float *out)
void ff_atrac3p_generate_tones(Atrac3pChanUnitCtx *ch_unit, AVFloatDSPContext *fdsp,
int ch_num, int sb, float *out)
static const int subband_to_powgrp[ATRAC3P_SUBBANDS] = ;
static const float noise_tab[1024] = ;
static const float pwc_levs[16] = ;
static const int subband_to_qu[17] = ;
void ff_atrac3p_power_compensation(Atrac3pChanUnitCtx *ctx, int ch_index,
float *sp, int rng_index, int sb)
void ff_atrac3p_imdct(AVFloatDSPContext *fdsp, FFTContext *mdct_ctx, float *pIn,
float *pOut, int wind_id, int sb)
static const int mod23_lut[26] = ;
static const float ipqf_coeffs1[ATRAC3P_PQF_FIR_LEN][16] = ;
static const float ipqf_coeffs2[ATRAC3P_PQF_FIR_LEN][16] = ;
void ff_atrac3p_ipqf(FFTContext *dct_ctx, Atrac3pIPQFChannelCtx *hist,
const float *in, float *out)
