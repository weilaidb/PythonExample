#define ENVELOPE_ADJUSTMENT_OFFSET 2
#if HAVE_INLINE_ASM
static int sbr_lf_gen_mips(AACContext *ac, SpectralBandReplication *sbr,
float X_low[32][40][2], const float W[2][32][32][2],
int buf_idx)
static int sbr_x_gen_mips(SpectralBandReplication *sbr, float X[2][38][64],
const float Y0[38][64][2], const float Y1[38][64][2],
const float X_low[32][40][2], int ch)
#if HAVE_MIPSFPU
static void sbr_hf_assemble_mips(float Y1[38][64][2],
const float X_high[64][40][2],
SpectralBandReplication *sbr, SBRData *ch_data,
const int e_a[2])
static void sbr_hf_inverse_filter_mips(SBRDSPContext *dsp,
float (*alpha0)[2], float (*alpha1)[2],
const float X_low[32][40][2], int k0)
void ff_aacsbr_func_ptr_init_mips(AACSBRContext *c)
