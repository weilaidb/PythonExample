av_cold void AAC_RENAME(ff_aac_sbr_init)(void)
static void sbr_turnoff(SpectralBandReplication *sbr)
av_cold void AAC_RENAME(ff_aac_sbr_ctx_init)(AACContext *ac, SpectralBandReplication *sbr)
av_cold void AAC_RENAME(ff_aac_sbr_ctx_close)(SpectralBandReplication *sbr)
static int qsort_comparison_function_int16(const void *a, const void *b)
static inline int in_table_int16(const int16_t *table, int last_el, int16_t needle)
static void sbr_make_f_tablelim(SpectralBandReplication *sbr)
{
int k;
if (sbr->bs_limiter_bands > 0)
static unsigned int read_sbr_header(SpectralBandReplication *sbr, GetBitContext *gb)
static int array_min_int16(const int16_t *array, int nel)
static int check_n_master(AVCodecContext *avctx, int n_master, int bs_xover_band)
static int sbr_make_f_master(AACContext *ac, SpectralBandReplication *sbr,
SpectrumParameters *spectrum)
static int sbr_hf_calc_npatches(AACContext *ac, SpectralBandReplication *sbr)
static int sbr_make_f_derived(AACContext *ac, SpectralBandReplication *sbr)
static av_always_inline void get_bits1_vector(GetBitContext *gb, uint8_t *vec,
int elements)
static const int8_t ceil_log2[] = ;
static int read_sbr_grid(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb, SBRData *ch_data)
static void copy_sbr_grid(SBRData *dst, const SBRData *src)
static void read_sbr_dtdf(SpectralBandReplication *sbr, GetBitContext *gb,
SBRData *ch_data)
static void read_sbr_invf(SpectralBandReplication *sbr, GetBitContext *gb,
SBRData *ch_data)
static int read_sbr_envelope(AACContext *ac, SpectralBandReplication *sbr, GetBitContext *gb,
SBRData *ch_data, int ch)
static int read_sbr_noise(AACContext *ac, SpectralBandReplication *sbr, GetBitContext *gb,
SBRData *ch_data, int ch)
static void read_sbr_extension(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb,
int bs_extension_id, int *num_bits_left)
static int read_sbr_single_channel_element(AACContext *ac,
SpectralBandReplication *sbr,
GetBitContext *gb)
static int read_sbr_channel_pair_element(AACContext *ac,
SpectralBandReplication *sbr,
GetBitContext *gb)
static unsigned int read_sbr_data(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb, int id_aac)
static void sbr_reset(AACContext *ac, SpectralBandReplication *sbr)
int AAC_RENAME(ff_decode_sbr_extension)(AACContext *ac, SpectralBandReplication *sbr,
GetBitContext *gb_host, int crc, int cnt, int id_aac)
#if USE_FIXED
static void sbr_qmf_analysis(AVFixedDSPContext *dsp, FFTContext *mdct,
static void sbr_qmf_analysis(AVFloatDSPContext *dsp, FFTContext *mdct,
SBRDSPContext *sbrdsp, const INTFLOAT *in, INTFLOAT *x,
INTFLOAT z[320], INTFLOAT W[2][32][32][2], int buf_idx)
static void sbr_qmf_synthesis(FFTContext *mdct,
#if USE_FIXED
SBRDSPContext *sbrdsp, AVFixedDSPContext *dsp,
SBRDSPContext *sbrdsp, AVFloatDSPContext *dsp,
INTFLOAT *out, INTFLOAT X[2][38][64],
INTFLOAT mdct_buf[2][64],
INTFLOAT *v0, int *v_off, const unsigned int div)
static int sbr_lf_gen(AACContext *ac, SpectralBandReplication *sbr,
INTFLOAT X_low[32][40][2], const INTFLOAT W[2][32][32][2],
int buf_idx)
static int sbr_hf_gen(AACContext *ac, SpectralBandReplication *sbr,
INTFLOAT X_high[64][40][2], const INTFLOAT X_low[32][40][2],
const INTFLOAT (*alpha0)[2], const INTFLOAT (*alpha1)[2],
const INTFLOAT bw_array[5], const uint8_t *t_env,
int bs_num_env)
static int sbr_x_gen(SpectralBandReplication *sbr, INTFLOAT X[2][38][64],
const INTFLOAT Y0[38][64][2], const INTFLOAT Y1[38][64][2],
const INTFLOAT X_low[32][40][2], int ch)
static int sbr_mapping(AACContext *ac, SpectralBandReplication *sbr,
SBRData *ch_data, int e_a[2])
static void sbr_env_estimate(AAC_FLOAT (*e_curr)[48], INTFLOAT X_high[64][40][2],
SpectralBandReplication *sbr, SBRData *ch_data)
void AAC_RENAME(ff_sbr_apply)(AACContext *ac, SpectralBandReplication *sbr, int id_aac,
INTFLOAT* L, INTFLOAT* R)
static void aacsbr_func_ptr_init(AACSBRContext *c)
