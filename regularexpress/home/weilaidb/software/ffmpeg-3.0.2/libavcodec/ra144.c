const int16_t ff_gain_val_tab[256][3] = ;
const uint8_t ff_gain_exp_tab[256] = ;
const int8_t ff_cb1_vects[128][40]=;
const int8_t ff_cb2_vects[128][40]=;
const uint16_t ff_cb1_base[128]=;
const uint16_t ff_cb2_base[128]=;
const int16_t ff_energy_tab[32]=;
static const int16_t lpc_refl_cb1[64]=;
static const int16_t lpc_refl_cb2[32]=;
static const int16_t lpc_refl_cb3[32]=;
static const int16_t lpc_refl_cb4[16]=;
static const int16_t lpc_refl_cb5[16]=;
static const int16_t lpc_refl_cb6[8]=;
static const int16_t lpc_refl_cb7[8]=;
static const int16_t lpc_refl_cb8[8]=;
static const int16_t lpc_refl_cb9[8]=;
static const int16_t lpc_refl_cb10[4]=;
const int16_t * const ff_lpc_refl_cb[10]=;
static void add_wav(int16_t *dest, int n, int skip_first, int *m,
const int16_t *s1, const int8_t *s2, const int8_t *s3)
void ff_copy_and_dup(int16_t *target, const int16_t *source, int offset)
int ff_eval_refl(int *refl, const int16_t *coefs, AVCodecContext *avctx)
void ff_eval_coefs(int *coefs, const int *refl)
void ff_int_to_int16(int16_t *out, const int *inp)
int ff_t_sqrt(unsigned int x)
unsigned int ff_rms(const int *data)
int ff_interp(RA144Context *ractx, int16_t *out, int a, int copyold, int energy)
unsigned int ff_rescale_rms(unsigned int rms, unsigned int energy)
int ff_irms(AudioDSPContext *adsp, const int16_t *data)
void ff_subblock_synthesis(RA144Context *ractx, const int16_t *lpc_coefs,
int cba_idx, int cb1_idx, int cb2_idx,
int gval, int gain)
