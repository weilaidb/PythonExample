int ff_g723_1_scale_vector(int16_t *dst, const int16_t *vector, int length)
int ff_g723_1_normalize_bits(int num, int width)
int ff_g723_1_dot_product(const int16_t *a, const int16_t *b, int length)
void ff_g723_1_get_residual(int16_t *residual, int16_t *prev_excitation,
int lag)
void ff_g723_1_gen_dirac_train(int16_t *buf, int pitch_lag)
void ff_g723_1_gen_acb_excitation(int16_t *vector, int16_t *prev_excitation,
int pitch_lag, G723_1_Subframe *subfrm,
enum Rate cur_rate)
static void lsp2lpc(int16_t *lpc)
void ff_g723_1_lsp_interpolate(int16_t *lpc, int16_t *cur_lsp,
int16_t *prev_lsp)
void ff_g723_1_inverse_quant(int16_t *cur_lsp, int16_t *prev_lsp,
uint8_t *lsp_index, int bad_frame)
