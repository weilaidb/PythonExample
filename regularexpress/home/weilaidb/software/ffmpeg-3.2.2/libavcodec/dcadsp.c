static void decode_hf_c(int32_t **dst,
const int32_t *vq_index,
const int8_t hf_vq[1024][32],
int32_t scale_factors[32][2],
ptrdiff_t sb_start, ptrdiff_t sb_end,
ptrdiff_t ofs, ptrdiff_t len)
static void decode_joint_c(int32_t **dst, int32_t **src,
const int32_t *scale_factors,
ptrdiff_t sb_start, ptrdiff_t sb_end,
ptrdiff_t ofs, ptrdiff_t len)
static void lfe_fir_float_c(float *pcm_samples, int32_t *lfe_samples,
const float *filter_coeff, ptrdiff_t npcmblocks,
int dec_select)
static void lfe_fir0_float_c(float *pcm_samples, int32_t *lfe_samples,
const float *filter_coeff, ptrdiff_t npcmblocks)
static void lfe_fir1_float_c(float *pcm_samples, int32_t *lfe_samples,
const float *filter_coeff, ptrdiff_t npcmblocks)
static void lfe_x96_float_c(float *dst, const float *src,
float *hist, ptrdiff_t len)
static void sub_qmf32_float_c(SynthFilterContext *synth,
FFTContext *imdct,
float *pcm_samples,
int32_t **subband_samples_lo,
int32_t **subband_samples_hi,
float *hist1, int *offset, float *hist2,
const float *filter_coeff, ptrdiff_t npcmblocks,
float scale)
static void sub_qmf64_float_c(SynthFilterContext *synth,
FFTContext *imdct,
float *pcm_samples,
int32_t **subband_samples_lo,
int32_t **subband_samples_hi,
float *hist1, int *offset, float *hist2,
const float *filter_coeff, ptrdiff_t npcmblocks,
float scale)
static void lfe_fir_fixed_c(int32_t *pcm_samples, int32_t *lfe_samples,
const int32_t *filter_coeff, ptrdiff_t npcmblocks)
static void lfe_x96_fixed_c(int32_t *dst, const int32_t *src,
int32_t *hist, ptrdiff_t len)
static void sub_qmf32_fixed_c(SynthFilterContext *synth,
DCADCTContext *imdct,
int32_t *pcm_samples,
int32_t **subband_samples_lo,
int32_t **subband_samples_hi,
int32_t *hist1, int *offset, int32_t *hist2,
const int32_t *filter_coeff, ptrdiff_t npcmblocks)
static void sub_qmf64_fixed_c(SynthFilterContext *synth,
DCADCTContext *imdct,
int32_t *pcm_samples,
int32_t **subband_samples_lo,
int32_t **subband_samples_hi,
int32_t *hist1, int *offset, int32_t *hist2,
const int32_t *filter_coeff, ptrdiff_t npcmblocks)
static void decor_c(int32_t *dst, const int32_t *src, int coeff, ptrdiff_t len)
static void dmix_sub_xch_c(int32_t *dst1, int32_t *dst2,
const int32_t *src, ptrdiff_t len)
static void dmix_sub_c(int32_t *dst, const int32_t *src, int coeff, ptrdiff_t len)
static void dmix_add_c(int32_t *dst, const int32_t *src, int coeff, ptrdiff_t len)
static void dmix_scale_c(int32_t *dst, int scale, ptrdiff_t len)
static void dmix_scale_inv_c(int32_t *dst, int scale_inv, ptrdiff_t len)
static void filter0(int32_t *dst, const int32_t *src, int32_t coeff, ptrdiff_t len)
static void filter1(int32_t *dst, const int32_t *src, int32_t coeff, ptrdiff_t len)
static void assemble_freq_bands_c(int32_t *dst, int32_t *src0, int32_t *src1,
const int32_t *coeff, ptrdiff_t len)
static void lbr_bank_c(float output[32][4], float **input,
const float *coeff, ptrdiff_t ofs, ptrdiff_t len)
static void lfe_iir_c(float *output, const float *input,
const float iir[5][4], float hist[5][2],
ptrdiff_t factor)
av_cold void ff_dcadsp_init(DCADSPContext *s)
