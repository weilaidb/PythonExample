#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void ff_acelp_interpolatef_mips(float *out, const float *in,
const float *filter_coeffs, int precision,
int frac_pos, int filter_length, int length)
static void ff_acelp_apply_order_2_transfer_function_mips(float *out, const float *in,
const float zero_coeffs[2],
const float pole_coeffs[2],
float gain, float mem[2], int n)
void ff_acelp_filter_init_mips(ACELPFContext *c)
