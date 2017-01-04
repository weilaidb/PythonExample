#define USE_FIXED 1
static VLC vlc_sbr[10];
static void aacsbr_func_ptr_init(AACSBRContext *c);
static const int CONST_LN2       = Q31(0.6931471806/256);
static const int CONST_RECIP_LN2 = Q31(0.7213475204);
static const int CONST_076923    = Q31(0.76923076923076923077f);
static const int fixed_log_table[10] =
;
static int fixed_log(int x)
static const int fixed_exp_table[7] =
;
static int fixed_exp(int x)
static void make_bands(int16_t* bands, int start, int stop, int num_bands)
static void sbr_dequant(SpectralBandReplication *sbr, int id_aac)
static void sbr_hf_inverse_filter(SBRDSPContext *dsp,
int (*alpha0)[2], int (*alpha1)[2],
const int X_low[32][40][2], int k0)
static void sbr_chirp(SpectralBandReplication *sbr, SBRData *ch_data)
static void sbr_gain_calc(AACContext *ac, SpectralBandReplication *sbr,
SBRData *ch_data, const int e_a[2])
static void sbr_hf_assemble(int Y1[38][64][2],
const int X_high[64][40][2],
SpectralBandReplication *sbr, SBRData *ch_data,
const int e_a[2])
