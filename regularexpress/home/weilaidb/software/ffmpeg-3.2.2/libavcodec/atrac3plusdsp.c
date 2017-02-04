const uint16_t ff_atrac3p_qu_to_spec_pos[33] = ;
const float ff_atrac3p_sf_tab[64] = ;
const float ff_atrac3p_mant_tab[8] = ;
#define ATRAC3P_MDCT_SIZE (ATRAC3P_SUBBAND_SAMPLES * 2)
ff_atrac3p_init_imdct
#define TWOPI (2 * M_PI)
DEQUANT_PHASE (((ph) & 0x1F) << 6)
DECLARE_ALIGNED[2048];
DECLARE_ALIGNED[256];
static float amp_sf_tab[64];
ff_atrac3p_init_wave_synth
waves_synth
ff_atrac3p_generate_tones
static const int subband_to_powgrp[ATRAC3P_SUBBANDS] = ;
static const float noise_tab[1024] = ;
static const float pwc_levs[16] = ;
static const int subband_to_qu[17] = ;
ff_atrac3p_power_compensation
ff_atrac3p_imdct
static const int mod23_lut[26] = ;
static const float ipqf_coeffs1[ATRAC3P_PQF_FIR_LEN][16] = ;
static const float ipqf_coeffs2[ATRAC3P_PQF_FIR_LEN][16] = ;
ff_atrac3p_ipqf
