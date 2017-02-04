#define USE_FIXED 1
static VLC vlc_sbr[10];
aacsbr_func_ptr_init;
static const int CONST_LN2       = Q31(0.6931471806/256);
static const int CONST_RECIP_LN2 = Q31(0.7213475204);
static const int CONST_076923    = Q31(0.76923076923076923077f);
static const int fixed_log_table[10] =
;
fixed_log
static const int fixed_exp_table[7] =
;
fixed_exp
make_bands
sbr_dequant
sbr_hf_inverse_filter[2], int (*alpha1)[2],
const int X_low[32][40][2], int k0)
sbr_chirp
sbr_gain_calc
sbr_hf_assemble
